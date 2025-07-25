/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
module

prelude
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Basic
public import Std.Sat.AIG.CachedGatesLemmas
public import Std.Sat.AIG.LawfulVecOperator

@[expose] public section

/-!
This module contains the implementation of a bitblaster for `BitVec.zeroExtend`.
-/

namespace Std.Tactic.BVDecide

open Std.Sat

namespace BVExpr
namespace bitblast

variable [Hashable α] [DecidableEq α]

def blastZeroExtend (aig : AIG α) (target : AIG.ExtendTarget aig newWidth) :
    AIG.RefVecEntry α newWidth :=
  let ⟨width, input⟩ := target
  go aig width input newWidth 0 (by omega) (.emptyWithCapacity newWidth)
where
  go (aig : AIG α) (w : Nat) (input : AIG.RefVec aig w) (newWidth : Nat) (curr : Nat)
      (hcurr : curr ≤ newWidth) (s : AIG.RefVec aig curr) :
      AIG.RefVecEntry α newWidth :=
    if hcurr1 : curr < newWidth then
      if hcurr2 : curr < w then
        let s := s.push (input.get curr hcurr2)
        go aig w input newWidth (curr + 1) (by omega) s
      else
        let zeroRef := aig.mkConstCached false
        let s := s.push zeroRef
        go aig w input newWidth (curr + 1) (by omega) s
    else
      have hcurr : curr = newWidth := by omega
      ⟨aig, hcurr ▸ s⟩
termination_by newWidth - curr

namespace blastZeroExtend

theorem go_le_size (aig : AIG α) (w : Nat) (input : AIG.RefVec aig w) (newWidth curr : Nat)
    (hcurr : curr ≤ newWidth) (s : AIG.RefVec aig curr) :
    aig.decls.size ≤ (go aig w input newWidth curr hcurr s).aig.decls.size := by
  unfold go
  split
  · dsimp only
    split
    · apply go_le_size
    · apply go_le_size
  · simp
termination_by newWidth - curr

theorem go_decl_eq (aig : AIG α) (w : Nat) (input : AIG.RefVec aig w) (newWidth curr : Nat)
    (hcurr : curr ≤ newWidth) (s : AIG.RefVec aig curr) :
    ∀ (idx : Nat) (h1) (h2),
       (go aig w input newWidth curr hcurr s).aig.decls[idx]'h2 = aig.decls[idx]'h1 := by
  generalize hgo : go aig w input newWidth curr hcurr s = res
  unfold go at hgo
  split at hgo
  · dsimp only at hgo
    split at hgo
    · rw [← hgo]
      intro idx h1 h2
      rw [go_decl_eq]
    · rw [← hgo]
      intro idx h1 h2
      rw [go_decl_eq]
  · simp [← hgo]
termination_by newWidth - curr

end blastZeroExtend

instance : AIG.LawfulVecOperator α AIG.ExtendTarget blastZeroExtend where
  le_size := by
    intros
    unfold blastZeroExtend
    apply blastZeroExtend.go_le_size
  decl_eq := by
    intros
    unfold blastZeroExtend
    apply blastZeroExtend.go_decl_eq

end bitblast
end BVExpr

end Std.Tactic.BVDecide
