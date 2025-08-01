// Lean compiler output
// Module: Std.Internal.Async
// Imports: Std.Internal.Async.Basic Std.Internal.Async.Timer Std.Internal.Async.TCP Std.Internal.Async.UDP Std.Internal.Async.DNS Std.Internal.Async.Select Std.Internal.Async.Process Std.Internal.Async.System
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
lean_object* initialize_Std_Internal_Async_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Internal_Async_Timer(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Internal_Async_TCP(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Internal_Async_UDP(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Internal_Async_DNS(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Internal_Async_Select(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Internal_Async_Process(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Internal_Async_System(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Internal_Async(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_Async_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Async_Timer(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Async_TCP(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Async_UDP(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Async_DNS(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Async_Select(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Async_Process(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Async_System(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
