/-
Copyright (c) 2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Meta.InferType
public import Lean.Compiler.LCNF.Util
public import Lean.Compiler.LCNF.BaseTypes
public import Lean.Compiler.LCNF.CompilerM

public section

namespace Lean.Compiler.LCNF

/--
Given a constructor, return a bitmask `m` s.t. `m[i]` is true if field `i` is
computationally relevant.
-/
def getRelevantCtorFields (ctorName : Name) : CoreM (Array Bool) := do
  let .ctorInfo info ← getConstInfo ctorName | unreachable!
  Meta.MetaM.run' do
    Meta.forallTelescopeReducing info.type fun xs _ => do
      let mut result := #[]
      for x in xs[info.numParams...*] do
        let type ← Meta.inferType x
        result := result.push !(← Meta.isProp type <||> Meta.isTypeFormerType type)
      return result

/--
We say a structure has a trivial structure if it has not builtin support in the runtime,
it has only one constructor, and this constructor has only one relevant field.
-/
structure TrivialStructureInfo where
  ctorName  : Name
  numParams : Nat
  fieldIdx  : Nat
  deriving Inhabited, Repr

builtin_initialize trivialStructureInfoExt : CacheExtension Name (Option TrivialStructureInfo) ←
  CacheExtension.register

/--
Return `some fieldIdx` if `declName` is the name of an inductive datatype s.t.
- It does not have builtin support in the runtime.
- It has only one constructor.
- This constructor has only one computationally relevant field.
-/
def hasTrivialStructure? (declName : Name) : CoreM (Option TrivialStructureInfo) := do
  match (← trivialStructureInfoExt.find? declName) with
  | some info? => return info?
  | none =>
    let info? ← fillCache
    trivialStructureInfoExt.insert declName info?
    return info?
where fillCache : CoreM (Option TrivialStructureInfo) := do
  if isRuntimeBuiltinType declName then return none
  let .inductInfo info ← getConstInfo declName | return none
  if info.isUnsafe || info.isRec then return none
  let [ctorName] := info.ctors | return none
  let ctorType ← getOtherDeclBaseType ctorName []
  if ctorType.isErased then return none
  let mask ← getRelevantCtorFields ctorName
  let mut result := none
  for h : i in *...mask.size do
    if mask[i] then
      if result.isSome then return none
      result := some { ctorName, fieldIdx := i, numParams := info.numParams }
  return result

def getParamTypes (type : Expr) : Array Expr :=
  go type #[]
where
  go (type : Expr) (r : Array Expr) :=
    match type with
    | .forallE _ d b _ => go b (r.push d)
    | _ => r

/--
Convert a LCNF type from the base phase to the mono phase.

LCNF types in the mono phase do not have dependencies,
and universe levels have been erased.

The type contains only `→` and constants.
-/
partial def toMonoType (type : Expr) : CoreM Expr := do
  let type := type.headBeta
  match type with
  | .const .. => visitApp type #[]
  | .app .. => type.withApp visitApp
  | .forallE n d b bi =>
    let monoB ← toMonoType (b.instantiate1 anyExpr)
    match monoB with
    | .const ``lcErased _ => return erasedExpr
    | _ =>
      -- preserve parameter names for readability and to avoid recompilation from signature changes
      return .forallE n (← toMonoType d) monoB bi
  | .sort _ => return erasedExpr
  | .mdata d b => return .mdata d (← toMonoType b)
  | _ => return anyExpr
where
  visitApp (f : Expr) (args : Array Expr) : CoreM Expr := do
    match f with
    | .const ``lcErased _ => return erasedExpr
    | .const ``lcAny _ => return anyExpr
    | .const ``Decidable _ => return mkConst ``Bool
    | .const declName us =>
      if let some info ← hasTrivialStructure? declName then
        let ctorType ← getOtherDeclBaseType info.ctorName []
        toMonoType (getParamTypes (← instantiateForall ctorType args[*...info.numParams]))[info.fieldIdx]!
      else
        let mut result := mkConst declName
        let mut type ← getOtherDeclBaseType declName us
        if type.isErased then return erasedExpr
        for arg in args do
          let .forallE _ d b _ := type.headBeta | unreachable!
          let arg := arg.headBeta
          if d matches .const ``lcErased _ | .sort _ then
            result := mkApp result (← toMonoType arg)
          else
            result := mkApp result anyExpr
          type := b.instantiate1 arg
        return result
    | _ => return anyExpr

/--
State for the environment extension used to save the LCNF mono phase type for declarations
that do not have code associated with them.
Example: constructors, inductive types, foreign functions.
-/
builtin_initialize monoTypeExt : CacheExtension Name Expr ← CacheExtension.register

def getOtherDeclMonoType (declName : Name) : CoreM Expr := do
  match (← monoTypeExt.find? declName) with
  | some type => return type
  | none =>
    let type ← toMonoType (← getOtherDeclBaseType declName [])
    monoTypeExt.insert declName type
    return type

end Lean.Compiler.LCNF
