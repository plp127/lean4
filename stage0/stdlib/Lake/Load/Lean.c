// Lean compiler output
// Module: Lake.Load.Lean
// Imports: Lake.Load.Lean.Elab Lake.Load.Lean.Eval
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
static lean_object* l_Lake_loadLeanConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_loadLeanConfig___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t, lean_object*);
static lean_object* l_Lake_loadLeanConfig___closed__3;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Lake_loadLeanConfig___closed__7;
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lake_loadLeanConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
static size_t l_Lake_loadLeanConfig___closed__6;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lake_PackageDecl_loadFromEnv(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___Lean_Server_DirectImports_convertImportInfos_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_importConfigFile(lean_object*, lean_object*, lean_object*);
static uint8_t l_Lake_loadLeanConfig___closed__4;
static uint8_t l_Lake_loadLeanConfig___closed__5;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_loadLeanConfig___lam__0(uint8_t, lean_object*);
static lean_object* l_Lake_loadLeanConfig___closed__1;
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lake_Package_loadFromEnv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_System_Platform_target;
lean_object* l_IO_ofExcept___at___IO_FS_Stream_readJson_spec__0___redArg(lean_object*, lean_object*);
static lean_object* l_Lake_loadLeanConfig___closed__0;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0___redArg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = l_Std_DTreeMap_Internal_Impl_insert___at___Lean_Server_DirectImports_convertImportInfos_spec__2___redArg(x_7, x_6, x_4);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_2 = x_10;
x_4 = x_8;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = l_Std_DTreeMap_Internal_Impl_insert___at___Lean_Server_DirectImports_convertImportInfos_spec__2___redArg(x_8, x_7, x_5);
x_10 = 1;
x_11 = lean_usize_add(x_3, x_10);
x_12 = l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0___redArg(x_2, x_11, x_4, x_9);
return x_12;
}
else
{
return x_5;
}
}
}
LEAN_EXPORT uint8_t l_Lake_loadLeanConfig___lam__0(uint8_t x_1, lean_object* x_2) {
_start:
{
return x_1;
}
}
static lean_object* _init_l_Lake_loadLeanConfig___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lake_loadLeanConfig___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".tar.gz", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lake_loadLeanConfig___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_loadLeanConfig___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lake_loadLeanConfig___closed__2;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
static uint8_t _init_l_Lake_loadLeanConfig___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l_Lake_loadLeanConfig___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_lt(x_2, x_1);
return x_3;
}
}
static uint8_t _init_l_Lake_loadLeanConfig___closed__5() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Lake_loadLeanConfig___closed__3;
x_2 = lean_nat_dec_le(x_1, x_1);
return x_2;
}
}
static size_t _init_l_Lake_loadLeanConfig___closed__6() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Lake_loadLeanConfig___closed__3;
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lake_loadLeanConfig___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lake-manifest.json", 18, 18);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lake_loadLeanConfig(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc_ref(x_1);
x_4 = l_Lake_importConfigFile(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec_ref(x_4);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
x_10 = lean_ctor_get(x_1, 3);
lean_inc_ref(x_10);
x_11 = lean_ctor_get(x_1, 4);
lean_inc_ref(x_11);
x_12 = lean_ctor_get(x_1, 5);
lean_inc_ref(x_12);
x_13 = lean_ctor_get(x_1, 6);
lean_inc_ref(x_13);
x_14 = lean_ctor_get(x_1, 9);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 10);
lean_inc_ref(x_15);
x_16 = lean_ctor_get(x_1, 11);
lean_inc_ref(x_16);
lean_dec_ref(x_1);
lean_inc(x_8);
x_17 = l_Lake_PackageDecl_loadFromEnv(x_8, x_14);
x_18 = l_IO_ofExcept___at___IO_FS_Stream_readJson_spec__0___redArg(x_17, x_6);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_89; 
lean_free_object(x_5);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc_ref(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec_ref(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_23 = x_19;
} else {
 lean_dec_ref(x_19);
 x_23 = lean_box(0);
}
x_24 = lean_ctor_get(x_20, 2);
lean_inc(x_24);
x_25 = lean_ctor_get(x_20, 12);
lean_inc(x_25);
x_26 = lean_ctor_get(x_20, 13);
lean_inc_ref(x_26);
x_27 = lean_ctor_get(x_20, 15);
lean_inc_ref(x_27);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_100; 
x_100 = l_Lake_loadLeanConfig___closed__7;
x_89 = x_100;
goto block_99;
}
else
{
lean_object* x_101; 
x_101 = lean_ctor_get(x_24, 0);
lean_inc(x_101);
lean_dec_ref(x_24);
x_89 = x_101;
goto block_99;
}
block_69:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 20, 0);
lean_ctor_set(x_38, 0, x_22);
lean_ctor_set(x_38, 1, x_11);
lean_ctor_set(x_38, 2, x_10);
lean_ctor_set(x_38, 3, x_20);
lean_ctor_set(x_38, 4, x_13);
lean_ctor_set(x_38, 5, x_12);
lean_ctor_set(x_38, 6, x_31);
lean_ctor_set(x_38, 7, x_15);
lean_ctor_set(x_38, 8, x_16);
lean_ctor_set(x_38, 9, x_34);
lean_ctor_set(x_38, 10, x_33);
lean_ctor_set(x_38, 11, x_35);
lean_ctor_set(x_38, 12, x_32);
lean_ctor_set(x_38, 13, x_28);
lean_ctor_set(x_38, 14, x_29);
lean_ctor_set(x_38, 15, x_30);
lean_ctor_set(x_38, 16, x_36);
lean_ctor_set(x_38, 17, x_26);
lean_ctor_set(x_38, 18, x_27);
lean_ctor_set(x_38, 19, x_37);
lean_inc(x_8);
x_39 = l_Lake_Package_loadFromEnv(x_38, x_8, x_14, x_9, x_21);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_39);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_39, 0);
lean_dec(x_42);
x_43 = !lean_is_exclusive(x_40);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_40, 0);
if (lean_is_scalar(x_23)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_23;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_8);
lean_ctor_set(x_40, 0, x_45);
return x_39;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_40, 0);
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_40);
if (lean_is_scalar(x_23)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_23;
}
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_8);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_39, 0, x_49);
return x_39;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_50 = lean_ctor_get(x_39, 1);
lean_inc(x_50);
lean_dec(x_39);
x_51 = lean_ctor_get(x_40, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_40, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_53 = x_40;
} else {
 lean_dec_ref(x_40);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_23)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_23;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_8);
if (lean_is_scalar(x_53)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_53;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_52);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_50);
return x_56;
}
}
else
{
uint8_t x_57; 
lean_dec(x_23);
lean_dec(x_8);
x_57 = !lean_is_exclusive(x_39);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_39, 0);
lean_dec(x_58);
x_59 = !lean_is_exclusive(x_40);
if (x_59 == 0)
{
return x_39;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_40, 0);
x_61 = lean_ctor_get(x_40, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_40);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
lean_ctor_set(x_39, 0, x_62);
return x_39;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_39, 1);
lean_inc(x_63);
lean_dec(x_39);
x_64 = lean_ctor_get(x_40, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_40, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_66 = x_40;
} else {
 lean_dec_ref(x_40);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_63);
return x_68;
}
}
}
block_88:
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_mk_empty_array_with_capacity(x_71);
x_76 = lean_box(1);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_77 = 0;
x_78 = lean_box(x_77);
x_79 = lean_alloc_closure((void*)(l_Lake_loadLeanConfig___lam__0___boxed), 2, 1);
lean_closure_set(x_79, 0, x_78);
lean_inc(x_22);
x_80 = l_Lean_Name_toString(x_22, x_77, x_79);
x_81 = l_Lake_loadLeanConfig___closed__0;
x_82 = lean_string_append(x_80, x_81);
x_83 = l_System_Platform_target;
x_84 = lean_string_append(x_82, x_83);
x_85 = l_Lake_loadLeanConfig___closed__1;
x_86 = lean_string_append(x_84, x_85);
lean_inc_ref_n(x_75, 2);
x_28 = x_76;
x_29 = x_75;
x_30 = x_75;
x_31 = x_70;
x_32 = x_75;
x_33 = x_72;
x_34 = x_73;
x_35 = x_74;
x_36 = x_86;
goto block_69;
}
else
{
lean_object* x_87; 
x_87 = lean_ctor_get(x_25, 0);
lean_inc(x_87);
lean_dec_ref(x_25);
lean_inc_ref_n(x_75, 2);
x_28 = x_76;
x_29 = x_75;
x_30 = x_75;
x_31 = x_70;
x_32 = x_75;
x_33 = x_72;
x_34 = x_73;
x_35 = x_74;
x_36 = x_87;
goto block_69;
}
}
block_99:
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_90 = l_System_FilePath_normalize(x_89);
x_91 = lean_unsigned_to_nat(0u);
x_92 = l_Lake_loadLeanConfig___closed__2;
x_93 = lean_box(1);
x_94 = l_Lake_loadLeanConfig___closed__4;
if (x_94 == 0)
{
x_70 = x_90;
x_71 = x_91;
x_72 = x_92;
x_73 = x_92;
x_74 = x_93;
goto block_88;
}
else
{
uint8_t x_95; 
x_95 = l_Lake_loadLeanConfig___closed__5;
if (x_95 == 0)
{
x_70 = x_90;
x_71 = x_91;
x_72 = x_92;
x_73 = x_92;
x_74 = x_93;
goto block_88;
}
else
{
size_t x_96; size_t x_97; lean_object* x_98; 
x_96 = 0;
x_97 = l_Lake_loadLeanConfig___closed__6;
x_98 = l_Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0(x_22, x_92, x_96, x_97, x_93);
x_70 = x_90;
x_71 = x_91;
x_72 = x_92;
x_73 = x_92;
x_74 = x_98;
goto block_88;
}
}
}
}
else
{
uint8_t x_102; 
lean_dec_ref(x_16);
lean_dec_ref(x_15);
lean_dec(x_14);
lean_dec_ref(x_13);
lean_dec_ref(x_12);
lean_dec_ref(x_11);
lean_dec_ref(x_10);
lean_dec(x_8);
x_102 = !lean_is_exclusive(x_18);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_103 = lean_ctor_get(x_18, 0);
x_104 = lean_io_error_to_string(x_103);
x_105 = 3;
x_106 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set_uint8(x_106, sizeof(void*)*1, x_105);
x_107 = lean_array_get_size(x_9);
x_108 = lean_array_push(x_9, x_106);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 1, x_108);
lean_ctor_set(x_5, 0, x_107);
lean_ctor_set_tag(x_18, 0);
lean_ctor_set(x_18, 0, x_5);
return x_18;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_109 = lean_ctor_get(x_18, 0);
x_110 = lean_ctor_get(x_18, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_18);
x_111 = lean_io_error_to_string(x_109);
x_112 = 3;
x_113 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set_uint8(x_113, sizeof(void*)*1, x_112);
x_114 = lean_array_get_size(x_9);
x_115 = lean_array_push(x_9, x_113);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 1, x_115);
lean_ctor_set(x_5, 0, x_114);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_5);
lean_ctor_set(x_116, 1, x_110);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_117 = lean_ctor_get(x_5, 0);
x_118 = lean_ctor_get(x_5, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_5);
x_119 = lean_ctor_get(x_1, 3);
lean_inc_ref(x_119);
x_120 = lean_ctor_get(x_1, 4);
lean_inc_ref(x_120);
x_121 = lean_ctor_get(x_1, 5);
lean_inc_ref(x_121);
x_122 = lean_ctor_get(x_1, 6);
lean_inc_ref(x_122);
x_123 = lean_ctor_get(x_1, 9);
lean_inc(x_123);
x_124 = lean_ctor_get(x_1, 10);
lean_inc_ref(x_124);
x_125 = lean_ctor_get(x_1, 11);
lean_inc_ref(x_125);
lean_dec_ref(x_1);
lean_inc(x_117);
x_126 = l_Lake_PackageDecl_loadFromEnv(x_117, x_123);
x_127 = l_IO_ofExcept___at___IO_FS_Stream_readJson_spec__0___redArg(x_126, x_6);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_185; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_128, 1);
lean_inc_ref(x_129);
x_130 = lean_ctor_get(x_127, 1);
lean_inc(x_130);
lean_dec_ref(x_127);
x_131 = lean_ctor_get(x_128, 0);
lean_inc(x_131);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_132 = x_128;
} else {
 lean_dec_ref(x_128);
 x_132 = lean_box(0);
}
x_133 = lean_ctor_get(x_129, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_129, 12);
lean_inc(x_134);
x_135 = lean_ctor_get(x_129, 13);
lean_inc_ref(x_135);
x_136 = lean_ctor_get(x_129, 15);
lean_inc_ref(x_136);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_196; 
x_196 = l_Lake_loadLeanConfig___closed__7;
x_185 = x_196;
goto block_195;
}
else
{
lean_object* x_197; 
x_197 = lean_ctor_get(x_133, 0);
lean_inc(x_197);
lean_dec_ref(x_133);
x_185 = x_197;
goto block_195;
}
block_165:
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_146 = lean_box(0);
x_147 = lean_alloc_ctor(0, 20, 0);
lean_ctor_set(x_147, 0, x_131);
lean_ctor_set(x_147, 1, x_120);
lean_ctor_set(x_147, 2, x_119);
lean_ctor_set(x_147, 3, x_129);
lean_ctor_set(x_147, 4, x_122);
lean_ctor_set(x_147, 5, x_121);
lean_ctor_set(x_147, 6, x_140);
lean_ctor_set(x_147, 7, x_124);
lean_ctor_set(x_147, 8, x_125);
lean_ctor_set(x_147, 9, x_143);
lean_ctor_set(x_147, 10, x_142);
lean_ctor_set(x_147, 11, x_144);
lean_ctor_set(x_147, 12, x_141);
lean_ctor_set(x_147, 13, x_137);
lean_ctor_set(x_147, 14, x_138);
lean_ctor_set(x_147, 15, x_139);
lean_ctor_set(x_147, 16, x_145);
lean_ctor_set(x_147, 17, x_135);
lean_ctor_set(x_147, 18, x_136);
lean_ctor_set(x_147, 19, x_146);
lean_inc(x_117);
x_148 = l_Lake_Package_loadFromEnv(x_147, x_117, x_123, x_118, x_130);
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_151 = x_148;
} else {
 lean_dec_ref(x_148);
 x_151 = lean_box(0);
}
x_152 = lean_ctor_get(x_149, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_149, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_154 = x_149;
} else {
 lean_dec_ref(x_149);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_155 = lean_alloc_ctor(0, 2, 0);
} else {
 x_155 = x_132;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_117);
if (lean_is_scalar(x_154)) {
 x_156 = lean_alloc_ctor(0, 2, 0);
} else {
 x_156 = x_154;
}
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_153);
if (lean_is_scalar(x_151)) {
 x_157 = lean_alloc_ctor(0, 2, 0);
} else {
 x_157 = x_151;
}
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_150);
return x_157;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_132);
lean_dec(x_117);
x_158 = lean_ctor_get(x_148, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_159 = x_148;
} else {
 lean_dec_ref(x_148);
 x_159 = lean_box(0);
}
x_160 = lean_ctor_get(x_149, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_149, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_162 = x_149;
} else {
 lean_dec_ref(x_149);
 x_162 = lean_box(0);
}
if (lean_is_scalar(x_162)) {
 x_163 = lean_alloc_ctor(1, 2, 0);
} else {
 x_163 = x_162;
}
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_161);
if (lean_is_scalar(x_159)) {
 x_164 = lean_alloc_ctor(0, 2, 0);
} else {
 x_164 = x_159;
}
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_158);
return x_164;
}
}
block_184:
{
lean_object* x_171; lean_object* x_172; 
x_171 = lean_mk_empty_array_with_capacity(x_167);
x_172 = lean_box(1);
if (lean_obj_tag(x_134) == 0)
{
uint8_t x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_173 = 0;
x_174 = lean_box(x_173);
x_175 = lean_alloc_closure((void*)(l_Lake_loadLeanConfig___lam__0___boxed), 2, 1);
lean_closure_set(x_175, 0, x_174);
lean_inc(x_131);
x_176 = l_Lean_Name_toString(x_131, x_173, x_175);
x_177 = l_Lake_loadLeanConfig___closed__0;
x_178 = lean_string_append(x_176, x_177);
x_179 = l_System_Platform_target;
x_180 = lean_string_append(x_178, x_179);
x_181 = l_Lake_loadLeanConfig___closed__1;
x_182 = lean_string_append(x_180, x_181);
lean_inc_ref_n(x_171, 2);
x_137 = x_172;
x_138 = x_171;
x_139 = x_171;
x_140 = x_166;
x_141 = x_171;
x_142 = x_168;
x_143 = x_169;
x_144 = x_170;
x_145 = x_182;
goto block_165;
}
else
{
lean_object* x_183; 
x_183 = lean_ctor_get(x_134, 0);
lean_inc(x_183);
lean_dec_ref(x_134);
lean_inc_ref_n(x_171, 2);
x_137 = x_172;
x_138 = x_171;
x_139 = x_171;
x_140 = x_166;
x_141 = x_171;
x_142 = x_168;
x_143 = x_169;
x_144 = x_170;
x_145 = x_183;
goto block_165;
}
}
block_195:
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_186 = l_System_FilePath_normalize(x_185);
x_187 = lean_unsigned_to_nat(0u);
x_188 = l_Lake_loadLeanConfig___closed__2;
x_189 = lean_box(1);
x_190 = l_Lake_loadLeanConfig___closed__4;
if (x_190 == 0)
{
x_166 = x_186;
x_167 = x_187;
x_168 = x_188;
x_169 = x_188;
x_170 = x_189;
goto block_184;
}
else
{
uint8_t x_191; 
x_191 = l_Lake_loadLeanConfig___closed__5;
if (x_191 == 0)
{
x_166 = x_186;
x_167 = x_187;
x_168 = x_188;
x_169 = x_188;
x_170 = x_189;
goto block_184;
}
else
{
size_t x_192; size_t x_193; lean_object* x_194; 
x_192 = 0;
x_193 = l_Lake_loadLeanConfig___closed__6;
x_194 = l_Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0(x_131, x_188, x_192, x_193, x_189);
x_166 = x_186;
x_167 = x_187;
x_168 = x_188;
x_169 = x_188;
x_170 = x_194;
goto block_184;
}
}
}
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; uint8_t x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_dec_ref(x_125);
lean_dec_ref(x_124);
lean_dec(x_123);
lean_dec_ref(x_122);
lean_dec_ref(x_121);
lean_dec_ref(x_120);
lean_dec_ref(x_119);
lean_dec(x_117);
x_198 = lean_ctor_get(x_127, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_127, 1);
lean_inc(x_199);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_200 = x_127;
} else {
 lean_dec_ref(x_127);
 x_200 = lean_box(0);
}
x_201 = lean_io_error_to_string(x_198);
x_202 = 3;
x_203 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set_uint8(x_203, sizeof(void*)*1, x_202);
x_204 = lean_array_get_size(x_118);
x_205 = lean_array_push(x_118, x_203);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_205);
if (lean_is_scalar(x_200)) {
 x_207 = lean_alloc_ctor(0, 2, 0);
} else {
 x_207 = x_200;
 lean_ctor_set_tag(x_207, 0);
}
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_199);
return x_207;
}
}
}
else
{
uint8_t x_208; 
lean_dec_ref(x_1);
x_208 = !lean_is_exclusive(x_4);
if (x_208 == 0)
{
lean_object* x_209; uint8_t x_210; 
x_209 = lean_ctor_get(x_4, 0);
lean_dec(x_209);
x_210 = !lean_is_exclusive(x_5);
if (x_210 == 0)
{
return x_4;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_211 = lean_ctor_get(x_5, 0);
x_212 = lean_ctor_get(x_5, 1);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_5);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
lean_ctor_set(x_4, 0, x_213);
return x_4;
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_214 = lean_ctor_get(x_4, 1);
lean_inc(x_214);
lean_dec(x_4);
x_215 = lean_ctor_get(x_5, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_5, 1);
lean_inc(x_216);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_217 = x_5;
} else {
 lean_dec_ref(x_5);
 x_217 = lean_box(0);
}
if (lean_is_scalar(x_217)) {
 x_218 = lean_alloc_ctor(1, 2, 0);
} else {
 x_218 = x_217;
}
lean_ctor_set(x_218, 0, x_215);
lean_ctor_set(x_218, 1, x_216);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_214);
return x_219;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0___redArg(x_1, x_5, x_6, x_4);
lean_dec_ref(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at___Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0_spec__0(x_1, x_2, x_6, x_7, x_5);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at___Lake_loadLeanConfig_spec__0(x_1, x_2, x_6, x_7, x_5);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lake_loadLeanConfig___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
x_4 = l_Lake_loadLeanConfig___lam__0(x_3, x_2);
lean_dec_ref(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* initialize_Lake_Load_Lean_Elab(uint8_t builtin, lean_object*);
lean_object* initialize_Lake_Load_Lean_Eval(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Load_Lean(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Load_Lean_Elab(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Lean_Eval(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_loadLeanConfig___closed__0 = _init_l_Lake_loadLeanConfig___closed__0();
lean_mark_persistent(l_Lake_loadLeanConfig___closed__0);
l_Lake_loadLeanConfig___closed__1 = _init_l_Lake_loadLeanConfig___closed__1();
lean_mark_persistent(l_Lake_loadLeanConfig___closed__1);
l_Lake_loadLeanConfig___closed__2 = _init_l_Lake_loadLeanConfig___closed__2();
lean_mark_persistent(l_Lake_loadLeanConfig___closed__2);
l_Lake_loadLeanConfig___closed__3 = _init_l_Lake_loadLeanConfig___closed__3();
lean_mark_persistent(l_Lake_loadLeanConfig___closed__3);
l_Lake_loadLeanConfig___closed__4 = _init_l_Lake_loadLeanConfig___closed__4();
l_Lake_loadLeanConfig___closed__5 = _init_l_Lake_loadLeanConfig___closed__5();
l_Lake_loadLeanConfig___closed__6 = _init_l_Lake_loadLeanConfig___closed__6();
l_Lake_loadLeanConfig___closed__7 = _init_l_Lake_loadLeanConfig___closed__7();
lean_mark_persistent(l_Lake_loadLeanConfig___closed__7);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
