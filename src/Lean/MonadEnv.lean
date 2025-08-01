/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Environment
public import Lean.Exception
public import Lean.Declaration
public import Lean.Log
public import Lean.AuxRecursor
public import Lean.Compiler.Old

public section

namespace Lean

def setEnv [MonadEnv m] (env : Environment) : m Unit :=
  modifyEnv fun _ => env

def withEnv [Monad m] [MonadFinally m] [MonadEnv m] (env : Environment) (x : m α) : m α := do
  let saved ← getEnv
  try
    setEnv env
    x
  finally
    setEnv saved

def isInductiveCore (env : Environment) (declName : Name) : Bool :=
  env.findAsync? declName matches some { kind := .induct, .. }

def isInductive [Monad m] [MonadEnv m] (declName : Name) : m Bool :=
  return isInductiveCore (← getEnv) declName

def isRecCore (env : Environment) (declName : Name) : Bool :=
  env.findAsync? declName matches some { kind := .recursor, .. }

def isRec [Monad m] [MonadEnv m] (declName : Name) : m Bool :=
  return isRecCore (← getEnv) declName

@[inline] def withoutModifyingEnv [Monad m] [MonadEnv m] [MonadFinally m] {α : Type} (x : m α) : m α := do
  -- Allow `x` to define new declarations even outside the asynchronous prefix (if any) as all
  -- results will be discarded anyway.
  withEnv (← getEnv).unlockAsync x

/-- Similar to `withoutModifyingEnv`, but also returns the updated environment -/
@[inline] def withoutModifyingEnv' [Monad m] [MonadEnv m] [MonadFinally m] {α : Type} (x : m α) : m (α × Environment) := do
  let env ← getEnv
  try
    let a ← x
    return (a, ← getEnv)
  finally
    setEnv env

@[inline] def matchConst [Monad m] [MonadEnv m] (e : Expr) (failK : Unit → m α) (k : ConstantInfo → List Level → m α) : m α := do
  match e with
  | Expr.const constName us => do
    match (← getEnv).find? constName with
    | some cinfo => k cinfo us
    | none       => failK ()
  | _ => failK ()

@[inline] def matchConstInduct [Monad m] [MonadEnv m] (e : Expr) (failK : Unit → m α) (k : InductiveVal → List Level → m α) : m α :=
  matchConst e failK fun cinfo us =>
    match cinfo with
    | ConstantInfo.inductInfo val => k val us
    | _                           => failK ()

@[inline] def matchConstCtor [Monad m] [MonadEnv m] (e : Expr) (failK : Unit → m α) (k : ConstructorVal → List Level → m α) : m α :=
  matchConst e failK fun cinfo us =>
    match cinfo with
    | ConstantInfo.ctorInfo val => k val us
    | _                         => failK ()

@[inline] def matchConstRec [Monad m] [MonadEnv m] (e : Expr) (failK : Unit → m α) (k : RecursorVal → List Level → m α) : m α :=
  matchConst e failK fun cinfo us =>
    match cinfo with
    | ConstantInfo.recInfo val => k val us
    | _                        => failK ()

def hasConst [Monad m] [MonadEnv m] (constName : Name) (skipRealize := true) : m Bool := do
  return (← getEnv).contains (skipRealize := skipRealize) constName

def getConstInfo [Monad m] [MonadEnv m] [MonadError m] (constName : Name) : m ConstantInfo := do
  match (← getEnv).find? constName with
  | some info => pure info
  | none      => throwUnknownConstant constName

def getConstVal [Monad m] [MonadEnv m] [MonadError m] (constName : Name) : m ConstantVal := do
  match (← getEnv).findConstVal? constName with
  | some val => pure val
  | none     => throwUnknownConstant constName

def getAsyncConstInfo [Monad m] [MonadEnv m] [MonadError m] (constName : Name) (skipRealize := false) : m AsyncConstantInfo := do
  match (← getEnv).findAsync? (skipRealize := skipRealize) constName with
  | some val => pure val
  | none     => throwUnknownConstant constName

def isInductive? [Monad m] [MonadEnv m] (declName : Name) : m (Option InductiveVal) := do
  match (← getEnv).findAsync? declName with
  | some info@{ kind := .induct, .. } =>
    match info.toConstantInfo with
    | .inductInfo val => pure (some val)
    | _ => unreachable!
  | _ => pure none

def mkConstWithLevelParams [Monad m] [MonadEnv m] [MonadError m] (constName : Name) : m Expr := do
  let info ← getConstVal constName
  return mkConst constName (info.levelParams.map mkLevelParam)

def getConstInfoDefn [Monad m] [MonadEnv m] [MonadError m] (constName : Name) : m DefinitionVal := do
  match (← getConstInfo constName) with
  | ConstantInfo.defnInfo v => pure v
  | _                       => throwError "'{.ofConstName constName}' is not a definition"

def getConstInfoInduct [Monad m] [MonadEnv m] [MonadError m] (constName : Name) : m InductiveVal := do
  match (← getConstInfo constName) with
  | ConstantInfo.inductInfo v => pure v
  | _                         => throwError "'{.ofConstName constName}' is not a inductive type"

def getConstInfoCtor [Monad m] [MonadEnv m] [MonadError m] (constName : Name) : m ConstructorVal := do
  match (← getConstInfo constName) with
  | ConstantInfo.ctorInfo v => pure v
  | _                       => throwError "'{.ofConstName constName}' is not a constructor"

def getConstInfoRec [Monad m] [MonadEnv m] [MonadError m] (constName : Name) : m RecursorVal := do
  match (← getConstInfo constName) with
  | ConstantInfo.recInfo v => pure v
  | _                      => throwError "'{.ofConstName constName}' is not a recursor"

/--
Matches if `e` is a constant that is an inductive type with one constructor.
Such types can be used with primitive projections.
See also `Lean.matchConstStructLike` for a more restrictive version.
-/
@[inline] def matchConstStructure [Monad m] [MonadEnv m] [MonadError m] (e : Expr) (failK : Unit → m α) (k : InductiveVal → List Level → ConstructorVal → m α) : m α :=
  matchConstInduct e failK fun ival us => do
    match ival.ctors with
      | [ctor] =>
        match (← getConstInfo ctor) with
        | ConstantInfo.ctorInfo cval => k ival us cval
        | _ => failK ()
      | _ => failK ()

/--
Matches if `e` is a constant that is an non-recursive inductive type with no indices and with one constructor.
Such a type satisfies `Lean.isStructureLike`.
See also `Lean.matchConstStructure` for a less restrictive version.
-/
@[inline] def matchConstStructureLike [Monad m] [MonadEnv m] [MonadError m] (e : Expr) (failK : Unit → m α) (k : InductiveVal → List Level → ConstructorVal → m α) : m α :=
  matchConstInduct e failK fun ival us => do
    if ival.isRec || ival.numIndices != 0 then failK ()
    else match ival.ctors with
      | [ctor] =>
        match (← getConstInfo ctor) with
        | ConstantInfo.ctorInfo cval => k ival us cval
        | _ => failK ()
      | _ => failK ()

unsafe def evalConst [Monad m] [MonadEnv m] [MonadError m] [MonadOptions m] (α) (constName : Name) (checkMeta := true) : m α := do
  ofExcept <| (← getEnv).evalConst (checkMeta := checkMeta) α (← getOptions) constName

unsafe def evalConstCheck [Monad m] [MonadEnv m] [MonadError m] [MonadOptions m] (α) (typeName : Name) (constName : Name) : m α := do
  ofExcept <| (← getEnv).evalConstCheck α (← getOptions) typeName constName

def findModuleOf? [Monad m] [MonadEnv m] [MonadError m] (declName : Name) : m (Option Name) := do
  discard <| getConstInfo declName -- ensure declaration exists
  match (← getEnv).getModuleIdxFor? declName with
  | none        => return none
  | some modIdx => return some ((← getEnv).allImportedModuleNames[modIdx.toNat]!)

def isEnumType  [Monad m] [MonadEnv m] [MonadError m] (declName : Name) : m Bool := do
  if let ConstantInfo.inductInfo info ← getConstInfo declName then
    if !info.type.isProp && info.numTypeFormers == 1 && info.numIndices == 0 && info.numParams == 0
       && !info.ctors.isEmpty && !info.isRec && !info.isUnsafe then
      info.ctors.allM fun ctorName => do
        let ConstantInfo.ctorInfo info ← getConstInfo ctorName | return false
        return info.numFields == 0
    else
      return false
  else
    return false

end Lean
