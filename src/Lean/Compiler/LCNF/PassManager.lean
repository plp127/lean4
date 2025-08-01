/-
Copyright (c) 2022 Henrik Böving. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
module

prelude
public import Lean.Attributes
public import Lean.Environment
public import Lean.Meta.Basic
public import Lean.Compiler.LCNF.CompilerM

public section

namespace Lean.Compiler.LCNF

@[expose] def Phase.toNat : Phase → Nat
  | .base => 0
  | .mono => 1

instance : LT Phase where
  lt l r := l.toNat < r.toNat

instance : LE Phase where
  le l r := l.toNat ≤ r.toNat

instance {p1 p2 : Phase} : Decidable (p1 < p2) := Nat.decLt p1.toNat p2.toNat
instance {p1 p2 : Phase} : Decidable (p1 ≤ p2) := Nat.decLe p1.toNat p2.toNat

@[simp] theorem Phase.le_refl (p : Phase) : p ≤ p := by
  cases p <;> decide

/--
A single compiler `Pass`, consisting of the actual pass function operating
on the `Decl`s as well as meta information.
-/
structure Pass where
  /--
  Which occurrence of the pass in the pipeline this is.
  Some passes, like simp, can occur multiple times in the pipeline.
  For most passes this value does not matter.
  -/
  occurrence : Nat := 0
  /--
  Which phase this `Pass` is supposed to run in
  -/
  phase : Phase
  /--
  Resulting phase.
  -/
  phaseOut : Phase := phase
  phaseInv : phaseOut ≥ phase := by simp +arith +decide
  /--
  Whether IR validation checks should always run after this pass, regardless
  of configuration options.
  -/
  shouldAlwaysRunCheck : Bool := false
  /--
  The name of the `Pass`
  -/
  name : Name
  /--
  The actual pass function, operating on the `Decl`s.
  -/
  run : Array Decl → CompilerM (Array Decl)

instance : Inhabited Pass where
  default := { phase := .base, name := default, run := fun decls => return decls }

/--
Can be used to install, remove, replace etc. passes by tagging a declaration
of type `PassInstaller` with the `cpass` attribute.
-/
structure PassInstaller where
  /--
  When the installer is run this function will receive a list of all
  current `Pass`es and return a new one, this can modify the list (and
  the `Pass`es contained within) in any way it wants.
  -/
  install : Array Pass → CoreM (Array Pass)
  deriving Inhabited

/--
The `PassManager` used to store all `Pass`es that will be run within
pipeline.
-/
structure PassManager where
  passes : Array Pass
  deriving Inhabited

instance : ToString Phase where
  toString
    | .base => "base"
    | .mono => "mono"

namespace Pass

def mkPerDeclaration (name : Name) (run : Decl → CompilerM Decl) (phase : Phase) (occurrence : Nat := 0) : Pass where
  occurrence := occurrence
  phase := phase
  name := name
  run := fun xs => xs.mapM run

end Pass

namespace PassManager

def validate (manager : PassManager) : CoreM Unit := do
  let mut current := .base
  for pass in manager.passes do
    if ¬(current ≤ pass.phase) then
      throwError s!"{pass.name} has phase {pass.phase} but should at least have {current}"
    current := pass.phase

def findHighestOccurrence (targetName : Name) (passes : Array Pass) : CoreM Nat := do
  let mut highest := none
  for pass in passes do
      if pass.name == targetName then
        highest := some pass.occurrence
  let some val := highest | throwError s!"Could not find any occurrence of {targetName}"
  return val

end PassManager

namespace PassInstaller

def installAtEnd (p : Pass) : PassInstaller where
  install passes := return passes.push p

def append (passesNew : Array Pass) : PassInstaller where
  install passes := return passes ++ passesNew

def withEachOccurrence (targetName : Name) (f : Nat → PassInstaller) : PassInstaller where
  install passes := do
    let highestOccurrence ← PassManager.findHighestOccurrence targetName passes
    let mut passes := passes
    for occurrence in *...=highestOccurrence do
      passes ← f occurrence |>.install passes
    return passes

def installAfter (targetName : Name) (p : Pass → Pass) (occurrence : Nat := 0) : PassInstaller where
  install passes :=
    if let some idx := passes.findFinIdx? (fun p => p.name == targetName && p.occurrence == occurrence) then
      let passUnderTest := passes[idx]
      return passes.insertIdx (idx + 1) (p passUnderTest)
    else
      throwError s!"Tried to insert pass after {targetName}, occurrence {occurrence} but {targetName} is not in the pass list"

def installAfterEach (targetName : Name) (p : Pass → Pass) : PassInstaller :=
    withEachOccurrence targetName (installAfter targetName p ·)

def installBefore (targetName : Name) (p : Pass → Pass) (occurrence : Nat := 0): PassInstaller where
  install passes :=
    if let some idx := passes.findFinIdx? (fun p => p.name == targetName && p.occurrence == occurrence) then
      let passUnderTest := passes[idx]
      return passes.insertIdx idx (p passUnderTest)
    else
      throwError s!"Tried to insert pass after {targetName}, occurrence {occurrence} but {targetName} is not in the pass list"

def installBeforeEachOccurrence (targetName : Name) (p : Pass → Pass) : PassInstaller :=
    withEachOccurrence targetName (installBefore targetName p ·)

def replacePass (targetName : Name) (p : Pass → Pass) (occurrence : Nat := 0) : PassInstaller where
  install passes := do
    let some idx := passes.findIdx? (fun p => p.name == targetName && p.occurrence == occurrence) | throwError s!"Tried to replace {targetName}, occurrence {occurrence} but {targetName} is not in the pass list"
    return passes.modify idx p

def replaceEachOccurrence (targetName : Name) (p : Pass → Pass) : PassInstaller :=
    withEachOccurrence targetName (replacePass targetName p ·)

def run (manager : PassManager) (installer : PassInstaller) : CoreM PassManager := do
  return { manager with passes := (← installer.install manager.passes) }

private unsafe def getPassInstallerUnsafe (declName : Name) : CoreM PassInstaller := do
  ofExcept <| (← getEnv).evalConstCheck PassInstaller (← getOptions) ``PassInstaller declName

@[implemented_by getPassInstallerUnsafe]
private opaque getPassInstaller (declName : Name) : CoreM PassInstaller

def runFromDecl (manager : PassManager) (declName : Name) : CoreM PassManager := do
  let installer ← getPassInstaller declName
  let newState ← installer.run manager
  newState.validate
  return newState

end PassInstaller

end Lean.Compiler.LCNF
