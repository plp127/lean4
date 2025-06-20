// Lean compiler output
// Module: Lean.Server.Rpc.RequestHandling
// Imports: Lean.Data.Lsp.Extra Lean.Server.Requests Lean.Server.Rpc.Basic
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
static lean_object* l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___closed__1;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Server_handleRpcCall___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_registerBuiltinRpcProcedure___spec__3(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__1;
lean_object* l_Lean_Json_compress(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__8;
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__2(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__11;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__17;
size_t lean_usize_shift_right(size_t, size_t);
static lean_object* l_Lean_Server_handleRpcCall___closed__2;
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_builtinRpcProcedures;
uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Server_registerLspRequestHandler___spec__5(lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___closed__5;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__1;
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Server_handleRpcCall___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__15;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5(lean_object*, lean_object*);
static lean_object* l_Lean_Server_handleRpcCall___lambda__4___closed__2;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__18;
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__3___closed__2;
size_t lean_uint64_to_usize(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____lambda__1(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__20;
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__6;
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_handleRpcCall___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1(lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
static lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___closed__3;
static lean_object* l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__4;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2;
static lean_object* l_Lean_Server_registerRpcProcedure___closed__2;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__5;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__12;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__6;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__9;
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_realizeGlobalConstCore___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__1;
extern lean_object* l_Lean_Server_requestHandlers;
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedRpcProcedure___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__2;
lean_object* l_Prod_map___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MapDeclarationExtension_contains___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__13;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initializing(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__6(lean_object*, size_t, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__12;
static lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_handleRpcCall___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__1;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_bindWaitFindSnap___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedRpcProcedure(uint64_t, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__8;
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__10;
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__2;
lean_object* l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonRpcCallParams____x40_Lean_Data_Lsp_Extra___hyg_3570_(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__9;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_registerBuiltinRpcProcedure___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__16;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__15;
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__16;
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__2;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__14;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_registerLspRequestHandler___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__5;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__19;
lean_object* l_Except_map___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___closed__1;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__13;
lean_object* l_Lean_Server_Snapshots_Snapshot_env(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
static lean_object* l_Lean_Server_handleRpcCall___closed__5;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_handleRpcCall___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerBuiltinRpcProcedure___closed__3;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__10;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_handleRpcCall___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__2;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Server_wrapRpcProcedure___elambda__1___spec__1(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__7;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__8;
static lean_object* l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
lean_object* l_Lean_Server_RequestM_asTask___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__4;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__12;
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__3;
static lean_object* l_Lean_Server_handleRpcCall___closed__3;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__4;
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedRpcProcedure___rarg(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Task_Priority_default;
static lean_object* l_Lean_Server_registerRpcProcedure___closed__1;
LEAN_EXPORT uint8_t l_Lean_Server_handleRpcCall___lambda__1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__18;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_handleRpcCall___lambda__4___closed__1;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_mapTaskCheap___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__7;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__8;
LEAN_EXPORT lean_object* l_Lean_Server_userRpcProcedures;
lean_object* lean_mk_syntax_ident(lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2(lean_object*, size_t, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__11;
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_handleRpcCall___closed__1;
lean_object* lean_task_get_own(lean_object*);
static lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___closed__4;
lean_object* lean_usize_to_nat(size_t);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__3___closed__1;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__4;
static size_t l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__1;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__15;
static lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Server_wrapRpcProcedure___elambda__1___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__1;
static lean_object* l_Lean_Server_registerBuiltinRpcProcedure___closed__1;
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_readDoc___at_Lean_Server_RequestM_withWaitFindSnapAtPos___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__1___boxed(lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__2;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__16;
static lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__1;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__2;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__17;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__13;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___closed__4;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__3;
lean_object* l_Lean_setEnv___at_Lean_compileDecls_doCompile___spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
static lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___closed__2;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__5;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__3;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__6;
lean_object* l_id___rarg___boxed(lean_object*);
static lean_object* l_Lean_Server_handleRpcCall___closed__4;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__14;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__9;
uint64_t l_Lean_Name_hash___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80_(lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__12;
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___closed__3;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__7;
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454_(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConstCheck___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__5(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__2;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__11;
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at_Lean_Server_registerRpcProcedure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope;
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_registerBuiltinRpcProcedure___spec__1(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure(lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l_Lean_Server_registerRpcProcedure___lambda__2___closed__10;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__10;
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__14;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__6;
extern lean_object* l_Lean_instInhabitedName;
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EIO_ofExcept___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_handleRpcCall___lambda__3(lean_object*, lean_object*, lean_object*);
static size_t l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__2;
static lean_object* l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__1;
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__13;
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413_(lean_object*);
static lean_object* l_Lean_Server_handleRpcCall___lambda__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__5;
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__4;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_addAndCompile(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
static lean_object* l_Lean_Server_registerBuiltinRpcProcedure___closed__2;
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__1___closed__7;
lean_object* l_Lean_throwError___at_Lean_Attribute_Builtin_ensureNoArgs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_String_toSubstring_x27(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
static lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___closed__11;
lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object*);
static lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__9;
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_RBNode_fold___at_Lean_Parser_Tactic_Doc_initFn____x40_Lean_Parser_Tactic_Doc___hyg_248____spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__2;
static lean_object* _init_l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedRpcProcedure___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedRpcProcedure(uint64_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Server_instInhabitedRpcProcedure___rarg), 1, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedRpcProcedure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint64_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_5 = l_Lean_Server_instInhabitedRpcProcedure(x_4, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2;
x_3 = lean_st_mk_ref(x_2, x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
static lean_object* _init_l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1___closed__1;
x_3 = l_Lean_RBNode_fold___at_Lean_Parser_Tactic_Doc_initFn____x40_Lean_Parser_Tactic_Doc___hyg_248____spec__1(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1(x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Server", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("userRpcProcedures", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2;
x_3 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__3;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__4;
x_3 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__5;
x_4 = l_Lean_mkMapDeclarationExtension___rarg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____lambda__1(x_1, x_2, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_private", 8, 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__2;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__3;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Rpc", 3, 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__4;
x_2 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("RequestHandling", 15, 15);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__6;
x_2 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__8;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__9;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__10;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("RpcProcedure", 12, 12);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__11;
x_2 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__13;
x_5 = l_Lean_Environment_evalConstCheck___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_handleRpcCall___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__1() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = 5;
x_3 = lean_usize_shift_left(x_1, x_2);
return x_3;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__2() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__1;
x_3 = lean_usize_sub(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = 5;
x_7 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__2;
x_8 = lean_usize_land(x_2, x_7);
x_9 = lean_usize_to_nat(x_8);
x_10 = lean_box(2);
x_11 = lean_array_get(x_10, x_5, x_9);
lean_dec(x_9);
lean_dec(x_5);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_name_eq(x_3, x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_13);
lean_free_object(x_1);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
lean_free_object(x_1);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_usize_shift_right(x_2, x_6);
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
lean_free_object(x_1);
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = 5;
x_22 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__2;
x_23 = lean_usize_land(x_2, x_22);
x_24 = lean_usize_to_nat(x_23);
x_25 = lean_box(2);
x_26 = lean_array_get(x_25, x_20, x_24);
lean_dec(x_24);
lean_dec(x_20);
switch (lean_obj_tag(x_26)) {
case 0:
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_name_eq(x_3, x_27);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_28);
x_30 = lean_box(0);
return x_30;
}
else
{
lean_object* x_31; 
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_28);
return x_31;
}
}
case 1:
{
lean_object* x_32; size_t x_33; 
x_32 = lean_ctor_get(x_26, 0);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_usize_shift_right(x_2, x_21);
x_1 = x_32;
x_2 = x_33;
goto _start;
}
default: 
{
lean_object* x_35; 
x_35 = lean_box(0);
return x_35;
}
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 1);
lean_inc(x_37);
lean_dec(x_1);
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_handleRpcCall___spec__3(x_36, x_37, lean_box(0), x_38, x_3);
lean_dec(x_37);
lean_dec(x_36);
return x_39;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_handleRpcCall___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; size_t x_4; lean_object* x_5; 
x_3 = l_Lean_Name_hash___override(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Server_handleRpcCall___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = lean_apply_2(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_3(x_2, x_6, x_3, x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_bind___at_Lean_Server_handleRpcCall___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Server_handleRpcCall___spec__4___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_handleRpcCall___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_handleRpcCall___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_userRpcProcedures;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_handleRpcCall___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Server_Snapshots_Snapshot_endPos(x_3);
x_5 = lean_nat_dec_le(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_6 = l_Lean_Server_Snapshots_Snapshot_env(x_3);
x_7 = l_Lean_instInhabitedName;
x_8 = l_Lean_Server_handleRpcCall___lambda__3___closed__1;
x_9 = 0;
x_10 = l_Lean_MapDeclarationExtension_find_x3f___rarg(x_7, x_8, x_6, x_2, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_10);
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
lean_dec(x_2);
x_13 = 1;
return x_13;
}
}
}
static lean_object* _init_l_Lean_Server_handleRpcCall___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to evaluate RPC constant '", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_handleRpcCall___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("': ", 3, 3);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_8 = l_Lean_Server_Snapshots_Snapshot_env(x_5);
x_9 = l_Lean_instInhabitedName;
x_10 = l_Lean_Server_handleRpcCall___lambda__3___closed__1;
x_11 = 0;
lean_inc(x_8);
x_12 = l_Lean_MapDeclarationExtension_find_x3f___rarg(x_9, x_10, x_8, x_1, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_5, 2);
x_16 = lean_ctor_get(x_15, 2);
x_17 = l_Lean_Elab_Command_instInhabitedScope;
x_18 = l_List_head_x21___rarg(x_17, x_16);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_14);
x_20 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe(x_8, x_19, x_14);
lean_dec(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_6);
lean_dec(x_4);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = 1;
x_23 = l_Lean_Name_toString(x_14, x_22, x_3);
x_24 = l_Lean_Server_handleRpcCall___lambda__4___closed__1;
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = l_Lean_Server_handleRpcCall___lambda__4___closed__2;
x_27 = lean_string_append(x_25, x_26);
x_28 = lean_string_append(x_27, x_21);
lean_dec(x_21);
x_29 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_30 = lean_string_append(x_28, x_29);
x_31 = 4;
x_32 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set_uint8(x_32, sizeof(void*)*1, x_31);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_7);
return x_33;
}
else
{
lean_object* x_34; uint64_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_14);
lean_dec(x_3);
x_34 = lean_ctor_get(x_20, 0);
lean_inc(x_34);
lean_dec(x_20);
x_35 = lean_ctor_get_uint64(x_4, sizeof(void*)*3);
x_36 = lean_ctor_get(x_4, 2);
lean_inc(x_36);
lean_dec(x_4);
x_37 = lean_box_uint64(x_35);
x_38 = lean_apply_4(x_34, x_37, x_36, x_6, x_7);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_task_get_own(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
}
}
static lean_object* _init_l_Lean_Server_handleRpcCall___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_builtinRpcProcedures;
return x_1;
}
}
static lean_object* _init_l_Lean_Server_handleRpcCall___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_handleRpcCall___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_handleRpcCall___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("No RPC method '", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_handleRpcCall___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' found", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_handleRpcCall___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_handleRpcCall___lambda__5___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Lean_Server_handleRpcCall___closed__1;
x_5 = lean_st_ref_get(x_4, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_handleRpcCall___spec__1(x_6, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_10 = l_Lean_Server_RequestM_readDoc___at_Lean_Server_RequestM_withWaitFindSnapAtPos___spec__1(x_2, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 3);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_FileMap_lspPosToUtf8Pos(x_15, x_17);
lean_dec(x_15);
x_19 = 1;
x_20 = l_Lean_Server_handleRpcCall___closed__2;
lean_inc(x_8);
x_21 = l_Lean_Name_toString(x_8, x_19, x_20);
x_22 = l_Lean_Server_handleRpcCall___closed__3;
x_23 = lean_string_append(x_22, x_21);
lean_dec(x_21);
x_24 = l_Lean_Server_handleRpcCall___closed__4;
x_25 = lean_string_append(x_23, x_24);
x_26 = 2;
x_27 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_26);
lean_inc(x_27);
x_28 = lean_alloc_closure((void*)(l_Lean_Server_handleRpcCall___lambda__2___boxed), 3, 1);
lean_closure_set(x_28, 0, x_27);
lean_inc(x_8);
x_29 = lean_alloc_closure((void*)(l_Lean_Server_handleRpcCall___lambda__3___boxed), 3, 2);
lean_closure_set(x_29, 0, x_18);
lean_closure_set(x_29, 1, x_8);
x_30 = lean_alloc_closure((void*)(l_Lean_Server_handleRpcCall___lambda__4___boxed), 7, 4);
lean_closure_set(x_30, 0, x_8);
lean_closure_set(x_30, 1, x_27);
lean_closure_set(x_30, 2, x_20);
lean_closure_set(x_30, 3, x_1);
x_31 = l_Lean_Server_RequestM_bindWaitFindSnap___rarg(x_11, x_29, x_28, x_30, x_2, x_12);
return x_31;
}
else
{
lean_object* x_32; uint64_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_8);
x_32 = lean_ctor_get(x_9, 0);
lean_inc(x_32);
lean_dec(x_9);
x_33 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_34 = lean_ctor_get(x_1, 2);
lean_inc(x_34);
lean_dec(x_1);
x_35 = lean_box_uint64(x_33);
x_36 = lean_apply_2(x_32, x_35, x_34);
x_37 = l_Lean_Server_handleRpcCall___closed__5;
x_38 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Server_handleRpcCall___spec__4___rarg), 4, 2);
lean_closure_set(x_38, 0, x_36);
lean_closure_set(x_38, 1, x_37);
x_39 = l_Lean_Server_RequestM_asTask___rarg(x_38, x_2, x_7);
return x_39;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_handleRpcCall___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_findAtAux___at_Lean_Server_handleRpcCall___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_handleRpcCall___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_PersistentHashMap_find_x3f___at_Lean_Server_handleRpcCall___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Server_handleRpcCall___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_handleRpcCall___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_Server_handleRpcCall___lambda__3(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_handleRpcCall___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleRpcCall___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_handleRpcCall___lambda__5(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Cannot parse request params: ", 29, 29);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
lean_inc(x_1);
x_2 = l___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonRpcCallParams____x40_Lean_Data_Lsp_Extra___hyg_3570_(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_Json_compress(x_1);
x_6 = l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__2;
x_9 = lean_string_append(x_7, x_8);
x_10 = lean_string_append(x_9, x_4);
lean_dec(x_4);
x_11 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_12 = lean_string_append(x_10, x_11);
x_13 = 3;
x_14 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
lean_ctor_set(x_2, 0, x_14);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = l_Lean_Json_compress(x_1);
x_17 = l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__1;
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
x_19 = l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__2;
x_20 = lean_string_append(x_18, x_19);
x_21 = lean_string_append(x_20, x_15);
lean_dec(x_15);
x_22 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_23 = lean_string_append(x_21, x_22);
x_24 = 3;
x_25 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*1, x_24);
x_26 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_2);
if (x_27 == 0)
{
return x_2;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2(x_1);
x_5 = l_EIO_ofExcept___rarg(x_4, x_3);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
lean_ctor_set(x_2, 0, x_9);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__1;
x_2 = lean_alloc_closure((void*)(l_Except_map___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_RequestM_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__3(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_3(x_1, x_6, x_3, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__2;
x_12 = l_Task_Priority_default;
x_13 = 1;
x_14 = lean_task_map(x_11, x_10, x_12, x_13);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_8);
x_17 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__2;
x_18 = l_Task_Priority_default;
x_19 = 1;
x_20 = lean_task_map(x_17, x_15, x_18, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_8);
if (x_22 == 0)
{
return x_8;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_8, 0);
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_8);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_3);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_5);
if (x_26 == 0)
{
return x_5;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_5, 0);
x_28 = lean_ctor_get(x_5, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_5);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_requestHandlers;
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__1;
x_7 = lean_st_ref_take(x_6, x_4);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__2;
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 0, x_11);
x_12 = l_Lean_PersistentHashMap_insert___at_Lean_Server_registerLspRequestHandler___spec__1(x_9, x_2, x_7);
x_13 = lean_st_ref_set(x_6, x_12, x_10);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_7, 0);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_7);
x_20 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__2;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_5);
x_22 = l_Lean_PersistentHashMap_insert___at_Lean_Server_registerLspRequestHandler___spec__1(x_18, x_2, x_21);
x_23 = lean_st_ref_set(x_6, x_22, x_19);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
if (lean_is_scalar(x_26)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_26;
}
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to register LSP request handler for '", 44, 44);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("': already registered", 21, 21);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__1;
x_6 = lean_st_ref_get(x_5, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = l_Lean_PersistentHashMap_contains___at_Lean_Server_registerLspRequestHandler___spec__5(x_8, x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_free_object(x_6);
x_11 = lean_box(0);
x_12 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3(x_1, x_2, x_11, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_13 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__1;
x_14 = lean_string_append(x_13, x_2);
lean_dec(x_2);
x_15 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__2;
x_16 = lean_string_append(x_14, x_15);
x_17 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_17);
return x_6;
}
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_6, 0);
x_19 = lean_ctor_get(x_6, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_6);
x_20 = l_Lean_PersistentHashMap_contains___at_Lean_Server_registerLspRequestHandler___spec__5(x_18, x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3(x_1, x_2, x_21, x_19);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_1);
x_23 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__1;
x_24 = lean_string_append(x_23, x_2);
lean_dec(x_2);
x_25 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__2;
x_26 = lean_string_append(x_24, x_25);
x_27 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_19);
return x_28;
}
}
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("': only possible during initialization", 38, 38);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Lean_initializing(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_4, 0);
lean_dec(x_8);
x_9 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__1;
x_10 = lean_string_append(x_9, x_1);
lean_dec(x_1);
x_11 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___closed__1;
x_12 = lean_string_append(x_10, x_11);
x_13 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_dec(x_4);
x_15 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__1;
x_16 = lean_string_append(x_15, x_1);
lean_dec(x_1);
x_17 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___closed__1;
x_18 = lean_string_append(x_16, x_17);
x_19 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_4, 1);
lean_inc(x_21);
lean_dec(x_4);
x_22 = lean_box(0);
x_23 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4(x_2, x_1, x_22, x_21);
return x_23;
}
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("$/lean/rpc/call", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_handleRpcCall), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__1;
x_3 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__2;
x_4 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_RequestM_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__3(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Server_wrapRpcProcedure___elambda__1___spec__1(lean_object* x_1, uint64_t x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_unbox_uint64(x_5);
x_9 = lean_uint64_dec_lt(x_2, x_8);
if (x_9 == 0)
{
uint64_t x_10; uint8_t x_11; 
lean_dec(x_4);
x_10 = lean_unbox_uint64(x_5);
lean_dec(x_5);
x_11 = lean_uint64_dec_eq(x_2, x_10);
if (x_11 == 0)
{
lean_dec(x_6);
x_1 = x_7;
goto _start;
}
else
{
lean_object* x_13; 
lean_dec(x_7);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_6);
return x_13;
}
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_1 = x_4;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_dec(x_4);
lean_ctor_set(x_1, 0, x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_st_ref_take(x_1, x_5);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__1), 2, 1);
lean_closure_set(x_12, 0, x_10);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_apply_2(x_13, x_8, x_14);
x_16 = l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__1;
x_17 = l_Prod_map___rarg(x_16, x_12, x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_st_ref_set(x_1, x_19, x_11);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
x_7 = lean_apply_3(x_1, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__2___boxed), 5, 2);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
x_11 = l_Lean_Server_RequestM_mapTaskCheap___rarg(x_8, x_10, x_5, x_9);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
static lean_object* _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Outdated RPC session", 20, 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 9;
x_2 = l_Lean_Server_wrapRpcProcedure___elambda__1___closed__1;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Cannot decode params in RPC call '", 34, 34);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")'\n", 3, 3);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint64_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = l_Lean_RBNode_find___at_Lean_Server_wrapRpcProcedure___elambda__1___spec__1(x_11, x_7);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_13 = l_Lean_Server_wrapRpcProcedure___elambda__1___closed__2;
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_st_ref_get(x_15, x_10);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
lean_dec(x_4);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
lean_inc(x_8);
x_22 = lean_apply_2(x_20, x_8, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = 1;
x_25 = l_Lean_Server_handleRpcCall___closed__2;
x_26 = l_Lean_Name_toString(x_1, x_24, x_25);
x_27 = l_Lean_Server_wrapRpcProcedure___elambda__1___closed__3;
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = l_Lean_Server_wrapRpcProcedure___elambda__1___closed__4;
x_30 = lean_string_append(x_28, x_29);
x_31 = l_Lean_Json_compress(x_8);
x_32 = lean_string_append(x_30, x_31);
lean_dec(x_31);
x_33 = l_Lean_Server_wrapRpcProcedure___elambda__1___closed__5;
x_34 = lean_string_append(x_32, x_33);
x_35 = lean_string_append(x_34, x_23);
lean_dec(x_23);
x_36 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_37 = lean_string_append(x_35, x_36);
x_38 = 3;
x_39 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set_uint8(x_39, sizeof(void*)*1, x_38);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_39);
return x_16;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_free_object(x_16);
lean_dec(x_8);
lean_dec(x_1);
x_40 = lean_ctor_get(x_22, 0);
lean_inc(x_40);
lean_dec(x_22);
x_41 = l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__3(x_6, x_15, x_5, x_40, x_9, x_19);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_16, 0);
x_43 = lean_ctor_get(x_16, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_16);
x_44 = lean_ctor_get(x_4, 1);
lean_inc(x_44);
lean_dec(x_4);
x_45 = lean_ctor_get(x_42, 0);
lean_inc(x_45);
lean_dec(x_42);
lean_inc(x_8);
x_46 = lean_apply_2(x_44, x_8, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
lean_dec(x_46);
x_48 = 1;
x_49 = l_Lean_Server_handleRpcCall___closed__2;
x_50 = l_Lean_Name_toString(x_1, x_48, x_49);
x_51 = l_Lean_Server_wrapRpcProcedure___elambda__1___closed__3;
x_52 = lean_string_append(x_51, x_50);
lean_dec(x_50);
x_53 = l_Lean_Server_wrapRpcProcedure___elambda__1___closed__4;
x_54 = lean_string_append(x_52, x_53);
x_55 = l_Lean_Json_compress(x_8);
x_56 = lean_string_append(x_54, x_55);
lean_dec(x_55);
x_57 = l_Lean_Server_wrapRpcProcedure___elambda__1___closed__5;
x_58 = lean_string_append(x_56, x_57);
x_59 = lean_string_append(x_58, x_47);
lean_dec(x_47);
x_60 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_61 = lean_string_append(x_59, x_60);
x_62 = 3;
x_63 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set_uint8(x_63, sizeof(void*)*1, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_43);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_8);
lean_dec(x_1);
x_65 = lean_ctor_get(x_46, 0);
lean_inc(x_65);
lean_dec(x_46);
x_66 = l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__3(x_6, x_15, x_5, x_65, x_9, x_43);
return x_66;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___elambda__1___boxed), 10, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, lean_box(0));
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_5);
lean_closure_set(x_7, 5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_RBNode_find___at_Lean_Server_wrapRpcProcedure___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_4 = l_Lean_RBNode_find___at_Lean_Server_wrapRpcProcedure___elambda__1___spec__1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Server_wrapRpcProcedure___elambda__1___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_wrapRpcProcedure___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint64_t x_11; lean_object* x_12; 
x_11 = lean_unbox_uint64(x_7);
lean_dec(x_7);
x_12 = l_Lean_Server_wrapRpcProcedure___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_11, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_registerBuiltinRpcProcedure___spec__3(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Name_hash___override(x_9);
x_12 = lean_uint64_to_usize(x_11);
x_13 = 1;
x_14 = lean_usize_sub(x_1, x_13);
x_15 = 5;
x_16 = lean_usize_mul(x_15, x_14);
x_17 = lean_usize_shift_right(x_12, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2(x_6, x_17, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__2;
x_11 = lean_usize_land(x_2, x_10);
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(0);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = lean_usize_shift_right(x_2, x_9);
x_37 = lean_usize_add(x_3, x_8);
x_38 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = lean_usize_shift_right(x_2, x_9);
x_42 = lean_usize_add(x_3, x_8);
x_43 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__2;
x_52 = lean_usize_land(x_2, x_51);
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(0);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = lean_usize_shift_right(x_2, x_50);
x_74 = lean_usize_add(x_3, x_49);
x_75 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_1);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; size_t x_85; uint8_t x_86; 
x_83 = lean_unsigned_to_nat(0u);
x_84 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__4(x_1, x_83, x_4, x_5);
x_85 = 7;
x_86 = lean_usize_dec_le(x_85, x_3);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_84);
x_88 = lean_unsigned_to_nat(4u);
x_89 = lean_nat_dec_lt(x_87, x_88);
lean_dec(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_84, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_92 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2___closed__1;
x_93 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_registerBuiltinRpcProcedure___spec__3(x_3, x_90, x_91, lean_box(0), x_83, x_92);
lean_dec(x_91);
lean_dec(x_90);
return x_93;
}
else
{
return x_84;
}
}
else
{
return x_84;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; size_t x_99; uint8_t x_100; 
x_94 = lean_ctor_get(x_1, 0);
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_1);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_unsigned_to_nat(0u);
x_98 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__4(x_96, x_97, x_4, x_5);
x_99 = 7;
x_100 = lean_usize_dec_le(x_99, x_3);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_101 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_98);
x_102 = lean_unsigned_to_nat(4u);
x_103 = lean_nat_dec_lt(x_101, x_102);
lean_dec(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_98, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
lean_dec(x_98);
x_106 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2___closed__1;
x_107 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_registerBuiltinRpcProcedure___spec__3(x_3, x_104, x_105, lean_box(0), x_97, x_106);
lean_dec(x_105);
lean_dec(x_104);
return x_107;
}
else
{
return x_98;
}
}
else
{
return x_98;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_Server_registerBuiltinRpcProcedure___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint64_t x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_4 = l_Lean_Name_hash___override(x_2);
x_5 = lean_uint64_to_usize(x_4);
x_6 = 1;
x_7 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2(x_1, x_5, x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__6(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__2;
x_7 = lean_usize_land(x_2, x_6);
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_usize_shift_right(x_2, x_5);
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__7(x_17, x_18, lean_box(0), x_19, x_3);
lean_dec(x_18);
lean_dec(x_17);
return x_20;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; size_t x_4; uint8_t x_5; 
x_3 = l_Lean_Name_hash___override(x_2);
x_4 = lean_uint64_to_usize(x_3);
x_5 = l_Lean_PersistentHashMap_containsAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__6(x_1, x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Server_wrapRpcProcedure___elambda__1___boxed), 10, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, lean_box(0));
lean_closure_set(x_7, 3, x_2);
lean_closure_set(x_7, 4, x_3);
lean_closure_set(x_7, 5, x_4);
x_8 = l_Lean_Server_handleRpcCall___closed__1;
x_9 = lean_st_ref_take(x_8, x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_PersistentHashMap_insert___at_Lean_Server_registerBuiltinRpcProcedure___spec__1(x_10, x_1, x_7);
x_13 = lean_st_ref_set(x_8, x_12, x_11);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
static lean_object* _init_l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(": already registered", 20, 20);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Server_handleRpcCall___closed__1;
x_9 = lean_st_ref_get(x_8, x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5(x_11, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_free_object(x_9);
x_14 = lean_box(0);
x_15 = l_Lean_Server_registerBuiltinRpcProcedure___lambda__1(x_1, x_2, x_3, x_4, x_14, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_17 = lean_string_append(x_16, x_5);
x_18 = l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___closed__1;
x_19 = lean_string_append(x_17, x_18);
x_20 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set_tag(x_9, 1);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5(x_21, x_1);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = l_Lean_Server_registerBuiltinRpcProcedure___lambda__1(x_1, x_2, x_3, x_4, x_24, x_22);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_27 = lean_string_append(x_26, x_5);
x_28 = l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___closed__1;
x_29 = lean_string_append(x_27, x_28);
x_30 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_22);
return x_31;
}
}
}
}
static lean_object* _init_l_Lean_Server_registerBuiltinRpcProcedure___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to register builtin RPC call handler for '", 49, 49);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerBuiltinRpcProcedure___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerBuiltinRpcProcedure___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(": only possible during initialization", 37, 37);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_8 = 1;
x_9 = l_Lean_Server_handleRpcCall___closed__2;
lean_inc(x_1);
x_10 = l_Lean_Name_toString(x_1, x_8, x_9);
x_11 = l_Lean_Server_registerBuiltinRpcProcedure___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Lean_Server_registerBuiltinRpcProcedure___closed__2;
x_14 = lean_string_append(x_12, x_13);
x_15 = l_Lean_initializing(x_7);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_15, 0);
lean_dec(x_19);
x_20 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_21 = lean_string_append(x_20, x_14);
lean_dec(x_14);
x_22 = l_Lean_Server_registerBuiltinRpcProcedure___closed__3;
x_23 = lean_string_append(x_21, x_22);
x_24 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_24);
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_dec(x_15);
x_26 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_27 = lean_string_append(x_26, x_14);
lean_dec(x_14);
x_28 = l_Lean_Server_registerBuiltinRpcProcedure___closed__3;
x_29 = lean_string_append(x_27, x_28);
x_30 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_25);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_dec(x_15);
x_33 = lean_box(0);
x_34 = l_Lean_Server_registerBuiltinRpcProcedure___lambda__2(x_1, x_4, x_5, x_6, x_14, x_33, x_32);
lean_dec(x_14);
return x_34;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_registerBuiltinRpcProcedure___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_Server_registerBuiltinRpcProcedure___spec__3(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__7(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_containsAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__6(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_registerBuiltinRpcProcedure___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_registerBuiltinRpcProcedure___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at_Lean_Server_registerRpcProcedure___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_withoutErrToSorryImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
x_2 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__1;
x_3 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__2;
x_4 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("wrapRpcProcedure", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__5;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2;
x_3 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__5;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hole", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
x_2 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__1;
x_3 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__2;
x_4 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__12;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("quotedName", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
x_2 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__1;
x_3 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__2;
x_4 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__15;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("`", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_ctor_get(x_8, 5);
lean_inc(x_11);
x_12 = 0;
x_13 = l_Lean_SourceInfo_fromRef(x_11, x_12);
lean_dec(x_11);
x_14 = lean_ctor_get(x_8, 10);
lean_inc(x_14);
x_15 = lean_st_ref_get(x_9, x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Environment_mainModule(x_19);
lean_dec(x_19);
x_21 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__7;
x_22 = l_Lean_addMacroScope(x_20, x_21, x_14);
x_23 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__8;
lean_inc(x_1);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 1, x_1);
lean_ctor_set(x_15, 0, x_23);
x_24 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__9;
lean_inc(x_1);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_1);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_15);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__6;
lean_inc(x_13);
x_28 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_28, 0, x_13);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_26);
lean_inc(x_2);
lean_inc(x_1);
x_29 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_1, x_2);
x_30 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__14;
lean_inc(x_13);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_13);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__13;
lean_inc(x_13);
x_33 = l_Lean_Syntax_node1(x_13, x_32, x_31);
lean_inc(x_2);
x_34 = lean_mk_syntax_ident(x_2);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
lean_dec(x_1);
x_35 = l_Lean_quoteNameMk(x_2);
x_36 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__11;
lean_inc(x_33);
lean_inc(x_13);
x_37 = l_Lean_Syntax_node4(x_13, x_36, x_35, x_33, x_33, x_34);
x_38 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__4;
x_39 = l_Lean_Syntax_node2(x_13, x_38, x_28, x_37);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_3);
x_41 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_42 = l_Lean_Elab_Term_elabTerm(x_39, x_40, x_41, x_41, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_43, x_4, x_5, x_6, x_7, x_8, x_9, x_44);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_42);
if (x_46 == 0)
{
return x_42;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_42, 0);
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_42);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_29);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; lean_object* x_67; 
x_51 = lean_ctor_get(x_29, 0);
x_52 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__17;
x_53 = l_String_intercalate(x_52, x_51);
x_54 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__18;
x_55 = lean_string_append(x_54, x_53);
lean_dec(x_53);
x_56 = lean_box(2);
x_57 = l_Lean_Syntax_mkNameLit(x_55, x_56);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_1);
x_59 = lean_array_mk(x_58);
x_60 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__16;
x_61 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_60);
lean_ctor_set(x_61, 2, x_59);
x_62 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__11;
lean_inc(x_33);
lean_inc(x_13);
x_63 = l_Lean_Syntax_node4(x_13, x_62, x_61, x_33, x_33, x_34);
x_64 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__4;
x_65 = l_Lean_Syntax_node2(x_13, x_64, x_28, x_63);
lean_ctor_set(x_29, 0, x_3);
x_66 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_67 = l_Lean_Elab_Term_elabTerm(x_65, x_29, x_66, x_66, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_68, x_4, x_5, x_6, x_7, x_8, x_9, x_69);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_70;
}
else
{
uint8_t x_71; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_71 = !lean_is_exclusive(x_67);
if (x_71 == 0)
{
return x_67;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_67, 0);
x_73 = lean_ctor_get(x_67, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_67);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; lean_object* x_92; 
x_75 = lean_ctor_get(x_29, 0);
lean_inc(x_75);
lean_dec(x_29);
x_76 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__17;
x_77 = l_String_intercalate(x_76, x_75);
x_78 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__18;
x_79 = lean_string_append(x_78, x_77);
lean_dec(x_77);
x_80 = lean_box(2);
x_81 = l_Lean_Syntax_mkNameLit(x_79, x_80);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_1);
x_83 = lean_array_mk(x_82);
x_84 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__16;
x_85 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_85, 0, x_80);
lean_ctor_set(x_85, 1, x_84);
lean_ctor_set(x_85, 2, x_83);
x_86 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__11;
lean_inc(x_33);
lean_inc(x_13);
x_87 = l_Lean_Syntax_node4(x_13, x_86, x_85, x_33, x_33, x_34);
x_88 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__4;
x_89 = l_Lean_Syntax_node2(x_13, x_88, x_28, x_87);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_3);
x_91 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_92 = l_Lean_Elab_Term_elabTerm(x_89, x_90, x_91, x_91, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_93, x_4, x_5, x_6, x_7, x_8, x_9, x_94);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_96 = lean_ctor_get(x_92, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_92, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_98 = x_92;
} else {
 lean_dec_ref(x_92);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(1, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_100 = lean_ctor_get(x_15, 0);
x_101 = lean_ctor_get(x_15, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_15);
x_102 = lean_ctor_get(x_100, 0);
lean_inc(x_102);
lean_dec(x_100);
x_103 = l_Lean_Environment_mainModule(x_102);
lean_dec(x_102);
x_104 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__7;
x_105 = l_Lean_addMacroScope(x_103, x_104, x_14);
x_106 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__8;
lean_inc(x_1);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_1);
x_108 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__9;
lean_inc(x_1);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_1);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__6;
lean_inc(x_13);
x_112 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_112, 0, x_13);
lean_ctor_set(x_112, 1, x_111);
lean_ctor_set(x_112, 2, x_105);
lean_ctor_set(x_112, 3, x_110);
lean_inc(x_2);
lean_inc(x_1);
x_113 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_1, x_2);
x_114 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__14;
lean_inc(x_13);
x_115 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_115, 0, x_13);
lean_ctor_set(x_115, 1, x_114);
x_116 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__13;
lean_inc(x_13);
x_117 = l_Lean_Syntax_node1(x_13, x_116, x_115);
lean_inc(x_2);
x_118 = lean_mk_syntax_ident(x_2);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; 
lean_dec(x_1);
x_119 = l_Lean_quoteNameMk(x_2);
x_120 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__11;
lean_inc(x_117);
lean_inc(x_13);
x_121 = l_Lean_Syntax_node4(x_13, x_120, x_119, x_117, x_117, x_118);
x_122 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__4;
x_123 = l_Lean_Syntax_node2(x_13, x_122, x_112, x_121);
x_124 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_124, 0, x_3);
x_125 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_126 = l_Lean_Elab_Term_elabTerm(x_123, x_124, x_125, x_125, x_4, x_5, x_6, x_7, x_8, x_9, x_101);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_127, x_4, x_5, x_6, x_7, x_8, x_9, x_128);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_129;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_130 = lean_ctor_get(x_126, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_126, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_132 = x_126;
} else {
 lean_dec_ref(x_126);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; lean_object* x_152; 
lean_dec(x_2);
x_134 = lean_ctor_get(x_113, 0);
lean_inc(x_134);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 x_135 = x_113;
} else {
 lean_dec_ref(x_113);
 x_135 = lean_box(0);
}
x_136 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__17;
x_137 = l_String_intercalate(x_136, x_134);
x_138 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__18;
x_139 = lean_string_append(x_138, x_137);
lean_dec(x_137);
x_140 = lean_box(2);
x_141 = l_Lean_Syntax_mkNameLit(x_139, x_140);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_1);
x_143 = lean_array_mk(x_142);
x_144 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__16;
x_145 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_145, 0, x_140);
lean_ctor_set(x_145, 1, x_144);
lean_ctor_set(x_145, 2, x_143);
x_146 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__11;
lean_inc(x_117);
lean_inc(x_13);
x_147 = l_Lean_Syntax_node4(x_13, x_146, x_145, x_117, x_117, x_118);
x_148 = l_Lean_Server_registerRpcProcedure___lambda__1___closed__4;
x_149 = l_Lean_Syntax_node2(x_13, x_148, x_112, x_147);
if (lean_is_scalar(x_135)) {
 x_150 = lean_alloc_ctor(1, 1, 0);
} else {
 x_150 = x_135;
}
lean_ctor_set(x_150, 0, x_3);
x_151 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_152 = l_Lean_Elab_Term_elabTerm(x_149, x_150, x_151, x_151, x_4, x_5, x_6, x_7, x_8, x_9, x_101);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_153, x_4, x_5, x_6, x_7, x_8, x_9, x_154);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_156 = lean_ctor_get(x_152, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_152, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_158 = x_152;
} else {
 lean_dec_ref(x_152);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(1, 2, 0);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_157);
return x_159;
}
}
}
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_rpc_wrapped", 12, 12);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__13;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__6() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__5;
x_3 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__4;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set_usize(x_5, 4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = 1;
x_5 = 0;
x_6 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__6;
x_7 = l_Lean_Server_handleRpcCall___closed__2;
x_8 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_1);
lean_ctor_set(x_8, 2, x_6);
lean_ctor_set(x_8, 3, x_7);
lean_ctor_set(x_8, 4, x_3);
lean_ctor_set(x_8, 5, x_3);
lean_ctor_set(x_8, 6, x_2);
lean_ctor_set_uint8(x_8, sizeof(void*)*7, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 1, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 2, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 3, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 4, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 5, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 6, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 7, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 8, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 9, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*7 + 10, x_4);
return x_8;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_1);
lean_ctor_set(x_3, 3, x_1);
lean_ctor_set(x_3, 4, x_1);
lean_ctor_set(x_3, 5, x_2);
lean_ctor_set(x_3, 6, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__9() {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = 0;
x_2 = 1;
x_3 = 1;
x_4 = 0;
x_5 = 2;
x_6 = lean_alloc_ctor(0, 0, 18);
lean_ctor_set_uint8(x_6, 0, x_1);
lean_ctor_set_uint8(x_6, 1, x_1);
lean_ctor_set_uint8(x_6, 2, x_1);
lean_ctor_set_uint8(x_6, 3, x_1);
lean_ctor_set_uint8(x_6, 4, x_1);
lean_ctor_set_uint8(x_6, 5, x_2);
lean_ctor_set_uint8(x_6, 6, x_2);
lean_ctor_set_uint8(x_6, 7, x_1);
lean_ctor_set_uint8(x_6, 8, x_2);
lean_ctor_set_uint8(x_6, 9, x_3);
lean_ctor_set_uint8(x_6, 10, x_4);
lean_ctor_set_uint8(x_6, 11, x_2);
lean_ctor_set_uint8(x_6, 12, x_2);
lean_ctor_set_uint8(x_6, 13, x_2);
lean_ctor_set_uint8(x_6, 14, x_5);
lean_ctor_set_uint8(x_6, 15, x_2);
lean_ctor_set_uint8(x_6, 16, x_2);
lean_ctor_set_uint8(x_6, 17, x_2);
return x_6;
}
}
static uint64_t _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__10() {
_start:
{
lean_object* x_1; uint64_t x_2; 
x_1 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__9;
x_2 = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2;
x_3 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint64_t x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__9;
x_4 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__10;
x_5 = 0;
x_6 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__11;
x_7 = l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1___closed__1;
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_alloc_ctor(0, 7, 11);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_6);
lean_ctor_set(x_9, 3, x_7);
lean_ctor_set(x_9, 4, x_1);
lean_ctor_set(x_9, 5, x_8);
lean_ctor_set(x_9, 6, x_1);
lean_ctor_set_uint64(x_9, sizeof(void*)*7, x_4);
lean_ctor_set_uint8(x_9, sizeof(void*)*7 + 8, x_5);
lean_ctor_set_uint8(x_9, sizeof(void*)*7 + 9, x_5);
lean_ctor_set_uint8(x_9, sizeof(void*)*7 + 10, x_5);
return x_9;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2;
x_3 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
lean_ctor_set(x_3, 3, x_2);
lean_ctor_set(x_3, 4, x_2);
lean_ctor_set(x_3, 5, x_2);
lean_ctor_set(x_3, 6, x_2);
lean_ctor_set(x_3, 7, x_2);
lean_ctor_set(x_3, 8, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2;
x_2 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
lean_ctor_set(x_2, 4, x_1);
lean_ctor_set(x_2, 5, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2;
x_2 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__13;
x_3 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__14;
x_4 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__6;
x_5 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__15;
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_1);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_6 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__2;
lean_inc(x_1);
x_7 = l_Lean_Name_append(x_1, x_6);
x_8 = lean_box(0);
x_9 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__3;
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_Server_registerRpcProcedure___lambda__1), 10, 3);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at_Lean_Server_registerRpcProcedure___spec__1), 8, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__16;
x_13 = lean_st_mk_ref(x_12, x_5);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__7;
x_17 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__8;
x_18 = l_Lean_Server_registerRpcProcedure___lambda__2___closed__12;
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_14);
x_19 = l_Lean_Elab_Term_TermElabM_run___rarg(x_11, x_16, x_17, x_18, x_14, x_3, x_4, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_st_ref_get(x_14, x_21);
lean_dec(x_14);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_23, 1);
x_26 = lean_ctor_get(x_23, 0);
lean_dec(x_26);
lean_inc(x_7);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_7);
lean_ctor_set(x_27, 1, x_8);
lean_ctor_set(x_27, 2, x_9);
lean_inc(x_7);
lean_ctor_set_tag(x_23, 1);
lean_ctor_set(x_23, 1, x_8);
lean_ctor_set(x_23, 0, x_7);
x_28 = lean_box(0);
x_29 = 1;
x_30 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_22);
lean_ctor_set(x_30, 2, x_28);
lean_ctor_set(x_30, 3, x_23);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_29);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_inc(x_4);
lean_inc(x_3);
x_32 = l_Lean_addAndCompile(x_31, x_3, x_4, x_25);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_st_ref_get(x_4, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Server_handleRpcCall___lambda__3___closed__1;
x_39 = l_Lean_MapDeclarationExtension_insert___rarg(x_38, x_37, x_1, x_7);
x_40 = l_Lean_setEnv___at_Lean_compileDecls_doCompile___spec__12(x_39, x_3, x_4, x_36);
lean_dec(x_4);
lean_dec(x_3);
return x_40;
}
else
{
uint8_t x_41; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_32);
if (x_41 == 0)
{
return x_32;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_32, 0);
x_43 = lean_ctor_get(x_32, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_32);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_23, 1);
lean_inc(x_45);
lean_dec(x_23);
lean_inc(x_7);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_7);
lean_ctor_set(x_46, 1, x_8);
lean_ctor_set(x_46, 2, x_9);
lean_inc(x_7);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_7);
lean_ctor_set(x_47, 1, x_8);
x_48 = lean_box(0);
x_49 = 1;
x_50 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_22);
lean_ctor_set(x_50, 2, x_48);
lean_ctor_set(x_50, 3, x_47);
lean_ctor_set_uint8(x_50, sizeof(void*)*4, x_49);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
lean_inc(x_4);
lean_inc(x_3);
x_52 = l_Lean_addAndCompile(x_51, x_3, x_4, x_45);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_st_ref_get(x_4, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_ctor_get(x_55, 0);
lean_inc(x_57);
lean_dec(x_55);
x_58 = l_Lean_Server_handleRpcCall___lambda__3___closed__1;
x_59 = l_Lean_MapDeclarationExtension_insert___rarg(x_58, x_57, x_1, x_7);
x_60 = l_Lean_setEnv___at_Lean_compileDecls_doCompile___spec__12(x_59, x_3, x_4, x_56);
lean_dec(x_4);
lean_dec(x_3);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_61 = lean_ctor_get(x_52, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_52, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_63 = x_52;
} else {
 lean_dec_ref(x_52);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_19);
if (x_65 == 0)
{
return x_19;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_19, 0);
x_67 = lean_ctor_get(x_19, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_19);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_instInhabitedName;
x_9 = l_Lean_Server_handleRpcCall___lambda__3___closed__1;
lean_inc(x_1);
x_10 = l_Lean_MapDeclarationExtension_contains___rarg(x_8, x_9, x_2, x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = l_Lean_Server_registerRpcProcedure___lambda__2(x_1, x_11, x_5, x_6, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_1);
x_13 = l_Lean_Server_registerRpcProcedure___lambda__3___closed__1;
x_14 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
x_15 = l_Lean_Server_registerRpcProcedure___lambda__3___closed__2;
x_16 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_throwError___at_Lean_realizeGlobalConstCore___spec__5(x_16, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to register RPC call handler for '", 41, 41);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_registerRpcProcedure___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_registerBuiltinRpcProcedure___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(": already registered (builtin)", 30, 30);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_registerRpcProcedure___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_registerRpcProcedure___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = l_Lean_MessageData_ofName(x_1);
x_11 = l_Lean_Server_registerRpcProcedure___closed__2;
lean_ctor_set_tag(x_5, 7);
lean_ctor_set(x_5, 1, x_10);
lean_ctor_set(x_5, 0, x_11);
x_12 = l_Lean_Server_registerRpcProcedure___closed__3;
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_Server_handleRpcCall___closed__1;
x_15 = lean_st_ref_get(x_14, x_8);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5(x_17, x_1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_free_object(x_15);
x_20 = lean_box(0);
x_21 = l_Lean_Server_registerRpcProcedure___lambda__3(x_1, x_9, x_13, x_20, x_2, x_3, x_18);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_9);
lean_dec(x_1);
x_22 = l_Lean_Server_registerRpcProcedure___lambda__3___closed__1;
lean_ctor_set_tag(x_15, 7);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_15, 0, x_22);
x_23 = l_Lean_Server_registerRpcProcedure___closed__5;
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_throwError___at_Lean_realizeGlobalConstCore___spec__5(x_24, x_2, x_3, x_18);
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_15, 0);
x_31 = lean_ctor_get(x_15, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_15);
x_32 = l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5(x_30, x_1);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_box(0);
x_34 = l_Lean_Server_registerRpcProcedure___lambda__3(x_1, x_9, x_13, x_33, x_2, x_3, x_31);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_9);
lean_dec(x_1);
x_35 = l_Lean_Server_registerRpcProcedure___lambda__3___closed__1;
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_13);
x_37 = l_Lean_Server_registerRpcProcedure___closed__5;
x_38 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_throwError___at_Lean_realizeGlobalConstCore___spec__5(x_38, x_2, x_3, x_31);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_42 = x_39;
} else {
 lean_dec_ref(x_39);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(1, 2, 0);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_44 = lean_ctor_get(x_5, 0);
x_45 = lean_ctor_get(x_5, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_5);
x_46 = lean_ctor_get(x_44, 0);
lean_inc(x_46);
lean_dec(x_44);
lean_inc(x_1);
x_47 = l_Lean_MessageData_ofName(x_1);
x_48 = l_Lean_Server_registerRpcProcedure___closed__2;
x_49 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
x_50 = l_Lean_Server_registerRpcProcedure___closed__3;
x_51 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_Server_handleRpcCall___closed__1;
x_53 = lean_st_ref_get(x_52, x_45);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
x_57 = l_Lean_PersistentHashMap_contains___at_Lean_Server_registerBuiltinRpcProcedure___spec__5(x_54, x_1);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_56);
x_58 = lean_box(0);
x_59 = l_Lean_Server_registerRpcProcedure___lambda__3(x_1, x_46, x_51, x_58, x_2, x_3, x_55);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_46);
lean_dec(x_1);
x_60 = l_Lean_Server_registerRpcProcedure___lambda__3___closed__1;
if (lean_is_scalar(x_56)) {
 x_61 = lean_alloc_ctor(7, 2, 0);
} else {
 x_61 = x_56;
 lean_ctor_set_tag(x_61, 7);
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_51);
x_62 = l_Lean_Server_registerRpcProcedure___closed__5;
x_63 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_Lean_throwError___at_Lean_realizeGlobalConstCore___spec__5(x_63, x_2, x_3, x_55);
lean_dec(x_3);
lean_dec(x_2);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_67 = x_64;
} else {
 lean_dec_ref(x_64);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Server_registerRpcProcedure___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerRpcProcedure___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Server_registerRpcProcedure___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Server_registerRpcProcedure(x_1, x_4, x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("attribute cannot be erased", 26, 26);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__2;
x_6 = l_Lean_throwError___at_Lean_Attribute_Builtin_ensureNoArgs___spec__2(x_5, x_2, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__1;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("initFn", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__2;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__4;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__6;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__7;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__8;
x_2 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__9;
x_2 = l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__10;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__12;
x_2 = lean_unsigned_to_nat(1454u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("server_rpc_method", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Marks a function as a Lean server RPC method.\n    Shorthand for `registerRpcProcedure`.\n    The function must have type `α → RequestM (RequestTask β)` with\n    `[RpcEncodable α]` and `[RpcEncodable β]`.", 208, 202);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__13;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__15;
x_3 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__16;
x_4 = 1;
x_5 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__17;
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__18;
x_3 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__19;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__20;
x_3 = l_Lean_registerBuiltinAttribute(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__1(x_1, x_2, x_7, x_4, x_5, x_6);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Lean_Data_Lsp_Extra(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Server_Requests(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Server_Rpc_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Rpc_RequestHandling(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Extra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Requests(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Rpc_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1 = _init_l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__1);
l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__2 = _init_l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__2();
lean_mark_persistent(l_Lean_Server_instInhabitedRpcProcedure___rarg___closed__2);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__1 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__1();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__1);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37____closed__2);
if (builtin) {res = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_37_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_builtinRpcProcedures = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_builtinRpcProcedures);
lean_dec_ref(res);
}l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1___closed__1 = _init_l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1___closed__1();
lean_mark_persistent(l_Lean_RBMap_toArray___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____spec__1___closed__1);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__1);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__2);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__3 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__3();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__3);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__4 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__4();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__4);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__5 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__5();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80____closed__5);
if (builtin) {res = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_80_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_userRpcProcedures = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_userRpcProcedures);
lean_dec_ref(res);
}l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__1 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__1();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__1);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__2 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__2();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__2);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__3 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__3();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__3);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__4 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__4();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__4);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__5 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__5();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__5);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__6 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__6();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__6);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__7 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__7();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__7);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__8 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__8();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__8);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__9 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__9();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__9);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__10 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__10();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__10);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__11 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__11();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__11);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__12 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__12();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__12);
l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__13 = _init_l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__13();
lean_mark_persistent(l___private_Lean_Server_Rpc_RequestHandling_0__Lean_Server_evalRpcProcedureUnsafe___closed__13);
l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__1 = _init_l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__1();
l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__2 = _init_l_Lean_PersistentHashMap_findAux___at_Lean_Server_handleRpcCall___spec__2___closed__2();
l_Lean_Server_handleRpcCall___lambda__3___closed__1 = _init_l_Lean_Server_handleRpcCall___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Server_handleRpcCall___lambda__3___closed__1);
l_Lean_Server_handleRpcCall___lambda__4___closed__1 = _init_l_Lean_Server_handleRpcCall___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Server_handleRpcCall___lambda__4___closed__1);
l_Lean_Server_handleRpcCall___lambda__4___closed__2 = _init_l_Lean_Server_handleRpcCall___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Server_handleRpcCall___lambda__4___closed__2);
l_Lean_Server_handleRpcCall___closed__1 = _init_l_Lean_Server_handleRpcCall___closed__1();
lean_mark_persistent(l_Lean_Server_handleRpcCall___closed__1);
l_Lean_Server_handleRpcCall___closed__2 = _init_l_Lean_Server_handleRpcCall___closed__2();
lean_mark_persistent(l_Lean_Server_handleRpcCall___closed__2);
l_Lean_Server_handleRpcCall___closed__3 = _init_l_Lean_Server_handleRpcCall___closed__3();
lean_mark_persistent(l_Lean_Server_handleRpcCall___closed__3);
l_Lean_Server_handleRpcCall___closed__4 = _init_l_Lean_Server_handleRpcCall___closed__4();
lean_mark_persistent(l_Lean_Server_handleRpcCall___closed__4);
l_Lean_Server_handleRpcCall___closed__5 = _init_l_Lean_Server_handleRpcCall___closed__5();
lean_mark_persistent(l_Lean_Server_handleRpcCall___closed__5);
l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__1 = _init_l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__1();
lean_mark_persistent(l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__1);
l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__2 = _init_l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__2();
lean_mark_persistent(l_Lean_Server_parseRequestParams___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__2___closed__2);
l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__1 = _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__1);
l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__2 = _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__2___closed__2);
l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__1 = _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__1);
l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__2 = _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__3___closed__2);
l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__1 = _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__1);
l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__2 = _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___lambda__4___closed__2);
l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___closed__1 = _init_l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___closed__1();
lean_mark_persistent(l_Lean_Server_registerLspRequestHandler___at_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____spec__1___closed__1);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__1 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__1();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__1);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__2 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__2();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413____closed__2);
if (builtin) {res = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_413_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Lean_Server_wrapRpcProcedure___elambda__1___closed__1 = _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Server_wrapRpcProcedure___elambda__1___closed__1);
l_Lean_Server_wrapRpcProcedure___elambda__1___closed__2 = _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Server_wrapRpcProcedure___elambda__1___closed__2);
l_Lean_Server_wrapRpcProcedure___elambda__1___closed__3 = _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__3();
lean_mark_persistent(l_Lean_Server_wrapRpcProcedure___elambda__1___closed__3);
l_Lean_Server_wrapRpcProcedure___elambda__1___closed__4 = _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__4();
lean_mark_persistent(l_Lean_Server_wrapRpcProcedure___elambda__1___closed__4);
l_Lean_Server_wrapRpcProcedure___elambda__1___closed__5 = _init_l_Lean_Server_wrapRpcProcedure___elambda__1___closed__5();
lean_mark_persistent(l_Lean_Server_wrapRpcProcedure___elambda__1___closed__5);
l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2___closed__1 = _init_l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2___closed__1();
lean_mark_persistent(l_Lean_PersistentHashMap_insertAux___at_Lean_Server_registerBuiltinRpcProcedure___spec__2___closed__1);
l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___closed__1 = _init_l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Server_registerBuiltinRpcProcedure___lambda__2___closed__1);
l_Lean_Server_registerBuiltinRpcProcedure___closed__1 = _init_l_Lean_Server_registerBuiltinRpcProcedure___closed__1();
lean_mark_persistent(l_Lean_Server_registerBuiltinRpcProcedure___closed__1);
l_Lean_Server_registerBuiltinRpcProcedure___closed__2 = _init_l_Lean_Server_registerBuiltinRpcProcedure___closed__2();
lean_mark_persistent(l_Lean_Server_registerBuiltinRpcProcedure___closed__2);
l_Lean_Server_registerBuiltinRpcProcedure___closed__3 = _init_l_Lean_Server_registerBuiltinRpcProcedure___closed__3();
lean_mark_persistent(l_Lean_Server_registerBuiltinRpcProcedure___closed__3);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__1 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__1);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__2 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__2);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__3 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__3);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__4 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__4);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__5 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__5);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__6 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__6);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__7 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__7);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__8 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__8);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__9 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__9);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__10 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__10();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__10);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__11 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__11();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__11);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__12 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__12();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__12);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__13 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__13();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__13);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__14 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__14();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__14);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__15 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__15();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__15);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__16 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__16();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__16);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__17 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__17();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__17);
l_Lean_Server_registerRpcProcedure___lambda__1___closed__18 = _init_l_Lean_Server_registerRpcProcedure___lambda__1___closed__18();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__1___closed__18);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__1 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__1);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__2 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__2);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__3 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__3);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__4 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__4);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__5 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__5);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__6 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__6();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__6);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__7 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__7();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__7);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__8 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__8();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__8);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__9 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__9();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__9);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__10 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__10();
l_Lean_Server_registerRpcProcedure___lambda__2___closed__11 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__11();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__11);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__12 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__12();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__12);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__13 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__13();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__13);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__14 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__14();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__14);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__15 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__15();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__15);
l_Lean_Server_registerRpcProcedure___lambda__2___closed__16 = _init_l_Lean_Server_registerRpcProcedure___lambda__2___closed__16();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__2___closed__16);
l_Lean_Server_registerRpcProcedure___lambda__3___closed__1 = _init_l_Lean_Server_registerRpcProcedure___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__3___closed__1);
l_Lean_Server_registerRpcProcedure___lambda__3___closed__2 = _init_l_Lean_Server_registerRpcProcedure___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___lambda__3___closed__2);
l_Lean_Server_registerRpcProcedure___closed__1 = _init_l_Lean_Server_registerRpcProcedure___closed__1();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___closed__1);
l_Lean_Server_registerRpcProcedure___closed__2 = _init_l_Lean_Server_registerRpcProcedure___closed__2();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___closed__2);
l_Lean_Server_registerRpcProcedure___closed__3 = _init_l_Lean_Server_registerRpcProcedure___closed__3();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___closed__3);
l_Lean_Server_registerRpcProcedure___closed__4 = _init_l_Lean_Server_registerRpcProcedure___closed__4();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___closed__4);
l_Lean_Server_registerRpcProcedure___closed__5 = _init_l_Lean_Server_registerRpcProcedure___closed__5();
lean_mark_persistent(l_Lean_Server_registerRpcProcedure___closed__5);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__1 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__1();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__1);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__2 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__2();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____lambda__2___closed__2);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__1 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__1();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__1);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__2 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__2();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__2);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__3 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__3();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__3);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__4 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__4();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__4);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__5 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__5();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__5);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__6 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__6();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__6);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__7 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__7();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__7);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__8 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__8();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__8);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__9 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__9();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__9);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__10 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__10();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__10);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__11 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__11();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__11);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__12 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__12();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__12);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__13 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__13();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__13);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__14 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__14();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__14);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__15 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__15();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__15);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__16 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__16();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__16);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__17 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__17();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__17);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__18 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__18();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__18);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__19 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__19();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__19);
l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__20 = _init_l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__20();
lean_mark_persistent(l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454____closed__20);
if (builtin) {res = l_Lean_Server_initFn____x40_Lean_Server_Rpc_RequestHandling___hyg_1454_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
