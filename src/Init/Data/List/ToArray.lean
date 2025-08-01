/-
Copyright (c) 2022 Mario Carneiro. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Mario Carneiro
-/
module

prelude
public import all Init.Data.List.Control
public import Init.Data.List.Impl
public import Init.Data.List.Nat.Erase
public import Init.Data.List.Monadic
public import Init.Data.List.Nat.InsertIdx
public import Init.Data.Array.Lex.Basic
public import all Init.Data.Array.Basic
public import all Init.Data.Array.Set

public section

/-! ### Lemmas about `List.toArray`.

We prefer to pull `List.toArray` outwards past `Array` operations.
-/

set_option linter.listVariables true -- Enforce naming conventions for `List`/`Array`/`Vector` variables.
set_option linter.indexVariables true -- Enforce naming conventions for index variables.

namespace Array

@[simp] theorem toList_set (xs : Array α) (i x h) :
    (xs.set i x).toList = xs.toList.set i x := rfl

theorem swap_def (xs : Array α) (i j : Nat) (hi hj) :
    xs.swap i j hi hj = (xs.set i xs[j]).set j xs[i] (by simpa using hj) := by
  simp [swap]

@[simp] theorem toList_swap (xs : Array α) (i j : Nat) (hi hj) :
    (xs.swap i j hi hj).toList = (xs.toList.set i xs[j]).set j xs[i] := by simp [swap_def]

end Array

namespace List

open Array

theorem toArray_inj {as bs : List α} (h : as.toArray = bs.toArray) : as = bs := by
  cases as with
  | nil => simpa using h
  | cons a as =>
    cases bs with
    | nil => simp at h
    | cons b bs => simpa using h

theorem toArray_eq_iff {as : List α} {bs : Array α} : as.toArray = bs ↔ as = bs.toList := by
  cases bs
  simp

-- We can't make this a `@[simp]` lemma because `#[] = [].toArray` at reducible transparency,
-- so this would loop with `toList_eq_nil_iff`
theorem eq_toArray_iff {as : Array α} {bs : List α} : as = bs.toArray ↔ as.toList = bs := by
  cases as
  simp

@[simp] theorem size_toArrayAux {as : List α} {xs : Array α} :
    (as.toArrayAux xs).size = xs.size + as.length := by
  simp [size]

-- This is not a `@[simp]` lemma because it is pushing `toArray` inwards.
theorem toArray_cons (a : α) (l : List α) : (a :: l).toArray = #[a] ++ l.toArray := by
  apply ext'
  simp

@[simp, grind =] theorem push_toArray (l : List α) (a : α) : l.toArray.push a = (l ++ [a]).toArray := by
  apply ext'
  simp

/-- Unapplied variant of `push_toArray`, useful for monadic reasoning. -/
@[simp] theorem push_toArray_fun (l : List α) : l.toArray.push = fun a => (l ++ [a]).toArray := by
  funext a
  simp

@[simp, grind =] theorem isEmpty_toArray (l : List α) : l.toArray.isEmpty = l.isEmpty := by
  cases l <;> simp [Array.isEmpty]

@[simp] theorem toArray_singleton (a : α) : (List.singleton a).toArray = Array.singleton a := rfl

@[simp, grind =] theorem back!_toArray [Inhabited α] (l : List α) : l.toArray.back! = l.getLast! := by
  simp only [back!, size_toArray, getElem!_toArray, getLast!_eq_getElem!]

@[simp, grind =] theorem back?_toArray (l : List α) : l.toArray.back? = l.getLast? := by
  simp [back?, List.getLast?_eq_getElem?]

@[simp, grind =] theorem back_toArray (l : List α) (h) :
    l.toArray.back = l.getLast (by simp at h; exact ne_nil_of_length_pos h) := by
  simp [back, List.getLast_eq_getElem]

@[simp, grind =] theorem _root_.Array.getLast!_toList [Inhabited α] (xs : Array α) :
    xs.toList.getLast! = xs.back! := by
  rcases xs with ⟨xs⟩
  simp

@[simp, grind =] theorem _root_.Array.getLast?_toList (xs : Array α) :
    xs.toList.getLast? = xs.back? := by
  rcases xs with ⟨xs⟩
  simp

@[simp, grind =] theorem _root_.Array.getLast_toList (xs : Array α) (h) :
    xs.toList.getLast h = xs.back (by simpa [ne_nil_iff_length_pos] using h) := by
  rcases xs with ⟨xs⟩
  simp

@[simp, grind =] theorem set_toArray (l : List α) (i : Nat) (a : α) (h : i < l.length) :
    (l.toArray.set i a) = (l.set i a).toArray := rfl

@[simp] theorem forIn'_loop_toArray [Monad m] (l : List α) (f : (a : α) → a ∈ l.toArray → β → m (ForInStep β)) (i : Nat)
    (h : i ≤ l.length) (b : β) :
    Array.forIn'.loop l.toArray f i h b =
      forIn' (l.drop (l.length - i)) b (fun a m b => f a (by simpa using mem_of_mem_drop m) b) := by
  induction i generalizing l b with
  | zero =>
    simp [Array.forIn'.loop]
  | succ i ih =>
    simp only [Array.forIn'.loop, size_toArray, getElem_toArray, ih]
    have t : drop (l.length - (i + 1)) l = l[l.length - i - 1] :: drop (l.length - i) l := by
      simp only [Nat.sub_add_eq]
      rw [List.drop_sub_one (by omega), List.getElem?_eq_getElem (by omega)]
      simp only [Option.toList_some, singleton_append]
    simp [t]
    have t : l.length - 1 - i = l.length - i - 1 := by omega
    simp only [t]
    congr

@[simp, grind =] theorem forIn'_toArray [Monad m] (l : List α) (b : β) (f : (a : α) → a ∈ l.toArray → β → m (ForInStep β)) :
    forIn' l.toArray b f = forIn' l b (fun a m b => f a (mem_toArray.mpr m) b) := by
  change Array.forIn' _ _ _ = List.forIn' _ _ _
  rw [Array.forIn', forIn'_loop_toArray]
  simp

@[simp, grind =] theorem forIn_toArray [Monad m] (l : List α) (b : β) (f : α → β → m (ForInStep β)) :
    forIn l.toArray b f = forIn l b f := by
  simpa using forIn'_toArray l b fun a m b => f a b

@[grind =] theorem foldrM_toArray [Monad m] (f : α → β → m β) (init : β) (l : List α) :
    l.toArray.foldrM f init = l.foldrM f init := by
  rw [foldrM_eq_reverse_foldlM_toList]
  simp

@[grind =] theorem foldlM_toArray [Monad m] (f : β → α → m β) (init : β) (l : List α) :
    l.toArray.foldlM f init = l.foldlM f init := by
  rw [foldlM_toList]

@[grind =] theorem foldr_toArray (f : α → β → β) (init : β) (l : List α) :
    l.toArray.foldr f init = l.foldr f init := by
  rw [foldr_toList]

@[grind =] theorem foldl_toArray (f : β → α → β) (init : β) (l : List α) :
    l.toArray.foldl f init = l.foldl f init := by
  rw [foldl_toList]

/-- Variant of `foldrM_toArray` with a side condition for the `start` argument. -/
@[simp] theorem foldrM_toArray' [Monad m] (f : α → β → m β) (init : β) (l : List α)
    (h : start = l.toArray.size) :
    l.toArray.foldrM f init start 0 = l.foldrM f init := by
  subst h
  rw [foldrM_eq_reverse_foldlM_toList]
  simp

/-- Variant of `foldlM_toArray` with a side condition for the `stop` argument. -/
@[simp] theorem foldlM_toArray' [Monad m] (f : β → α → m β) (init : β) (l : List α)
    (h : stop = l.toArray.size) :
    l.toArray.foldlM f init 0 stop = l.foldlM f init := by
  subst h
  rw [foldlM_toList]

/-- Variant of `forM_toArray` with a side condition for the `stop` argument. -/
@[simp] theorem forM_toArray' [Monad m] (l : List α) (f : α → m PUnit) (h : stop = l.toArray.size) :
    (l.toArray.forM f 0 stop) = l.forM f := by
  subst h
  rw [Array.forM]
  simp only [size_toArray, foldlM_toArray']
  induction l <;> simp_all

@[simp, grind =]
theorem forM_toArray [Monad m] (l : List α) (f : α → m PUnit) :
    (forM l.toArray f) = l.forM f :=
  forM_toArray' l f rfl

/-- Variant of `foldr_toArray` with a side condition for the `start` argument. -/
@[simp] theorem foldr_toArray' (f : α → β → β) (init : β) (l : List α)
    (h : start = l.toArray.size) :
    l.toArray.foldr f init start 0 = l.foldr f init := by
  subst h
  rw [foldr_toList]

/-- Variant of `foldl_toArray` with a side condition for the `stop` argument. -/
@[simp] theorem foldl_toArray' (f : β → α → β) (init : β) (l : List α)
    (h : stop = l.toArray.size) :
    l.toArray.foldl f init 0 stop = l.foldl f init := by
  subst h
  rw [foldl_toList]

@[simp, grind =] theorem sum_toArray [Add α] [Zero α] (l : List α) : l.toArray.sum = l.sum := by
  simp [Array.sum, List.sum]

@[simp, grind =] theorem append_toArray (l₁ l₂ : List α) :
    l₁.toArray ++ l₂.toArray = (l₁ ++ l₂).toArray := by
  apply ext'
  simp

@[simp] theorem push_append_toArray {as : Array α} {a : α} {bs : List α} : as.push a ++ bs.toArray = as ++ (a :: bs).toArray := by
  cases as
  simp

@[simp, grind =] theorem findSomeM?_toArray [Monad m] [LawfulMonad m] (f : α → m (Option β)) (l : List α) :
    l.toArray.findSomeM? f = l.findSomeM? f := by
  rw [Array.findSomeM?]
  simp only [bind_pure_comp, map_pure, forIn_toArray]
  induction l with
  | nil => simp
  | cons a l ih =>
    simp only [forIn_cons, LawfulMonad.bind_assoc, findSomeM?]
    congr
    ext1 (_|_) <;> simp [ih]

theorem findSomeRevM?_find_toArray [Monad m] [LawfulMonad m] (f : α → m (Option β)) (l : List α)
    (i : Nat) (h) :
    findSomeRevM?.find f l.toArray i h = (l.take i).reverse.findSomeM? f := by
  induction i generalizing l with
  | zero => simp [Array.findSomeRevM?.find.eq_def]
  | succ i ih =>
    rw [size_toArray] at h
    rw [Array.findSomeRevM?.find, take_succ, getElem?_eq_getElem (by omega)]
    simp only [ih, reverse_append]
    congr
    ext1 (_|_) <;> simp

-- This is not marked as `@[simp]` as later we simplify all occurrences of `findSomeRevM?`.
theorem findSomeRevM?_toArray [Monad m] [LawfulMonad m] (f : α → m (Option β)) (l : List α) :
    l.toArray.findSomeRevM? f = l.reverse.findSomeM? f := by
  simp [Array.findSomeRevM?, findSomeRevM?_find_toArray]

-- This is not marked as `@[simp]` as later we simplify all occurrences of `findRevM?`.
theorem findRevM?_toArray [Monad m] [LawfulMonad m] (f : α → m Bool) (l : List α) :
    l.toArray.findRevM? f = l.reverse.findM? f := by
  rw [Array.findRevM?, findSomeRevM?_toArray, findM?_eq_findSomeM?]

@[simp, grind =] theorem findM?_toArray [Monad m] [LawfulMonad m] (f : α → m Bool) (l : List α) :
    l.toArray.findM? f = l.findM? f := by
  rw [Array.findM?]
  simp only [bind_pure_comp, map_pure, forIn_toArray]
  induction l with
  | nil => simp
  | cons a l ih =>
    simp only [forIn_cons, LawfulMonad.bind_assoc, findM?]
    congr
    ext1 (_|_) <;> simp [ih]

@[simp, grind =] theorem findSome?_toArray (f : α → Option β) (l : List α) :
    l.toArray.findSome? f = l.findSome? f := by
  rw [Array.findSome?, findSomeM?_toArray, findSomeM?_pure, Id.run_pure]

@[simp, grind =] theorem find?_toArray (f : α → Bool) (l : List α) :
    l.toArray.find? f = l.find? f := by
  rw [Array.find?]
  simp only [forIn_toArray]
  induction l with
  | nil => simp
  | cons a l ih =>
    simp only [forIn_cons, find?]
    by_cases f a <;> simp_all

private theorem findFinIdx?_loop_toArray (w : l' = l.drop j) :
    Array.findFinIdx?.loop p l.toArray j = List.findFinIdx?.go p l l' j h := by
  unfold findFinIdx?.loop
  unfold findFinIdx?.go
  split <;> rename_i h'
  · cases l' with
    | nil =>
      simp at h h'
      omega
    | cons a l' =>
      have : l[j] = a := by
        rw [drop_eq_getElem_cons] at w
        simp only [cons.injEq] at w
        exact w.1.symm
      simp only [getElem_toArray, this]
      split
      · rfl
      · simp only [length_cons] at h
        have : l.length - (j + 1) < l.length - j := by omega
        rw [findFinIdx?_loop_toArray]
        rw [drop_add_one_eq_tail_drop, ← w, tail_cons]
  · have : l' = [] := by simp_all
    subst this
    simp
termination_by l.length - j

@[simp, grind =] theorem findFinIdx?_toArray (p : α → Bool) (l : List α) :
    l.toArray.findFinIdx? p = l.findFinIdx? p := by
  rw [Array.findFinIdx?, findFinIdx?, findFinIdx?_loop_toArray]
  simp

@[simp, grind =] theorem findIdx?_toArray (p : α → Bool) (l : List α) :
    l.toArray.findIdx? p = l.findIdx? p := by
  rw [Array.findIdx?_eq_map_findFinIdx?_val, findIdx?_eq_map_findFinIdx?_val]
  simp [Array.size]

private theorem idxAuxOf_toArray [BEq α] (a : α) (l : List α) (j : Nat) (w : l' = l.drop j) (h) :
    l.toArray.idxOfAux a j = findFinIdx?.go (fun x => x == a) l l' j h := by
  unfold idxOfAux
  unfold findFinIdx?.go
  split <;> rename_i h'
  · cases l' with
    | nil =>
      simp at h h'
      omega
    | cons b l' =>
      simp at h'
      have : l[j] = b := by
        rw [drop_eq_getElem_cons h'] at w
        simp only [cons.injEq] at w
        exact w.1.symm
      simp only [getElem_toArray, this]
      split
      · rfl
      · simp only [length_cons] at h
        have : l.length - (j + 1) < l.length - j := by omega
        rw [idxAuxOf_toArray]
        rw [drop_add_one_eq_tail_drop, ← w, tail_cons]
  · have : l' = [] := by simp_all
    subst this
    simp
termination_by l.length - j

@[simp, grind =] theorem finIdxOf?_toArray [BEq α] (a : α) (l : List α) :
    l.toArray.finIdxOf? a = l.finIdxOf? a := by
  rw [Array.finIdxOf?, finIdxOf?, findFinIdx?]
  simp [idxAuxOf_toArray]

@[simp, grind =] theorem idxOf?_toArray [BEq α] (a : α) (l : List α) :
    l.toArray.idxOf? a = l.idxOf? a := by
  rw [Array.idxOf?, idxOf?]
  simp [finIdxOf?, findIdx?_eq_map_findFinIdx?_val, Array.size]

@[simp, grind =] theorem findIdx_toArray {as : List α} {p : α → Bool} :
    as.toArray.findIdx p = as.findIdx p := by
  rw [Array.findIdx, findIdx?_toArray, findIdx_eq_getD_findIdx?, Array.size]

@[simp, grind =] theorem idxOf_toArray [BEq α] {as : List α} {a : α} :
    as.toArray.idxOf a = as.idxOf a := by
  rw [Array.idxOf, findIdx_toArray, idxOf]

theorem isPrefixOfAux_toArray_succ [BEq α] (l₁ l₂ : List α) (hle : l₁.length ≤ l₂.length) (i : Nat) :
    Array.isPrefixOfAux l₁.toArray l₂.toArray hle (i + 1) =
      Array.isPrefixOfAux l₁.tail.toArray l₂.tail.toArray (by simp; omega) i := by
  rw [Array.isPrefixOfAux]
  conv => rhs; rw [Array.isPrefixOfAux]
  simp only [size_toArray, getElem_toArray, Bool.if_false_right, length_tail, getElem_tail]
  split <;> rename_i h₁ <;> split <;> rename_i h₂
  · rw [isPrefixOfAux_toArray_succ]
  · omega
  · omega
  · rfl

theorem isPrefixOfAux_toArray_succ' [BEq α] (l₁ l₂ : List α) (hle : l₁.length ≤ l₂.length) (i : Nat) :
    Array.isPrefixOfAux l₁.toArray l₂.toArray hle (i + 1) =
      Array.isPrefixOfAux (l₁.drop (i+1)).toArray (l₂.drop (i+1)).toArray (by simp; omega) 0 := by
  induction i generalizing l₁ l₂ with
  | zero => simp [isPrefixOfAux_toArray_succ]
  | succ i ih =>
    rw [isPrefixOfAux_toArray_succ, ih]
    simp

theorem isPrefixOfAux_toArray_zero [BEq α] (l₁ l₂ : List α) (hle : l₁.length ≤ l₂.length) :
    Array.isPrefixOfAux l₁.toArray l₂.toArray hle 0 =
      l₁.isPrefixOf l₂ := by
  rw [Array.isPrefixOfAux]
  match l₁, l₂ with
  | [], _ => rw [dif_neg] <;> simp
  | _::_, [] => simp at hle
  | a::l₁, b::l₂ =>
    simp [isPrefixOf_cons₂, isPrefixOfAux_toArray_succ', isPrefixOfAux_toArray_zero]

@[simp, grind =] theorem isPrefixOf_toArray [BEq α] (l₁ l₂ : List α) :
    l₁.toArray.isPrefixOf l₂.toArray = l₁.isPrefixOf l₂ := by
  rw [Array.isPrefixOf]
  split <;> rename_i h
  · simp [isPrefixOfAux_toArray_zero]
  · simp only [Bool.false_eq]
    induction l₁ generalizing l₂ with
    | nil => simp at h
    | cons a l₁ ih =>
      cases l₂ with
      | nil => simp
      | cons b l₂ =>
        simp only [isPrefixOf_cons₂, Bool.and_eq_false_imp]
        intro w
        rw [ih]
        simp_all

theorem zipWithMAux_toArray_succ {m : Type u → Type v} [Monad m] (as : List α) (bs : List β) (f : α → β → m γ) (i : Nat) (xs : Array γ) :
    zipWithMAux as.toArray bs.toArray f (i + 1) xs = zipWithMAux as.tail.toArray bs.tail.toArray f i xs := by
  rw [zipWithMAux]
  conv => rhs; rw [zipWithMAux]
  simp only [size_toArray, getElem_toArray, length_tail, getElem_tail]
  split <;> rename_i h₁
  · split <;> rename_i h₂
    · rw [dif_pos (by omega), dif_pos (by omega)]
      simp only [zipWithMAux_toArray_succ as bs f (i+1)]
    · rw [dif_pos (by omega)]
      rw [dif_neg (by omega)]
  · rw [dif_neg (by omega)]

theorem zipWithMAux_toArray_succ' {m : Type u → Type v} [Monad m] (as : List α) (bs : List β) (f : α → β → m γ) (i : Nat) (xs : Array γ) :
    zipWithMAux as.toArray bs.toArray f (i + 1) xs = zipWithMAux (as.drop (i+1)).toArray (bs.drop (i+1)).toArray f 0 xs := by
  induction i generalizing as bs xs with
  | zero => simp [zipWithMAux_toArray_succ]
  | succ i ih =>
    rw [zipWithMAux_toArray_succ, ih]
    simp

theorem zipWithMAux_toArray_zero {m : Type u → Type v} [Monad m] [LawfulMonad m] (f : α → β → m γ) (as : List α) (bs : List β) (xs : Array γ) :
    zipWithMAux as.toArray bs.toArray f 0 xs = do return xs ++ (← List.zipWithM f as bs).toArray := by
  rw [Array.zipWithMAux]
  match as, bs with
  | [], _ => simp
  | _, [] => simp
  | a :: as, b :: bs =>
    simp [zipWithMAux_toArray_succ', zipWithMAux_toArray_zero, push_append_toArray]

@[simp, grind =] theorem zipWith_toArray (as : List α) (bs : List β) (f : α → β → γ) :
    Array.zipWith f as.toArray bs.toArray = (List.zipWith f as bs).toArray := by
  rw [Array.zipWith]
  simp [zipWithMAux_toArray_zero, ← zipWithM'_eq_zipWithM]

@[simp, grind =] theorem zip_toArray (as : List α) (bs : List β) :
    Array.zip as.toArray bs.toArray = (List.zip as bs).toArray := by
  simp [Array.zip, zipWith_toArray, zip]

theorem zipWithAll_go_toArray (as : List α) (bs : List β) (f : Option α → Option β → γ) (i : Nat) (xs : Array γ) :
    zipWithAll.go f as.toArray bs.toArray i xs = xs ++ (List.zipWithAll f (as.drop i) (bs.drop i)).toArray := by
  unfold zipWithAll.go
  split <;> rename_i h
  · rw [zipWithAll_go_toArray]
    simp at h
    simp only [getElem?_toArray, push_append_toArray]
    if ha : i < as.length then
      if hb : i < bs.length then
        rw [List.drop_eq_getElem_cons ha, List.drop_eq_getElem_cons hb]
        simp only [ha, hb, getElem?_eq_getElem, zipWithAll_cons_cons]
      else
        simp only [Nat.not_lt] at hb
        rw [List.drop_eq_getElem_cons ha]
        rw [(drop_eq_nil_iff (l := bs)).mpr (by omega), (drop_eq_nil_iff (l := bs)).mpr (by omega)]
        simp only [zipWithAll_nil, map_drop, map_cons]
        rw [getElem?_eq_getElem ha]
        rw [getElem?_eq_none hb]
    else
      if hb : i < bs.length then
        simp only [Nat.not_lt] at ha
        rw [List.drop_eq_getElem_cons hb]
        rw [(drop_eq_nil_iff (l := as)).mpr (by omega), (drop_eq_nil_iff (l := as)).mpr (by omega)]
        simp only [nil_zipWithAll, map_drop, map_cons]
        rw [getElem?_eq_getElem hb]
        rw [getElem?_eq_none ha]
      else
        omega
  · simp only [size_toArray, Nat.not_lt] at h
    rw [drop_eq_nil_of_le (by omega), drop_eq_nil_of_le (by omega)]
    simp
  termination_by max as.length bs.length - i
  decreasing_by simp_wf; decreasing_trivial_pre_omega

@[simp, grind =] theorem zipWithAll_toArray (f : Option α → Option β → γ) (as : List α) (bs : List β) :
    Array.zipWithAll f as.toArray bs.toArray = (List.zipWithAll f as bs).toArray := by
  simp [Array.zipWithAll, zipWithAll_go_toArray]

@[simp, grind =] theorem zipWithM_toArray {m : Type u → Type v} [Monad m] [LawfulMonad m] (f : α → β → m γ) (as : List α) (bs : List β) :
    Array.zipWithM f as.toArray bs.toArray = do return (← List.zipWithM f as bs).toArray := by
  rw [Array.zipWithM]
  simp [zipWithMAux_toArray_zero]

@[simp, grind =] theorem toArray_appendList (l₁ l₂ : List α) :
    l₁.toArray ++ l₂ = (l₁ ++ l₂).toArray := by
  apply ext'
  simp

@[simp, grind =] theorem pop_toArray (l : List α) : l.toArray.pop = l.dropLast.toArray := by
  apply ext'
  simp

theorem takeWhile_go_succ (p : α → Bool) (a : α) (l : List α) (i : Nat) :
    takeWhile.go p (a :: l).toArray (i+1) r = takeWhile.go p l.toArray i r := by
  rw [takeWhile.go, takeWhile.go]
  simp only [size_toArray, length_cons, Nat.add_lt_add_iff_right,
    getElem_toArray, getElem_cons_succ]
  split
  rw [takeWhile_go_succ]
  rfl

theorem takeWhile_go_toArray (p : α → Bool) (l : List α) (i : Nat) :
    Array.takeWhile.go p l.toArray i r = r ++ (takeWhile p (l.drop i)).toArray := by
  induction l generalizing i r with
  | nil => simp [takeWhile.go]
  | cons a l ih =>
    rw [takeWhile.go]
    cases i with
    | zero =>
      simp [takeWhile_go_succ, ih, takeWhile_cons]
      split <;> simp
    | succ i =>
      simp only [size_toArray, length_cons, Nat.add_lt_add_iff_right,
        getElem_toArray, getElem_cons_succ, drop_succ_cons]
      split <;> rename_i h₁
      · rw [takeWhile_go_succ, ih]
        rw [← getElem_cons_drop_succ_eq_drop h₁, takeWhile_cons]
        split <;> simp_all
      · simp_all [drop_eq_nil_of_le]

@[simp, grind =] theorem takeWhile_toArray (p : α → Bool) (l : List α) :
    l.toArray.takeWhile p = (l.takeWhile p).toArray := by
  simp [Array.takeWhile, takeWhile_go_toArray]

private theorem popWhile_toArray_aux (p : α → Bool) (l : List α) :
    l.reverse.toArray.popWhile p = (l.dropWhile p).reverse.toArray := by
  induction l with
  | nil => simp
  | cons a l ih =>
    unfold popWhile
    simp [ih, dropWhile_cons]
    split
    · rfl
    · simp

@[simp, grind =] theorem popWhile_toArray (p : α → Bool) (l : List α) :
    l.toArray.popWhile p = (l.reverse.dropWhile p).reverse.toArray := by
  simp [← popWhile_toArray_aux]

@[simp, grind =] theorem setIfInBounds_toArray (l : List α) (i : Nat) (a : α) :
    l.toArray.setIfInBounds i a  = (l.set i a).toArray := by
  apply ext'
  simp only [setIfInBounds]
  split
  · simp
  · simp_all [List.set_eq_of_length_le]

@[simp, grind =] theorem toArray_replicate (n : Nat) (v : α) :
    (List.replicate n v).toArray = Array.replicate n v := rfl

theorem _root_.Array.replicate_eq_toArray_replicate :
    Array.replicate n v = (List.replicate n v).toArray := by
  simp

@[deprecated _root_.Array.replicate_eq_toArray_replicate (since := "2025-03-18")]
abbrev _root_.Array.mkArray_eq_toArray_replicate := @_root_.Array.replicate_eq_toArray_replicate

@[simp, grind =] theorem flatMap_empty {β} (f : α → Array β) : (#[] : Array α).flatMap f = #[] := rfl

theorem flatMap_toArray_cons {β} (f : α → Array β) (a : α) (as : List α) :
    (a :: as).toArray.flatMap f = f a ++ as.toArray.flatMap f := by
  simp [Array.flatMap]
  suffices ∀ xs, List.foldl (fun ys a => ys ++ f a) (f a ++ xs) as =
      f a ++ List.foldl (fun ys a => ys ++ f a) xs as by
    erw [empty_append] -- Why doesn't this work via `simp`?
    simpa using this #[]
  intro xs
  induction as generalizing xs <;> simp_all

@[simp, grind =] theorem flatMap_toArray {β} (f : α → Array β) (as : List α) :
    as.toArray.flatMap f = (as.flatMap (fun a => (f a).toList)).toArray := by
  induction as with
  | nil => simp
  | cons a as ih =>
    apply ext'
    simp [ih, flatMap_toArray_cons]

@[simp, grind =] theorem swap_toArray (l : List α) (i j : Nat) {hi hj}:
    l.toArray.swap i j hi hj = ((l.set i l[j]).set j l[i]).toArray := by
  apply ext'
  simp

@[simp, grind =] theorem eraseIdx_toArray (l : List α) (i : Nat) (h : i < l.toArray.size) :
    l.toArray.eraseIdx i h = (l.eraseIdx i).toArray := by
  rw [Array.eraseIdx]
  split <;> rename_i h'
  · rw [eraseIdx_toArray]
    simp only [swap_toArray, toList_toArray, mk.injEq]
    rw [eraseIdx_set_gt (by simp), eraseIdx_set_eq]
    simp
  · simp at h h'
    have t : i = l.length - 1 := by omega
    simp [t]
termination_by l.length - i
decreasing_by
  rename_i h
  simp at h
  simp
  omega

@[simp, grind =] theorem eraseIdxIfInBounds_toArray (l : List α) (i : Nat) :
    l.toArray.eraseIdxIfInBounds i = (l.eraseIdx i).toArray := by
  rw [Array.eraseIdxIfInBounds]
  split
  · simp
  · simp_all [eraseIdx_eq_self.2]

@[simp, grind =] theorem eraseP_toArray {as : List α} {p : α → Bool} :
    as.toArray.eraseP p = (as.eraseP p).toArray := by
  rw [Array.eraseP, List.eraseP_eq_eraseIdx, findFinIdx?_toArray]
  split <;> simp [*, findIdx?_eq_map_findFinIdx?_val]

@[simp, grind =] theorem erase_toArray [BEq α] {as : List α} {a : α} :
    as.toArray.erase a = (as.erase a).toArray := by
  rw [Array.erase, finIdxOf?_toArray, List.erase_eq_eraseIdx]
  rw [idxOf?_eq_map_finIdxOf?_val]
  split <;> simp_all

private theorem insertIdx_loop_toArray (i : Nat) (l : List α) (j : Nat) (hj : j < l.toArray.size) (h : i ≤ j) :
    insertIdx.loop i l.toArray ⟨j, hj⟩ = (l.take i ++ l[j] :: (l.take j).drop i ++ l.drop (j + 1)).toArray := by
  rw [insertIdx.loop]
  simp only [size_toArray] at hj
  split <;> rename_i h'
  · simp only at h'
    have w : j - 1 + 1 = j := by omega
    simp only [append_assoc, cons_append]
    rw [insertIdx_loop_toArray _ _ _ _ (by omega)]
    simp only [swap_toArray, w, append_assoc, cons_append, mk.injEq]
    rw [take_set_of_le (by omega), drop_eq_getElem_cons (i := j) (by simpa), getElem_set_self,
      drop_set_of_lt (by omega), drop_set_of_lt (by omega), getElem_set_ne (by omega),
      getElem_set_self, take_set_of_le (j := j - 1) (by omega),
      take_set_of_le (j := j - 1) (by omega), take_eq_append_getElem_of_pos (by omega) hj,
      drop_append_of_le_length (by simp; omega)]
    simp only [append_assoc, cons_append, nil_append, append_cancel_right_eq]
    cases i with
    | zero => simp
    | succ i => rw [take_set_of_le (by omega)]
  · simp only [Nat.not_lt] at h'
    have : i = j := by omega
    subst this
    simp

@[simp, grind =] theorem insertIdx_toArray (l : List α) (i : Nat) (a : α) (h : i ≤ l.toArray.size):
    l.toArray.insertIdx i a = (l.insertIdx i a).toArray := by
  rw [Array.insertIdx]
  rw [insertIdx_loop_toArray (h := h)]
  ext j h₁ h₂
  · simp at h
    simp [length_insertIdx, h]
    omega
  · simp [length_insertIdx] at h₁ h₂
    simp [getElem_insertIdx]
    split <;> rename_i h₃
    · rw [getElem_append_left (by simp; split at h₂ <;> omega)]
      simp only [getElem_take]
      rw [getElem_append_left]
    · rw [getElem_append_right (by simp; omega)]
      rw [getElem_cons]
      simp
      split <;> rename_i h₄
      · rw [dif_pos (by omega)]
      · rw [dif_neg (by omega)]
        congr
        omega

@[simp, grind =] theorem insertIdxIfInBounds_toArray (l : List α) (i : Nat) (a : α) :
    l.toArray.insertIdxIfInBounds i a = (l.insertIdx i a).toArray := by
  rw [Array.insertIdxIfInBounds]
  split <;> rename_i h'
  · simp
  · simp only [size_toArray, Nat.not_le] at h'
    rw [List.insertIdx_of_length_lt (h := h')]

@[simp, grind =]
theorem replace_toArray [BEq α] [LawfulBEq α] (l : List α) (a b : α) :
    l.toArray.replace a b = (l.replace a b).toArray := by
  rw [Array.replace]
  split <;> rename_i i h
  · simp only [finIdxOf?_toArray] at h
    rw [replace_of_not_mem]
    exact finIdxOf?_eq_none_iff.mp h
  · simp_all only [finIdxOf?_toArray, finIdxOf?_eq_some_iff, Fin.getElem_fin, set_toArray,
      mk.injEq, Array.size]
    apply List.ext_getElem
    · simp
    · intro j h₁ h₂
      rw [List.getElem_replace, List.getElem_set]
      by_cases h₃ : j < i
      · rw [if_neg (by omega), if_neg]
        simp only [length_set] at h₁ h₃
        simpa using h.2 ⟨j, by omega⟩ h₃
      · by_cases h₃ : j = i
        · rw [if_pos (by omega), if_pos, if_neg]
          · simp only [mem_take_iff_getElem, not_exists]
            intro k hk
            simpa using h.2 ⟨k, by omega⟩ (by change k < i.1; omega)
          · subst h₃
            simpa using h.1
        · rw [if_neg (by omega)]
          split
          · rw [if_pos]
            · simp_all
            · simp only [mem_take_iff_getElem]
              simp only [length_set] at h₁
              exact ⟨i, by omega, h.1⟩
          · rfl

@[simp, grind =] theorem leftpad_toArray (n : Nat) (a : α) (l : List α) :
    Array.leftpad n a l.toArray = (leftpad n a l).toArray := by
  simp [leftpad, Array.leftpad, ← toArray_replicate]

@[simp, grind =] theorem rightpad_toArray (n : Nat) (a : α) (l : List α) :
    Array.rightpad n a l.toArray = (rightpad n a l).toArray := by
  simp [rightpad, Array.rightpad, ← toArray_replicate]

end List
