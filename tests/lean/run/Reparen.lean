import Lean.Parser
/-! Reprint file after removing all parentheses and then passing it through the parenthesizer -/

open Lean
open Std.Format open Std

def unparenAux (parens body : Syntax) : Syntax :=
match parens.getHeadInfo, body.getHeadInfo, body.getTailInfo, parens.getTailInfo with
| SourceInfo.original lead _ _ _, SourceInfo.original _ pos trail pos',
  SourceInfo.original endLead endPos _ endPos', SourceInfo.original _ _ endTrail _ =>
    body.setHeadInfo (SourceInfo.original lead pos trail pos') |>.setTailInfo (SourceInfo.original endLead endPos endTrail endPos')
| _, _, _, _ => body

partial def unparen : Syntax → Syntax
-- don't remove parentheses in syntax quotations, they might be semantically significant
| stx => if stx.isOfKind `Lean.Parser.Term.stxQuot then stx
  else match stx with
  | `(($stx')) => unparenAux stx $ unparen stx'
  | `(level|($stx')) => unparenAux stx $ unparen stx'
  | _ => stx.modifyArgs $ Array.map unparen

def clearHygieneInfo (stx : Syntax) : Syntax :=
  Id.run <| stx.replaceM fun s => do
    if s.isOfKind hygieneInfoKind then
      return some <| s.setArg 0 (mkIdent .anonymous)
    else
      return none

unsafe def main (args : List String) : IO Unit := do
let (debug, f) : Bool × String := match args with
  | [f, "-d"] => (true, f)
  | [f]       => (false, f)
  | _         => panic! "usage: file [-d]";
let env ← mkEmptyEnvironment;
let stx ← Lean.Parser.testParseFile env args.head!;
let header := stx.raw.getArg 0;
let some s ← pure header.reprint | throw $ IO.userError "header reprint failed";
IO.print s;
let cmds := (stx.raw.getArg 1).getArgs;
cmds.forM $ fun cmd => do
  let cmd := unparen cmd;
  let (cmd, _) ← (tryFinally (PrettyPrinter.parenthesizeCommand cmd) printTraces).toIO { options := Options.empty.setBool `trace.PrettyPrinter.parenthesize debug, fileName := "", fileMap := default } { env := env };
  let some s ← pure cmd.reprint | throw $ IO.userError "cmd reprint failed";
  IO.print s

#eval main ["../../../src/Init/Prelude.lean"]

def check (stx : Syntax) : CoreM Unit := do
let stx' := unparen stx;
let stx' ← clearHygieneInfo <$> PrettyPrinter.parenthesizeTerm stx';
let f ← PrettyPrinter.formatTerm stx';
IO.println f;
if (clearHygieneInfo stx != stx') then
  throwError "reparenthesization failed"

open Lean

syntax:80 term " ^~ " term:80 : term
syntax:70 term " *~ " term:71 : term

/-- info: ((1 + 2) *~ 3) ^~ 4 -/
#guard_msgs in
#eval check $ Unhygienic.run `(((1 + 2) *~ 3) ^~ 4)

/-- info: opaque foo.1 (a.1 := (by exact 1)) : True.1 -/
#guard_msgs in
#eval check $ Unhygienic.run `(opaque foo (a := (by exact 1)) : True)
