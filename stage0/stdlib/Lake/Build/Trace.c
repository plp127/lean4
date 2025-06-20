// Lean compiler output
// Module: Lake.Build.Trace
// Imports: Lake.Util.IO Lean.Data.Json
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
static lean_object* l_Lake_Hash_instMixTrace___closed__1;
LEAN_EXPORT lean_object* l_Lake_MTime_instOrd;
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__11;
LEAN_EXPORT lean_object* l_Lake_computeHash___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_instToString;
LEAN_EXPORT lean_object* l_Lake_instToStringTextFilePath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad___rarg(lean_object*, lean_object*);
uint8_t l_String_anyAux___at_String_isNat___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__7;
LEAN_EXPORT lean_object* l_Lake_Hash_instToJson;
LEAN_EXPORT lean_object* l_Lake_computeListTrace___at_Lake_instComputeTraceListOfMonad___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashFilePathIO;
LEAN_EXPORT lean_object* l_Lake_instComputeTraceIOMTimeOfGetMTime___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceList___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___boxed(lean_object*);
lean_object* l_IO_FS_reprSystemTime____x40_Init_System_IO___hyg_3085_(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__1(lean_object*, uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withCaption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofNat(lean_object*);
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__13;
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__3;
static lean_object* l_Lake_Hash_ofText___closed__1;
uint64_t lean_byte_array_hash(lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofBool(uint8_t);
LEAN_EXPORT lean_object* l_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeHash(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_mix(uint64_t, uint64_t);
lean_object* l_String_quote(lean_object*);
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__3;
LEAN_EXPORT lean_object* l_Lake_computeListTrace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instBEq;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__11;
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_decEqHash____x40_Lake_Build_Trace___hyg_544____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace(lean_object*, lean_object*, lean_object*);
extern lean_object* l_IO_FS_instOrdSystemTime;
LEAN_EXPORT lean_object* l_Lake_computeTrace___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_io_metadata(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_mixTraceArray___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofBool___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_toJson___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___boxed(lean_object*, lean_object*);
static lean_object* l_Lake_instComputeHashStringId___closed__1;
uint64_t lean_string_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_nil___boxed__const__1;
extern lean_object* l_IO_FS_instReprSystemTime;
LEAN_EXPORT lean_object* l_Lake_Hash_toJson(uint64_t);
LEAN_EXPORT lean_object* l_Lake_computeFileHash(lean_object*, uint8_t, lean_object*);
static lean_object* l_Lake_Hash_instToString___closed__1;
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofText___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_toString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instBEqHash;
LEAN_EXPORT lean_object* l_Lake_MTime_instMin(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___rarg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
lean_object* l_List_foldl___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_instReprBuildTrace___closed__1;
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___rarg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_decEqHash____x40_Lake_Build_Trace___hyg_544_(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__4(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__4;
lean_object* l_UInt64_fromJson_x3f(lean_object*);
static lean_object* l_Lake_MTime_instOfNat___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getFileMTime___boxed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprHash;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instNilTrace;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeMTime___boxed__const__1;
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToStringTextFilePath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___at_Lake_instComputeTraceArrayOfMonad___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_BuildTrace_instCoeHash___closed__1;
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__8;
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceIOMTimeOfGetMTime___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashBoolId;
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__6;
LEAN_EXPORT lean_object* l_Lake_Hash_instFromJson;
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__9;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
LEAN_EXPORT lean_object* l_Lake_instCheckExistsFilePath;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instNilTrace;
lean_object* l_String_crlfToLf_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace(lean_object*);
static lean_object* l_Lake_instGetMTimeFilePath___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_mixTraceArray___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldlAux___at_String_toNat_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofMTime___boxed__const__1;
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofMTime(lean_object*, lean_object*);
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__10;
LEAN_EXPORT lean_object* l_Lake_Hash_toString(uint64_t);
extern lean_object* l_IO_FS_instBEqSystemTime;
LEAN_EXPORT uint64_t l_Lake_Hash_ofString(lean_object*);
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__9;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, uint64_t);
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__10;
LEAN_EXPORT lean_object* l_Lake_instComputeHashStringId;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashTextFilePathIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1(lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofText(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__2(size_t, lean_object*, lean_object*, lean_object*, size_t, uint64_t);
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__7;
LEAN_EXPORT lean_object* l_Lake_computeArrayHash(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instMixTrace;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_nil(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeFileHash___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_instComputeHashFilePathIO___closed__1;
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeListTrace___at_Lake_instComputeTraceListOfMonad___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__13;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_instReprHash___closed__1;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceIOMTimeOfGetMTime(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___at_Lake_instComputeTraceArrayOfMonad___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_mix___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceArray(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instOfNat;
LEAN_EXPORT lean_object* l_Lake_pureHash___rarg(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instGetMTimeFilePath;
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__10;
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__4;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__3;
static lean_object* l_Lake_Hash_instToJson___closed__1;
static lean_object* l_Lake_MTime_instOfNat___closed__1;
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instMax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr;
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f___boxed(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getFileMTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__6;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceList(lean_object*);
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__1;
LEAN_EXPORT lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_IO_FS_ordSystemTime____x40_Init_System_IO___hyg_3217_(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_nil;
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__2;
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__1;
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace;
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__9;
LEAN_EXPORT uint64_t l_Lake_Hash_instNilTrace;
static lean_object* l_Lake_instCheckExistsFilePath___closed__1;
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__2;
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__8;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeTrace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_computeListTrace___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instMixTrace___boxed(lean_object*, lean_object*);
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__5;
LEAN_EXPORT lean_object* l_Lake_Hash_ofByteArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__12;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeMTime(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_bignumToJson(lean_object*);
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__6;
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_beqHash____x40_Lake_Build_Trace___hyg_486____boxed(lean_object*, lean_object*);
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__14;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634_(uint64_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_mixTraceArray___spec__1___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__7;
LEAN_EXPORT lean_object* l_Lake_pureHash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instLT;
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lake_MTime_instMixTrace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instLE;
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash(uint64_t);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_BuildTrace_instNilTrace___closed__1;
static lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__4;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withoutInputs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash(lean_object*, lean_object*);
static lean_object* l_Lake_BuildTrace_instCoeMTime___closed__1;
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__12;
LEAN_EXPORT lean_object* l_Lake_computeListTrace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__5;
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___rarg___boxed__const__1;
static lean_object* l_Lake_BuildTrace_instMixTrace___closed__1;
lean_object* l_System_FilePath_pathExists___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__11;
LEAN_EXPORT lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381_(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_beqHash____x40_Lake_Build_Trace___hyg_486_(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_BuildTrace_withoutInputs___closed__1;
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashTextFilePathIO___boxed(lean_object*, lean_object*);
static lean_object* l_Lake_Hash_instFromJson___closed__1;
static lean_object* l_Lake_BuildTrace_instNilTrace___closed__2;
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_instMixTrace;
LEAN_EXPORT lean_object* l_Lake_Hash_ofString___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofByteArray(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__8;
LEAN_EXPORT lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__5;
static lean_object* l_Lake_instBEqHash___closed__1;
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lake_instComputeHashBoolId___closed__1;
static lean_object* _init_l_Lake_instCheckExistsFilePath___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_System_FilePath_pathExists___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_instCheckExistsFilePath() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_instCheckExistsFilePath___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_computeTrace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_2(x_2, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_computeTrace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lake_computeTrace___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lake_inhabitedOfNilTrace___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_inhabitedOfNilTrace___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceList___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldl___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lake_mixTraceList___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_mixTraceArray___spec__1___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_8 = lean_apply_2(x_1, x_5, x_7);
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
x_5 = x_8;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_mixTraceArray___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lake_mixTraceArray___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lake_mixTraceArray___spec__1___rarg(x_1, x_3, x_8, x_9, x_2);
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceArray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lake_mixTraceArray___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_mixTraceArray___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lake_mixTraceArray___spec__1___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lake_mixTraceArray___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_2, x_3, x_4);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg(x_1, x_2, lean_box(0), x_3, x_4, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, lean_box(0), x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_11);
lean_inc(x_4);
x_15 = lean_apply_2(x_4, lean_box(0), x_14);
lean_inc(x_1);
lean_inc(x_5);
x_16 = lean_alloc_closure((void*)(l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_16, 0, x_5);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_6);
lean_inc(x_13);
x_17 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_15, x_16);
x_18 = lean_alloc_closure((void*)(l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg___lambda__2), 6, 5);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_2);
lean_closure_set(x_18, 2, x_4);
lean_closure_set(x_18, 3, x_5);
lean_closure_set(x_18, 4, x_12);
x_19 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_computeListTrace___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg(x_1, x_3, lean_box(0), x_5, x_6, x_2, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lake_computeListTrace___rarg), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_7, lean_box(0), x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_2);
x_12 = lean_apply_1(x_2, x_9);
lean_inc(x_1);
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_13, 0, x_3);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_4);
lean_inc(x_11);
x_14 = lean_apply_4(x_11, lean_box(0), lean_box(0), x_12, x_13);
x_15 = lean_alloc_closure((void*)(l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2___rarg___lambda__1), 5, 4);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_10);
x_16 = lean_apply_4(x_11, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace___at_Lake_instComputeTraceListOfMonad___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_foldlM___at_Lake_instComputeTraceListOfMonad___spec__2___rarg(x_1, x_3, x_4, x_2, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace___at_Lake_instComputeTraceListOfMonad___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lake_computeListTrace___at_Lake_instComputeTraceListOfMonad___spec__1___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lake_computeListTrace___at_Lake_instComputeTraceListOfMonad___spec__1___rarg), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lake_instComputeTraceListOfMonad___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 1;
x_10 = lean_usize_add(x_1, x_9);
x_11 = l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg(x_2, x_3, lean_box(0), x_4, x_5, x_6, x_10, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_eq(x_7, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
x_12 = lean_array_uget(x_6, x_7);
lean_inc(x_2);
x_13 = lean_apply_1(x_2, x_12);
lean_inc(x_4);
x_14 = lean_apply_2(x_4, lean_box(0), x_13);
lean_inc(x_1);
lean_inc(x_5);
x_15 = lean_alloc_closure((void*)(l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_15, 0, x_5);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_9);
lean_inc(x_11);
x_16 = lean_apply_4(x_11, lean_box(0), lean_box(0), x_14, x_15);
x_17 = lean_box_usize(x_7);
x_18 = lean_box_usize(x_8);
x_19 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_1);
lean_closure_set(x_19, 2, x_2);
lean_closure_set(x_19, 3, x_4);
lean_closure_set(x_19, 4, x_5);
lean_closure_set(x_19, 5, x_6);
lean_closure_set(x_19, 6, x_18);
x_20 = lean_apply_4(x_11, lean_box(0), lean_box(0), x_16, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_ctor_get(x_5, 0);
lean_inc(x_21);
lean_dec(x_5);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_apply_2(x_22, lean_box(0), x_9);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg___boxed), 9, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_2(x_12, lean_box(0), x_2);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_8, x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_2);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = 0;
x_19 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_20 = l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg(x_1, x_3, lean_box(0), x_5, x_6, x_7, x_18, x_19, x_2);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lake_computeArrayTrace___rarg), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_11 = l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_10, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_11 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_12 = l_Array_foldlMUnsafe_fold___at_Lake_computeArrayTrace___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_10, x_11, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 1;
x_9 = lean_usize_add(x_1, x_8);
x_10 = l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg(x_2, x_3, x_4, x_5, x_9, x_6, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_eq(x_5, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_array_uget(x_4, x_5);
lean_inc(x_2);
x_11 = lean_apply_1(x_2, x_10);
lean_inc(x_1);
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_List_foldlM___at_Lake_computeListTrace___spec__1___rarg___lambda__1), 4, 3);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_7);
lean_inc(x_9);
x_13 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_11, x_12);
x_14 = lean_box_usize(x_5);
x_15 = lean_box_usize(x_6);
x_16 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_4);
lean_closure_set(x_16, 5, x_15);
x_17 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_13, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
lean_dec(x_3);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_apply_2(x_19, lean_box(0), x_7);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg___boxed), 7, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___at_Lake_instComputeTraceArrayOfMonad___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_2);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_6, x_6);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_2(x_14, lean_box(0), x_2);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_18 = l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg(x_1, x_3, x_4, x_5, x_16, x_17, x_2);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___at_Lake_instComputeTraceArrayOfMonad___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lake_computeArrayTrace___at_Lake_instComputeTraceArrayOfMonad___spec__1___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lake_computeArrayTrace___at_Lake_instComputeTraceArrayOfMonad___spec__1___rarg), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lake_instComputeTraceArrayOfMonad___rarg), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg___lambda__1(x_8, x_2, x_3, x_4, x_5, x_9, x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lake_instComputeTraceArrayOfMonad___spec__2___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
return x_10;
}
}
LEAN_EXPORT uint8_t l_Lake_beqHash____x40_Lake_Build_Trace___hyg_486_(uint64_t x_1, uint64_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_uint64_dec_eq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_beqHash____x40_Lake_Build_Trace___hyg_486____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = l_Lake_beqHash____x40_Lake_Build_Trace___hyg_486_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lake_instBEqHash___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_beqHash____x40_Lake_Build_Trace___hyg_486____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_instBEqHash() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_instBEqHash___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lake_decEqHash____x40_Lake_Build_Trace___hyg_544_(uint64_t x_1, uint64_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_uint64_dec_eq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_decEqHash____x40_Lake_Build_Trace___hyg_544____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = l_Lake_decEqHash____x40_Lake_Build_Trace___hyg_544_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash(uint64_t x_1, uint64_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_uint64_dec_eq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = l_Lake_instDecidableEqHash(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("val", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__2;
x_3 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" := ", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__4;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__3;
x_2 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__5;
x_3 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("{ ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__8;
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__9;
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__8;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" }", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__12;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634_(uint64_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_3 = lean_uint64_to_nat(x_1);
x_4 = l_Nat_reprFast(x_3);
x_5 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__7;
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = 0;
x_9 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_8);
x_10 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__6;
x_11 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__11;
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__13;
x_15 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__10;
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*1, x_8);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634_(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Lake_instReprHash___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_instReprHash() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_instReprHash___closed__1;
return x_1;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofNat(lean_object* x_1) {
_start:
{
uint64_t x_2; 
x_2 = lean_uint64_of_nat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofNat___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = l_Lake_Hash_ofNat(x_1);
lean_dec(x_1);
x_3 = lean_box_uint64(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = l_String_anyAux___at_String_isNat___spec__1(x_1, x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_String_foldlAux___at_String_toNat_x3f___spec__1(x_1, x_2, x_3, x_3);
lean_dec(x_2);
x_7 = lean_uint64_of_nat(x_6);
lean_dec(x_6);
x_8 = lean_box_uint64(x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_box(0);
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_box(0);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_Hash_ofString_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_readFile(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Lake_Hash_ofString_x3f(x_5);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = l_Lake_Hash_ofString_x3f(x_7);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_3, 0);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_13);
return x_3;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_Hash_load_x3f(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static uint64_t _init_l_Lake_Hash_nil() {
_start:
{
uint64_t x_1; 
x_1 = 1723;
return x_1;
}
}
static uint64_t _init_l_Lake_Hash_instNilTrace() {
_start:
{
uint64_t x_1; 
x_1 = l_Lake_Hash_nil;
return x_1;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_mix(uint64_t x_1, uint64_t x_2) {
_start:
{
uint64_t x_3; 
x_3 = lean_uint64_mix_hash(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_mix___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = l_Lake_Hash_mix(x_3, x_4);
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
static lean_object* _init_l_Lake_Hash_instMixTrace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_Hash_mix___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_Hash_instMixTrace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_Hash_instMixTrace___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toString(uint64_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_uint64_to_nat(x_1);
x_3 = l_Nat_reprFast(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toString___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_3 = l_Lake_Hash_toString(x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_Hash_instToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_Hash_toString___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_Hash_instToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_Hash_instToString___closed__1;
return x_1;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofString(lean_object* x_1) {
_start:
{
uint64_t x_2; uint64_t x_3; uint64_t x_4; 
x_2 = lean_string_hash(x_1);
x_3 = 1723;
x_4 = lean_uint64_mix_hash(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofString___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = l_Lake_Hash_ofString(x_1);
lean_dec(x_1);
x_3 = lean_box_uint64(x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_Hash_ofText___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofText(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint64_t x_5; uint64_t x_6; uint64_t x_7; 
x_2 = l_Lake_Hash_ofText___closed__1;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_String_crlfToLf_go(x_1, x_2, x_3, x_3);
x_5 = lean_string_hash(x_4);
lean_dec(x_4);
x_6 = 1723;
x_7 = lean_uint64_mix_hash(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofText___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = l_Lake_Hash_ofText(x_1);
lean_dec(x_1);
x_3 = lean_box_uint64(x_2);
return x_3;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofByteArray(lean_object* x_1) {
_start:
{
uint64_t x_2; 
x_2 = lean_byte_array_hash(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofByteArray___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = l_Lake_Hash_ofByteArray(x_1);
lean_dec(x_1);
x_3 = lean_box_uint64(x_2);
return x_3;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofBool(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
uint64_t x_2; 
x_2 = 13;
return x_2;
}
else
{
uint64_t x_3; 
x_3 = 11;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofBool___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint64_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lake_Hash_ofBool(x_2);
x_4 = lean_box_uint64(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toJson(uint64_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_uint64_to_nat(x_1);
x_3 = l_Lean_bignumToJson(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toJson___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_3 = l_Lake_Hash_toJson(x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_Hash_instToJson___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_Hash_toJson___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_Hash_instToJson() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_Hash_instToJson___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_fromJson_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_UInt64_fromJson_x3f(x_1);
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
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
static lean_object* _init_l_Lake_Hash_instFromJson___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_Hash_fromJson_x3f), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_Hash_instFromJson() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_Hash_instFromJson___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lake_instComputeTraceHashOfComputeHash___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_instComputeTraceHashOfComputeHash___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_pureHash___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_pureHash(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lake_pureHash___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_computeHash___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_apply_2(x_2, lean_box(0), x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_computeHash(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lake_computeHash___rarg), 3, 0);
return x_4;
}
}
static lean_object* _init_l_Lake_instComputeHashBoolId___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_Hash_ofBool___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_instComputeHashBoolId() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_instComputeHashBoolId___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lake_instComputeHashStringId___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_Hash_ofString___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_instComputeHashStringId() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_instComputeHashStringId___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_readBinFile(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_byte_array_hash(x_5);
lean_dec(x_5);
x_7 = lean_box_uint64(x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; uint64_t x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_byte_array_hash(x_8);
lean_dec(x_8);
x_11 = lean_box_uint64(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_3);
if (x_13 == 0)
{
return x_3;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_computeBinFileHash(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_instComputeHashFilePathIO___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_computeBinFileHash___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_instComputeHashFilePathIO() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_instComputeHashFilePathIO___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_readFile(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Lake_Hash_ofText___closed__1;
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_String_crlfToLf_go(x_5, x_6, x_7, x_7);
lean_dec(x_5);
x_9 = lean_string_hash(x_8);
lean_dec(x_8);
x_10 = 1723;
x_11 = lean_uint64_mix_hash(x_10, x_9);
x_12 = lean_box_uint64(x_11);
lean_ctor_set(x_3, 0, x_12);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_15 = l_Lake_Hash_ofText___closed__1;
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_String_crlfToLf_go(x_13, x_15, x_16, x_16);
lean_dec(x_13);
x_18 = lean_string_hash(x_17);
lean_dec(x_17);
x_19 = 1723;
x_20 = lean_uint64_mix_hash(x_19, x_18);
x_21 = lean_box_uint64(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_14);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_3);
if (x_23 == 0)
{
return x_3;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_3, 0);
x_25 = lean_ctor_get(x_3, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_3);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_computeTextFileHash(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_instCoeTextFilePathFilePath(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashTextFilePathIO(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_computeTextFileHash(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashTextFilePathIO___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_instComputeHashTextFilePathIO(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_instToStringTextFilePath(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_instToStringTextFilePath___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_instToStringTextFilePath(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_computeFileHash(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
if (x_2 == 0)
{
lean_object* x_4; 
x_4 = l_Lake_computeBinFileHash(x_1, x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = l_Lake_computeTextFileHash(x_1, x_3);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeFileHash___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lake_computeFileHash(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__1(lean_object* x_1, uint64_t x_2, uint64_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_uint64_mix_hash(x_2, x_3);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_2(x_5, lean_box(0), x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__2(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, uint64_t x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = lean_usize_add(x_1, x_7);
x_9 = l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, uint64_t x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_eq(x_4, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_1);
x_10 = lean_apply_1(x_1, x_9);
x_11 = lean_box_uint64(x_6);
lean_inc(x_2);
x_12 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_12, 0, x_2);
lean_closure_set(x_12, 1, x_11);
lean_inc(x_8);
x_13 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_12);
x_14 = lean_box_usize(x_4);
x_15 = lean_box_usize(x_5);
x_16 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_15);
x_17 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_13, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
lean_dec(x_1);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_box_uint64(x_6);
x_21 = lean_apply_2(x_19, lean_box(0), x_20);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
static lean_object* _init_l_Lake_computeArrayHash___rarg___boxed__const__1() {
_start:
{
uint64_t x_1; lean_object* x_2; 
x_1 = l_Lake_Hash_nil;
x_2 = lean_box_uint64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lake_computeArrayHash___rarg___boxed__const__1;
x_10 = lean_apply_2(x_8, lean_box(0), x_9);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = lean_nat_dec_le(x_4, x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lake_computeArrayHash___rarg___boxed__const__1;
x_15 = lean_apply_2(x_13, lean_box(0), x_14);
return x_15;
}
else
{
size_t x_16; size_t x_17; uint64_t x_18; lean_object* x_19; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_18 = l_Lake_Hash_nil;
x_19 = l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg(x_1, x_2, x_3, x_16, x_17, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lake_computeArrayHash___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = lean_unbox_uint64(x_3);
lean_dec(x_3);
x_6 = l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__1(x_1, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; uint64_t x_9; lean_object* x_10; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_uint64(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___lambda__2(x_7, x_2, x_3, x_4, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; uint64_t x_9; lean_object* x_10; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_uint64(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lake_computeArrayHash___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lake_computeArrayHash___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lake_instComputeHashArrayOfMonad___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_Lake_MTime_instOfNat___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_MTime_instOfNat___closed__2() {
_start:
{
uint32_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = l_Lake_MTime_instOfNat___closed__1;
x_3 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint32(x_3, sizeof(void*)*1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_MTime_instOfNat() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_MTime_instOfNat___closed__2;
return x_1;
}
}
static lean_object* _init_l_Lake_MTime_instBEq() {
_start:
{
lean_object* x_1; 
x_1 = l_IO_FS_instBEqSystemTime;
return x_1;
}
}
static lean_object* _init_l_Lake_MTime_instRepr() {
_start:
{
lean_object* x_1; 
x_1 = l_IO_FS_instReprSystemTime;
return x_1;
}
}
static lean_object* _init_l_Lake_MTime_instOrd() {
_start:
{
lean_object* x_1; 
x_1 = l_IO_FS_instOrdSystemTime;
return x_1;
}
}
static lean_object* _init_l_Lake_MTime_instLT() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lake_MTime_instLE() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMin(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_IO_FS_ordSystemTime____x40_Init_System_IO___hyg_3217_(x_1, x_2);
x_4 = lean_box(x_3);
if (lean_obj_tag(x_4) == 2)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_dec(x_4);
lean_inc(x_1);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_MTime_instMin(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMax(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_IO_FS_ordSystemTime____x40_Init_System_IO___hyg_3217_(x_1, x_2);
x_4 = lean_box(x_3);
if (lean_obj_tag(x_4) == 2)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_dec(x_4);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_MTime_instMax(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_MTime_instNilTrace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_MTime_instOfNat___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMixTrace(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_IO_FS_ordSystemTime____x40_Init_System_IO___hyg_3217_(x_1, x_2);
x_4 = lean_box(x_3);
if (lean_obj_tag(x_4) == 2)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_dec(x_4);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMixTrace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_MTime_instMixTrace(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceIOMTimeOfGetMTime___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceIOMTimeOfGetMTime(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lake_instComputeTraceIOMTimeOfGetMTime___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceIOMTimeOfGetMTime___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lake_instComputeTraceIOMTimeOfGetMTime___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_getFileMTime(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_metadata(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getFileMTime___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_getFileMTime(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lake_instGetMTimeFilePath___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_getFileMTime___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_instGetMTimeFilePath() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_instGetMTimeFilePath___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_metadata(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_instGetMTimeTextFilePath(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_IO_FS_ordSystemTime____x40_Init_System_IO___hyg_3217_(x_3, x_7);
lean_dec(x_7);
x_9 = lean_box(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
x_11 = lean_box(x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
uint8_t x_12; lean_object* x_13; 
lean_dec(x_9);
x_12 = 0;
x_13 = lean_box(x_12);
lean_ctor_set(x_5, 0, x_13);
return x_5;
}
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
x_16 = l_IO_FS_ordSystemTime____x40_Init_System_IO___hyg_3217_(x_3, x_14);
lean_dec(x_14);
x_17 = lean_box(x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_18 = 1;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_15);
return x_20;
}
else
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_17);
x_21 = 0;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_15);
return x_23;
}
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_5);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_5, 0);
lean_dec(x_25);
x_26 = 0;
x_27 = lean_box(x_26);
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 0, x_27);
return x_5;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_5, 1);
lean_inc(x_28);
lean_dec(x_5);
x_29 = 0;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lake_MTime_checkUpToDate___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lake_MTime_checkUpToDate___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381_(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
lean_ctor_set_tag(x_3, 5);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381_(x_5, x_7);
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_2 = x_9;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_1);
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_1);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381_(x_11, x_14);
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_2 = x_16;
x_3 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381_(x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381_(x_8, x_9);
x_11 = l_List_foldl___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__4(x_2, x_10, x_4);
return x_11;
}
}
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(",", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__2;
x_2 = lean_box(1);
x_3 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("#[", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__4;
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__5;
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__4;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__8;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("#[]", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__10;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_5 = lean_array_to_list(x_1);
x_6 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__3;
x_7 = l_Std_Format_joinSep___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__3(x_5, x_6);
x_8 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__7;
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__9;
x_11 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__6;
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = 1;
x_15 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set_uint8(x_15, sizeof(void*)*1, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_1);
x_16 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__11;
return x_16;
}
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("caption", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__2;
x_3 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__3;
x_2 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__5;
x_3 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(11u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("inputs", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__6;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hash", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__9;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("mtime", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__12;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint64_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_String_quote(x_3);
lean_dec(x_3);
x_5 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__5;
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = 0;
x_9 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_8);
x_10 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__4;
x_11 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__2;
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__7;
x_17 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__5;
x_19 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1(x_20);
x_22 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__8;
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*1, x_8);
x_25 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_12);
x_27 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_14);
x_28 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__10;
x_29 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_18);
x_31 = lean_ctor_get(x_1, 2);
lean_inc(x_31);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_unbox_uint64(x_31);
lean_dec(x_31);
x_34 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634_(x_33, x_32);
x_35 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__11;
x_36 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_8);
x_38 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_12);
x_40 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_14);
x_41 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__13;
x_42 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_18);
x_44 = lean_ctor_get(x_1, 3);
lean_inc(x_44);
lean_dec(x_1);
x_45 = l_IO_FS_reprSystemTime____x40_Init_System_IO___hyg_3085_(x_44, x_32);
lean_dec(x_44);
x_46 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__14;
x_47 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set_uint8(x_48, sizeof(void*)*1, x_8);
x_49 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__11;
x_51 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__13;
x_53 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__10;
x_55 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_8);
return x_56;
}
}
LEAN_EXPORT lean_object* l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381_(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_instReprBuildTrace___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withCaption(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
lean_dec(x_4);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_6);
lean_ctor_set(x_8, 3, x_7);
return x_8;
}
}
}
static lean_object* _init_l_Lake_BuildTrace_withoutInputs___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withoutInputs(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_dec(x_3);
x_4 = l_Lake_BuildTrace_withoutInputs___closed__1;
lean_ctor_set(x_1, 1, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_8 = l_Lake_BuildTrace_withoutInputs___closed__1;
x_9 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 2, x_6);
lean_ctor_set(x_9, 3, x_7);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash(uint64_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lake_BuildTrace_withoutInputs___closed__1;
x_4 = l_Lake_MTime_instOfNat___closed__2;
x_5 = lean_box_uint64(x_1);
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_5);
lean_ctor_set(x_6, 3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = l_Lake_BuildTrace_ofHash(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Lake_BuildTrace_instCoeHash___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<hash>", 6, 6);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash(uint64_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lake_BuildTrace_instCoeHash___closed__1;
x_3 = l_Lake_BuildTrace_withoutInputs___closed__1;
x_4 = l_Lake_MTime_instOfNat___closed__2;
x_5 = lean_box_uint64(x_1);
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_5);
lean_ctor_set(x_6, 3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_3 = l_Lake_BuildTrace_instCoeHash(x_2);
return x_3;
}
}
static lean_object* _init_l_Lake_BuildTrace_ofMTime___boxed__const__1() {
_start:
{
uint64_t x_1; lean_object* x_2; 
x_1 = l_Lake_Hash_nil;
x_2 = lean_box_uint64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofMTime(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lake_BuildTrace_withoutInputs___closed__1;
x_4 = l_Lake_BuildTrace_ofMTime___boxed__const__1;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_Lake_BuildTrace_instCoeMTime___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<mtime>", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lake_BuildTrace_instCoeMTime___boxed__const__1() {
_start:
{
uint64_t x_1; lean_object* x_2; 
x_1 = l_Lake_Hash_nil;
x_2 = lean_box_uint64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeMTime(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lake_BuildTrace_instCoeMTime___closed__1;
x_3 = l_Lake_BuildTrace_withoutInputs___closed__1;
x_4 = l_Lake_BuildTrace_instCoeMTime___boxed__const__1;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_Lake_BuildTrace_nil___boxed__const__1() {
_start:
{
uint64_t x_1; lean_object* x_2; 
x_1 = l_Lake_Hash_nil;
x_2 = lean_box_uint64(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_nil(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lake_BuildTrace_withoutInputs___closed__1;
x_3 = l_Lake_MTime_instOfNat___closed__2;
x_4 = l_Lake_BuildTrace_nil___boxed__const__1;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_3);
return x_5;
}
}
static lean_object* _init_l_Lake_BuildTrace_instNilTrace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<nil>", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lake_BuildTrace_instNilTrace___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_BuildTrace_instNilTrace___closed__1;
x_2 = l_Lake_BuildTrace_nil(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_BuildTrace_instNilTrace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_BuildTrace_instNilTrace___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
x_7 = lean_apply_1(x_2, x_5);
x_8 = lean_apply_3(x_3, lean_box(0), x_7, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_5);
x_11 = lean_apply_2(x_4, x_5, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_apply_1(x_1, x_5);
x_15 = l_Lake_BuildTrace_withoutInputs___closed__1;
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_9);
lean_ctor_set(x_16, 3, x_13);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_apply_1(x_1, x_5);
x_20 = l_Lake_BuildTrace_withoutInputs___closed__1;
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_9);
lean_ctor_set(x_21, 3, x_17);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_11);
if (x_23 == 0)
{
return x_11;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_8);
if (x_27 == 0)
{
return x_8;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_8, 0);
x_29 = lean_ctor_get(x_8, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_8);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lake_BuildTrace_compute___rarg), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lake_BuildTrace_compute___rarg), 6, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_mix(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_2);
x_7 = lean_array_push(x_4, x_2);
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint8_t x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_2, 2);
x_10 = lean_ctor_get(x_2, 3);
x_11 = lean_ctor_get(x_2, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_2, 0);
lean_dec(x_12);
x_13 = lean_unbox_uint64(x_5);
lean_dec(x_5);
x_14 = lean_unbox_uint64(x_9);
lean_dec(x_9);
x_15 = lean_uint64_mix_hash(x_13, x_14);
x_16 = l_IO_FS_ordSystemTime____x40_Init_System_IO___hyg_3217_(x_6, x_10);
x_17 = lean_box(x_16);
if (lean_obj_tag(x_17) == 2)
{
lean_object* x_18; 
lean_dec(x_10);
x_18 = lean_box_uint64(x_15);
lean_ctor_set(x_2, 3, x_6);
lean_ctor_set(x_2, 2, x_18);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
else
{
lean_object* x_19; 
lean_dec(x_17);
lean_dec(x_6);
x_19 = lean_box_uint64(x_15);
lean_ctor_set(x_2, 2, x_19);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
}
else
{
lean_object* x_20; lean_object* x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint8_t x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_2, 2);
x_21 = lean_ctor_get(x_2, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
x_22 = lean_unbox_uint64(x_5);
lean_dec(x_5);
x_23 = lean_unbox_uint64(x_20);
lean_dec(x_20);
x_24 = lean_uint64_mix_hash(x_22, x_23);
x_25 = l_IO_FS_ordSystemTime____x40_Init_System_IO___hyg_3217_(x_6, x_21);
x_26 = lean_box(x_25);
if (lean_obj_tag(x_26) == 2)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_21);
x_27 = lean_box_uint64(x_24);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_3);
lean_ctor_set(x_28, 1, x_7);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set(x_28, 3, x_6);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_26);
lean_dec(x_6);
x_29 = lean_box_uint64(x_24);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_3);
lean_ctor_set(x_30, 1, x_7);
lean_ctor_set(x_30, 2, x_29);
lean_ctor_set(x_30, 3, x_21);
return x_30;
}
}
}
}
static lean_object* _init_l_Lake_BuildTrace_instMixTrace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lake_BuildTrace_mix), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lake_BuildTrace_instMixTrace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lake_BuildTrace_instMixTrace___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___rarg(lean_object* x_1, lean_object* x_2, uint64_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint64_t x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_4, 2);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_unbox_uint64(x_6);
lean_dec(x_6);
x_8 = lean_uint64_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_apply_2(x_1, x_2, x_5);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lake_BuildTrace_checkAgainstHash___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint64_t x_6; lean_object* x_7; 
x_6 = lean_unbox_uint64(x_3);
lean_dec(x_3);
x_7 = l_Lake_BuildTrace_checkAgainstHash___rarg(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 3);
x_6 = l_Lake_MTime_checkUpToDate___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lake_BuildTrace_checkAgainstTime___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lake_BuildTrace_checkAgainstTime___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Lake_Util_IO(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Json(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Trace(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_IO(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instCheckExistsFilePath___closed__1 = _init_l_Lake_instCheckExistsFilePath___closed__1();
lean_mark_persistent(l_Lake_instCheckExistsFilePath___closed__1);
l_Lake_instCheckExistsFilePath = _init_l_Lake_instCheckExistsFilePath();
lean_mark_persistent(l_Lake_instCheckExistsFilePath);
l_Lake_instBEqHash___closed__1 = _init_l_Lake_instBEqHash___closed__1();
lean_mark_persistent(l_Lake_instBEqHash___closed__1);
l_Lake_instBEqHash = _init_l_Lake_instBEqHash();
lean_mark_persistent(l_Lake_instBEqHash);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__1 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__1();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__1);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__2 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__2();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__2);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__3 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__3();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__3);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__4 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__4();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__4);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__5 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__5();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__5);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__6 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__6();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__6);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__7 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__7();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__7);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__8 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__8();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__8);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__9 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__9();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__9);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__10 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__10();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__10);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__11 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__11();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__11);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__12 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__12();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__12);
l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__13 = _init_l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__13();
lean_mark_persistent(l_Lake_reprHash____x40_Lake_Build_Trace___hyg_634____closed__13);
l_Lake_instReprHash___closed__1 = _init_l_Lake_instReprHash___closed__1();
lean_mark_persistent(l_Lake_instReprHash___closed__1);
l_Lake_instReprHash = _init_l_Lake_instReprHash();
lean_mark_persistent(l_Lake_instReprHash);
l_Lake_Hash_nil = _init_l_Lake_Hash_nil();
l_Lake_Hash_instNilTrace = _init_l_Lake_Hash_instNilTrace();
l_Lake_Hash_instMixTrace___closed__1 = _init_l_Lake_Hash_instMixTrace___closed__1();
lean_mark_persistent(l_Lake_Hash_instMixTrace___closed__1);
l_Lake_Hash_instMixTrace = _init_l_Lake_Hash_instMixTrace();
lean_mark_persistent(l_Lake_Hash_instMixTrace);
l_Lake_Hash_instToString___closed__1 = _init_l_Lake_Hash_instToString___closed__1();
lean_mark_persistent(l_Lake_Hash_instToString___closed__1);
l_Lake_Hash_instToString = _init_l_Lake_Hash_instToString();
lean_mark_persistent(l_Lake_Hash_instToString);
l_Lake_Hash_ofText___closed__1 = _init_l_Lake_Hash_ofText___closed__1();
lean_mark_persistent(l_Lake_Hash_ofText___closed__1);
l_Lake_Hash_instToJson___closed__1 = _init_l_Lake_Hash_instToJson___closed__1();
lean_mark_persistent(l_Lake_Hash_instToJson___closed__1);
l_Lake_Hash_instToJson = _init_l_Lake_Hash_instToJson();
lean_mark_persistent(l_Lake_Hash_instToJson);
l_Lake_Hash_instFromJson___closed__1 = _init_l_Lake_Hash_instFromJson___closed__1();
lean_mark_persistent(l_Lake_Hash_instFromJson___closed__1);
l_Lake_Hash_instFromJson = _init_l_Lake_Hash_instFromJson();
lean_mark_persistent(l_Lake_Hash_instFromJson);
l_Lake_instComputeHashBoolId___closed__1 = _init_l_Lake_instComputeHashBoolId___closed__1();
lean_mark_persistent(l_Lake_instComputeHashBoolId___closed__1);
l_Lake_instComputeHashBoolId = _init_l_Lake_instComputeHashBoolId();
lean_mark_persistent(l_Lake_instComputeHashBoolId);
l_Lake_instComputeHashStringId___closed__1 = _init_l_Lake_instComputeHashStringId___closed__1();
lean_mark_persistent(l_Lake_instComputeHashStringId___closed__1);
l_Lake_instComputeHashStringId = _init_l_Lake_instComputeHashStringId();
lean_mark_persistent(l_Lake_instComputeHashStringId);
l_Lake_instComputeHashFilePathIO___closed__1 = _init_l_Lake_instComputeHashFilePathIO___closed__1();
lean_mark_persistent(l_Lake_instComputeHashFilePathIO___closed__1);
l_Lake_instComputeHashFilePathIO = _init_l_Lake_instComputeHashFilePathIO();
lean_mark_persistent(l_Lake_instComputeHashFilePathIO);
l_Lake_computeArrayHash___rarg___boxed__const__1 = _init_l_Lake_computeArrayHash___rarg___boxed__const__1();
lean_mark_persistent(l_Lake_computeArrayHash___rarg___boxed__const__1);
l_Lake_MTime_instOfNat___closed__1 = _init_l_Lake_MTime_instOfNat___closed__1();
lean_mark_persistent(l_Lake_MTime_instOfNat___closed__1);
l_Lake_MTime_instOfNat___closed__2 = _init_l_Lake_MTime_instOfNat___closed__2();
lean_mark_persistent(l_Lake_MTime_instOfNat___closed__2);
l_Lake_MTime_instOfNat = _init_l_Lake_MTime_instOfNat();
lean_mark_persistent(l_Lake_MTime_instOfNat);
l_Lake_MTime_instBEq = _init_l_Lake_MTime_instBEq();
lean_mark_persistent(l_Lake_MTime_instBEq);
l_Lake_MTime_instRepr = _init_l_Lake_MTime_instRepr();
lean_mark_persistent(l_Lake_MTime_instRepr);
l_Lake_MTime_instOrd = _init_l_Lake_MTime_instOrd();
lean_mark_persistent(l_Lake_MTime_instOrd);
l_Lake_MTime_instLT = _init_l_Lake_MTime_instLT();
lean_mark_persistent(l_Lake_MTime_instLT);
l_Lake_MTime_instLE = _init_l_Lake_MTime_instLE();
lean_mark_persistent(l_Lake_MTime_instLE);
l_Lake_MTime_instNilTrace = _init_l_Lake_MTime_instNilTrace();
lean_mark_persistent(l_Lake_MTime_instNilTrace);
l_Lake_instGetMTimeFilePath___closed__1 = _init_l_Lake_instGetMTimeFilePath___closed__1();
lean_mark_persistent(l_Lake_instGetMTimeFilePath___closed__1);
l_Lake_instGetMTimeFilePath = _init_l_Lake_instGetMTimeFilePath();
lean_mark_persistent(l_Lake_instGetMTimeFilePath);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__1 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__1();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__1);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__2 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__2();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__2);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__3 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__3();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__3);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__4 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__4();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__4);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__5 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__5();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__5);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__6 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__6();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__6);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__7 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__7();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__7);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__8 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__8();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__8);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__9 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__9();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__9);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__10 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__10();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__10);
l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__11 = _init_l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__11();
lean_mark_persistent(l_Array_Array_repr___at_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____spec__1___closed__11);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__1 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__1();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__1);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__2 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__2();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__2);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__3 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__3();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__3);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__4 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__4();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__4);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__5 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__5();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__5);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__6 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__6();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__6);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__7 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__7();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__7);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__8 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__8();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__8);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__9 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__9();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__9);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__10 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__10();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__10);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__11 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__11();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__11);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__12 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__12();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__12);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__13 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__13();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__13);
l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__14 = _init_l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__14();
lean_mark_persistent(l_Lake_reprBuildTrace____x40_Lake_Build_Trace___hyg_1381____closed__14);
l_Lake_instReprBuildTrace___closed__1 = _init_l_Lake_instReprBuildTrace___closed__1();
lean_mark_persistent(l_Lake_instReprBuildTrace___closed__1);
l_Lake_instReprBuildTrace = _init_l_Lake_instReprBuildTrace();
lean_mark_persistent(l_Lake_instReprBuildTrace);
l_Lake_BuildTrace_withoutInputs___closed__1 = _init_l_Lake_BuildTrace_withoutInputs___closed__1();
lean_mark_persistent(l_Lake_BuildTrace_withoutInputs___closed__1);
l_Lake_BuildTrace_instCoeHash___closed__1 = _init_l_Lake_BuildTrace_instCoeHash___closed__1();
lean_mark_persistent(l_Lake_BuildTrace_instCoeHash___closed__1);
l_Lake_BuildTrace_ofMTime___boxed__const__1 = _init_l_Lake_BuildTrace_ofMTime___boxed__const__1();
lean_mark_persistent(l_Lake_BuildTrace_ofMTime___boxed__const__1);
l_Lake_BuildTrace_instCoeMTime___closed__1 = _init_l_Lake_BuildTrace_instCoeMTime___closed__1();
lean_mark_persistent(l_Lake_BuildTrace_instCoeMTime___closed__1);
l_Lake_BuildTrace_instCoeMTime___boxed__const__1 = _init_l_Lake_BuildTrace_instCoeMTime___boxed__const__1();
lean_mark_persistent(l_Lake_BuildTrace_instCoeMTime___boxed__const__1);
l_Lake_BuildTrace_nil___boxed__const__1 = _init_l_Lake_BuildTrace_nil___boxed__const__1();
lean_mark_persistent(l_Lake_BuildTrace_nil___boxed__const__1);
l_Lake_BuildTrace_instNilTrace___closed__1 = _init_l_Lake_BuildTrace_instNilTrace___closed__1();
lean_mark_persistent(l_Lake_BuildTrace_instNilTrace___closed__1);
l_Lake_BuildTrace_instNilTrace___closed__2 = _init_l_Lake_BuildTrace_instNilTrace___closed__2();
lean_mark_persistent(l_Lake_BuildTrace_instNilTrace___closed__2);
l_Lake_BuildTrace_instNilTrace = _init_l_Lake_BuildTrace_instNilTrace();
lean_mark_persistent(l_Lake_BuildTrace_instNilTrace);
l_Lake_BuildTrace_instMixTrace___closed__1 = _init_l_Lake_BuildTrace_instMixTrace___closed__1();
lean_mark_persistent(l_Lake_BuildTrace_instMixTrace___closed__1);
l_Lake_BuildTrace_instMixTrace = _init_l_Lake_BuildTrace_instMixTrace();
lean_mark_persistent(l_Lake_BuildTrace_instMixTrace);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
