// Lean compiler output
// Module: Jsp.JSP000243
// Imports: Init Init.Data.List.Basic
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_mkInterval___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_powerSet___rarg(lean_object*);
static lean_object* l_witnessSubset___closed__2;
static lean_object* l_powerSet___rarg___closed__1;
LEAN_EXPORT uint8_t l_hasSubsetSumOne___lambda__1(lean_object*);
uint8_t l_List_any___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_powerSet___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_powerSet(lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
LEAN_EXPORT lean_object* l_witnessSubset;
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hasSubsetSumOne___boxed(lean_object*);
LEAN_EXPORT lean_object* l_recipsSumToOne_D(lean_object*);
lean_object* l_List_range(lean_object*);
static lean_object* l_witnessSubset___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_mkInterval___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_powerSet___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_mkInterval(lean_object*, lean_object*);
static lean_object* l_hasSubsetSumOne___closed__1;
LEAN_EXPORT lean_object* l_listProd(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_recipsSumToOne___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_witnessSubset___closed__3;
LEAN_EXPORT lean_object* l_recipsSumToOne___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_List_hasDecEq___at___private_Init_MetaTypes_0__Lean_Meta_beqOccurrences____x40_Init_MetaTypes___hyg_1231____spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_recipsSumToOne___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_hasSubsetSumOne___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_listProd___boxed(lean_object*);
LEAN_EXPORT lean_object* l_mkInterval___boxed(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT uint8_t l_recipsSumToOne(lean_object*);
LEAN_EXPORT lean_object* l_witnessInterval;
static lean_object* l_witnessInterval___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_recipsSumToOne_D___boxed(lean_object*);
LEAN_EXPORT uint8_t l_hasSubsetSumOne(lean_object*);
LEAN_EXPORT lean_object* l_listProd(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(1u);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_listProd(x_4);
x_6 = lean_nat_mul(x_3, x_5);
lean_dec(x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_listProd___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_listProd(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_recipsSumToOne_D(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_listProd(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_recipsSumToOne_D___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_recipsSumToOne_D(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_recipsSumToOne___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_nat_div(x_1, x_4);
x_7 = lean_nat_add(x_2, x_6);
lean_dec(x_6);
lean_dec(x_2);
x_2 = x_7;
x_3 = x_5;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_recipsSumToOne(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_listProd(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_2);
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_List_foldl___at_recipsSumToOne___spec__1(x_2, x_3, x_1);
x_7 = lean_nat_dec_eq(x_6, x_2);
lean_dec(x_2);
lean_dec(x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_recipsSumToOne___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_foldl___at_recipsSumToOne___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_recipsSumToOne___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_recipsSumToOne(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_powerSet___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
lean_ctor_set(x_2, 1, x_6);
lean_ctor_set(x_2, 0, x_1);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
x_2 = x_7;
x_3 = x_8;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_1);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
x_2 = x_11;
x_3 = x_13;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_powerSet___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_mapTR_loop___at_powerSet___spec__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_powerSet___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_powerSet___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_powerSet___rarg___closed__1;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_powerSet___rarg(x_4);
x_6 = lean_box(0);
lean_inc(x_5);
x_7 = l_List_mapTR_loop___at_powerSet___spec__1___rarg(x_3, x_5, x_6);
x_8 = l_List_appendTR___rarg(x_7, x_5);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_powerSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_powerSet___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_hasSubsetSumOne___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_box(0);
x_3 = l_List_hasDecEq___at___private_Init_MetaTypes_0__Lean_Meta_beqOccurrences____x40_Init_MetaTypes___hyg_1231____spec__1(x_1, x_2);
x_4 = l_instDecidableNot___rarg(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = l_recipsSumToOne(x_1);
return x_6;
}
}
}
static lean_object* _init_l_hasSubsetSumOne___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_hasSubsetSumOne___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_hasSubsetSumOne(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_powerSet___rarg(x_1);
x_3 = l_hasSubsetSumOne___closed__1;
x_4 = l_List_any___rarg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_hasSubsetSumOne___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_hasSubsetSumOne___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_hasSubsetSumOne___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_hasSubsetSumOne(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_mkInterval___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___rarg(x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_nat_add(x_1, x_6);
lean_dec(x_6);
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_8);
{
lean_object* _tmp_1 = x_7;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = lean_nat_add(x_1, x_10);
lean_dec(x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
x_2 = x_11;
x_3 = x_13;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_mkInterval(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_nat_sub(x_2, x_1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_3, x_4);
lean_dec(x_3);
x_6 = l_List_range(x_5);
x_7 = lean_box(0);
x_8 = l_List_mapTR_loop___at_mkInterval___spec__1(x_1, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_mkInterval___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapTR_loop___at_mkInterval___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_mkInterval___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_mkInterval(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_witnessInterval___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_unsigned_to_nat(6u);
x_3 = l_mkInterval(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_witnessInterval() {
_start:
{
lean_object* x_1; 
x_1 = l_witnessInterval___closed__1;
return x_1;
}
}
static lean_object* _init_l_witnessSubset___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(6u);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_witnessSubset___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_witnessSubset___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_witnessSubset___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_witnessSubset___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_witnessSubset() {
_start:
{
lean_object* x_1; 
x_1 = l_witnessSubset___closed__3;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_List_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Jsp_JSP000243(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_powerSet___rarg___closed__1 = _init_l_powerSet___rarg___closed__1();
lean_mark_persistent(l_powerSet___rarg___closed__1);
l_hasSubsetSumOne___closed__1 = _init_l_hasSubsetSumOne___closed__1();
lean_mark_persistent(l_hasSubsetSumOne___closed__1);
l_witnessInterval___closed__1 = _init_l_witnessInterval___closed__1();
lean_mark_persistent(l_witnessInterval___closed__1);
l_witnessInterval = _init_l_witnessInterval();
lean_mark_persistent(l_witnessInterval);
l_witnessSubset___closed__1 = _init_l_witnessSubset___closed__1();
lean_mark_persistent(l_witnessSubset___closed__1);
l_witnessSubset___closed__2 = _init_l_witnessSubset___closed__2();
lean_mark_persistent(l_witnessSubset___closed__2);
l_witnessSubset___closed__3 = _init_l_witnessSubset___closed__3();
lean_mark_persistent(l_witnessSubset___closed__3);
l_witnessSubset = _init_l_witnessSubset();
lean_mark_persistent(l_witnessSubset);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
