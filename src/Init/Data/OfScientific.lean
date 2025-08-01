/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Init.Meta
public import Init.Data.Float
public import Init.Data.Float32
public import Init.Data.Nat.Log2

public section

/-- For decimal and scientific numbers (e.g., `1.23`, `3.12e10`).
   Examples:
   - `1.23` is syntax for `OfScientific.ofScientific (nat_lit 123) true (nat_lit 2)`
   - `121e100` is syntax for `OfScientific.ofScientific (nat_lit 121) false (nat_lit 100)`

   Note the use of `nat_lit`; there is no wrapping `OfNat.ofNat` in the resulting term.
-/
class OfScientific (α : Type u) where
  /--
  Produces a value from the given mantissa, exponent sign, and decimal exponent. For the exponent
  sign, `true` indicates a negative exponent.

   Examples:
   - `1.23` is syntax for `OfScientific.ofScientific (nat_lit 123) true (nat_lit 2)`
   - `121e100` is syntax for `OfScientific.ofScientific (nat_lit 121) false (nat_lit 100)`

   Note the use of `nat_lit`; there is no wrapping `OfNat.ofNat` in the resulting term.
  -/
  ofScientific (mantissa : Nat) (exponentSign : Bool) (decimalExponent : Nat) : α

/-- Computes `m * 2^e`. -/
def Float.ofBinaryScientific (m : Nat) (e : Int) : Float :=
  let s := m.log2 - 63
  let m := (m >>> s).toUInt64
  let e := e + s
  m.toFloat.scaleB e

/--
Constructs a `Float` from the given mantissa, sign, and exponent values.

This function is part of the implementation of the `OfScientific Float` instance that is used to
interpret floating-point literals.
-/
protected opaque Float.ofScientific (m : Nat) (s : Bool) (e : Nat) : Float :=
  if s then
    let s := 64 - m.log2 -- ensure we have 64 bits of mantissa left after division
    let m := (m <<< (3 * e + s)) / 5^e
    Float.ofBinaryScientific m (-4 * e - s)
  else
    Float.ofBinaryScientific (m * 5^e) e

/--
  The `OfScientific Float` must have priority higher than `mid` since
  the default instance `Neg Int` has `mid` priority.
  ```
  #check -42.0 -- must be Float
  ```
-/
@[default_instance mid+1]
instance : OfScientific Float where
  ofScientific := Float.ofScientific

/--
Converts a natural number into the closest-possible 64-bit floating-point number, or an infinite
floating-point value if the range of `Float` is exceeded.
-/
@[export lean_float_of_nat]
def Float.ofNat (n : Nat) : Float :=
  OfScientific.ofScientific n false 0

/--
Converts an integer into the closest-possible 64-bit floating-point number, or positive or negative
infinite floating-point value if the range of `Float` is exceeded.
-/
def Float.ofInt : Int → Float
  | Int.ofNat n => Float.ofNat n
  | Int.negSucc n => Float.neg (Float.ofNat (Nat.succ n))

instance : OfNat Float n   := ⟨Float.ofNat n⟩

@[inherit_doc Float.ofNat] abbrev Nat.toFloat (n : Nat) : Float :=
  Float.ofNat n

/-- Computes `m * 2^e`. -/
def Float32.ofBinaryScientific (m : Nat) (e : Int) : Float32 :=
  let s := m.log2 - 63
  let m := (m >>> s).toUInt64
  let e := e + s
  m.toFloat32.scaleB e

/--
Constructs a `Float32` from the given mantissa, sign, and exponent values.

This function is part of the implementation of the `OfScientific Float32` instance that is used to
interpret floating-point literals.
-/
protected opaque Float32.ofScientific (m : Nat) (s : Bool) (e : Nat) : Float32 :=
  if s then
    let s := 64 - m.log2 -- ensure we have 64 bits of mantissa left after division
    let m := (m <<< (3 * e + s)) / 5^e
    Float32.ofBinaryScientific m (-4 * e - s)
  else
    Float32.ofBinaryScientific (m * 5^e) e

instance : OfScientific Float32 where
  ofScientific := Float32.ofScientific

/--
Converts a natural number into the closest-possible 32-bit floating-point number, or an infinite
floating-point value if the range of `Float32` is exceeded.
-/
@[export lean_float32_of_nat]
def Float32.ofNat (n : Nat) : Float32 :=
  OfScientific.ofScientific n false 0

/--
Converts an integer into the closest-possible 32-bit floating-point number, or positive or negative
infinite floating-point value if the range of `Float32` is exceeded.
-/
def Float32.ofInt : Int → Float32
  | Int.ofNat n => Float32.ofNat n
  | Int.negSucc n => Float32.neg (Float32.ofNat (Nat.succ n))

instance : OfNat Float32 n   := ⟨Float32.ofNat n⟩

@[inherit_doc Float32.ofNat] abbrev Nat.toFloat32 (n : Nat) : Float32 :=
  Float32.ofNat n
