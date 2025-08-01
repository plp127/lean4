/-
Copyright (c) 2020 Marc Huisinga. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Marc Huisinga, Wojciech Nawrocki
-/
module

prelude
public import Init.System.IO
public import Std.Sync.Channel

public import Lean.Environment

public import Lean.Data.Lsp
public import Lean.Data.Json.FromToJson.Basic

public import Lean.LoadDynlib
public import Lean.Language.Lean

public import Lean.Server.Utils
public import Lean.Server.AsyncList
public import Lean.Server.References

public import Lean.Server.FileWorker.Utils
public import Lean.Server.FileWorker.RequestHandling
public import Lean.Server.FileWorker.WidgetRequests
public import Lean.Server.FileWorker.SetupFile
public import Lean.Server.Rpc.Basic
public import Lean.Widget.InteractiveDiagnostic
public import Lean.Server.Completion.ImportCompletion
public import Lean.Server.CodeActions.UnknownIdentifier

public section

/-!
For general server architecture, see `README.md`. For details of IPC communication, see `Watchdog.lean`.
This module implements per-file worker processes.

File processing and requests+notifications against a file should be concurrent for two reasons:
- By the LSP standard, requests should be cancellable.
- Since Lean allows arbitrary user code to be executed during elaboration via the tactic framework,
  elaboration can be extremely slow and even not halt in some cases. Users should be able to
  work with the file while this is happening, e.g. make new changes to the file or send requests.

To achieve these goals, elaboration is executed in a chain of tasks, where each task corresponds to
the elaboration of one command. When the elaboration of one command is done, the next task is spawned.
On didChange notifications, we search for the task in which the change occurred. If we stumble across
a task that has not yet finished before finding the task we're looking for, we terminate it
and start the elaboration there, otherwise we start the elaboration at the task where the change occurred.

Requests iterate over tasks until they find the command that they need to answer the request.
In order to not block the main thread, this is done in a request task.
If a task that the request task waits for is terminated, a change occurred somewhere before the
command that the request is looking for and the request sends a "content changed" error.
-/

namespace Lean.Server.FileWorker

open Lsp
open IO
open Snapshots
open JsonRpc

structure RefreshInfo where
  lastRefreshTimestamp      : Nat
  successiveRefreshAttempts : Nat

structure PartialHandlerInfo where
  refreshMethod            : String
  requestsInFlight         : Nat
  pendingRefreshInfo?      : Option RefreshInfo
  deriving Inhabited

open Widget in

structure WorkerContext where
  /-- Synchronized output channel for LSP messages. Notifications for outdated versions are
    discarded on read. -/
  chanOut                  : Std.Channel JsonRpc.Message
  /--
  Latest document version received by the client, used for filtering out notifications from
  previous versions.
  -/
  maxDocVersionRef         : IO.Ref Int
  freshRequestIdRef        : IO.Ref Int
  /--
  Diagnostics that are included in every single `textDocument/publishDiagnostics` notification.
  -/
  stickyDiagnosticsRef     : IO.Ref (Array InteractiveDiagnostic)
  partialHandlersRef       : IO.Ref (Std.TreeMap String PartialHandlerInfo)
  pendingServerRequestsRef : IO.Ref (Std.TreeMap RequestID (IO.Promise (ServerRequestResponse Json)))
  hLog                     : FS.Stream
  initParams               : InitializeParams
  processor                : Parser.InputContext → BaseIO Lean.Language.Lean.InitialSnapshot
  clientHasWidgets         : Bool
  /--
  Options defined on the worker cmdline (i.e. not including options from `setup-file`), used for
  context-free tasks such as editing delay.
  -/
  cmdlineOpts              : Options

def WorkerContext.modifyGetPartialHandler (ctx : WorkerContext) (method : String)
    (f : PartialHandlerInfo → α × PartialHandlerInfo) : BaseIO α :=
  ctx.partialHandlersRef.modifyGet fun partialHandlers => Id.run do
    let h := partialHandlers.get! method
    let (r, h) := f h
    (r, partialHandlers.insert method h)

def WorkerContext.modifyPartialHandler (ctx : WorkerContext) (method : String)
    (f : PartialHandlerInfo → PartialHandlerInfo) : BaseIO Unit :=
  ctx.partialHandlersRef.modify fun partialHandlers => Id.run do
  let some h := partialHandlers.get? method
    | return partialHandlers
  partialHandlers.insert method <| f h

def WorkerContext.updateRequestsInFlight (ctx : WorkerContext) (method : String) (f : Nat → Nat) : BaseIO Unit :=
    ctx.modifyPartialHandler method fun h => { h with requestsInFlight := f h.requestsInFlight }

def WorkerContext.initPendingServerRequest
    responseType [FromJson responseType] [Inhabited responseType]
    (ctx : WorkerContext) (id : RequestID) :
    BaseIO (ServerTask (ServerRequestResponse responseType)) := do
  let responsePromise ← IO.Promise.new
  ctx.pendingServerRequestsRef.modify (·.insert id responsePromise)
  let responseTask := responsePromise.result!.asServerTask
  let responseTask := responseTask.mapCheap fun
    | .success response =>
      match fromJson? response with
      | .ok response   => .success response
      | .error message => .failure .invalidParams message
    | .failure code message => .failure code message
  return responseTask

def WorkerContext.resolveServerRequestResponse (ctx : WorkerContext) (id : RequestID)
    (response : ServerRequestResponse Json) : BaseIO Unit := do
  let responsePromise? ← ctx.pendingServerRequestsRef.modifyGet fun pendingServerRequests =>
    let responsePromise? := pendingServerRequests.get? id
    let pendingServerRequests := pendingServerRequests.erase id
    (responsePromise?, pendingServerRequests)
  let some responsePromise := responsePromise?
    | return
  responsePromise.resolve response

/-! # Asynchronous snapshot elaboration -/

section Elab
  -- Placed here instead of Lean.Server.Utils because of an import loop
  private def mkIleanInfoNotification (method : String) (m : DocumentMeta)
      (trees : Array Elab.InfoTree) : BaseIO (JsonRpc.Notification Lsp.LeanIleanInfoParams) := do
    let references ← findModuleRefs m.text trees (localVars := true) |>.toLspModuleRefs
    let param := { version := m.version, references }
    return { method, param }

  private def mkInitialIleanInfoUpdateNotification (m : DocumentMeta)
      (directImports : Array ImportInfo) : JsonRpc.Notification Lsp.LeanILeanHeaderInfoParams :=
    { method := "$/lean/ileanHeaderInfo", param := { version := m.version, directImports } }

  private def mkIleanInfoUpdateNotification : DocumentMeta → Array Elab.InfoTree →
      BaseIO (JsonRpc.Notification Lsp.LeanIleanInfoParams) :=
    mkIleanInfoNotification "$/lean/ileanInfoUpdate"

  private def mkIleanInfoFinalNotification : DocumentMeta → Array Elab.InfoTree →
      BaseIO (JsonRpc.Notification Lsp.LeanIleanInfoParams) :=
    mkIleanInfoNotification "$/lean/ileanInfoFinal"

  /-- Yields a `$/lean/importClosure` notification. -/
  private def mkImportClosureNotification (importClosure : Array DocumentUri)
      : JsonRpc.Notification Lsp.LeanImportClosureParams := {
    method := "$/lean/importClosure",
    param := { importClosure : LeanImportClosureParams }
  }

  /-- State of `reportSnapshots`. -/
  private structure ReportSnapshotsState where
    /-- Whether we have waited for a snapshot to finish at least once (see debouncing below). -/
    hasBlocked := false
    /-- All info trees encountered so far. -/
    allInfoTrees : Array Elab.InfoTree := #[]
    /-- New info trees encountered since we last sent a .ilean update notification. -/
    newInfoTrees : Array Elab.InfoTree := #[]
    /-- Whether we encountered any snapshot with `Snapshot.isFatal`. -/
    hasFatal := false
  deriving Inhabited

  register_builtin_option server.reportDelayMs : Nat := {
    defValue := 200
    group := "server"
    descr := "(server) time in milliseconds to wait before reporting progress and diagnostics on \
      document edit in order to reduce flickering

This option can only be set on the command line, not in the lakefile or via `set_option`."
  }

  /--
  Type of state stored in `Snapshot.Diagnostics.cacheRef?`.

  See also section "Communication" in Lean/Server/README.md.
  -/
  structure MemorizedInteractiveDiagnostics where
    diags : Array Widget.InteractiveDiagnostic
  deriving TypeName

  /--
  Sends a `textDocument/publishDiagnostics` notification to the client that contains the diagnostics
  in `ctx.stickyDiagnosticsRef` and `doc.diagnosticsRef`.
  -/
  private def publishDiagnostics (ctx : WorkerContext) (doc : EditableDocumentCore)
      : BaseIO Unit := do
    let stickyInteractiveDiagnostics ← ctx.stickyDiagnosticsRef.get
    let docInteractiveDiagnostics ← doc.diagnosticsRef.get
    let diagnostics :=
      stickyInteractiveDiagnostics ++ docInteractiveDiagnostics
      |>.map (·.toDiagnostic)
    let notification := mkPublishDiagnosticsNotification doc.meta diagnostics
    ctx.chanOut.sync.send notification

  open Language in
  /--
    Reports status of a snapshot tree incrementally to the user: progress,
    diagnostics, .ilean reference information.

    See also section "Communication" in Lean/Server/README.md.

    Debouncing: we only report information
    1. after first waiting for `reportDelayMs`, to give trivial tasks a chance to finish
    2. when first blocking, i.e. not before skipping over any unchanged snapshots and such trivial
       tasks
    3. afterwards, each time new information is found in a snapshot
    4. at the very end, if we never blocked (e.g. emptying a file should make
       sure to empty diagnostics as well eventually) -/
  private partial def reportSnapshots (ctx : WorkerContext) (doc : EditableDocumentCore)
      (cancelTk : CancelToken) : BaseIO (ServerTask Unit) :=
    ServerTask.BaseIO.asTask do
      IO.sleep (server.reportDelayMs.get ctx.cmdlineOpts).toUInt32 -- "Debouncing 1."
      let (_, st) ← handleTasks #[.finished none <| toSnapshotTree doc.initSnap] |>.run {}
      if (← cancelTk.isSet) then
        return ()
      -- callback at the end of reporting
      if st.hasFatal then
        ctx.chanOut.send <| mkFileProgressAtPosNotification doc.meta 0 .fatalError
      else
        ctx.chanOut.send <| mkFileProgressDoneNotification doc.meta
      unless st.hasBlocked do  -- "Debouncing 4."
        publishDiagnostics ctx doc
      -- This will overwrite existing ilean info for the file, in case something
      -- went wrong during the incremental updates.
      ctx.chanOut.sync.send (← mkIleanInfoFinalNotification doc.meta st.allInfoTrees)
      return ()
  where
    /--
    Given an array of possibly-unfinished tasks, handles them, possibly after waiting for one of
    them to finish.
    -/
    handleTasks (ts : Array (SnapshotTask SnapshotTree)) : StateT ReportSnapshotsState BaseIO Unit := do
      if (← cancelTk.isSet) then
        return ()
      let ts ← ts.flatMapM handleFinished
      -- all `ts` are now (likely) in-progress, report them
      sendFileProgress ts
      -- check again whether this has changed before committing to waiting
      if (← ts.anyM (IO.hasFinished ·.task)) then
        handleTasks ts
      else if h : ts.size > 0 then
        if !(← get).hasBlocked then  -- "Debouncing 2."
          publishDiagnostics ctx doc
          modify fun st => { st with hasBlocked := true }
        -- wait for at least one task to finish; there is a race condition here where a task may
        -- have finished between the previous check and this line but we accept the progress
        -- notifications being temporarily out of date in this case
        let _ ← IO.waitAny (ts.map (·.task) |>.toList)
          (by simp only [Array.toList_map, List.length_map, Array.length_toList, gt_iff_lt, h])
        handleTasks ts

    /-- Recursively handles finished tasks and replaces them with their unfinished children. -/
    handleFinished (t : SnapshotTask SnapshotTree) :
        StateT ReportSnapshotsState BaseIO (Array (SnapshotTask SnapshotTree)) := do
      if (← IO.hasFinished t.task) then
        handleNode t.task.get
        -- limit children's reported range to that of the parent, if any, to avoid strange
        -- non-monotonic progress updates; replace missing children's ranges with parent's
        let ts := t.task.get.children.map (fun t' => { t' with reportingRange? :=
          match t.reportingRange?, t'.reportingRange? with
          | some r, some r' =>
            let start := max r.start r'.start
            let stop := min r.stop r'.stop
            -- ensure `stop ≥ start`, lest we end up with negative ranges if `r` and `r'` are
            -- disjoint
            let stop := max start stop
            some { start, stop }
          | r?,     r?'     => r?' <|> r? })
        ts.flatMapM handleFinished
      else
        return #[t]

    /-- Handles information of a single now-finished snapshot. -/
    handleNode (node : SnapshotTree) : StateT ReportSnapshotsState BaseIO Unit := do
      if node.element.diagnostics.msgLog.hasUnreported then
        let diags ←
          if let some memorized ← node.element.diagnostics.interactiveDiagsRef?.bindM fun ref => do
              return (← ref.get).bind (·.get? MemorizedInteractiveDiagnostics) then
            pure memorized.diags
          else
            let mut msgs := node.element.diagnostics.msgLog.toArray
            if ! ctx.initParams.capabilities.silentDiagnosticSupport then
              msgs := msgs.filter (! ·.isSilent)
            let diags ← msgs.mapM
              (Widget.msgToInteractiveDiagnostic doc.meta.text · ctx.clientHasWidgets)
            if let some cacheRef := node.element.diagnostics.interactiveDiagsRef? then
              cacheRef.set <| some <| .mk { diags : MemorizedInteractiveDiagnostics }
            pure diags
        doc.diagnosticsRef.modify (· ++ diags)
        if (← get).hasBlocked then
          publishDiagnostics ctx doc

      modify fun st => { st with hasFatal := st.hasFatal || node.element.isFatal }

      if let some itree := node.element.infoTree? then
        let mut newInfoTrees := (← get).newInfoTrees.push itree
        if (← get).hasBlocked then
          ctx.chanOut.sync.send (← mkIleanInfoUpdateNotification doc.meta newInfoTrees)
          newInfoTrees := #[]
        modify fun st => { st with newInfoTrees, allInfoTrees := st.allInfoTrees.push itree }

    /-- Reports given tasks' ranges, merging overlapping ones. -/
    sendFileProgress (tasks : Array (SnapshotTask SnapshotTree)) : StateT ReportSnapshotsState BaseIO Unit := do
      let ranges := tasks.filterMap (·.reportingRange?)
      let ranges := ranges.qsort (·.start < ·.start)
      let ranges := ranges.foldl (init := #[]) fun rs r => match rs[rs.size - 1]? with
        | some last =>
          if last.stop < r.start then
            rs.push r
          else
            rs.pop.push { last with stop := max last.stop r.stop }
        | none => rs.push r
      let ranges := ranges.map (·.toLspRange doc.meta.text)
      let notifs := ranges.map ({ range := ·, kind := .processing })
      ctx.chanOut.sync.send <| mkFileProgressNotification doc.meta notifs

end Elab

structure PendingRequest where
  requestTask : ServerTask (Except IO.Error Unit)
  cancelTk    : RequestCancellationToken

-- Pending requests are tracked so they can be canceled
abbrev PendingRequestMap := Std.TreeMap RequestID PendingRequest

structure AvailableImportsCache where
  availableImports       : ImportCompletion.AvailableImports
  lastRequestTimestampMs : Nat

structure WorkerState where
  doc                : EditableDocument
  /-- Token flagged for aborting `doc.reporter` when a new document version comes in. -/
  reporterCancelTk   : CancelToken
  importCachingTask? : Option (ServerTask (Except Error AvailableImportsCache))
  pendingRequests    : PendingRequestMap
  /-- A map of RPC session IDs. We allow asynchronous elab tasks and request handlers
  to modify sessions. A single `Ref` ensures atomic transactions. -/
  rpcSessions        : Std.TreeMap UInt64 (IO.Ref RpcSession)

abbrev WorkerM := ReaderT WorkerContext <| StateRefT WorkerState IO

/-- Makes sure we load imports at most once per process as they cannot be unloaded. -/
private builtin_initialize importsLoadedRef : IO.Ref Bool ← IO.mkRef false

open Language Lean in
/--
Callback from Lean language processor after parsing imports that requests necessary information from
Lake for processing imports.
-/
def setupImports
    (doc         : DocumentMeta)
    (cmdlineOpts : Options)
    (chanOut     : Std.Channel JsonRpc.Message)
    (stx         : Elab.HeaderSyntax)
    : Language.ProcessingT IO (Except Language.Lean.HeaderProcessedSnapshot SetupImportsResult) := do
  let importsAlreadyLoaded ← importsLoadedRef.modifyGet ((·, true))
  if importsAlreadyLoaded then
    -- As we never unload imports in the server, we should not run the code below twice in the
    -- same process and instead ask the watchdog to restart the worker
    IO.sleep 200  -- give user time to make further edits before restart
    unless (← IO.checkCanceled) do
      IO.Process.exit 2  -- signal restart request to watchdog
    -- should not be visible to user as task is already canceled
    return .error { diagnostics := .empty, result? := none, metaSnap := default }

  let header := stx.toModuleHeader
  chanOut.sync.send <| mkInitialIleanInfoUpdateNotification doc <| collectImports stx
  let fileSetupResult ← setupFile doc header fun stderrLine => do
    let progressDiagnostic := {
      range      := ⟨⟨0, 0⟩, ⟨1, 0⟩⟩
      -- make progress visible anywhere in the file
      fullRange? := some ⟨⟨0, 0⟩, doc.text.utf8PosToLspPos doc.text.source.endPos⟩
      severity?  := DiagnosticSeverity.information
      message    := stderrLine
    }
    chanOut.sync.send <| mkPublishDiagnosticsNotification doc #[progressDiagnostic]
  -- clear progress notifications in the end
  chanOut.sync.send <| mkPublishDiagnosticsNotification doc #[]
  match fileSetupResult.kind with
  | .importsOutOfDate =>
    return .error {
      diagnostics := (← Language.diagnosticsOfHeaderError
        "Imports are out of date and must be rebuilt; \
          use the \"Restart File\" command in your editor.")
      result? := none
      metaSnap := default
    }
  | .error msg =>
    return .error {
      diagnostics := (← diagnosticsOfHeaderError msg)
      result? := none
      metaSnap := default
    }
  | _ => pure ()

  let setup := fileSetupResult.setup

  -- override cmdline options with file options
  let opts := cmdlineOpts.mergeBy (fun _ _ fileOpt => fileOpt) setup.options.toOptions

  -- default to async elaboration; see also `Elab.async` docs
  let opts := Elab.async.setIfNotSet opts true

  let opts := Elab.inServer.set opts true

  return .ok {
    mainModuleName := doc.mod
    isModule := header.isModule
    imports := header.imports
    opts
    importArts := setup.importArts
    plugins := setup.plugins
  }

/- Worker initialization sequence. -/
section Initialization
  def initializeWorker (doc : DocumentMeta) (o e : FS.Stream) (initParams : InitializeParams) (opts : Options)
      : IO (WorkerContext × WorkerState) := do
    let clientHasWidgets := initParams.initializationOptions?.bind (·.hasWidgets?) |>.getD false
    let maxDocVersionRef ← IO.mkRef 0
    let freshRequestIdRef ← IO.mkRef (0 : Int)
    let stickyDiagnosticsRef ← IO.mkRef ∅
    let pendingServerRequestsRef ← IO.mkRef ∅
    let chanOut ← mkLspOutputChannel maxDocVersionRef
    let timestamp ← IO.monoMsNow
    let partialHandlersRef ← IO.mkRef <| Std.TreeMap.ofArray (cmp := compare) <|
      (← partialLspRequestHandlerMethods).map fun (method, refreshMethod, _) =>
        (method, {
          refreshMethod
          requestsInFlight := 0
          -- Emit a refresh request after a file worker restart.
          pendingRefreshInfo? := some { lastRefreshTimestamp := timestamp, successiveRefreshAttempts := 0 }
        })
    let processor := Language.Lean.process (setupImports doc opts chanOut)
    let processor ← Language.mkIncrementalProcessor processor
    let initSnap ← processor doc.mkInputContext
    let _ ← ServerTask.IO.asTask do
      let importClosure := getImportClosure? initSnap
      let importClosure ← importClosure.filterMapM (documentUriFromModule? ·)
      chanOut.send <| mkImportClosureNotification importClosure
    let ctx := {
      chanOut
      hLog := e
      initParams
      processor
      clientHasWidgets
      partialHandlersRef
      pendingServerRequestsRef
      maxDocVersionRef
      freshRequestIdRef
      cmdlineOpts := opts
      stickyDiagnosticsRef
    }
    let doc : EditableDocumentCore := {
      «meta» := doc, initSnap
      diagnosticsRef := (← IO.mkRef ∅)
    }
    let reporterCancelTk ← CancelToken.new
    let reporter ← reportSnapshots ctx doc reporterCancelTk
    return (ctx, {
      doc := { doc with reporter }
      reporterCancelTk
      pendingRequests    := Std.TreeMap.empty
      rpcSessions        := Std.TreeMap.empty
      importCachingTask? := none
    })
  where
    /-- Creates an LSP message output channel along with a reader that sends out read messages on
        the output FS stream after discarding outdated notifications. This is the only component of
        the worker with access to the output stream, so we can synchronize messages from parallel
        elaboration tasks here. -/
    mkLspOutputChannel maxDocVersion : IO (Std.Channel JsonRpc.Message) := do
      let chanOut ← Std.Channel.new
      let _ ← chanOut.forAsync (prio := .dedicated) fun msg => do
        -- discard outdated notifications; note that in contrast to responses, notifications can
        -- always be silently discarded
        let version? : Option Int := do match msg with
          | .notification "textDocument/publishDiagnostics" (some params) =>
            let params : PublishDiagnosticsParams ← fromJson? (toJson params) |>.toOption
            params.version?
          | .notification "$/lean/fileProgress" (some params) =>
            let params : LeanFileProgressParams ← fromJson? (toJson params) |>.toOption
            params.textDocument.version?
          | .notification "$/lean/ileanInfoUpdate" (some params)
          | .notification "$/lean/ileanInfoFinal" (some params) =>
            let params : LeanIleanInfoParams ← fromJson? (toJson params) |>.toOption
            some params.version
          | _ => none
        if let some version := version? then
          if version < (← maxDocVersion.get) then
            return

          -- note that because of `server.reportDelayMs`, we cannot simply set `maxDocVersion` here
          -- as that would allow outdated messages to be reported until the delay is over
        o.writeLspMessage msg |>.catchExceptions (fun _ => pure ())
      return chanOut

    getImportClosure? (snap : Language.Lean.InitialSnapshot) : Array Name := Id.run do
      let some snap := snap.result?
        | return #[]
      let some snap ← snap.processedSnap.get.result?
        | return #[]
      let importClosure := snap.cmdState.env.allImportedModuleNames
      return importClosure

end Initialization

section ServerRequests
  def sendServerRequest
      paramType [ToJson paramType] responseType [FromJson responseType] [Inhabited responseType]
      (ctx    : WorkerContext)
      (method : String)
      (param  : paramType)
      : BaseIO (ServerTask (ServerRequestResponse responseType)) := do
    let freshRequestId ← ctx.freshRequestIdRef.modifyGet fun freshRequestId =>
      (freshRequestId, freshRequestId + 1)
    let responseTask ← ctx.initPendingServerRequest responseType freshRequestId
    let r : JsonRpc.Request paramType := ⟨freshRequestId, method, param⟩
    ctx.chanOut.sync.send r
    return responseTask

  def sendUntypedServerRequest
      (ctx    : WorkerContext)
      (method : String)
      (param  : Json)
      : BaseIO (ServerTask (ServerRequestResponse Json)) := do
    sendServerRequest Json Json ctx method param

end ServerRequests

section Updates
  def updatePendingRequests (map : PendingRequestMap → PendingRequestMap) : WorkerM Unit := do
    modify fun st => { st with pendingRequests := map st.pendingRequests }

  /-- Given the new document, updates editable doc state. -/
  def updateDocument (doc : DocumentMeta) : WorkerM Unit := do
    (← get).reporterCancelTk.set
    let ctx ← read
    let initSnap ← ctx.processor doc.mkInputContext
    let doc : EditableDocumentCore := {
      «meta» := doc, initSnap
      diagnosticsRef := (← IO.mkRef ∅)
    }
    let reporterCancelTk ← CancelToken.new
    let reporter ← reportSnapshots ctx doc reporterCancelTk
    modify fun st => { st with doc := { doc with reporter }, reporterCancelTk }
    -- we assume version updates are monotonous and that we are on the main thread
    ctx.maxDocVersionRef.set doc.meta.version
end Updates

/- Notifications are handled in the main thread. They may change global worker state
such as the current file contents. -/
section NotificationHandling
  def handleDidChange (p : DidChangeTextDocumentParams) : WorkerM Unit := do
    let docId := p.textDocument
    let changes := p.contentChanges
    let ctx ← read
    let st ← get
    let oldDoc := (←get).doc
    let cancelTk ← RequestCancellationToken.new
    let newVersion := docId.version?.getD 0
    let rc : RequestContext := {
      rpcSessions := st.rpcSessions
      doc := oldDoc
      cancelTk
      hLog := ctx.hLog
      initParams := ctx.initParams
      serverRequestEmitter := sendUntypedServerRequest ctx
    }
    RequestM.runInIO (handleOnDidChange p) rc
    if ¬ changes.isEmpty then
      let newDocText := foldDocumentChanges changes oldDoc.meta.text
      updateDocument { oldDoc.meta with
        version := newVersion
        text := newDocText
      }
      for (_, r) in st.pendingRequests do
        r.cancelTk.cancelByEdit

  def handleCancelRequest (p : CancelParams) : WorkerM Unit := do
    let st ← get
    let some r := st.pendingRequests.get? p.id
      | return
    r.cancelTk.cancelByCancelRequest
    set <| { st with pendingRequests := st.pendingRequests.erase p.id }

  /--
  Received from the watchdog when a dependency of this file is detected as being stale.
  Issues a sticky diagnostic to the client that it should run "Restart File".
  -/
  def handleStaleDependency (_ : LeanStaleDependencyParams) : WorkerM Unit := do
    let ctx ← read
    let s ← get
    let text := s.doc.meta.text
    let importOutOfDataMessage := .text s!"Imports are out of date and should be rebuilt; \
      use the \"Restart File\" command in your editor."
    let diagnostic := {
      range      := ⟨⟨0, 0⟩, ⟨1, 0⟩⟩
      fullRange? := some ⟨⟨0, 0⟩, text.utf8PosToLspPos text.source.endPos⟩
      severity?  := DiagnosticSeverity.information
      message := importOutOfDataMessage
    }
    ctx.stickyDiagnosticsRef.modify fun stickyDiagnostics =>
      let stickyDiagnostics := stickyDiagnostics.filter
        (·.message.stripTags != importOutOfDataMessage.stripTags)
      stickyDiagnostics.push diagnostic
    publishDiagnostics ctx s.doc.toEditableDocumentCore

def handleRpcRelease (p : Lsp.RpcReleaseParams) : WorkerM Unit := do
  -- NOTE(WN): when the worker restarts e.g. due to changed imports, we may receive `rpc/release`
  -- for the previous RPC session. This is fine, just ignore.
  if let some seshRef := (← get).rpcSessions.get? p.sessionId then
    let monoMsNow ← IO.monoMsNow
    let discardRefs : StateM RpcObjectStore Unit := do
      for ref in p.refs do
        discard do rpcReleaseRef ref
    seshRef.modify fun st =>
      let st := st.keptAlive monoMsNow
      let ((), objects) := discardRefs st.objects
      { st with objects }

def handleRpcKeepAlive (p : Lsp.RpcKeepAliveParams) : WorkerM Unit := do
  match (← get).rpcSessions.get? p.sessionId with
  | none => return
  | some seshRef =>
    seshRef.modify (·.keptAlive (← IO.monoMsNow))

end NotificationHandling

/-! Requests here are handled synchronously rather than in the asynchronous `RequestM`. -/
section RequestHandling

def handleRpcConnect (_ : RpcConnectParams) : WorkerM RpcConnected := do
  let (newId, newSesh) ← RpcSession.new
  let newSeshRef ← IO.mkRef newSesh
  modify fun st => { st with rpcSessions := st.rpcSessions.insert newId newSeshRef }
  return { sessionId := newId }

end RequestHandling

section MessageHandling
  def parseParams (paramType : Type) [FromJson paramType] (params : Json) : WorkerM paramType :=
    match fromJson? params with
    | Except.ok parsed => pure parsed
    | Except.error inner => throwServerError s!"Got param with wrong structure: {params.compress}\n{inner}"

  def handleNotification (method : String) (params : Json) : WorkerM Unit := do
    let handle := fun paramType [FromJson paramType] (handler : paramType → WorkerM Unit) =>
      parseParams paramType params >>= handler
    match method with
    | "textDocument/didChange" => handle DidChangeTextDocumentParams handleDidChange
    | "$/cancelRequest"        => handle CancelParams handleCancelRequest
    | "$/lean/staleDependency" => handle Lsp.LeanStaleDependencyParams handleStaleDependency
    | "$/lean/rpc/release"     => handle RpcReleaseParams handleRpcRelease
    | "$/lean/rpc/keepAlive"   => handle RpcKeepAliveParams handleRpcKeepAlive
    | _                        => throwServerError s!"Got unsupported notification method: {method}"

  def queueRequest (id : RequestID) (r : PendingRequest)
      : WorkerM Unit := do
    updatePendingRequests (·.insert id r)

  def handleImportCompletionRequest (id : RequestID) (params : CompletionParams)
      : WorkerM (ServerTask (Except Error AvailableImportsCache)) := do
    let ctx ← read
    let st ← get
    let text := st.doc.meta.text

    match st.importCachingTask? with
    | none => ServerTask.IO.asTask do
      let availableImports ← ImportCompletion.collectAvailableImports
      let lastRequestTimestampMs ← IO.monoMsNow
      let completions := ImportCompletion.find text ⟨st.doc.initSnap.stx⟩ params availableImports
      ctx.chanOut.sync.send <| .response id (toJson completions)
      pure { availableImports, lastRequestTimestampMs : AvailableImportsCache }

    | some task => ServerTask.IO.mapTaskCostly (t := task) fun (result : Except Error AvailableImportsCache) => do
      let mut ⟨availableImports, lastRequestTimestampMs⟩ ← IO.ofExcept result
      let timestampNowMs ← IO.monoMsNow
      if timestampNowMs - lastRequestTimestampMs >= 10000 then
        availableImports ← ImportCompletion.collectAvailableImports
      lastRequestTimestampMs := timestampNowMs
      let completions := ImportCompletion.find text ⟨st.doc.initSnap.stx⟩ params availableImports
      ctx.chanOut.sync.send <| .response id (toJson completions)
      pure { availableImports, lastRequestTimestampMs : AvailableImportsCache }

  def handleStatefulPreRequestSpecialCases (id : RequestID) (method : String) (params : Json) : WorkerM Bool := do
    let ctx ← read
    let st ← get
    try
      match method with
      -- needs access to `WorkerState.rpcSessions`
      | "$/lean/rpc/connect" =>
        let ps ← parseParams RpcConnectParams params
        let resp ← handleRpcConnect ps
        ctx.chanOut.sync.send <| .response id (toJson resp)
        return true
      | "textDocument/completion" =>
        let params ← parseParams CompletionParams params
        -- Must not wait on import processing snapshot
        if ! ImportCompletion.isImportCompletionRequest st.doc.meta.text ⟨st.doc.initSnap.stx⟩ params then
          return false
        let importCachingTask ← handleImportCompletionRequest id params
        set { st with importCachingTask? := some importCachingTask }
        return true
      | _ =>
        return false
    catch e =>
      ctx.chanOut.sync.send <| .responseError id .internalError (toString e) none
      return true

  open Widget RequestM Language in
  def handleGetInteractiveDiagnosticsRequest
      (ctx : WorkerContext)
      (params : GetInteractiveDiagnosticsParams)
      : RequestM (Array InteractiveDiagnostic) := do
    let doc ← readDoc
    -- NOTE: always uses latest document (which is the only one we can retrieve diagnostics for);
    -- any race should be temporary as the client should re-request interactive diagnostics when
    -- they receive the non-interactive diagnostics for the new document
    let stickyDiags ← ctx.stickyDiagnosticsRef.get
    let diags ← doc.diagnosticsRef.get
    -- NOTE: does not wait for `lineRange?` to be fully elaborated, which would be problematic with
    -- fine-grained incremental reporting anyway; instead, the client is obligated to resend the
    -- request when the non-interactive diagnostics of this range have changed
    return (stickyDiags ++ diags).filter fun diag =>
      let r := diag.fullRange
      let diagStartLine := r.start.line
      let diagEndLine   :=
        if r.end.character == 0 then
          r.end.line
        else
          r.end.line + 1
      params.lineRange?.all fun ⟨s, e⟩ =>
        -- does [s,e) intersect [diagStartLine,diagEndLine)?
        s ≤ diagStartLine ∧ diagStartLine < e ∨
        diagStartLine ≤ s ∧ s < diagEndLine

  def handlePreRequestSpecialCases? (ctx : WorkerContext) (st : WorkerState)
      (id : RequestID) (method : String) (params : Json)
      : RequestM (Option (RequestTask (LspResponse Json))) := do
    match method with
    | "$/lean/rpc/call" =>
      let params ← RequestM.parseRequestParams Lsp.RpcCallParams params
      if params.method != `Lean.Widget.getInteractiveDiagnostics then
        return none
      let some seshRef := st.rpcSessions.get? params.sessionId
        | throw RequestError.rpcNeedsReconnect
      let params ← RequestM.parseRequestParams Widget.GetInteractiveDiagnosticsParams params.params
      let resp ← handleGetInteractiveDiagnosticsRequest ctx params
      let resp ← seshRef.modifyGet fun st =>
        rpcEncode resp st.objects |>.map (·) ({st with objects := ·})
      return some <| .pure { response := resp, isComplete := true }
    | "codeAction/resolve" =>
      let params ← RequestM.parseRequestParams CodeAction params
      let some data := params.data?
        | throw (RequestError.invalidParams "Expected a data field on CodeAction.")
      let data ← RequestM.parseRequestParams CodeActionResolveData data
      if data.providerName != importAllUnknownIdentifiersProvider then
        return none
      return some <| ← RequestM.asTask do
        let unknownIdentifierRanges ← waitAllUnknownIdentifierRanges st.doc
        if unknownIdentifierRanges.isEmpty then
          return { response := toJson params, isComplete := true }
        let action? ← handleResolveImportAllUnknownIdentifiersCodeAction? id params unknownIdentifierRanges
        let action := action?.getD params
        return { response := toJson action, isComplete := true }
    | _ =>
      return none

  def handlePostRequestSpecialCases (id : RequestID) (method : String) (params : Json)
      (task : RequestTask (LspResponse Json)) : RequestM (RequestTask (LspResponse Json)) := do
    let doc ← RequestM.readDoc
    match method with
    | "textDocument/codeAction" =>
      let .ok (params : CodeActionParams) := fromJson? params
        | return task
      RequestM.mapRequestTaskCostly task fun r => do
        let isSourceAction := params.context.only?.any fun only =>
            only.contains "source" || only.contains "source.organizeImports"
        if isSourceAction then
          let unknownIdentifierRanges ← waitAllUnknownIdentifierRanges doc
          if unknownIdentifierRanges.isEmpty then
            return r
          let .ok (codeActions : Array CodeAction) := fromJson? r.response
            | return r
          return { r with response := toJson <| codeActions.push <| importAllUnknownIdentifiersCodeAction params "source.organizeImports" }
        else
          let requestedRange := doc.meta.text.lspRangeToUtf8Range params.range
          let unknownIdentifierRanges ← waitUnknownIdentifierRanges doc requestedRange
          if unknownIdentifierRanges.isEmpty then
            return r
          let .ok (codeActions : Array CodeAction) := fromJson? r.response
            | return r
          RequestM.checkCancelled
          -- Since computing the unknown identifier code actions is *really* expensive,
          -- we only do it when the user has stopped typing for a second.
          IO.sleep 1000
          RequestM.checkCancelled
          let unknownIdentifierCodeActions ← handleUnknownIdentifierCodeAction id params requestedRange
          return { r with response := toJson <| codeActions ++ unknownIdentifierCodeActions }
    | _ =>
      return task

  def emitRequestResponse
      (requestTask? : Except RequestError (RequestTask (LspResponse Json)))
      (cancelTk : RequestCancellationToken)
      (id : RequestID)
      (method : String)
      : WorkerM (ServerTask (Except Error Unit)) := do
    let ctx ← read
    match requestTask? with
    | Except.error e =>
      emitResponse ctx (isComplete := false) <| e.toLspResponseError id
      return ServerTask.pure <| .ok ()
    | Except.ok requestTask =>
      ServerTask.IO.mapTaskCheap (t := requestTask) fun
        | Except.ok r => do
          if ← cancelTk.wasCancelledByCancelRequest then
            -- Try not to emit a partial response if this request was cancelled.
            -- Clients usually discard responses for requests that they cancelled anyways,
            -- but it's still good to send less over the wire in this case.
            emitResponse ctx (isComplete := false) <| RequestError.requestCancelled.toLspResponseError id
            return
          emitResponse ctx (isComplete := r.isComplete) <| .response id (toJson r.response)
        | Except.error e =>
          emitResponse ctx (isComplete := false) <| e.toLspResponseError id
  where
    emitResponse (ctx : WorkerContext) (m : JsonRpc.Message) (isComplete : Bool) : IO Unit := do
      ctx.chanOut.sync.send m
      let timestamp ← IO.monoMsNow
      ctx.modifyPartialHandler method fun h => { h with
        requestsInFlight := h.requestsInFlight - 1
        pendingRefreshInfo? :=
          if isComplete then
            none
          else
            some { lastRefreshTimestamp := timestamp, successiveRefreshAttempts := 0 }
      }

  def handleRequest (id : RequestID) (method : String) (params : Json)
      : WorkerM Unit := do
    let ctx ← read
    let st ← get

    ctx.modifyPartialHandler method fun h => { h with
      pendingRefreshInfo? := none
      requestsInFlight := h.requestsInFlight + 1
    }

    let hasHandledSpecialCase ← handleStatefulPreRequestSpecialCases id method params
    if hasHandledSpecialCase then
      return

    let cancelTk ← RequestCancellationToken.new
    -- TODO: move into language-specific request handling
    let rc : RequestContext := {
      rpcSessions := st.rpcSessions
      doc := st.doc
      cancelTk
      hLog := ctx.hLog
      initParams := ctx.initParams
      serverRequestEmitter := sendUntypedServerRequest ctx
    }
    let requestTask? ← EIO.toIO' <| RequestM.run (rc := rc) do
      if let some response ← handlePreRequestSpecialCases? ctx st id method params then
        return response
      let task ← handleLspRequest method params
      let task ← handlePostRequestSpecialCases id method params task
      return task
    let requestTask ← emitRequestResponse requestTask? cancelTk id method
    queueRequest id { cancelTk, requestTask }

  def handleResponse (id : RequestID) (response : Json) : WorkerM Unit := do
    let ctx ← read
    ctx.resolveServerRequestResponse id (.success response)

  def handleResponseError (id : RequestID) (code : ErrorCode) (message : String) : WorkerM Unit := do
    let ctx ← read
    ctx.resolveServerRequestResponse id (.failure code message)

end MessageHandling

section MainLoop
  variable (hIn : FS.Stream) in
  partial def mainLoop : WorkerM Unit := do
    let mut st ← get
    let msg ← hIn.readLspMessage
    let filterFinishedTasks (acc : PendingRequestMap) (id : RequestID) (task : ServerTask (Except IO.Error Unit))
        : IO PendingRequestMap := do
      if ← task.hasFinished then
        -- Handler tasks are constructed so that the only possible errors here
        -- are failures of writing a response into the stream.
        if let Except.error e := task.get then
          throwServerError s!"Failed responding to request {id}: {e}"
        pure <| acc.erase id
      else pure acc
    let pendingRequests ← st.pendingRequests.foldlM (fun acc id r => filterFinishedTasks acc id r.requestTask) st.pendingRequests
    st := { st with pendingRequests }

    -- Opportunistically (i.e. when we wake up on messages) check if any RPC session has expired.
    for (id, seshRef) in st.rpcSessions do
      let sesh ← seshRef.get
      if (← sesh.hasExpired) then
        st := { st with rpcSessions := st.rpcSessions.erase id }

    set st
    match msg with
    | Message.request id method (some params) =>
      handleRequest id method (toJson params)
      mainLoop
    | Message.notification "exit" none =>
      return
    | Message.notification method (some params) =>
      handleNotification method (toJson params)
      mainLoop
    | Message.response id result =>
      handleResponse id result
      mainLoop
    | Message.responseError id code message _ =>
      handleResponseError id code message
      mainLoop
    | _ => throwServerError "Got invalid JSON-RPC message"
end MainLoop

def runRefreshTasks : WorkerM (Array (ServerTask Unit)) := do
  -- We limit the amount of successive refresh attempts in case the user has switched files,
  -- in which case VS Code won't respond to any refresh request for the given file.
  -- Since we don't want to spam the client with refresh requests for every single file that they
  -- switched away from, we limit the amount of attempts.
  let maxSuccessiveRefreshAttempts := 10
  let ctx ← read
  let mut tasks := #[]
  for (method, refreshMethod, refreshIntervalMs) in ← partialLspRequestHandlerMethods do
    tasks := tasks.push <| ← ServerTask.BaseIO.asTask do
      while true do
        let lastRefreshTimestamp? ← ctx.modifyGetPartialHandler method fun h => Id.run do
          let some info := h.pendingRefreshInfo?
            | return (none, h)
          if info.successiveRefreshAttempts >= maxSuccessiveRefreshAttempts then
            return (none, { h with pendingRefreshInfo? := none })
          return (some info.lastRefreshTimestamp, h)
        let some lastRefreshTimestamp := lastRefreshTimestamp?
          | let cancelled ← sleepWithCancellation refreshIntervalMs.toUInt32
            if cancelled then
              return
            continue

        let currentTimestamp ← IO.monoMsNow
        let passedTimeMs := currentTimestamp - lastRefreshTimestamp
        let remainingTimeMs := refreshIntervalMs - passedTimeMs
        if remainingTimeMs > 0 then
          let cancelled ← sleepWithCancellation remainingTimeMs.toUInt32
          if cancelled then
            return

        let currentTimestamp ← IO.monoMsNow
        let canRefresh := ← ctx.modifyGetPartialHandler method fun h => Id.run do
          let some pendingRefreshInfo := h.pendingRefreshInfo?
            | return (false, h)
          -- If there is a request in flight and we emit a refresh request, VS Code will discard
          -- the response for the request in flight.
          -- To avoid this (especially for long-running requests), we only emit refresh requests
          -- once there are no pending requests anymore.
          if h.requestsInFlight > 0 then
            return (false, h)
          let h := { h with
            pendingRefreshInfo? := some {
              lastRefreshTimestamp := currentTimestamp
              successiveRefreshAttempts := pendingRefreshInfo.successiveRefreshAttempts + 1
            }
          }
          (true, h)
        if ! canRefresh then
          let cancelled ← sleepWithCancellation refreshIntervalMs.toUInt32
          if cancelled then
            return
          continue
        let _ ← sendServerRequest (Option Nat) (Option Nat) ctx refreshMethod none
  return tasks

where

  sleepWithCancellation (ms : UInt32) : BaseIO Bool := do
    if (← IO.checkCanceled) then
      return true
    let napMs := 200
    let mut remainingMs := ms
    while remainingMs > 0 do
      let remainingNapMs := if remainingMs < napMs then remainingMs else napMs
      IO.sleep remainingNapMs
      remainingMs := remainingMs - remainingNapMs
      if (← IO.checkCanceled) then
        return true
    return false

def initAndRunWorker (i o e : FS.Stream) (opts : Options) : IO Unit := do
  let i ← maybeTee "fwIn.txt" false i
  let o ← maybeTee "fwOut.txt" true o
  let initParams ← i.readLspRequestAs "initialize" InitializeParams
  let ⟨_, param⟩ ← i.readLspNotificationAs "textDocument/didOpen" LeanDidOpenTextDocumentParams
  let doc := param.textDocument

  let doc : DocumentMeta := {
    uri := doc.uri
    mod := ← moduleFromDocumentUri doc.uri
    version := doc.version
    -- LSP always refers to characters by (line, column),
    -- so converting CRLF to LF preserves line and column numbers.
    text := doc.text.crlfToLf.toFileMap
    dependencyBuildMode := param.dependencyBuildMode?.getD .always
  }
  let e := e.withPrefix s!"[{param.textDocument.uri}] "
  let _ ← IO.setStderr e
  let (ctx, st) ← try
    initializeWorker doc o e initParams.param opts
  catch err =>
    writeErrorDiag doc err
    throw err
  StateRefT'.run' (s := st) <| ReaderT.run (r := ctx) do
    try
      let refreshTasks ← runRefreshTasks
      mainLoop i
      for refreshTask in refreshTasks do
        refreshTask.cancel
    catch err =>
      let st ← get
      writeErrorDiag st.doc.meta err
      throw err
where
  writeErrorDiag (doc : DocumentMeta) (err : Error) : IO Unit := do
    o.writeLspMessage <| mkPublishDiagnosticsNotification doc #[{
      range := ⟨⟨0, 0⟩, ⟨1, 0⟩⟩,
      fullRange? := some ⟨⟨0, 0⟩, doc.text.utf8PosToLspPos doc.text.source.endPos⟩
      severity? := DiagnosticSeverity.error
      message := err.toString }]

@[export lean_server_worker_main]
def workerMain (opts : Options) : IO UInt32 := do
  let i ← IO.getStdin
  let o ← IO.getStdout
  let e ← IO.getStderr
  try
    initAndRunWorker i o e opts
    IO.Process.exit 0 -- Terminate all tasks of this process
  catch err =>
    e.putStrLn err.toString
    IO.Process.exit 1 -- Terminate all tasks of this process

end Lean.Server.FileWorker
