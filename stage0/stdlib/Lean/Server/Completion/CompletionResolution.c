// Lean compiler output
// Module: Lean.Server.Completion.CompletionResolution
// Imports: Lean.Server.Completion.CompletionItemData Lean.Server.Completion.CompletionInfoSelection Lean.Linter.Deprecated
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420____spec__1(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__8;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__8;
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__17;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_3091_(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__1;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__13;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__1;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__5;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__6;
lean_object* l_Lean_findDocString_x3f(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__11;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__4;
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__3;
static lean_object* l_Lean_Lsp_instToJsonResolvableCompletionItemData___closed__1;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__19;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_instFromJsonResolvableCompletionItemData___closed__1;
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__2(lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__7;
extern lean_object* l_Lean_instInhabitedJson;
lean_object* l_Lean_Server_Completion_findCompletionInfosAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____lambda__1___boxed(lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__5;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__5;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_resolveCompletionItem_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420_(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedDeprecationEntry;
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__3___rarg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__15;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2;
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__20;
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_instFromJsonCompletionIdentifier___closed__1;
lean_object* l_Lean_Elab_CompletionInfo_lctx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonResolvableCompletionItemData;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__12;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Position_0__Lean_fromJsonPosition____x40_Lean_Data_Position___hyg_294____spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonCompletionIdentifier;
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__7;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__1;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__10;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__14;
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____lambda__1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__2;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31_(lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__3;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__22;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__23;
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165_(lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_CompletionItem_resolve___closed__1;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3;
extern lean_object* l_Lean_Linter_deprecatedAttr;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_parseTagged(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__21;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_addParenHeuristic(lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__9;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__6;
lean_object* l_Lean_ParametricAttribute_getParam_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__4;
static lean_object* l_Option_fromJson_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__2___closed__1;
lean_object* l_Lean_LocalDecl_type(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___boxed(lean_object*);
lean_object* l_Except_orElseLazy___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__3;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__1;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__2;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__4;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__4;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__2;
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Completion_CompletionItemData_0__Lean_Lsp_fromJsonCompletionItemData____x40_Lean_Server_Completion_CompletionItemData___hyg_19____spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonResolvableCompletionItemData;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__5;
lean_object* l_List_flatMapTR_go___at___private_Lean_Data_Lsp_Window_0__toJsonShowMessageParams____x40_Lean_Data_Lsp_Window___hyg_250____spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_resolveCompletionItem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_instToJsonCompletionIdentifier___closed__1;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275_(lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__16;
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420____closed__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonCompletionIdentifier;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(uint8_t, uint8_t);
static lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__18;
static lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__6;
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__2(lean_object*);
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("no inductive constructor matched", 32, 32);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__2;
return x_2;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("declName", 8, 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("const", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__2;
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
x_6 = lean_array_mk(x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__3;
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Json_parseTagged(x_2, x_8, x_9, x_7);
lean_dec(x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4;
x_13 = l_Except_orElseLazy___rarg(x_10, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4;
x_17 = l_Except_orElseLazy___rarg(x_15, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
lean_dec(x_10);
x_19 = l_Lean_instInhabitedJson;
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_array_get(x_19, x_18, x_20);
lean_dec(x_18);
x_22 = l_Lean_Name_fromJson_x3f(x_21);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4;
x_25 = l_Except_orElseLazy___rarg(x_22, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_22, 0);
lean_inc(x_26);
lean_dec(x_22);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4;
x_29 = l_Except_orElseLazy___rarg(x_27, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_22);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_22, 0);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_22, 0, x_32);
x_33 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4;
x_34 = l_Except_orElseLazy___rarg(x_22, x_33);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_22, 0);
lean_inc(x_35);
lean_dec(x_22);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4;
x_39 = l_Except_orElseLazy___rarg(x_37, x_38);
return x_39;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("id", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__3;
x_2 = lean_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("fvar", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__6;
x_4 = lean_unsigned_to_nat(1u);
x_5 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__5;
lean_inc(x_1);
x_6 = l_Lean_Json_parseTagged(x_1, x_3, x_4, x_5);
x_7 = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___boxed), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_1);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Except_orElseLazy___rarg(x_6, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = l_Except_orElseLazy___rarg(x_11, x_7);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
lean_dec(x_6);
x_14 = l_Lean_instInhabitedJson;
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_get(x_14, x_13, x_15);
lean_dec(x_13);
x_17 = l_Lean_Name_fromJson_x3f(x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = l_Except_orElseLazy___rarg(x_17, x_7);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Except_orElseLazy___rarg(x_21, x_7);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_17);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_17, 0, x_25);
x_26 = l_Except_orElseLazy___rarg(x_17, x_7);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_17, 0);
lean_inc(x_27);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = l_Except_orElseLazy___rarg(x_29, x_7);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionIdentifier___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31_), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionIdentifier() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_instFromJsonCompletionIdentifier___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165_(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = 1;
x_5 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_6 = l_Lean_Name_toString(x_3, x_4, x_5);
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 0, x_6);
x_7 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__1;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Lean_Json_mkObj(x_10);
x_12 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
x_15 = l_Lean_Json_mkObj(x_14);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = 1;
x_18 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_19 = l_Lean_Name_toString(x_16, x_17, x_18);
x_20 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__1;
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Json_mkObj(x_24);
x_26 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__3;
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_23);
x_29 = l_Lean_Json_mkObj(x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_1);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_31 = lean_ctor_get(x_1, 0);
x_32 = 1;
x_33 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_34 = l_Lean_Name_toString(x_31, x_32, x_33);
lean_ctor_set_tag(x_1, 3);
lean_ctor_set(x_1, 0, x_34);
x_35 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1;
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_1);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_Json_mkObj(x_38);
x_40 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__6;
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_37);
x_43 = l_Lean_Json_mkObj(x_42);
return x_43;
}
else
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
lean_dec(x_1);
x_45 = 1;
x_46 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_47 = l_Lean_Name_toString(x_44, x_45, x_46);
x_48 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1;
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = lean_box(0);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Json_mkObj(x_52);
x_54 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__6;
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_51);
x_57 = l_Lean_Json_mkObj(x_56);
return x_57;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonCompletionIdentifier___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165_), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonCompletionIdentifier() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_instToJsonCompletionIdentifier___closed__1;
return x_1;
}
}
static lean_object* _init_l_Option_fromJson_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__2(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Option_fromJson_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__2___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31_(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_3, 0, x_9);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
default: 
{
lean_object* x_13; uint8_t x_14; 
lean_inc(x_1);
x_13 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31_(x_1);
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_1, 0);
lean_dec(x_15);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_16; 
lean_free_object(x_1);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_13, 0);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_20);
lean_ctor_set(x_13, 0, x_1);
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_13, 0);
lean_inc(x_21);
lean_dec(x_13);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_1);
return x_22;
}
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_13, 0);
lean_inc(x_23);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_24 = x_13;
} else {
 lean_dec_ref(x_13);
 x_24 = lean_box(0);
}
if (lean_is_scalar(x_24)) {
 x_25 = lean_alloc_ctor(0, 1, 0);
} else {
 x_25 = x_24;
}
lean_ctor_set(x_25, 0, x_23);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_13, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_27 = x_13;
} else {
 lean_dec_ref(x_13);
 x_27 = lean_box(0);
}
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_26);
if (lean_is_scalar(x_27)) {
 x_29 = lean_alloc_ctor(1, 1, 0);
} else {
 x_29 = x_27;
}
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = l_Option_fromJson_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__2(x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("params", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lsp", 3, 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ResolvableCompletionItemData", 28, 28);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__2;
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__3;
x_3 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__4;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__6() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__5;
x_2 = 1;
x_3 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_4 = l_Lean_Name_toString(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__6;
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__7;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__10() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__9;
x_2 = 1;
x_3 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_4 = l_Lean_Name_toString(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__8;
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__10;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(": ", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__11;
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__12;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("cPos", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__16() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__15;
x_2 = 1;
x_3 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_4 = l_Lean_Name_toString(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__8;
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__16;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__17;
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__12;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("id\?", 3, 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__19;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__21() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__20;
x_2 = 1;
x_3 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_4 = l_Lean_Name_toString(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__8;
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__21;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__22;
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__12;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__1;
lean_inc(x_1);
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Completion_CompletionItemData_0__Lean_Lsp_fromJsonCompletionItemData____x40_Lean_Server_Completion_CompletionItemData___hyg_19____spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__13;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__13;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__14;
lean_inc(x_1);
x_14 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Position_0__Lean_fromJsonPosition____x40_Lean_Data_Position___hyg_294____spec__1(x_1, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_12);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__18;
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__18;
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
lean_dec(x_14);
x_24 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1;
x_25 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__1(x_1, x_24);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_23);
lean_dec(x_12);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__23;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_29);
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_25, 0);
lean_inc(x_30);
lean_dec(x_25);
x_31 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__23;
x_32 = lean_string_append(x_31, x_30);
lean_dec(x_30);
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_25);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_25, 0);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_12);
lean_ctor_set(x_36, 1, x_23);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_25, 0, x_36);
return x_25;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_25, 0);
lean_inc(x_37);
lean_dec(x_25);
x_38 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_38, 0, x_12);
lean_ctor_set(x_38, 1, x_23);
lean_ctor_set(x_38, 2, x_37);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolvableCompletionItemData___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275_), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonResolvableCompletionItemData() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_instFromJsonResolvableCompletionItemData___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165_(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_3091_(x_2);
x_4 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = l_Lean_JsonNumber_fromNat(x_8);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__14;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
lean_dec(x_1);
x_15 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1;
x_16 = l_Lean_Json_opt___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420____spec__1(x_15, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_6);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_7);
lean_ctor_set(x_19, 1, x_18);
x_20 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420____closed__1;
x_21 = l_List_flatMapTR_go___at___private_Lean_Data_Lsp_Window_0__toJsonShowMessageParams____x40_Lean_Data_Lsp_Window___hyg_250____spec__1(x_19, x_20);
x_22 = l_Lean_Json_mkObj(x_21);
return x_22;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonResolvableCompletionItemData___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420_), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonResolvableCompletionItemData() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_instToJsonResolvableCompletionItemData___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_expr_instantiate1(x_1, x_3);
x_10 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg(x_9, x_2, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 8);
x_12 = 1;
x_13 = l_Lean_beqBinderInfo____x40_Lean_Expr___hyg_413_(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_14 = lean_apply_6(x_2, x_1, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
lean_dec(x_1);
x_15 = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg___lambda__1___boxed), 8, 2);
lean_closure_set(x_15, 0, x_10);
lean_closure_set(x_15, 1, x_2);
x_16 = 0;
x_17 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_addPPExplicitToExposeDiff_visit___spec__3___rarg(x_8, x_11, x_9, x_15, x_16, x_3, x_4, x_5, x_6, x_7);
return x_17;
}
}
else
{
lean_object* x_18; 
x_18 = lean_apply_6(x_2, x_1, x_3, x_4, x_5, x_6, x_7);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__2(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_2 = 1;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_resolve___lambda__2), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("none", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2;
x_2 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__3;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n\n", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__4;
x_2 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__5;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(some ", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__1;
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_3, 2);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set(x_3, 2, x_13);
x_14 = lean_box(0);
x_15 = lean_apply_7(x_2, x_3, x_14, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_3, 0);
x_17 = lean_ctor_get(x_3, 1);
x_18 = lean_ctor_get(x_3, 3);
x_19 = lean_ctor_get(x_3, 4);
x_20 = lean_ctor_get(x_3, 5);
x_21 = lean_ctor_get(x_3, 6);
x_22 = lean_ctor_get(x_3, 7);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_3);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_17);
lean_ctor_set(x_24, 2, x_23);
lean_ctor_set(x_24, 3, x_18);
lean_ctor_set(x_24, 4, x_19);
lean_ctor_set(x_24, 5, x_20);
lean_ctor_set(x_24, 6, x_21);
lean_ctor_set(x_24, 7, x_22);
x_25 = lean_box(0);
x_26 = lean_apply_7(x_2, x_24, x_25, x_5, x_6, x_7, x_8, x_9);
return x_26;
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_3);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_3, 2);
lean_dec(x_28);
x_29 = lean_ctor_get(x_4, 0);
lean_inc(x_29);
lean_dec(x_4);
x_30 = lean_apply_1(x_10, x_29);
lean_ctor_set(x_3, 2, x_30);
x_31 = lean_box(0);
x_32 = lean_apply_7(x_2, x_3, x_31, x_5, x_6, x_7, x_8, x_9);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_33 = lean_ctor_get(x_3, 0);
x_34 = lean_ctor_get(x_3, 1);
x_35 = lean_ctor_get(x_3, 3);
x_36 = lean_ctor_get(x_3, 4);
x_37 = lean_ctor_get(x_3, 5);
x_38 = lean_ctor_get(x_3, 6);
x_39 = lean_ctor_get(x_3, 7);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_3);
x_40 = lean_ctor_get(x_4, 0);
lean_inc(x_40);
lean_dec(x_4);
x_41 = lean_apply_1(x_10, x_40);
x_42 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_42, 0, x_33);
lean_ctor_set(x_42, 1, x_34);
lean_ctor_set(x_42, 2, x_41);
lean_ctor_set(x_42, 3, x_35);
lean_ctor_set(x_42, 4, x_36);
lean_ctor_set(x_42, 5, x_37);
lean_ctor_set(x_42, 6, x_38);
lean_ctor_set(x_42, 7, x_39);
x_43 = lean_box(0);
x_44 = lean_apply_7(x_2, x_42, x_43, x_5, x_6, x_7, x_8, x_9);
return x_44;
}
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
lean_dec(x_1);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_3);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_3, 2);
lean_dec(x_47);
x_48 = lean_box(0);
lean_ctor_set(x_3, 2, x_48);
x_49 = lean_box(0);
x_50 = lean_apply_7(x_2, x_3, x_49, x_5, x_6, x_7, x_8, x_9);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_51 = lean_ctor_get(x_3, 0);
x_52 = lean_ctor_get(x_3, 1);
x_53 = lean_ctor_get(x_3, 3);
x_54 = lean_ctor_get(x_3, 4);
x_55 = lean_ctor_get(x_3, 5);
x_56 = lean_ctor_get(x_3, 6);
x_57 = lean_ctor_get(x_3, 7);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_3);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_59, 0, x_51);
lean_ctor_set(x_59, 1, x_52);
lean_ctor_set(x_59, 2, x_58);
lean_ctor_set(x_59, 3, x_53);
lean_ctor_set(x_59, 4, x_54);
lean_ctor_set(x_59, 5, x_55);
lean_ctor_set(x_59, 6, x_56);
lean_ctor_set(x_59, 7, x_57);
x_60 = lean_box(0);
x_61 = lean_apply_7(x_2, x_59, x_60, x_5, x_6, x_7, x_8, x_9);
return x_61;
}
}
else
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_3);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_ctor_get(x_3, 2);
lean_dec(x_63);
x_64 = lean_ctor_get(x_45, 0);
lean_inc(x_64);
lean_dec(x_45);
x_65 = lean_apply_1(x_10, x_64);
lean_ctor_set(x_3, 2, x_65);
x_66 = lean_box(0);
x_67 = lean_apply_7(x_2, x_3, x_66, x_5, x_6, x_7, x_8, x_9);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_68 = lean_ctor_get(x_3, 0);
x_69 = lean_ctor_get(x_3, 1);
x_70 = lean_ctor_get(x_3, 3);
x_71 = lean_ctor_get(x_3, 4);
x_72 = lean_ctor_get(x_3, 5);
x_73 = lean_ctor_get(x_3, 6);
x_74 = lean_ctor_get(x_3, 7);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_3);
x_75 = lean_ctor_get(x_45, 0);
lean_inc(x_75);
lean_dec(x_45);
x_76 = lean_apply_1(x_10, x_75);
x_77 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_77, 0, x_68);
lean_ctor_set(x_77, 1, x_69);
lean_ctor_set(x_77, 2, x_76);
lean_ctor_set(x_77, 3, x_70);
lean_ctor_set(x_77, 4, x_71);
lean_ctor_set(x_77, 5, x_72);
lean_ctor_set(x_77, 6, x_73);
lean_ctor_set(x_77, 7, x_74);
x_78 = lean_box(0);
x_79 = lean_apply_7(x_2, x_77, x_78, x_5, x_6, x_7, x_8, x_9);
return x_79;
}
}
}
else
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_1, 0);
lean_inc(x_80);
lean_dec(x_1);
if (lean_obj_tag(x_80) == 0)
{
uint8_t x_81; 
x_81 = !lean_is_exclusive(x_3);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_82 = lean_ctor_get(x_3, 2);
lean_dec(x_82);
x_83 = lean_ctor_get(x_4, 0);
lean_inc(x_83);
lean_dec(x_4);
x_84 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__6;
x_85 = lean_string_append(x_84, x_83);
lean_dec(x_83);
x_86 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2;
x_87 = lean_string_append(x_85, x_86);
x_88 = lean_apply_1(x_10, x_87);
lean_ctor_set(x_3, 2, x_88);
x_89 = lean_box(0);
x_90 = lean_apply_7(x_2, x_3, x_89, x_5, x_6, x_7, x_8, x_9);
return x_90;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_91 = lean_ctor_get(x_3, 0);
x_92 = lean_ctor_get(x_3, 1);
x_93 = lean_ctor_get(x_3, 3);
x_94 = lean_ctor_get(x_3, 4);
x_95 = lean_ctor_get(x_3, 5);
x_96 = lean_ctor_get(x_3, 6);
x_97 = lean_ctor_get(x_3, 7);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_3);
x_98 = lean_ctor_get(x_4, 0);
lean_inc(x_98);
lean_dec(x_4);
x_99 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__6;
x_100 = lean_string_append(x_99, x_98);
lean_dec(x_98);
x_101 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2;
x_102 = lean_string_append(x_100, x_101);
x_103 = lean_apply_1(x_10, x_102);
x_104 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_104, 0, x_91);
lean_ctor_set(x_104, 1, x_92);
lean_ctor_set(x_104, 2, x_103);
lean_ctor_set(x_104, 3, x_93);
lean_ctor_set(x_104, 4, x_94);
lean_ctor_set(x_104, 5, x_95);
lean_ctor_set(x_104, 6, x_96);
lean_ctor_set(x_104, 7, x_97);
x_105 = lean_box(0);
x_106 = lean_apply_7(x_2, x_104, x_105, x_5, x_6, x_7, x_8, x_9);
return x_106;
}
}
else
{
uint8_t x_107; 
x_107 = !lean_is_exclusive(x_3);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_108 = lean_ctor_get(x_3, 2);
lean_dec(x_108);
x_109 = lean_ctor_get(x_4, 0);
lean_inc(x_109);
lean_dec(x_4);
x_110 = lean_ctor_get(x_80, 0);
lean_inc(x_110);
lean_dec(x_80);
x_111 = l_addParenHeuristic(x_110);
lean_dec(x_110);
x_112 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__7;
x_113 = lean_string_append(x_112, x_111);
lean_dec(x_111);
x_114 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__8;
x_115 = lean_string_append(x_113, x_114);
x_116 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2;
x_117 = lean_string_append(x_116, x_115);
lean_dec(x_115);
x_118 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__5;
x_119 = lean_string_append(x_117, x_118);
x_120 = lean_string_append(x_119, x_109);
lean_dec(x_109);
x_121 = lean_string_append(x_120, x_116);
x_122 = lean_apply_1(x_10, x_121);
lean_ctor_set(x_3, 2, x_122);
x_123 = lean_box(0);
x_124 = lean_apply_7(x_2, x_3, x_123, x_5, x_6, x_7, x_8, x_9);
return x_124;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_125 = lean_ctor_get(x_3, 0);
x_126 = lean_ctor_get(x_3, 1);
x_127 = lean_ctor_get(x_3, 3);
x_128 = lean_ctor_get(x_3, 4);
x_129 = lean_ctor_get(x_3, 5);
x_130 = lean_ctor_get(x_3, 6);
x_131 = lean_ctor_get(x_3, 7);
lean_inc(x_131);
lean_inc(x_130);
lean_inc(x_129);
lean_inc(x_128);
lean_inc(x_127);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_3);
x_132 = lean_ctor_get(x_4, 0);
lean_inc(x_132);
lean_dec(x_4);
x_133 = lean_ctor_get(x_80, 0);
lean_inc(x_133);
lean_dec(x_80);
x_134 = l_addParenHeuristic(x_133);
lean_dec(x_133);
x_135 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__7;
x_136 = lean_string_append(x_135, x_134);
lean_dec(x_134);
x_137 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__8;
x_138 = lean_string_append(x_136, x_137);
x_139 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2;
x_140 = lean_string_append(x_139, x_138);
lean_dec(x_138);
x_141 = l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__5;
x_142 = lean_string_append(x_140, x_141);
x_143 = lean_string_append(x_142, x_132);
lean_dec(x_132);
x_144 = lean_string_append(x_143, x_139);
x_145 = lean_apply_1(x_10, x_144);
x_146 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_146, 0, x_125);
lean_ctor_set(x_146, 1, x_126);
lean_ctor_set(x_146, 2, x_145);
lean_ctor_set(x_146, 3, x_127);
lean_ctor_set(x_146, 4, x_128);
lean_ctor_set(x_146, 5, x_129);
lean_ctor_set(x_146, 6, x_130);
lean_ctor_set(x_146, 7, x_131);
x_147 = lean_box(0);
x_148 = lean_apply_7(x_2, x_146, x_147, x_5, x_6, x_7, x_8, x_9);
return x_148;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_resolve___lambda__1___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Linter_deprecatedAttr;
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` has been deprecated.", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` has been deprecated, use `", 28, 28);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("` instead.", 10, 10);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_21; 
x_10 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__1;
x_21 = lean_ctor_get(x_3, 2);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = l_Lean_Linter_instInhabitedDeprecationEntry;
x_24 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__2;
lean_inc(x_22);
lean_inc(x_2);
x_25 = l_Lean_ParametricAttribute_getParam_x3f___rarg(x_23, x_24, x_2, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_dec(x_22);
x_26 = lean_box(0);
x_11 = x_26;
goto block_20;
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 0);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = 1;
x_32 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_33 = l_Lean_Name_toString(x_22, x_31, x_32);
x_34 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3;
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__4;
x_37 = lean_string_append(x_35, x_36);
lean_ctor_set(x_25, 0, x_37);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_25);
x_11 = x_38;
goto block_20;
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_30);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_40 = lean_ctor_get(x_30, 0);
x_41 = 1;
x_42 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_43 = l_Lean_Name_toString(x_22, x_41, x_42);
x_44 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3;
x_45 = lean_string_append(x_44, x_43);
lean_dec(x_43);
x_46 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__5;
x_47 = lean_string_append(x_45, x_46);
x_48 = l_Lean_Name_toString(x_40, x_41, x_42);
x_49 = lean_string_append(x_47, x_48);
lean_dec(x_48);
x_50 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__6;
x_51 = lean_string_append(x_49, x_50);
lean_ctor_set(x_30, 0, x_51);
lean_ctor_set(x_25, 0, x_30);
x_11 = x_25;
goto block_20;
}
else
{
lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_52 = lean_ctor_get(x_30, 0);
lean_inc(x_52);
lean_dec(x_30);
x_53 = 1;
x_54 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_55 = l_Lean_Name_toString(x_22, x_53, x_54);
x_56 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3;
x_57 = lean_string_append(x_56, x_55);
lean_dec(x_55);
x_58 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__5;
x_59 = lean_string_append(x_57, x_58);
x_60 = l_Lean_Name_toString(x_52, x_53, x_54);
x_61 = lean_string_append(x_59, x_60);
lean_dec(x_60);
x_62 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__6;
x_63 = lean_string_append(x_61, x_62);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_25, 0, x_64);
x_11 = x_25;
goto block_20;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_28);
lean_dec(x_22);
x_65 = !lean_is_exclusive(x_29);
if (x_65 == 0)
{
lean_ctor_set(x_25, 0, x_29);
x_11 = x_25;
goto block_20;
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_29, 0);
lean_inc(x_66);
lean_dec(x_29);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_25, 0, x_67);
x_11 = x_25;
goto block_20;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_25, 0);
lean_inc(x_68);
lean_dec(x_25);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; 
x_70 = lean_ctor_get(x_68, 0);
lean_inc(x_70);
lean_dec(x_68);
if (lean_obj_tag(x_70) == 0)
{
uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_71 = 1;
x_72 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_73 = l_Lean_Name_toString(x_22, x_71, x_72);
x_74 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3;
x_75 = lean_string_append(x_74, x_73);
lean_dec(x_73);
x_76 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__4;
x_77 = lean_string_append(x_75, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_11 = x_79;
goto block_20;
}
else
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_80 = lean_ctor_get(x_70, 0);
lean_inc(x_80);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 x_81 = x_70;
} else {
 lean_dec_ref(x_70);
 x_81 = lean_box(0);
}
x_82 = 1;
x_83 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1;
x_84 = l_Lean_Name_toString(x_22, x_82, x_83);
x_85 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3;
x_86 = lean_string_append(x_85, x_84);
lean_dec(x_84);
x_87 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__5;
x_88 = lean_string_append(x_86, x_87);
x_89 = l_Lean_Name_toString(x_80, x_82, x_83);
x_90 = lean_string_append(x_88, x_89);
lean_dec(x_89);
x_91 = l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__6;
x_92 = lean_string_append(x_90, x_91);
if (lean_is_scalar(x_81)) {
 x_93 = lean_alloc_ctor(1, 1, 0);
} else {
 x_93 = x_81;
}
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_11 = x_94;
goto block_20;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_68);
lean_dec(x_22);
x_95 = lean_ctor_get(x_69, 0);
lean_inc(x_95);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 x_96 = x_69;
} else {
 lean_dec_ref(x_69);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 1, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_95);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_11 = x_98;
goto block_20;
}
}
}
}
else
{
lean_object* x_99; 
x_99 = lean_box(0);
x_11 = x_99;
goto block_20;
}
}
else
{
lean_object* x_100; lean_object* x_101; 
lean_dec(x_21);
lean_dec(x_2);
lean_dec(x_1);
x_100 = lean_box(0);
x_101 = lean_apply_7(x_10, x_3, x_100, x_5, x_6, x_7, x_8, x_9);
return x_101;
}
block_20:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = 1;
x_14 = l_Lean_findDocString_x3f(x_2, x_12, x_13, x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Lsp_CompletionItem_resolve___lambda__3(x_11, x_10, x_3, x_15, x_5, x_6, x_7, x_8, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
x_19 = l_Lean_Lsp_CompletionItem_resolve___lambda__3(x_11, x_10, x_3, x_18, x_5, x_6, x_7, x_8, x_9);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_Meta_ppExpr(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Std_Format_defWidth;
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_format_pretty(x_9, x_10, x_11, x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = l_Std_Format_defWidth;
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_format_pretty(x_13, x_15, x_16, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_resolve___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_resolve___lambda__5___boxed), 6, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_75; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
x_75 = lean_ctor_get(x_1, 1);
lean_inc(x_75);
if (lean_obj_tag(x_75) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_76; uint8_t x_77; lean_object* x_78; 
lean_dec(x_12);
x_76 = lean_ctor_get(x_2, 0);
lean_inc(x_76);
x_77 = 0;
lean_inc(x_11);
x_78 = l_Lean_Environment_find_x3f(x_11, x_76, x_77);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; 
x_79 = lean_box(0);
x_13 = x_79;
goto block_74;
}
else
{
uint8_t x_80; 
x_80 = !lean_is_exclusive(x_78);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_78, 0);
x_82 = l_Lean_ConstantInfo_type(x_81);
lean_dec(x_81);
lean_ctor_set(x_78, 0, x_82);
x_13 = x_78;
goto block_74;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_78, 0);
lean_inc(x_83);
lean_dec(x_78);
x_84 = l_Lean_ConstantInfo_type(x_83);
lean_dec(x_83);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_13 = x_85;
goto block_74;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_2, 0);
lean_inc(x_86);
x_87 = lean_local_ctx_find(x_12, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
x_88 = lean_box(0);
x_13 = x_88;
goto block_74;
}
else
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_ctor_get(x_87, 0);
x_91 = l_Lean_LocalDecl_type(x_90);
lean_dec(x_90);
lean_ctor_set(x_87, 0, x_91);
x_13 = x_87;
goto block_74;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_87, 0);
lean_inc(x_92);
lean_dec(x_87);
x_93 = l_Lean_LocalDecl_type(x_92);
lean_dec(x_92);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_13 = x_94;
goto block_74;
}
}
}
}
else
{
lean_object* x_95; lean_object* x_96; 
lean_dec(x_75);
lean_dec(x_12);
x_95 = lean_box(0);
x_96 = l_Lean_Lsp_CompletionItem_resolve___lambda__4(x_2, x_11, x_1, x_95, x_3, x_4, x_5, x_6, x_10);
return x_96;
}
block_74:
{
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_box(0);
x_15 = !lean_is_exclusive(x_1);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_1, 1);
lean_dec(x_16);
lean_ctor_set(x_1, 1, x_14);
x_17 = lean_box(0);
x_18 = l_Lean_Lsp_CompletionItem_resolve___lambda__4(x_2, x_11, x_1, x_17, x_3, x_4, x_5, x_6, x_10);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 2);
x_21 = lean_ctor_get(x_1, 3);
x_22 = lean_ctor_get(x_1, 4);
x_23 = lean_ctor_get(x_1, 5);
x_24 = lean_ctor_get(x_1, 6);
x_25 = lean_ctor_get(x_1, 7);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_14);
lean_ctor_set(x_26, 2, x_20);
lean_ctor_set(x_26, 3, x_21);
lean_ctor_set(x_26, 4, x_22);
lean_ctor_set(x_26, 5, x_23);
lean_ctor_set(x_26, 6, x_24);
lean_ctor_set(x_26, 7, x_25);
x_27 = lean_box(0);
x_28 = l_Lean_Lsp_CompletionItem_resolve___lambda__4(x_2, x_11, x_26, x_27, x_3, x_4, x_5, x_6, x_10);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_13);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_13, 0);
x_31 = l_Lean_Lsp_CompletionItem_resolve___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_32 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg(x_30, x_31, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_ctor_set(x_13, 0, x_33);
x_35 = !lean_is_exclusive(x_1);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_1, 1);
lean_dec(x_36);
lean_ctor_set(x_1, 1, x_13);
x_37 = lean_box(0);
x_38 = l_Lean_Lsp_CompletionItem_resolve___lambda__4(x_2, x_11, x_1, x_37, x_3, x_4, x_5, x_6, x_34);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_1, 0);
x_40 = lean_ctor_get(x_1, 2);
x_41 = lean_ctor_get(x_1, 3);
x_42 = lean_ctor_get(x_1, 4);
x_43 = lean_ctor_get(x_1, 5);
x_44 = lean_ctor_get(x_1, 6);
x_45 = lean_ctor_get(x_1, 7);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_1);
x_46 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_46, 0, x_39);
lean_ctor_set(x_46, 1, x_13);
lean_ctor_set(x_46, 2, x_40);
lean_ctor_set(x_46, 3, x_41);
lean_ctor_set(x_46, 4, x_42);
lean_ctor_set(x_46, 5, x_43);
lean_ctor_set(x_46, 6, x_44);
lean_ctor_set(x_46, 7, x_45);
x_47 = lean_box(0);
x_48 = l_Lean_Lsp_CompletionItem_resolve___lambda__4(x_2, x_11, x_46, x_47, x_3, x_4, x_5, x_6, x_34);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_free_object(x_13);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_32);
if (x_49 == 0)
{
return x_32;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_32, 0);
x_51 = lean_ctor_get(x_32, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_32);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_13, 0);
lean_inc(x_53);
lean_dec(x_13);
x_54 = l_Lean_Lsp_CompletionItem_resolve___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_55 = l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_consumeImplicitPrefix___rarg(x_53, x_54, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_56);
x_59 = lean_ctor_get(x_1, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_1, 2);
lean_inc(x_60);
x_61 = lean_ctor_get(x_1, 3);
lean_inc(x_61);
x_62 = lean_ctor_get(x_1, 4);
lean_inc(x_62);
x_63 = lean_ctor_get(x_1, 5);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 6);
lean_inc(x_64);
x_65 = lean_ctor_get(x_1, 7);
lean_inc(x_65);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 lean_ctor_release(x_1, 4);
 lean_ctor_release(x_1, 5);
 lean_ctor_release(x_1, 6);
 lean_ctor_release(x_1, 7);
 x_66 = x_1;
} else {
 lean_dec_ref(x_1);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(0, 8, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_59);
lean_ctor_set(x_67, 1, x_58);
lean_ctor_set(x_67, 2, x_60);
lean_ctor_set(x_67, 3, x_61);
lean_ctor_set(x_67, 4, x_62);
lean_ctor_set(x_67, 5, x_63);
lean_ctor_set(x_67, 6, x_64);
lean_ctor_set(x_67, 7, x_65);
x_68 = lean_box(0);
x_69 = l_Lean_Lsp_CompletionItem_resolve___lambda__4(x_2, x_11, x_67, x_68, x_3, x_4, x_5, x_6, x_57);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = lean_ctor_get(x_55, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_55, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_72 = x_55;
} else {
 lean_dec_ref(x_55);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(1, 2, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Lsp_CompletionItem_resolve___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Lsp_CompletionItem_resolve___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_resolve___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Lsp_CompletionItem_resolve___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_resolveCompletionItem_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Server_Completion_findCompletionInfosAt(x_1, x_2, x_3, x_4);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_dec(x_12);
x_13 = lean_array_get_size(x_11);
x_14 = lean_nat_dec_lt(x_7, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_11);
lean_dec(x_6);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_free_object(x_9);
x_15 = lean_array_fget(x_11, x_7);
lean_dec(x_11);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 2);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_CompletionInfo_lctx(x_17);
lean_dec(x_17);
x_19 = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_resolve), 7, 2);
lean_closure_set(x_19, 0, x_5);
lean_closure_set(x_19, 1, x_6);
x_20 = l_Lean_Elab_ContextInfo_runMetaM___rarg(x_16, x_18, x_19, x_8);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_array_get_size(x_21);
x_23 = lean_nat_dec_lt(x_7, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_21);
lean_dec(x_6);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_5);
lean_ctor_set(x_24, 1, x_8);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_array_fget(x_21, x_7);
lean_dec(x_21);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 2);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Elab_CompletionInfo_lctx(x_27);
lean_dec(x_27);
x_29 = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_resolve), 7, 2);
lean_closure_set(x_29, 0, x_5);
lean_closure_set(x_29, 1, x_6);
x_30 = l_Lean_Elab_ContextInfo_runMetaM___rarg(x_26, x_28, x_29, x_8);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_resolveCompletionItem_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Server_Completion_resolveCompletionItem_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
lean_object* initialize_Lean_Server_Completion_CompletionItemData(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Linter_Deprecated(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Completion_CompletionItemData(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_CompletionInfoSelection(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Deprecated(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__1 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__1);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__2 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__2();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__1___closed__2);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__1 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__1);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__2 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__2);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__3 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__3);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____lambda__2___closed__4);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__1);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__2 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__2();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__2);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__3 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__3();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__3);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__4 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__4();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__4);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__5 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__5();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__5);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__6 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__6();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_31____closed__6);
l_Lean_Lsp_instFromJsonCompletionIdentifier___closed__1 = _init_l_Lean_Lsp_instFromJsonCompletionIdentifier___closed__1();
lean_mark_persistent(l_Lean_Lsp_instFromJsonCompletionIdentifier___closed__1);
l_Lean_Lsp_instFromJsonCompletionIdentifier = _init_l_Lean_Lsp_instFromJsonCompletionIdentifier();
lean_mark_persistent(l_Lean_Lsp_instFromJsonCompletionIdentifier);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonCompletionIdentifier____x40_Lean_Server_Completion_CompletionResolution___hyg_165____closed__1);
l_Lean_Lsp_instToJsonCompletionIdentifier___closed__1 = _init_l_Lean_Lsp_instToJsonCompletionIdentifier___closed__1();
lean_mark_persistent(l_Lean_Lsp_instToJsonCompletionIdentifier___closed__1);
l_Lean_Lsp_instToJsonCompletionIdentifier = _init_l_Lean_Lsp_instToJsonCompletionIdentifier();
lean_mark_persistent(l_Lean_Lsp_instToJsonCompletionIdentifier);
l_Option_fromJson_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__2___closed__1 = _init_l_Option_fromJson_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__2___closed__1();
lean_mark_persistent(l_Option_fromJson_x3f___at___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____spec__2___closed__1);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__1 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__1();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__1);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__2 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__2();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__2);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__3 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__3();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__3);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__4 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__4();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__4);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__5 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__5();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__5);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__6 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__6();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__6);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__7 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__7();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__7);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__8 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__8();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__8);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__9 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__9();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__9);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__10 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__10();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__10);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__11 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__11();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__11);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__12 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__12();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__12);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__13 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__13();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__13);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__14 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__14();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__14);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__15 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__15();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__15);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__16 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__16();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__16);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__17 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__17();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__17);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__18 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__18();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__18);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__19 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__19();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__19);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__20 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__20();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__20);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__21 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__21();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__21);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__22 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__22();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__22);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__23 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__23();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_fromJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_275____closed__23);
l_Lean_Lsp_instFromJsonResolvableCompletionItemData___closed__1 = _init_l_Lean_Lsp_instFromJsonResolvableCompletionItemData___closed__1();
lean_mark_persistent(l_Lean_Lsp_instFromJsonResolvableCompletionItemData___closed__1);
l_Lean_Lsp_instFromJsonResolvableCompletionItemData = _init_l_Lean_Lsp_instFromJsonResolvableCompletionItemData();
lean_mark_persistent(l_Lean_Lsp_instFromJsonResolvableCompletionItemData);
l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420____closed__1 = _init_l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420____closed__1();
lean_mark_persistent(l___private_Lean_Server_Completion_CompletionResolution_0__Lean_Lsp_toJsonResolvableCompletionItemData____x40_Lean_Server_Completion_CompletionResolution___hyg_420____closed__1);
l_Lean_Lsp_instToJsonResolvableCompletionItemData___closed__1 = _init_l_Lean_Lsp_instToJsonResolvableCompletionItemData___closed__1();
lean_mark_persistent(l_Lean_Lsp_instToJsonResolvableCompletionItemData___closed__1);
l_Lean_Lsp_instToJsonResolvableCompletionItemData = _init_l_Lean_Lsp_instToJsonResolvableCompletionItemData();
lean_mark_persistent(l_Lean_Lsp_instToJsonResolvableCompletionItemData);
l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__1 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__1);
l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__2);
l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__3 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__3);
l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__4 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__4();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__4);
l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__5 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__5();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__5);
l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__6 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__6();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__6);
l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__7 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__7();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__7);
l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__8 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__8();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__3___closed__8);
l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__1 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__1);
l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__2 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__2);
l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__3);
l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__4 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__4();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__4);
l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__5 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__5();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__5);
l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__6 = _init_l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__6();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___lambda__4___closed__6);
l_Lean_Lsp_CompletionItem_resolve___closed__1 = _init_l_Lean_Lsp_CompletionItem_resolve___closed__1();
lean_mark_persistent(l_Lean_Lsp_CompletionItem_resolve___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
