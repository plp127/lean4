/-
Copyright (c) 2022 Mac Malone. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mac Malone
-/
prelude
import Lake.Build.Trace
import Lake.Config.LeanLib
import Lake.Config.OutFormat
import Lake.Util.OrdHashSet

namespace Lake
open Lean System

/-- A buildable Lean module of a `LeanLib`. -/
structure Module where
  lib : LeanLib
  name : Name
  /--
  The name of the module as a key.
  Used to create private modules (e.g., executable roots).
  -/
  keyName : Name := name

instance : ToText Module := ⟨(·.name.toString)⟩
instance : ToJson Module := ⟨(toJson ·.name)⟩

instance : Hashable Module where hash m := hash m.keyName
instance : BEq Module where beq m n := m.keyName == n.keyName

abbrev ModuleSet := Std.HashSet Module
@[inline] def ModuleSet.empty : ModuleSet := ∅

abbrev OrdModuleSet := OrdHashSet Module
@[inline] def OrdModuleSet.empty : OrdModuleSet := OrdHashSet.empty

abbrev ModuleMap (α) := Std.TreeMap Module α (·.name.quickCmp ·.name)
@[inline] def ModuleMap.empty : ModuleMap α := Std.TreeMap.empty

/--
Locate the named, buildable module in the library
(which implies it is local and importable).
-/
def LeanLib.findModule? (mod : Name) (self : LeanLib) : Option Module :=
  if self.isBuildableModule mod then some {lib := self, name := mod} else none

/-- Returns the buildable module in the library whose source file is `path`.  -/
def LeanLib.findModuleBySrc? (path : FilePath) (self : LeanLib) : Option Module := do
  let modPath ← path.toString.dropPrefix? self.srcDir.toString
  let modPath := (modPath.drop 1).toString -- remove leading `/`
  self.findModule? (modOfFilePath modPath)

/-- Locate the named, buildable, importable, local module in the package.  -/
def Package.findModule? (mod : Name) (self : Package) : Option Module :=
  self.leanLibs.findSomeRev? (·.findModule? mod)

/-- Get an `Array` of the library's modules (as specified by its globs). -/
def LeanLib.getModuleArray (self : LeanLib) : IO (Array Module) :=
  (·.2) <$> StateT.run (s := #[]) do
    self.config.globs.forM fun glob => do
      glob.forEachModuleIn self.srcDir fun mod => do
        modify (·.push {lib := self, name := mod})

/-- The library's buildable root modules. -/
def LeanLib.rootModules (self : LeanLib) : Array Module :=
  self.config.roots.filterMap self.findModule?

namespace Module

abbrev pkg (self : Module) : Package :=
  self.lib.pkg

@[inline] def rootDir (self : Module) : FilePath :=
  self.lib.rootDir

@[inline] def filePath (dir : FilePath) (ext : String) (self : Module) : FilePath :=
  Lean.modToFilePath dir self.name ext

@[inline] def srcPath (ext : String) (self : Module) : FilePath :=
  self.filePath self.lib.srcDir ext

@[inline] def leanFile (self : Module) : FilePath :=
  self.srcPath "lean"

@[inline] def relLeanFile (self : Module) : FilePath :=
  relPathFrom self.pkg.dir self.leanFile

@[inline] def leanLibPath (ext : String) (self : Module) : FilePath :=
  self.filePath self.pkg.leanLibDir ext

@[inline] def oleanFile (self : Module) : FilePath :=
  self.leanLibPath "olean"

@[inline] def oleanServerFile (self : Module) : FilePath :=
  self.leanLibPath "olean.server"

@[inline] def oleanPrivateFile (self : Module) : FilePath :=
  self.leanLibPath "olean.private"

@[inline] def ileanFile (self : Module) : FilePath :=
  self.leanLibPath "ilean"

@[inline] def traceFile (self : Module) : FilePath :=
  self.leanLibPath "trace"

@[inline] def irPath (ext : String) (self : Module) : FilePath :=
  self.filePath self.pkg.irDir ext

@[inline] def setupFile (self : Module) : FilePath :=
  self.irPath "setup.json"

@[inline] def irFile (self : Module) : FilePath :=
  self.leanLibPath "ir"

@[inline] def cFile (self : Module) : FilePath :=
  self.irPath "c"

@[inline] def coExportFile (self : Module) : FilePath :=
  self.irPath "c.o.export"

@[inline] def coNoExportFile (self : Module) : FilePath :=
  self.irPath "c.o.noexport"

@[inline] def bcFile (self : Module) : FilePath :=
  self.irPath "bc"

def bcFile? (self : Module) : Option FilePath :=
  if Lean.Internal.hasLLVMBackend () then some self.bcFile else none

@[inline] def bcoFile (self : Module) : FilePath :=
  self.irPath "bc.o"

/-- Suffix for single module dynlibs (e.g., for precompilation). -/
def dynlibSuffix := "-1"

@[inline] def dynlibName (self : Module) : String :=
  /-
  * File name MUST be unique on Windows
  * Uses the mangled module name so the library name matches the
    name used for the module's initialization function, thus enabling it
    to be loaded as a plugin.
  -/
  self.name.mangle ""

@[inline] def dynlibFile (self : Module) : FilePath :=
  self.pkg.leanLibDir / s!"{self.dynlibName}.{sharedLibExt}"

@[inline] def serverOptions (self : Module) : LeanOptions :=
  self.lib.serverOptions

@[inline] def buildType (self : Module) : BuildType :=
  self.lib.buildType

@[inline] def backend (self : Module) : Backend :=
  self.lib.backend

@[inline] def dynlibs (self : Module) : TargetArray Dynlib :=
  self.lib.dynlibs

@[inline] def plugins (self : Module) : TargetArray Dynlib :=
  self.lib.plugins

@[inline] def leanOptions (self : Module) : LeanOptions :=
  self.lib.leanOptions

@[inline] def leanArgs (self : Module) : Array String :=
  self.lib.leanArgs

@[inline] def weakLeanArgs (self : Module) : Array String :=
  self.lib.weakLeanArgs

@[inline] def leancArgs (self : Module) : Array String :=
  self.lib.leancArgs

@[inline] def weakLeancArgs (self : Module) : Array String :=
  self.lib.weakLeancArgs

@[inline] def linkArgs (self : Module) : Array String :=
  self.lib.linkArgs

@[inline] def weakLinkArgs (self : Module) : Array String :=
  self.lib.weakLinkArgs

@[inline] def leanIncludeDir? (self : Module) : Option FilePath :=
  if self.pkg.bootstrap then some <| self.pkg.buildDir / "include" else none

@[inline] def platformIndependent (self : Module) : Option Bool :=
  self.lib.platformIndependent

@[inline] def shouldPrecompile (self : Module) : Bool :=
  self.lib.precompileModules

@[inline] def nativeFacets (self : Module) (shouldExport : Bool) : Array (ModuleFacet FilePath) :=
  self.lib.nativeFacets shouldExport

/-! ## Trace Helpers -/

protected def getMTime (self : Module) : IO MTime := do
  return mixTrace (mixTrace (← getMTime self.oleanFile) (← getMTime self.ileanFile)) (← getMTime self.cFile)

instance : GetMTime Module := ⟨Module.getMTime⟩

protected def checkExists (self : Module) : BaseIO Bool := do
  let bcFileExists? ←
    if Lean.Internal.hasLLVMBackend () then
      checkExists self.bcFile
    else
      pure true
  return (← checkExists self.oleanFile) && (← checkExists self.ileanFile) && (← checkExists self.cFile) && bcFileExists?

instance : CheckExists Module := ⟨Module.checkExists⟩
