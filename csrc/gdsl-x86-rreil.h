// EDITED!:
#define gdsl_get_ip     gdsl_x86_rreil_get_ip
#define gdsl_seek       gdsl_x86_rreil_seek

/* vim:set ts=2:set sw=2:set expandtab: */
/* Auto-generated file. DO NOT EDIT. */
#ifndef __GDSL_RUNTIME_H
#define __GDSL_RUNTIME_H

#include <stdlib.h>
#include <stdint.h>
#include <setjmp.h>

/* data types used in decoder programs */
typedef void* obj_t;
typedef struct state* state_t;
typedef long long int int_t;
typedef char* string_t;
typedef uint64_t vec_data_t;

struct vec {
  unsigned int size;
  vec_data_t data;
};

typedef struct vec vec_t;
typedef int_t con_tag_t;

#endif /* __GDSL_RUNTIME_H */

/* The following declarations are individual for each decoder. */
#ifndef __GDSL_X86_RREIL_H
#define __GDSL_X86_RREIL_H

/* Create a new decoder state. Should be destroyed by
gdsl_x86_rreil_destroy(). */
state_t
gdsl_x86_rreil_init(void);

/* Set the code buffer. The parameter base denotes the address that ip_get
   in GDSL returns when no bytes have been consumed. */
void
gdsl_x86_rreil_set_code(state_t s, unsigned char* buf, size_t buf_len, size_t base);

/* Query the offset of the current IP relative to base. */
size_t
gdsl_x86_rreil_get_ip(state_t s);

/* Set the current code position to this address. */
int_t
gdsl_x86_rreil_seek(state_t s, size_t i);

/* An exception handler must be installed by calling setjmp with the argument
 * returned by this function.
 * If an exception occurs, control will return from setjmp with
 * value 1 if there are no more bytes in the input buffer or with
 * value 2 if there has been an error (e.g. pattern match failure). In
 * both cases, an error message can be retrieved using get_error_message().
 */
jmp_buf*
gdsl_x86_rreil_err_tgt(state_t s);

/* Retrieve the error message after an exception has been raised. */
char*
gdsl_x86_rreil_get_error_message(state_t s);

/* Reset the heap. Objects returned by exported function are no longer valid
   after a call to this funciton. This function does not necessarily
   deallocate all of the heap. */
void
gdsl_x86_rreil_reset_heap(state_t s);

/* Query the no of bytes currently allocated on the heap. */
size_t
gdsl_x86_rreil_heap_residency(state_t s);

/* Allocate a buffer on the heap and emit the given rope into it.
   Returns a pointer to the buffer on the heap. */
string_t
gdsl_x86_rreil_merge_rope(state_t s, obj_t rope);

/* Frees the heap and the decoder state. */
void
gdsl_x86_rreil_destroy(state_t s);

/* Records that are represented as C structs. */
typedef struct {
  int_t addr_sz;
  int_t config;
  int_t features;
  obj_t insn;
  int_t length;
  int_t lock;
  int_t opnd_sz;
  int_t rep;
  int_t repne;
} unboxed_insndata_t;
typedef unboxed_insndata_t* insndata_t;
typedef struct {
  obj_t (*annotated)(state_t,obj_t,obj_t);
  obj_t (*bounded)(state_t,obj_t,obj_t);
  obj_t (*composite)(state_t,obj_t);
  obj_t (*imm)(state_t,int_t);
  obj_t (*memory)(state_t,obj_t);
  obj_t (*opnd_register)(state_t,string_t);
  obj_t (*post_op)(state_t,obj_t,obj_t);
  obj_t (*pre_op)(state_t,obj_t,obj_t);
  obj_t (*rel)(state_t,obj_t);
  obj_t (*scale)(state_t,int_t,obj_t);
  obj_t (*sign)(state_t,obj_t,obj_t);
  obj_t (*sum)(state_t,obj_t,obj_t);
} unboxed_asm_opnd_callbacks_t;
typedef unboxed_asm_opnd_callbacks_t* asm_opnd_callbacks_t;
typedef struct {
  obj_t (*init)(state_t);
  obj_t (*opnd_list_next)(state_t,obj_t,obj_t);
} unboxed_asm_opnd_list_callbacks_t;
typedef unboxed_asm_opnd_list_callbacks_t* asm_opnd_list_callbacks_t;
typedef struct {
  obj_t (*asm_signed)(state_t);
  obj_t (*asm_unsigned)(state_t);
} unboxed_asm_signedness_callbacks_t;
typedef unboxed_asm_signedness_callbacks_t* asm_signedness_callbacks_t;
typedef struct {
  obj_t (*sz)(state_t,int_t);
  obj_t (*sz_o)(state_t,int_t,int_t);
} unboxed_asm_boundary_callbacks_t;
typedef unboxed_asm_boundary_callbacks_t* asm_boundary_callbacks_t;
typedef struct {
  obj_t (*annotation_list_next)(state_t,obj_t,obj_t);
  obj_t (*init)(state_t);
} unboxed_asm_annotation_list_callbacks_t;
typedef unboxed_asm_annotation_list_callbacks_t* asm_annotation_list_callbacks_t;
typedef struct {
  obj_t (*ann_string)(state_t,string_t);
  obj_t (*function)(state_t,string_t,obj_t);
  obj_t (*opnd)(state_t,string_t,obj_t);
} unboxed_asm_annotation_callbacks_t;
typedef unboxed_asm_annotation_callbacks_t* asm_annotation_callbacks_t;
typedef struct {
  asm_annotation_callbacks_t annotation;
  asm_annotation_list_callbacks_t annotation_list;
  asm_boundary_callbacks_t boundary;
  obj_t (*insn)(state_t,int_t,string_t,obj_t,obj_t);
  asm_opnd_callbacks_t opnd;
  asm_opnd_list_callbacks_t opnd_list;
  asm_signedness_callbacks_t signedness;
} unboxed_asm_callbacks_t;
typedef unboxed_asm_callbacks_t* asm_callbacks_t;
typedef struct {
  obj_t annotations;
  int_t length;
  string_t mnemonic;
  obj_t opnds;
} unboxed_asm_insn_t;
typedef unboxed_asm_insn_t* asm_insn_t;
typedef struct {
  obj_t (*sem_sexpr_arb)(state_t);
  obj_t (*sem_sexpr_cmp)(state_t,obj_t);
  obj_t (*sem_sexpr_lin)(state_t,obj_t);
} unboxed_sem_sexpr_callbacks_t;
typedef unboxed_sem_sexpr_callbacks_t* sem_sexpr_callbacks_t;
typedef struct {
  obj_t (*sem_flop_)(state_t,int_t);
} unboxed_sem_flop_callbacks_t;
typedef unboxed_sem_flop_callbacks_t* sem_flop_callbacks_t;
typedef struct {
  obj_t (*arch)(state_t,string_t);
  obj_t (*shared)(state_t,int_t);
  obj_t (*virt_t)(state_t,int_t);
} unboxed_sem_id_callbacks_t;
typedef unboxed_sem_id_callbacks_t* sem_id_callbacks_t;
typedef struct {
  obj_t (*sem_address_)(state_t,int_t,obj_t);
} unboxed_sem_address_callbacks_t;
typedef unboxed_sem_address_callbacks_t* sem_address_callbacks_t;
typedef struct {
  obj_t (*sem_var_)(state_t,obj_t,int_t);
} unboxed_sem_var_callbacks_t;
typedef unboxed_sem_var_callbacks_t* sem_var_callbacks_t;
typedef struct {
  obj_t (*sem_lin_add)(state_t,obj_t,obj_t);
  obj_t (*sem_lin_imm)(state_t,int_t);
  obj_t (*sem_lin_scale)(state_t,int_t,obj_t);
  obj_t (*sem_lin_sub)(state_t,obj_t,obj_t);
  obj_t (*sem_lin_var)(state_t,obj_t);
} unboxed_sem_linear_callbacks_t;
typedef unboxed_sem_linear_callbacks_t* sem_linear_callbacks_t;
typedef struct {
  obj_t (*sem_cmpeq)(state_t,obj_t,obj_t);
  obj_t (*sem_cmples)(state_t,obj_t,obj_t);
  obj_t (*sem_cmpleu)(state_t,obj_t,obj_t);
  obj_t (*sem_cmplts)(state_t,obj_t,obj_t);
  obj_t (*sem_cmpltu)(state_t,obj_t,obj_t);
  obj_t (*sem_cmpneq)(state_t,obj_t,obj_t);
} unboxed_sem_expr_cmp_callbacks_t;
typedef unboxed_sem_expr_cmp_callbacks_t* sem_expr_cmp_callbacks_t;
typedef struct {
  obj_t (*sem_and)(state_t,obj_t,obj_t);
  obj_t (*sem_div)(state_t,obj_t,obj_t);
  obj_t (*sem_divs)(state_t,obj_t,obj_t);
  obj_t (*sem_mod)(state_t,obj_t,obj_t);
  obj_t (*sem_mods)(state_t,obj_t,obj_t);
  obj_t (*sem_mul)(state_t,obj_t,obj_t);
  obj_t (*sem_or)(state_t,obj_t,obj_t);
  obj_t (*sem_sexpr)(state_t,obj_t);
  obj_t (*sem_shl)(state_t,obj_t,obj_t);
  obj_t (*sem_shr)(state_t,obj_t,obj_t);
  obj_t (*sem_shrs)(state_t,obj_t,obj_t);
  obj_t (*sem_sx)(state_t,int_t,obj_t);
  obj_t (*sem_xor)(state_t,obj_t,obj_t);
  obj_t (*sem_zx)(state_t,int_t,obj_t);
} unboxed_sem_expr_callbacks_t;
typedef unboxed_sem_expr_callbacks_t* sem_expr_callbacks_t;
typedef struct {
  obj_t (*sem_varl_)(state_t,obj_t,int_t,int_t);
} unboxed_sem_varl_callbacks_t;
typedef unboxed_sem_varl_callbacks_t* sem_varl_callbacks_t;
typedef struct {
  obj_t (*sem_varl_list_init)(state_t);
  obj_t (*sem_varl_list_next)(state_t,obj_t,obj_t);
} unboxed_sem_varl_list_callbacks_t;
typedef unboxed_sem_varl_list_callbacks_t* sem_varl_list_callbacks_t;
typedef struct {
  obj_t (*sem_assign)(state_t,int_t,obj_t,obj_t);
  obj_t (*sem_branch)(state_t,obj_t,obj_t);
  obj_t (*sem_cbranch)(state_t,obj_t,obj_t,obj_t);
  obj_t (*sem_flop)(state_t,obj_t,obj_t,obj_t,obj_t);
  obj_t (*sem_ite)(state_t,obj_t,obj_t,obj_t);
  obj_t (*sem_load)(state_t,int_t,obj_t,obj_t);
  obj_t (*sem_prim)(state_t,string_t,obj_t,obj_t);
  obj_t (*sem_store)(state_t,int_t,obj_t,obj_t);
  obj_t (*sem_throw)(state_t,obj_t);
  obj_t (*sem_while)(state_t,obj_t,obj_t);
} unboxed_sem_stmt_callbacks_t;
typedef unboxed_sem_stmt_callbacks_t* sem_stmt_callbacks_t;
typedef struct {
  obj_t (*branch_hint_)(state_t,int_t);
} unboxed_branch_hint_callbacks_t;
typedef unboxed_branch_hint_callbacks_t* branch_hint_callbacks_t;
typedef struct {
  obj_t (*arch)(state_t,string_t);
  obj_t (*shared)(state_t,int_t);
} unboxed_sem_exception_callbacks_t;
typedef unboxed_sem_exception_callbacks_t* sem_exception_callbacks_t;
typedef struct {
  obj_t (*sem_stmt_list_init)(state_t);
  obj_t (*sem_stmt_list_next)(state_t,obj_t,obj_t);
} unboxed_sem_stmt_list_callbacks_t;
typedef unboxed_sem_stmt_list_callbacks_t* sem_stmt_list_callbacks_t;
typedef struct {
  branch_hint_callbacks_t branch_hint;
  sem_address_callbacks_t sem_address;
  sem_exception_callbacks_t sem_exception;
  sem_expr_callbacks_t sem_expr;
  sem_expr_cmp_callbacks_t sem_expr_cmp;
  sem_flop_callbacks_t sem_flop;
  sem_id_callbacks_t sem_id;
  sem_linear_callbacks_t sem_linear;
  sem_sexpr_callbacks_t sem_sexpr;
  sem_stmt_callbacks_t sem_stmt;
  sem_stmt_list_callbacks_t sem_stmt_list;
  sem_var_callbacks_t sem_var;
  sem_varl_callbacks_t sem_varl;
  sem_varl_list_callbacks_t sem_varl_list;
} unboxed_callbacks_t;
typedef unboxed_callbacks_t* callbacks_t;
typedef struct {
  obj_t insns;
  obj_t succ_a;
  obj_t succ_b;
} unboxed_translate_result_t;
typedef unboxed_translate_result_t* translate_result_t;
typedef struct {
  obj_t after;
  obj_t initial;
} unboxed_lv_super_result_t;
typedef unboxed_lv_super_result_t* lv_super_result_t;
typedef struct {
  obj_t insns;
  obj_t rreil;
} unboxed_opt_result_t;
typedef unboxed_opt_result_t* opt_result_t;
/* Exported functions. */
obj_t gdsl_x86_rreil_translate(state_t s,insndata_t insn);
obj_t gdsl_x86_rreil_succ_pretty(state_t s,obj_t succ,string_t name);
translate_result_t gdsl_x86_rreil_decode_translate_super_block(state_t s,int_t config,int_t limit);
obj_t gdsl_x86_rreil_decode_translate_single(state_t s,int_t config);
int_t gdsl_x86_rreil_select_ins_count(state_t s);
obj_t gdsl_x86_rreil_decode_translate_block(state_t s,int_t config,int_t limit);
opt_result_t gdsl_x86_rreil_decode_translate_block_optimized(state_t s,int_t config,int_t limit,int_t opt_config);
obj_t gdsl_x86_rreil_traverse_insn_list(state_t s,obj_t l,obj_t init,obj_t (*insn_append)(state_t,obj_t,insndata_t));
obj_t gdsl_x86_rreil_optimization_config(state_t s);
obj_t gdsl_x86_rreil_cleanup(state_t s,obj_t stmts);
lv_super_result_t gdsl_x86_rreil_liveness_super(state_t s,translate_result_t data);
obj_t gdsl_x86_rreil_liveness(state_t s,obj_t instructions);
obj_t gdsl_x86_rreil_select_live(state_t s);
obj_t gdsl_x86_rreil_lv_pretty(state_t s,obj_t t);
obj_t gdsl_x86_rreil_rreil_pretty(state_t s,obj_t ss_);
obj_t gdsl_x86_rreil_rreil_convert_sem_stmt_list(state_t s,callbacks_t cbs,obj_t stmts);
obj_t gdsl_x86_rreil_example_b(state_t s);
obj_t gdsl_x86_rreil_example_a(state_t s);
int_t gdsl_x86_rreil_rreil_stmts_count(state_t s,obj_t stmts);
obj_t gdsl_x86_rreil_pretty_arch_exception(state_t s,obj_t exception);
obj_t gdsl_x86_rreil_pretty_arch_id(state_t s,obj_t r);
asm_insn_t gdsl_x86_rreil_generalize(state_t s,insndata_t insn);
obj_t gdsl_x86_rreil_pretty_mnemonic(state_t s,insndata_t x);
obj_t gdsl_x86_rreil_pretty_operand(state_t s,insndata_t x,int_t i);
obj_t gdsl_x86_rreil_pretty(state_t s,insndata_t i);
int_t gdsl_x86_rreil_operands(state_t s,insndata_t x);
int_t gdsl_x86_rreil_insn_length(state_t s,insndata_t insn);
int_t gdsl_x86_rreil_features_get(state_t s,insndata_t insndata);
int_t gdsl_x86_rreil_typeof_opnd(state_t s,insndata_t x,int_t i);
insndata_t gdsl_x86_rreil_decode(state_t s,int_t config);
int_t gdsl_x86_rreil_config_default_opnd_sz_16(state_t s);
int_t gdsl_x86_rreil_config_mode32(state_t s);
int_t gdsl_x86_rreil_config_default(state_t s);
obj_t gdsl_x86_rreil_decoder_config(state_t s);
obj_t gdsl_x86_rreil_asm_pretty(state_t s,asm_insn_t ai);
obj_t gdsl_x86_rreil_asm_convert_insn(state_t s,asm_callbacks_t cbs,asm_insn_t insn);
obj_t gdsl_x86_rreil_conf_next(state_t s,obj_t co);
int_t gdsl_x86_rreil_conf_data(state_t s,obj_t co);
string_t gdsl_x86_rreil_conf_long(state_t s,obj_t co);
string_t gdsl_x86_rreil_conf_short(state_t s,obj_t co);
int_t gdsl_x86_rreil_has_conf(state_t s,obj_t co);
int_t gdsl_x86_rreil_int_max(state_t s);
string_t gdsl_x86_rreil_rope_to_string(state_t s,obj_t r,string_t buf);
void gdsl_x86_rreil_rope_print(state_t s,obj_t r);
int_t gdsl_x86_rreil_rope_length(state_t s,obj_t r);
#ifdef WITHMAIN
  #define GDSL_NO_PREFIX
#endif

#ifdef GDSL_NO_PREFIX
#define gdsl_init \
gdsl_x86_rreil_init
#define gdsl_set_code \
gdsl_x86_rreil_set_code
#define gdsl_get_ip \
gdsl_x86_rreil_get_ip
#define gdsl_seek \
gdsl_x86_rreil_seek
#define gdsl_err_tgt \
gdsl_x86_rreil_err_tgt
#define gdsl_get_error_message \
gdsl_x86_rreil_get_error_message
#define gdsl_reset_heap \
gdsl_x86_rreil_reset_heap
#define gdsl_heap_residency \
gdsl_x86_rreil_heap_residency
#define gdsl_merge_rope \
gdsl_x86_rreil_merge_rope
#define gdsl_destroy \
gdsl_x86_rreil_destroy
#define gdsl_translate gdsl_x86_rreil_translate
#define gdsl_succ_pretty gdsl_x86_rreil_succ_pretty
#define gdsl_decode_translate_super_block gdsl_x86_rreil_decode_translate_super_block
#define gdsl_decode_translate_single gdsl_x86_rreil_decode_translate_single
#define gdsl_select_ins_count gdsl_x86_rreil_select_ins_count
#define gdsl_decode_translate_block gdsl_x86_rreil_decode_translate_block
#define gdsl_decode_translate_block_optimized gdsl_x86_rreil_decode_translate_block_optimized
#define gdsl_traverse_insn_list gdsl_x86_rreil_traverse_insn_list
#define gdsl_optimization_config gdsl_x86_rreil_optimization_config
#define gdsl_cleanup gdsl_x86_rreil_cleanup
#define gdsl_liveness_super gdsl_x86_rreil_liveness_super
#define gdsl_liveness gdsl_x86_rreil_liveness
#define gdsl_select_live gdsl_x86_rreil_select_live
#define gdsl_lv_pretty gdsl_x86_rreil_lv_pretty
#define gdsl_rreil_pretty gdsl_x86_rreil_rreil_pretty
#define gdsl_rreil_convert_sem_stmt_list gdsl_x86_rreil_rreil_convert_sem_stmt_list
#define gdsl_example_b gdsl_x86_rreil_example_b
#define gdsl_example_a gdsl_x86_rreil_example_a
#define gdsl_rreil_stmts_count gdsl_x86_rreil_rreil_stmts_count
#define gdsl_pretty_arch_exception gdsl_x86_rreil_pretty_arch_exception
#define gdsl_pretty_arch_id gdsl_x86_rreil_pretty_arch_id
#define gdsl_generalize gdsl_x86_rreil_generalize
#define gdsl_pretty_mnemonic gdsl_x86_rreil_pretty_mnemonic
#define gdsl_pretty_operand gdsl_x86_rreil_pretty_operand
#define gdsl_pretty gdsl_x86_rreil_pretty
#define gdsl_operands gdsl_x86_rreil_operands
#define gdsl_insn_length gdsl_x86_rreil_insn_length
#define gdsl_features_get gdsl_x86_rreil_features_get
#define gdsl_typeof_opnd gdsl_x86_rreil_typeof_opnd
#define gdsl_decode gdsl_x86_rreil_decode
#define gdsl_config_default_opnd_sz_16 gdsl_x86_rreil_config_default_opnd_sz_16
#define gdsl_config_mode32 gdsl_x86_rreil_config_mode32
#define gdsl_config_default gdsl_x86_rreil_config_default
#define gdsl_decoder_config gdsl_x86_rreil_decoder_config
#define gdsl_asm_pretty gdsl_x86_rreil_asm_pretty
#define gdsl_asm_convert_insn gdsl_x86_rreil_asm_convert_insn
#define gdsl_conf_next gdsl_x86_rreil_conf_next
#define gdsl_conf_data gdsl_x86_rreil_conf_data
#define gdsl_conf_long gdsl_x86_rreil_conf_long
#define gdsl_conf_short gdsl_x86_rreil_conf_short
#define gdsl_has_conf gdsl_x86_rreil_has_conf
#define gdsl_int_max gdsl_x86_rreil_int_max
#define gdsl_rope_to_string gdsl_x86_rreil_rope_to_string
#define gdsl_rope_print gdsl_x86_rreil_rope_print
#define gdsl_rope_length gdsl_x86_rreil_rope_length
#endif

#endif /* __GDSL_X86_RREIL_H */

/* The following defines are accumulative. */

/* Exported tags of constructors. */
#ifdef CON_IO_NONE
  #if (CON_IO_NONE!=4)
    #error "merging GDSL libraries with incompatible definition for CON_IO_NONE."
  #endif
#else
  #define CON_IO_NONE 4
#endif
#ifdef CON_END
  #if (CON_END!=5)
    #error "merging GDSL libraries with incompatible definition for CON_END."
  #endif
#else
  #define CON_END 5
#endif
#ifdef CON_OBJ
  #if (CON_OBJ!=7)
    #error "merging GDSL libraries with incompatible definition for CON_OBJ."
  #endif
#else
  #define CON_OBJ 7
#endif
#ifdef CON_BIG_ENDIAN
  #if (CON_BIG_ENDIAN!=8)
    #error "merging GDSL libraries with incompatible definition for CON_BIG_ENDIAN."
  #endif
#else
  #define CON_BIG_ENDIAN 8
#endif
#ifdef CON_LITTLE_ENDIAN
  #if (CON_LITTLE_ENDIAN!=9)
    #error "merging GDSL libraries with incompatible definition for CON_LITTLE_ENDIAN."
  #endif
#else
  #define CON_LITTLE_ENDIAN 9
#endif
#ifdef CON_Lf
  #if (CON_Lf!=10)
    #error "merging GDSL libraries with incompatible definition for CON_Lf."
  #endif
#else
  #define CON_Lf 10
#endif
#ifdef CON_INSN_OBJ
  #if (CON_INSN_OBJ!=12)
    #error "merging GDSL libraries with incompatible definition for CON_INSN_OBJ."
  #endif
#else
  #define CON_INSN_OBJ 12
#endif
#ifdef CON_OPND_LIST_OBJ
  #if (CON_OPND_LIST_OBJ!=13)
    #error "merging GDSL libraries with incompatible definition for CON_OPND_LIST_OBJ."
  #endif
#else
  #define CON_OPND_LIST_OBJ 13
#endif
#ifdef CON_OPND_OBJ
  #if (CON_OPND_OBJ!=14)
    #error "merging GDSL libraries with incompatible definition for CON_OPND_OBJ."
  #endif
#else
  #define CON_OPND_OBJ 14
#endif
#ifdef CON_SIGNEDNESS_OBJ
  #if (CON_SIGNEDNESS_OBJ!=15)
    #error "merging GDSL libraries with incompatible definition for CON_SIGNEDNESS_OBJ."
  #endif
#else
  #define CON_SIGNEDNESS_OBJ 15
#endif
#ifdef CON_BOUNDARY_OBJ
  #if (CON_BOUNDARY_OBJ!=16)
    #error "merging GDSL libraries with incompatible definition for CON_BOUNDARY_OBJ."
  #endif
#else
  #define CON_BOUNDARY_OBJ 16
#endif
#ifdef CON_ANNOTATION_LIST_OBJ
  #if (CON_ANNOTATION_LIST_OBJ!=17)
    #error "merging GDSL libraries with incompatible definition for CON_ANNOTATION_LIST_OBJ."
  #endif
#else
  #define CON_ANNOTATION_LIST_OBJ 17
#endif
#ifdef CON_ANNOTATION_OBJ
  #if (CON_ANNOTATION_OBJ!=18)
    #error "merging GDSL libraries with incompatible definition for CON_ANNOTATION_OBJ."
  #endif
#else
  #define CON_ANNOTATION_OBJ 18
#endif
#ifdef CON_ASM_OPNDS_NIL
  #if (CON_ASM_OPNDS_NIL!=19)
    #error "merging GDSL libraries with incompatible definition for CON_ASM_OPNDS_NIL."
  #endif
#else
  #define CON_ASM_OPNDS_NIL 19
#endif
#ifdef CON_ASM_SIGNED
  #if (CON_ASM_SIGNED!=33)
    #error "merging GDSL libraries with incompatible definition for CON_ASM_SIGNED."
  #endif
#else
  #define CON_ASM_SIGNED 33
#endif
#ifdef CON_ASM_UNSIGNED
  #if (CON_ASM_UNSIGNED!=34)
    #error "merging GDSL libraries with incompatible definition for CON_ASM_UNSIGNED."
  #endif
#else
  #define CON_ASM_UNSIGNED 34
#endif
#ifdef CON_ASM_ANNS_NIL
  #if (CON_ASM_ANNS_NIL!=37)
    #error "merging GDSL libraries with incompatible definition for CON_ASM_ANNS_NIL."
  #endif
#else
  #define CON_ASM_ANNS_NIL 37
#endif
#ifdef CON_SEG_NONE
  #if (CON_SEG_NONE!=42)
    #error "merging GDSL libraries with incompatible definition for CON_SEG_NONE."
  #endif
#else
  #define CON_SEG_NONE 42
#endif
#ifdef CON_AL
  #if (CON_AL!=44)
    #error "merging GDSL libraries with incompatible definition for CON_AL."
  #endif
#else
  #define CON_AL 44
#endif
#ifdef CON_AH
  #if (CON_AH!=45)
    #error "merging GDSL libraries with incompatible definition for CON_AH."
  #endif
#else
  #define CON_AH 45
#endif
#ifdef CON_AX
  #if (CON_AX!=46)
    #error "merging GDSL libraries with incompatible definition for CON_AX."
  #endif
#else
  #define CON_AX 46
#endif
#ifdef CON_EAX
  #if (CON_EAX!=47)
    #error "merging GDSL libraries with incompatible definition for CON_EAX."
  #endif
#else
  #define CON_EAX 47
#endif
#ifdef CON_RAX
  #if (CON_RAX!=48)
    #error "merging GDSL libraries with incompatible definition for CON_RAX."
  #endif
#else
  #define CON_RAX 48
#endif
#ifdef CON_BL
  #if (CON_BL!=49)
    #error "merging GDSL libraries with incompatible definition for CON_BL."
  #endif
#else
  #define CON_BL 49
#endif
#ifdef CON_BH
  #if (CON_BH!=50)
    #error "merging GDSL libraries with incompatible definition for CON_BH."
  #endif
#else
  #define CON_BH 50
#endif
#ifdef CON_BX
  #if (CON_BX!=51)
    #error "merging GDSL libraries with incompatible definition for CON_BX."
  #endif
#else
  #define CON_BX 51
#endif
#ifdef CON_EBX
  #if (CON_EBX!=52)
    #error "merging GDSL libraries with incompatible definition for CON_EBX."
  #endif
#else
  #define CON_EBX 52
#endif
#ifdef CON_RBX
  #if (CON_RBX!=53)
    #error "merging GDSL libraries with incompatible definition for CON_RBX."
  #endif
#else
  #define CON_RBX 53
#endif
#ifdef CON_CL
  #if (CON_CL!=54)
    #error "merging GDSL libraries with incompatible definition for CON_CL."
  #endif
#else
  #define CON_CL 54
#endif
#ifdef CON_CH
  #if (CON_CH!=55)
    #error "merging GDSL libraries with incompatible definition for CON_CH."
  #endif
#else
  #define CON_CH 55
#endif
#ifdef CON_CX
  #if (CON_CX!=56)
    #error "merging GDSL libraries with incompatible definition for CON_CX."
  #endif
#else
  #define CON_CX 56
#endif
#ifdef CON_ECX
  #if (CON_ECX!=57)
    #error "merging GDSL libraries with incompatible definition for CON_ECX."
  #endif
#else
  #define CON_ECX 57
#endif
#ifdef CON_RCX
  #if (CON_RCX!=58)
    #error "merging GDSL libraries with incompatible definition for CON_RCX."
  #endif
#else
  #define CON_RCX 58
#endif
#ifdef CON_DL
  #if (CON_DL!=59)
    #error "merging GDSL libraries with incompatible definition for CON_DL."
  #endif
#else
  #define CON_DL 59
#endif
#ifdef CON_DH
  #if (CON_DH!=60)
    #error "merging GDSL libraries with incompatible definition for CON_DH."
  #endif
#else
  #define CON_DH 60
#endif
#ifdef CON_DX
  #if (CON_DX!=61)
    #error "merging GDSL libraries with incompatible definition for CON_DX."
  #endif
#else
  #define CON_DX 61
#endif
#ifdef CON_EDX
  #if (CON_EDX!=62)
    #error "merging GDSL libraries with incompatible definition for CON_EDX."
  #endif
#else
  #define CON_EDX 62
#endif
#ifdef CON_RDX
  #if (CON_RDX!=63)
    #error "merging GDSL libraries with incompatible definition for CON_RDX."
  #endif
#else
  #define CON_RDX 63
#endif
#ifdef CON_R8L
  #if (CON_R8L!=64)
    #error "merging GDSL libraries with incompatible definition for CON_R8L."
  #endif
#else
  #define CON_R8L 64
#endif
#ifdef CON_R8W
  #if (CON_R8W!=65)
    #error "merging GDSL libraries with incompatible definition for CON_R8W."
  #endif
#else
  #define CON_R8W 65
#endif
#ifdef CON_R8D
  #if (CON_R8D!=66)
    #error "merging GDSL libraries with incompatible definition for CON_R8D."
  #endif
#else
  #define CON_R8D 66
#endif
#ifdef CON_R8
  #if (CON_R8!=67)
    #error "merging GDSL libraries with incompatible definition for CON_R8."
  #endif
#else
  #define CON_R8 67
#endif
#ifdef CON_R9L
  #if (CON_R9L!=68)
    #error "merging GDSL libraries with incompatible definition for CON_R9L."
  #endif
#else
  #define CON_R9L 68
#endif
#ifdef CON_R9W
  #if (CON_R9W!=69)
    #error "merging GDSL libraries with incompatible definition for CON_R9W."
  #endif
#else
  #define CON_R9W 69
#endif
#ifdef CON_R9D
  #if (CON_R9D!=70)
    #error "merging GDSL libraries with incompatible definition for CON_R9D."
  #endif
#else
  #define CON_R9D 70
#endif
#ifdef CON_R9
  #if (CON_R9!=71)
    #error "merging GDSL libraries with incompatible definition for CON_R9."
  #endif
#else
  #define CON_R9 71
#endif
#ifdef CON_R10L
  #if (CON_R10L!=72)
    #error "merging GDSL libraries with incompatible definition for CON_R10L."
  #endif
#else
  #define CON_R10L 72
#endif
#ifdef CON_R10W
  #if (CON_R10W!=73)
    #error "merging GDSL libraries with incompatible definition for CON_R10W."
  #endif
#else
  #define CON_R10W 73
#endif
#ifdef CON_R10D
  #if (CON_R10D!=74)
    #error "merging GDSL libraries with incompatible definition for CON_R10D."
  #endif
#else
  #define CON_R10D 74
#endif
#ifdef CON_R10
  #if (CON_R10!=75)
    #error "merging GDSL libraries with incompatible definition for CON_R10."
  #endif
#else
  #define CON_R10 75
#endif
#ifdef CON_R11L
  #if (CON_R11L!=76)
    #error "merging GDSL libraries with incompatible definition for CON_R11L."
  #endif
#else
  #define CON_R11L 76
#endif
#ifdef CON_R11W
  #if (CON_R11W!=77)
    #error "merging GDSL libraries with incompatible definition for CON_R11W."
  #endif
#else
  #define CON_R11W 77
#endif
#ifdef CON_R11D
  #if (CON_R11D!=78)
    #error "merging GDSL libraries with incompatible definition for CON_R11D."
  #endif
#else
  #define CON_R11D 78
#endif
#ifdef CON_R11
  #if (CON_R11!=79)
    #error "merging GDSL libraries with incompatible definition for CON_R11."
  #endif
#else
  #define CON_R11 79
#endif
#ifdef CON_R12L
  #if (CON_R12L!=80)
    #error "merging GDSL libraries with incompatible definition for CON_R12L."
  #endif
#else
  #define CON_R12L 80
#endif
#ifdef CON_R12W
  #if (CON_R12W!=81)
    #error "merging GDSL libraries with incompatible definition for CON_R12W."
  #endif
#else
  #define CON_R12W 81
#endif
#ifdef CON_R12D
  #if (CON_R12D!=82)
    #error "merging GDSL libraries with incompatible definition for CON_R12D."
  #endif
#else
  #define CON_R12D 82
#endif
#ifdef CON_R12
  #if (CON_R12!=83)
    #error "merging GDSL libraries with incompatible definition for CON_R12."
  #endif
#else
  #define CON_R12 83
#endif
#ifdef CON_R13L
  #if (CON_R13L!=84)
    #error "merging GDSL libraries with incompatible definition for CON_R13L."
  #endif
#else
  #define CON_R13L 84
#endif
#ifdef CON_R13W
  #if (CON_R13W!=85)
    #error "merging GDSL libraries with incompatible definition for CON_R13W."
  #endif
#else
  #define CON_R13W 85
#endif
#ifdef CON_R13D
  #if (CON_R13D!=86)
    #error "merging GDSL libraries with incompatible definition for CON_R13D."
  #endif
#else
  #define CON_R13D 86
#endif
#ifdef CON_R13
  #if (CON_R13!=87)
    #error "merging GDSL libraries with incompatible definition for CON_R13."
  #endif
#else
  #define CON_R13 87
#endif
#ifdef CON_R14L
  #if (CON_R14L!=88)
    #error "merging GDSL libraries with incompatible definition for CON_R14L."
  #endif
#else
  #define CON_R14L 88
#endif
#ifdef CON_R14W
  #if (CON_R14W!=89)
    #error "merging GDSL libraries with incompatible definition for CON_R14W."
  #endif
#else
  #define CON_R14W 89
#endif
#ifdef CON_R14D
  #if (CON_R14D!=90)
    #error "merging GDSL libraries with incompatible definition for CON_R14D."
  #endif
#else
  #define CON_R14D 90
#endif
#ifdef CON_R14
  #if (CON_R14!=91)
    #error "merging GDSL libraries with incompatible definition for CON_R14."
  #endif
#else
  #define CON_R14 91
#endif
#ifdef CON_R15L
  #if (CON_R15L!=92)
    #error "merging GDSL libraries with incompatible definition for CON_R15L."
  #endif
#else
  #define CON_R15L 92
#endif
#ifdef CON_R15W
  #if (CON_R15W!=93)
    #error "merging GDSL libraries with incompatible definition for CON_R15W."
  #endif
#else
  #define CON_R15W 93
#endif
#ifdef CON_R15D
  #if (CON_R15D!=94)
    #error "merging GDSL libraries with incompatible definition for CON_R15D."
  #endif
#else
  #define CON_R15D 94
#endif
#ifdef CON_R15
  #if (CON_R15!=95)
    #error "merging GDSL libraries with incompatible definition for CON_R15."
  #endif
#else
  #define CON_R15 95
#endif
#ifdef CON_SPL
  #if (CON_SPL!=96)
    #error "merging GDSL libraries with incompatible definition for CON_SPL."
  #endif
#else
  #define CON_SPL 96
#endif
#ifdef CON_SP
  #if (CON_SP!=97)
    #error "merging GDSL libraries with incompatible definition for CON_SP."
  #endif
#else
  #define CON_SP 97
#endif
#ifdef CON_ESP
  #if (CON_ESP!=98)
    #error "merging GDSL libraries with incompatible definition for CON_ESP."
  #endif
#else
  #define CON_ESP 98
#endif
#ifdef CON_RSP
  #if (CON_RSP!=99)
    #error "merging GDSL libraries with incompatible definition for CON_RSP."
  #endif
#else
  #define CON_RSP 99
#endif
#ifdef CON_BPL
  #if (CON_BPL!=100)
    #error "merging GDSL libraries with incompatible definition for CON_BPL."
  #endif
#else
  #define CON_BPL 100
#endif
#ifdef CON_BP
  #if (CON_BP!=101)
    #error "merging GDSL libraries with incompatible definition for CON_BP."
  #endif
#else
  #define CON_BP 101
#endif
#ifdef CON_EBP
  #if (CON_EBP!=102)
    #error "merging GDSL libraries with incompatible definition for CON_EBP."
  #endif
#else
  #define CON_EBP 102
#endif
#ifdef CON_RBP
  #if (CON_RBP!=103)
    #error "merging GDSL libraries with incompatible definition for CON_RBP."
  #endif
#else
  #define CON_RBP 103
#endif
#ifdef CON_SIL
  #if (CON_SIL!=104)
    #error "merging GDSL libraries with incompatible definition for CON_SIL."
  #endif
#else
  #define CON_SIL 104
#endif
#ifdef CON_SI
  #if (CON_SI!=105)
    #error "merging GDSL libraries with incompatible definition for CON_SI."
  #endif
#else
  #define CON_SI 105
#endif
#ifdef CON_ESI
  #if (CON_ESI!=106)
    #error "merging GDSL libraries with incompatible definition for CON_ESI."
  #endif
#else
  #define CON_ESI 106
#endif
#ifdef CON_RSI
  #if (CON_RSI!=107)
    #error "merging GDSL libraries with incompatible definition for CON_RSI."
  #endif
#else
  #define CON_RSI 107
#endif
#ifdef CON_DIL
  #if (CON_DIL!=108)
    #error "merging GDSL libraries with incompatible definition for CON_DIL."
  #endif
#else
  #define CON_DIL 108
#endif
#ifdef CON_DI
  #if (CON_DI!=109)
    #error "merging GDSL libraries with incompatible definition for CON_DI."
  #endif
#else
  #define CON_DI 109
#endif
#ifdef CON_EDI
  #if (CON_EDI!=110)
    #error "merging GDSL libraries with incompatible definition for CON_EDI."
  #endif
#else
  #define CON_EDI 110
#endif
#ifdef CON_RDI
  #if (CON_RDI!=111)
    #error "merging GDSL libraries with incompatible definition for CON_RDI."
  #endif
#else
  #define CON_RDI 111
#endif
#ifdef CON_XMM0
  #if (CON_XMM0!=112)
    #error "merging GDSL libraries with incompatible definition for CON_XMM0."
  #endif
#else
  #define CON_XMM0 112
#endif
#ifdef CON_XMM1
  #if (CON_XMM1!=113)
    #error "merging GDSL libraries with incompatible definition for CON_XMM1."
  #endif
#else
  #define CON_XMM1 113
#endif
#ifdef CON_XMM2
  #if (CON_XMM2!=114)
    #error "merging GDSL libraries with incompatible definition for CON_XMM2."
  #endif
#else
  #define CON_XMM2 114
#endif
#ifdef CON_XMM3
  #if (CON_XMM3!=115)
    #error "merging GDSL libraries with incompatible definition for CON_XMM3."
  #endif
#else
  #define CON_XMM3 115
#endif
#ifdef CON_XMM4
  #if (CON_XMM4!=116)
    #error "merging GDSL libraries with incompatible definition for CON_XMM4."
  #endif
#else
  #define CON_XMM4 116
#endif
#ifdef CON_XMM5
  #if (CON_XMM5!=117)
    #error "merging GDSL libraries with incompatible definition for CON_XMM5."
  #endif
#else
  #define CON_XMM5 117
#endif
#ifdef CON_XMM6
  #if (CON_XMM6!=118)
    #error "merging GDSL libraries with incompatible definition for CON_XMM6."
  #endif
#else
  #define CON_XMM6 118
#endif
#ifdef CON_XMM7
  #if (CON_XMM7!=119)
    #error "merging GDSL libraries with incompatible definition for CON_XMM7."
  #endif
#else
  #define CON_XMM7 119
#endif
#ifdef CON_XMM8
  #if (CON_XMM8!=120)
    #error "merging GDSL libraries with incompatible definition for CON_XMM8."
  #endif
#else
  #define CON_XMM8 120
#endif
#ifdef CON_XMM9
  #if (CON_XMM9!=121)
    #error "merging GDSL libraries with incompatible definition for CON_XMM9."
  #endif
#else
  #define CON_XMM9 121
#endif
#ifdef CON_XMM10
  #if (CON_XMM10!=122)
    #error "merging GDSL libraries with incompatible definition for CON_XMM10."
  #endif
#else
  #define CON_XMM10 122
#endif
#ifdef CON_XMM11
  #if (CON_XMM11!=123)
    #error "merging GDSL libraries with incompatible definition for CON_XMM11."
  #endif
#else
  #define CON_XMM11 123
#endif
#ifdef CON_XMM12
  #if (CON_XMM12!=124)
    #error "merging GDSL libraries with incompatible definition for CON_XMM12."
  #endif
#else
  #define CON_XMM12 124
#endif
#ifdef CON_XMM13
  #if (CON_XMM13!=125)
    #error "merging GDSL libraries with incompatible definition for CON_XMM13."
  #endif
#else
  #define CON_XMM13 125
#endif
#ifdef CON_XMM14
  #if (CON_XMM14!=126)
    #error "merging GDSL libraries with incompatible definition for CON_XMM14."
  #endif
#else
  #define CON_XMM14 126
#endif
#ifdef CON_XMM15
  #if (CON_XMM15!=127)
    #error "merging GDSL libraries with incompatible definition for CON_XMM15."
  #endif
#else
  #define CON_XMM15 127
#endif
#ifdef CON_YMM0
  #if (CON_YMM0!=128)
    #error "merging GDSL libraries with incompatible definition for CON_YMM0."
  #endif
#else
  #define CON_YMM0 128
#endif
#ifdef CON_YMM1
  #if (CON_YMM1!=129)
    #error "merging GDSL libraries with incompatible definition for CON_YMM1."
  #endif
#else
  #define CON_YMM1 129
#endif
#ifdef CON_YMM2
  #if (CON_YMM2!=130)
    #error "merging GDSL libraries with incompatible definition for CON_YMM2."
  #endif
#else
  #define CON_YMM2 130
#endif
#ifdef CON_YMM3
  #if (CON_YMM3!=131)
    #error "merging GDSL libraries with incompatible definition for CON_YMM3."
  #endif
#else
  #define CON_YMM3 131
#endif
#ifdef CON_YMM4
  #if (CON_YMM4!=132)
    #error "merging GDSL libraries with incompatible definition for CON_YMM4."
  #endif
#else
  #define CON_YMM4 132
#endif
#ifdef CON_YMM5
  #if (CON_YMM5!=133)
    #error "merging GDSL libraries with incompatible definition for CON_YMM5."
  #endif
#else
  #define CON_YMM5 133
#endif
#ifdef CON_YMM6
  #if (CON_YMM6!=134)
    #error "merging GDSL libraries with incompatible definition for CON_YMM6."
  #endif
#else
  #define CON_YMM6 134
#endif
#ifdef CON_YMM7
  #if (CON_YMM7!=135)
    #error "merging GDSL libraries with incompatible definition for CON_YMM7."
  #endif
#else
  #define CON_YMM7 135
#endif
#ifdef CON_YMM8
  #if (CON_YMM8!=136)
    #error "merging GDSL libraries with incompatible definition for CON_YMM8."
  #endif
#else
  #define CON_YMM8 136
#endif
#ifdef CON_YMM9
  #if (CON_YMM9!=137)
    #error "merging GDSL libraries with incompatible definition for CON_YMM9."
  #endif
#else
  #define CON_YMM9 137
#endif
#ifdef CON_YMM10
  #if (CON_YMM10!=138)
    #error "merging GDSL libraries with incompatible definition for CON_YMM10."
  #endif
#else
  #define CON_YMM10 138
#endif
#ifdef CON_YMM11
  #if (CON_YMM11!=139)
    #error "merging GDSL libraries with incompatible definition for CON_YMM11."
  #endif
#else
  #define CON_YMM11 139
#endif
#ifdef CON_YMM12
  #if (CON_YMM12!=140)
    #error "merging GDSL libraries with incompatible definition for CON_YMM12."
  #endif
#else
  #define CON_YMM12 140
#endif
#ifdef CON_YMM13
  #if (CON_YMM13!=141)
    #error "merging GDSL libraries with incompatible definition for CON_YMM13."
  #endif
#else
  #define CON_YMM13 141
#endif
#ifdef CON_YMM14
  #if (CON_YMM14!=142)
    #error "merging GDSL libraries with incompatible definition for CON_YMM14."
  #endif
#else
  #define CON_YMM14 142
#endif
#ifdef CON_YMM15
  #if (CON_YMM15!=143)
    #error "merging GDSL libraries with incompatible definition for CON_YMM15."
  #endif
#else
  #define CON_YMM15 143
#endif
#ifdef CON_MM0
  #if (CON_MM0!=144)
    #error "merging GDSL libraries with incompatible definition for CON_MM0."
  #endif
#else
  #define CON_MM0 144
#endif
#ifdef CON_MM1
  #if (CON_MM1!=145)
    #error "merging GDSL libraries with incompatible definition for CON_MM1."
  #endif
#else
  #define CON_MM1 145
#endif
#ifdef CON_MM2
  #if (CON_MM2!=146)
    #error "merging GDSL libraries with incompatible definition for CON_MM2."
  #endif
#else
  #define CON_MM2 146
#endif
#ifdef CON_MM3
  #if (CON_MM3!=147)
    #error "merging GDSL libraries with incompatible definition for CON_MM3."
  #endif
#else
  #define CON_MM3 147
#endif
#ifdef CON_MM4
  #if (CON_MM4!=148)
    #error "merging GDSL libraries with incompatible definition for CON_MM4."
  #endif
#else
  #define CON_MM4 148
#endif
#ifdef CON_MM5
  #if (CON_MM5!=149)
    #error "merging GDSL libraries with incompatible definition for CON_MM5."
  #endif
#else
  #define CON_MM5 149
#endif
#ifdef CON_MM6
  #if (CON_MM6!=150)
    #error "merging GDSL libraries with incompatible definition for CON_MM6."
  #endif
#else
  #define CON_MM6 150
#endif
#ifdef CON_MM7
  #if (CON_MM7!=151)
    #error "merging GDSL libraries with incompatible definition for CON_MM7."
  #endif
#else
  #define CON_MM7 151
#endif
#ifdef CON_ES
  #if (CON_ES!=152)
    #error "merging GDSL libraries with incompatible definition for CON_ES."
  #endif
#else
  #define CON_ES 152
#endif
#ifdef CON_SS
  #if (CON_SS!=153)
    #error "merging GDSL libraries with incompatible definition for CON_SS."
  #endif
#else
  #define CON_SS 153
#endif
#ifdef CON_DS
  #if (CON_DS!=154)
    #error "merging GDSL libraries with incompatible definition for CON_DS."
  #endif
#else
  #define CON_DS 154
#endif
#ifdef CON_FS
  #if (CON_FS!=155)
    #error "merging GDSL libraries with incompatible definition for CON_FS."
  #endif
#else
  #define CON_FS 155
#endif
#ifdef CON_GS
  #if (CON_GS!=156)
    #error "merging GDSL libraries with incompatible definition for CON_GS."
  #endif
#else
  #define CON_GS 156
#endif
#ifdef CON_CS
  #if (CON_CS!=157)
    #error "merging GDSL libraries with incompatible definition for CON_CS."
  #endif
#else
  #define CON_CS 157
#endif
#ifdef CON_ST0
  #if (CON_ST0!=158)
    #error "merging GDSL libraries with incompatible definition for CON_ST0."
  #endif
#else
  #define CON_ST0 158
#endif
#ifdef CON_ST1
  #if (CON_ST1!=159)
    #error "merging GDSL libraries with incompatible definition for CON_ST1."
  #endif
#else
  #define CON_ST1 159
#endif
#ifdef CON_ST2
  #if (CON_ST2!=160)
    #error "merging GDSL libraries with incompatible definition for CON_ST2."
  #endif
#else
  #define CON_ST2 160
#endif
#ifdef CON_ST3
  #if (CON_ST3!=161)
    #error "merging GDSL libraries with incompatible definition for CON_ST3."
  #endif
#else
  #define CON_ST3 161
#endif
#ifdef CON_ST4
  #if (CON_ST4!=162)
    #error "merging GDSL libraries with incompatible definition for CON_ST4."
  #endif
#else
  #define CON_ST4 162
#endif
#ifdef CON_ST5
  #if (CON_ST5!=163)
    #error "merging GDSL libraries with incompatible definition for CON_ST5."
  #endif
#else
  #define CON_ST5 163
#endif
#ifdef CON_ST6
  #if (CON_ST6!=164)
    #error "merging GDSL libraries with incompatible definition for CON_ST6."
  #endif
#else
  #define CON_ST6 164
#endif
#ifdef CON_ST7
  #if (CON_ST7!=165)
    #error "merging GDSL libraries with incompatible definition for CON_ST7."
  #endif
#else
  #define CON_ST7 165
#endif
#ifdef CON_RIP
  #if (CON_RIP!=166)
    #error "merging GDSL libraries with incompatible definition for CON_RIP."
  #endif
#else
  #define CON_RIP 166
#endif
#ifdef CON_FLAGS
  #if (CON_FLAGS!=167)
    #error "merging GDSL libraries with incompatible definition for CON_FLAGS."
  #endif
#else
  #define CON_FLAGS 167
#endif
#ifdef CON_VA0
  #if (CON_VA0!=184)
    #error "merging GDSL libraries with incompatible definition for CON_VA0."
  #endif
#else
  #define CON_VA0 184
#endif
#ifdef CON_AAA
  #if (CON_AAA!=189)
    #error "merging GDSL libraries with incompatible definition for CON_AAA."
  #endif
#else
  #define CON_AAA 189
#endif
#ifdef CON_AAS
  #if (CON_AAS!=192)
    #error "merging GDSL libraries with incompatible definition for CON_AAS."
  #endif
#else
  #define CON_AAS 192
#endif
#ifdef CON_CBW
  #if (CON_CBW!=226)
    #error "merging GDSL libraries with incompatible definition for CON_CBW."
  #endif
#else
  #define CON_CBW 226
#endif
#ifdef CON_CDQ
  #if (CON_CDQ!=227)
    #error "merging GDSL libraries with incompatible definition for CON_CDQ."
  #endif
#else
  #define CON_CDQ 227
#endif
#ifdef CON_CDQE
  #if (CON_CDQE!=228)
    #error "merging GDSL libraries with incompatible definition for CON_CDQE."
  #endif
#else
  #define CON_CDQE 228
#endif
#ifdef CON_CLC
  #if (CON_CLC!=229)
    #error "merging GDSL libraries with incompatible definition for CON_CLC."
  #endif
#else
  #define CON_CLC 229
#endif
#ifdef CON_CLD
  #if (CON_CLD!=230)
    #error "merging GDSL libraries with incompatible definition for CON_CLD."
  #endif
#else
  #define CON_CLD 230
#endif
#ifdef CON_CLI
  #if (CON_CLI!=232)
    #error "merging GDSL libraries with incompatible definition for CON_CLI."
  #endif
#else
  #define CON_CLI 232
#endif
#ifdef CON_CLTS
  #if (CON_CLTS!=233)
    #error "merging GDSL libraries with incompatible definition for CON_CLTS."
  #endif
#else
  #define CON_CLTS 233
#endif
#ifdef CON_CMC
  #if (CON_CMC!=234)
    #error "merging GDSL libraries with incompatible definition for CON_CMC."
  #endif
#else
  #define CON_CMC 234
#endif
#ifdef CON_CPUID
  #if (CON_CPUID!=276)
    #error "merging GDSL libraries with incompatible definition for CON_CPUID."
  #endif
#else
  #define CON_CPUID 276
#endif
#ifdef CON_CQO
  #if (CON_CQO!=277)
    #error "merging GDSL libraries with incompatible definition for CON_CQO."
  #endif
#else
  #define CON_CQO 277
#endif
#ifdef CON_CWD
  #if (CON_CWD!=301)
    #error "merging GDSL libraries with incompatible definition for CON_CWD."
  #endif
#else
  #define CON_CWD 301
#endif
#ifdef CON_CWDE
  #if (CON_CWDE!=302)
    #error "merging GDSL libraries with incompatible definition for CON_CWDE."
  #endif
#else
  #define CON_CWDE 302
#endif
#ifdef CON_DAA
  #if (CON_DAA!=303)
    #error "merging GDSL libraries with incompatible definition for CON_DAA."
  #endif
#else
  #define CON_DAA 303
#endif
#ifdef CON_DAS
  #if (CON_DAS!=304)
    #error "merging GDSL libraries with incompatible definition for CON_DAS."
  #endif
#else
  #define CON_DAS 304
#endif
#ifdef CON_EMMS
  #if (CON_EMMS!=313)
    #error "merging GDSL libraries with incompatible definition for CON_EMMS."
  #endif
#else
  #define CON_EMMS 313
#endif
#ifdef CON_F2XM1
  #if (CON_F2XM1!=316)
    #error "merging GDSL libraries with incompatible definition for CON_F2XM1."
  #endif
#else
  #define CON_F2XM1 316
#endif
#ifdef CON_FABS
  #if (CON_FABS!=317)
    #error "merging GDSL libraries with incompatible definition for CON_FABS."
  #endif
#else
  #define CON_FABS 317
#endif
#ifdef CON_FCHS
  #if (CON_FCHS!=322)
    #error "merging GDSL libraries with incompatible definition for CON_FCHS."
  #endif
#else
  #define CON_FCHS 322
#endif
#ifdef CON_FCLEX
  #if (CON_FCLEX!=323)
    #error "merging GDSL libraries with incompatible definition for CON_FCLEX."
  #endif
#else
  #define CON_FCLEX 323
#endif
#ifdef CON_FCOMPP
  #if (CON_FCOMPP!=336)
    #error "merging GDSL libraries with incompatible definition for CON_FCOMPP."
  #endif
#else
  #define CON_FCOMPP 336
#endif
#ifdef CON_FCOS
  #if (CON_FCOS!=337)
    #error "merging GDSL libraries with incompatible definition for CON_FCOS."
  #endif
#else
  #define CON_FCOS 337
#endif
#ifdef CON_FDECSTP
  #if (CON_FDECSTP!=338)
    #error "merging GDSL libraries with incompatible definition for CON_FDECSTP."
  #endif
#else
  #define CON_FDECSTP 338
#endif
#ifdef CON_FINCSTP
  #if (CON_FINCSTP!=351)
    #error "merging GDSL libraries with incompatible definition for CON_FINCSTP."
  #endif
#else
  #define CON_FINCSTP 351
#endif
#ifdef CON_FINIT
  #if (CON_FINIT!=352)
    #error "merging GDSL libraries with incompatible definition for CON_FINIT."
  #endif
#else
  #define CON_FINIT 352
#endif
#ifdef CON_FLD1
  #if (CON_FLD1!=359)
    #error "merging GDSL libraries with incompatible definition for CON_FLD1."
  #endif
#else
  #define CON_FLD1 359
#endif
#ifdef CON_FLDL2E
  #if (CON_FLDL2E!=362)
    #error "merging GDSL libraries with incompatible definition for CON_FLDL2E."
  #endif
#else
  #define CON_FLDL2E 362
#endif
#ifdef CON_FLDL2T
  #if (CON_FLDL2T!=363)
    #error "merging GDSL libraries with incompatible definition for CON_FLDL2T."
  #endif
#else
  #define CON_FLDL2T 363
#endif
#ifdef CON_FLDLG2
  #if (CON_FLDLG2!=364)
    #error "merging GDSL libraries with incompatible definition for CON_FLDLG2."
  #endif
#else
  #define CON_FLDLG2 364
#endif
#ifdef CON_FLDLN2
  #if (CON_FLDLN2!=365)
    #error "merging GDSL libraries with incompatible definition for CON_FLDLN2."
  #endif
#else
  #define CON_FLDLN2 365
#endif
#ifdef CON_FLDPI
  #if (CON_FLDPI!=366)
    #error "merging GDSL libraries with incompatible definition for CON_FLDPI."
  #endif
#else
  #define CON_FLDPI 366
#endif
#ifdef CON_FLDZ
  #if (CON_FLDZ!=367)
    #error "merging GDSL libraries with incompatible definition for CON_FLDZ."
  #endif
#else
  #define CON_FLDZ 367
#endif
#ifdef CON_FNCLEX
  #if (CON_FNCLEX!=370)
    #error "merging GDSL libraries with incompatible definition for CON_FNCLEX."
  #endif
#else
  #define CON_FNCLEX 370
#endif
#ifdef CON_FNINIT
  #if (CON_FNINIT!=371)
    #error "merging GDSL libraries with incompatible definition for CON_FNINIT."
  #endif
#else
  #define CON_FNINIT 371
#endif
#ifdef CON_FNOP
  #if (CON_FNOP!=372)
    #error "merging GDSL libraries with incompatible definition for CON_FNOP."
  #endif
#else
  #define CON_FNOP 372
#endif
#ifdef CON_FPATAN
  #if (CON_FPATAN!=377)
    #error "merging GDSL libraries with incompatible definition for CON_FPATAN."
  #endif
#else
  #define CON_FPATAN 377
#endif
#ifdef CON_FPREM
  #if (CON_FPREM!=378)
    #error "merging GDSL libraries with incompatible definition for CON_FPREM."
  #endif
#else
  #define CON_FPREM 378
#endif
#ifdef CON_FPREM1
  #if (CON_FPREM1!=379)
    #error "merging GDSL libraries with incompatible definition for CON_FPREM1."
  #endif
#else
  #define CON_FPREM1 379
#endif
#ifdef CON_FPTAN
  #if (CON_FPTAN!=380)
    #error "merging GDSL libraries with incompatible definition for CON_FPTAN."
  #endif
#else
  #define CON_FPTAN 380
#endif
#ifdef CON_FRNDINT
  #if (CON_FRNDINT!=381)
    #error "merging GDSL libraries with incompatible definition for CON_FRNDINT."
  #endif
#else
  #define CON_FRNDINT 381
#endif
#ifdef CON_FSCALE
  #if (CON_FSCALE!=384)
    #error "merging GDSL libraries with incompatible definition for CON_FSCALE."
  #endif
#else
  #define CON_FSCALE 384
#endif
#ifdef CON_FSIN
  #if (CON_FSIN!=385)
    #error "merging GDSL libraries with incompatible definition for CON_FSIN."
  #endif
#else
  #define CON_FSIN 385
#endif
#ifdef CON_FSINCOS
  #if (CON_FSINCOS!=386)
    #error "merging GDSL libraries with incompatible definition for CON_FSINCOS."
  #endif
#else
  #define CON_FSINCOS 386
#endif
#ifdef CON_FSQRT
  #if (CON_FSQRT!=387)
    #error "merging GDSL libraries with incompatible definition for CON_FSQRT."
  #endif
#else
  #define CON_FSQRT 387
#endif
#ifdef CON_FTST
  #if (CON_FTST!=397)
    #error "merging GDSL libraries with incompatible definition for CON_FTST."
  #endif
#else
  #define CON_FTST 397
#endif
#ifdef CON_FUCOMPP
  #if (CON_FUCOMPP!=402)
    #error "merging GDSL libraries with incompatible definition for CON_FUCOMPP."
  #endif
#else
  #define CON_FUCOMPP 402
#endif
#ifdef CON_FXAM
  #if (CON_FXAM!=403)
    #error "merging GDSL libraries with incompatible definition for CON_FXAM."
  #endif
#else
  #define CON_FXAM 403
#endif
#ifdef CON_FXTRACT
  #if (CON_FXTRACT!=409)
    #error "merging GDSL libraries with incompatible definition for CON_FXTRACT."
  #endif
#else
  #define CON_FXTRACT 409
#endif
#ifdef CON_FYL2X
  #if (CON_FYL2X!=410)
    #error "merging GDSL libraries with incompatible definition for CON_FYL2X."
  #endif
#else
  #define CON_FYL2X 410
#endif
#ifdef CON_FYL2XP1
  #if (CON_FYL2XP1!=411)
    #error "merging GDSL libraries with incompatible definition for CON_FYL2XP1."
  #endif
#else
  #define CON_FYL2XP1 411
#endif
#ifdef CON_HLT
  #if (CON_HLT!=414)
    #error "merging GDSL libraries with incompatible definition for CON_HLT."
  #endif
#else
  #define CON_HLT 414
#endif
#ifdef CON_INSB
  #if (CON_INSB!=421)
    #error "merging GDSL libraries with incompatible definition for CON_INSB."
  #endif
#else
  #define CON_INSB 421
#endif
#ifdef CON_INSD
  #if (CON_INSD!=422)
    #error "merging GDSL libraries with incompatible definition for CON_INSD."
  #endif
#else
  #define CON_INSD 422
#endif
#ifdef CON_INSW
  #if (CON_INSW!=424)
    #error "merging GDSL libraries with incompatible definition for CON_INSW."
  #endif
#else
  #define CON_INSW 424
#endif
#ifdef CON_INT0
  #if (CON_INT0!=426)
    #error "merging GDSL libraries with incompatible definition for CON_INT0."
  #endif
#else
  #define CON_INT0 426
#endif
#ifdef CON_INT3
  #if (CON_INT3!=427)
    #error "merging GDSL libraries with incompatible definition for CON_INT3."
  #endif
#else
  #define CON_INT3 427
#endif
#ifdef CON_INVD
  #if (CON_INVD!=428)
    #error "merging GDSL libraries with incompatible definition for CON_INVD."
  #endif
#else
  #define CON_INVD 428
#endif
#ifdef CON_IRET
  #if (CON_IRET!=431)
    #error "merging GDSL libraries with incompatible definition for CON_IRET."
  #endif
#else
  #define CON_IRET 431
#endif
#ifdef CON_IRETD
  #if (CON_IRETD!=432)
    #error "merging GDSL libraries with incompatible definition for CON_IRETD."
  #endif
#else
  #define CON_IRETD 432
#endif
#ifdef CON_IRETQ
  #if (CON_IRETQ!=433)
    #error "merging GDSL libraries with incompatible definition for CON_IRETQ."
  #endif
#else
  #define CON_IRETQ 433
#endif
#ifdef CON_LAHF
  #if (CON_LAHF!=468)
    #error "merging GDSL libraries with incompatible definition for CON_LAHF."
  #endif
#else
  #define CON_LAHF 468
#endif
#ifdef CON_LEAVE
  #if (CON_LEAVE!=474)
    #error "merging GDSL libraries with incompatible definition for CON_LEAVE."
  #endif
#else
  #define CON_LEAVE 474
#endif
#ifdef CON_LFENCE
  #if (CON_LFENCE!=476)
    #error "merging GDSL libraries with incompatible definition for CON_LFENCE."
  #endif
#else
  #define CON_LFENCE 476
#endif
#ifdef CON_MFENCE
  #if (CON_MFENCE!=496)
    #error "merging GDSL libraries with incompatible definition for CON_MFENCE."
  #endif
#else
  #define CON_MFENCE 496
#endif
#ifdef CON_MONITOR
  #if (CON_MONITOR!=501)
    #error "merging GDSL libraries with incompatible definition for CON_MONITOR."
  #endif
#else
  #define CON_MONITOR 501
#endif
#ifdef CON_MWAIT
  #if (CON_MWAIT!=544)
    #error "merging GDSL libraries with incompatible definition for CON_MWAIT."
  #endif
#else
  #define CON_MWAIT 544
#endif
#ifdef CON_OUTS
  #if (CON_OUTS!=552)
    #error "merging GDSL libraries with incompatible definition for CON_OUTS."
  #endif
#else
  #define CON_OUTS 552
#endif
#ifdef CON_OUTSB
  #if (CON_OUTSB!=553)
    #error "merging GDSL libraries with incompatible definition for CON_OUTSB."
  #endif
#else
  #define CON_OUTSB 553
#endif
#ifdef CON_OUTSD
  #if (CON_OUTSD!=554)
    #error "merging GDSL libraries with incompatible definition for CON_OUTSD."
  #endif
#else
  #define CON_OUTSD 554
#endif
#ifdef CON_OUTSW
  #if (CON_OUTSW!=555)
    #error "merging GDSL libraries with incompatible definition for CON_OUTSW."
  #endif
#else
  #define CON_OUTSW 555
#endif
#ifdef CON_PAUSE
  #if (CON_PAUSE!=574)
    #error "merging GDSL libraries with incompatible definition for CON_PAUSE."
  #endif
#else
  #define CON_PAUSE 574
#endif
#ifdef CON_POPA
  #if (CON_POPA!=643)
    #error "merging GDSL libraries with incompatible definition for CON_POPA."
  #endif
#else
  #define CON_POPA 643
#endif
#ifdef CON_POPAD
  #if (CON_POPAD!=644)
    #error "merging GDSL libraries with incompatible definition for CON_POPAD."
  #endif
#else
  #define CON_POPAD 644
#endif
#ifdef CON_POPF
  #if (CON_POPF!=646)
    #error "merging GDSL libraries with incompatible definition for CON_POPF."
  #endif
#else
  #define CON_POPF 646
#endif
#ifdef CON_POPFD
  #if (CON_POPFD!=647)
    #error "merging GDSL libraries with incompatible definition for CON_POPFD."
  #endif
#else
  #define CON_POPFD 647
#endif
#ifdef CON_POPFQ
  #if (CON_POPFQ!=648)
    #error "merging GDSL libraries with incompatible definition for CON_POPFQ."
  #endif
#else
  #define CON_POPFQ 648
#endif
#ifdef CON_PUSHA
  #if (CON_PUSHA!=692)
    #error "merging GDSL libraries with incompatible definition for CON_PUSHA."
  #endif
#else
  #define CON_PUSHA 692
#endif
#ifdef CON_PUSHAD
  #if (CON_PUSHAD!=693)
    #error "merging GDSL libraries with incompatible definition for CON_PUSHAD."
  #endif
#else
  #define CON_PUSHAD 693
#endif
#ifdef CON_PUSHF
  #if (CON_PUSHF!=694)
    #error "merging GDSL libraries with incompatible definition for CON_PUSHF."
  #endif
#else
  #define CON_PUSHF 694
#endif
#ifdef CON_PUSHFD
  #if (CON_PUSHFD!=695)
    #error "merging GDSL libraries with incompatible definition for CON_PUSHFD."
  #endif
#else
  #define CON_PUSHFD 695
#endif
#ifdef CON_PUSHFQ
  #if (CON_PUSHFQ!=696)
    #error "merging GDSL libraries with incompatible definition for CON_PUSHFQ."
  #endif
#else
  #define CON_PUSHFQ 696
#endif
#ifdef CON_RDMSR
  #if (CON_RDMSR!=704)
    #error "merging GDSL libraries with incompatible definition for CON_RDMSR."
  #endif
#else
  #define CON_RDMSR 704
#endif
#ifdef CON_RDPMC
  #if (CON_RDPMC!=705)
    #error "merging GDSL libraries with incompatible definition for CON_RDPMC."
  #endif
#else
  #define CON_RDPMC 705
#endif
#ifdef CON_RDTSC
  #if (CON_RDTSC!=707)
    #error "merging GDSL libraries with incompatible definition for CON_RDTSC."
  #endif
#else
  #define CON_RDTSC 707
#endif
#ifdef CON_RDTSCP
  #if (CON_RDTSCP!=708)
    #error "merging GDSL libraries with incompatible definition for CON_RDTSCP."
  #endif
#else
  #define CON_RDTSCP 708
#endif
#ifdef CON_RSM
  #if (CON_RSM!=717)
    #error "merging GDSL libraries with incompatible definition for CON_RSM."
  #endif
#else
  #define CON_RSM 717
#endif
#ifdef CON_SAHF
  #if (CON_SAHF!=720)
    #error "merging GDSL libraries with incompatible definition for CON_SAHF."
  #endif
#else
  #define CON_SAHF 720
#endif
#ifdef CON_SCASB
  #if (CON_SCASB!=724)
    #error "merging GDSL libraries with incompatible definition for CON_SCASB."
  #endif
#else
  #define CON_SCASB 724
#endif
#ifdef CON_SCASD
  #if (CON_SCASD!=725)
    #error "merging GDSL libraries with incompatible definition for CON_SCASD."
  #endif
#else
  #define CON_SCASD 725
#endif
#ifdef CON_SCASQ
  #if (CON_SCASQ!=726)
    #error "merging GDSL libraries with incompatible definition for CON_SCASQ."
  #endif
#else
  #define CON_SCASQ 726
#endif
#ifdef CON_SCASW
  #if (CON_SCASW!=727)
    #error "merging GDSL libraries with incompatible definition for CON_SCASW."
  #endif
#else
  #define CON_SCASW 727
#endif
#ifdef CON_SFENCE
  #if (CON_SFENCE!=758)
    #error "merging GDSL libraries with incompatible definition for CON_SFENCE."
  #endif
#else
  #define CON_SFENCE 758
#endif
#ifdef CON_STC
  #if (CON_STC!=773)
    #error "merging GDSL libraries with incompatible definition for CON_STC."
  #endif
#else
  #define CON_STC 773
#endif
#ifdef CON_STD
  #if (CON_STD!=774)
    #error "merging GDSL libraries with incompatible definition for CON_STD."
  #endif
#else
  #define CON_STD 774
#endif
#ifdef CON_STI
  #if (CON_STI!=775)
    #error "merging GDSL libraries with incompatible definition for CON_STI."
  #endif
#else
  #define CON_STI 775
#endif
#ifdef CON_STOSB
  #if (CON_STOSB!=777)
    #error "merging GDSL libraries with incompatible definition for CON_STOSB."
  #endif
#else
  #define CON_STOSB 777
#endif
#ifdef CON_STOSD
  #if (CON_STOSD!=778)
    #error "merging GDSL libraries with incompatible definition for CON_STOSD."
  #endif
#else
  #define CON_STOSD 778
#endif
#ifdef CON_STOSQ
  #if (CON_STOSQ!=779)
    #error "merging GDSL libraries with incompatible definition for CON_STOSQ."
  #endif
#else
  #define CON_STOSQ 779
#endif
#ifdef CON_STOSW
  #if (CON_STOSW!=780)
    #error "merging GDSL libraries with incompatible definition for CON_STOSW."
  #endif
#else
  #define CON_STOSW 780
#endif
#ifdef CON_SWAPGS
  #if (CON_SWAPGS!=787)
    #error "merging GDSL libraries with incompatible definition for CON_SWAPGS."
  #endif
#else
  #define CON_SWAPGS 787
#endif
#ifdef CON_SYSCALL
  #if (CON_SYSCALL!=788)
    #error "merging GDSL libraries with incompatible definition for CON_SYSCALL."
  #endif
#else
  #define CON_SYSCALL 788
#endif
#ifdef CON_SYSENTER
  #if (CON_SYSENTER!=789)
    #error "merging GDSL libraries with incompatible definition for CON_SYSENTER."
  #endif
#else
  #define CON_SYSENTER 789
#endif
#ifdef CON_SYSEXIT
  #if (CON_SYSEXIT!=790)
    #error "merging GDSL libraries with incompatible definition for CON_SYSEXIT."
  #endif
#else
  #define CON_SYSEXIT 790
#endif
#ifdef CON_SYSRET
  #if (CON_SYSRET!=791)
    #error "merging GDSL libraries with incompatible definition for CON_SYSRET."
  #endif
#else
  #define CON_SYSRET 791
#endif
#ifdef CON_UD2
  #if (CON_UD2!=795)
    #error "merging GDSL libraries with incompatible definition for CON_UD2."
  #endif
#else
  #define CON_UD2 795
#endif
#ifdef CON_WAIT
  #if (CON_WAIT!=1063)
    #error "merging GDSL libraries with incompatible definition for CON_WAIT."
  #endif
#else
  #define CON_WAIT 1063
#endif
#ifdef CON_WBINVD
  #if (CON_WBINVD!=1064)
    #error "merging GDSL libraries with incompatible definition for CON_WBINVD."
  #endif
#else
  #define CON_WBINVD 1064
#endif
#ifdef CON_WRMSR
  #if (CON_WRMSR!=1067)
    #error "merging GDSL libraries with incompatible definition for CON_WRMSR."
  #endif
#else
  #define CON_WRMSR 1067
#endif
#ifdef CON_XGETBV
  #if (CON_XGETBV!=1070)
    #error "merging GDSL libraries with incompatible definition for CON_XGETBV."
  #endif
#else
  #define CON_XGETBV 1070
#endif
#ifdef CON_XLATB
  #if (CON_XLATB!=1071)
    #error "merging GDSL libraries with incompatible definition for CON_XLATB."
  #endif
#else
  #define CON_XLATB 1071
#endif
#ifdef CON_XSETBV
  #if (CON_XSETBV!=1081)
    #error "merging GDSL libraries with incompatible definition for CON_XSETBV."
  #endif
#else
  #define CON_XSETBV 1081
#endif
#ifdef CON_UA0
  #if (CON_UA0!=1082)
    #error "merging GDSL libraries with incompatible definition for CON_UA0."
  #endif
#else
  #define CON_UA0 1082
#endif
#ifdef CON_Sem_IP
  #if (CON_Sem_IP!=1088)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_IP."
  #endif
#else
  #define CON_Sem_IP 1088
#endif
#ifdef CON_Sem_FLAGS
  #if (CON_Sem_FLAGS!=1089)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_FLAGS."
  #endif
#else
  #define CON_Sem_FLAGS 1089
#endif
#ifdef CON_Sem_MXCSR
  #if (CON_Sem_MXCSR!=1090)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MXCSR."
  #endif
#else
  #define CON_Sem_MXCSR 1090
#endif
#ifdef CON_Sem_A
  #if (CON_Sem_A!=1091)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_A."
  #endif
#else
  #define CON_Sem_A 1091
#endif
#ifdef CON_Sem_B
  #if (CON_Sem_B!=1092)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_B."
  #endif
#else
  #define CON_Sem_B 1092
#endif
#ifdef CON_Sem_C
  #if (CON_Sem_C!=1093)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_C."
  #endif
#else
  #define CON_Sem_C 1093
#endif
#ifdef CON_Sem_D
  #if (CON_Sem_D!=1094)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_D."
  #endif
#else
  #define CON_Sem_D 1094
#endif
#ifdef CON_Sem_SI
  #if (CON_Sem_SI!=1095)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_SI."
  #endif
#else
  #define CON_Sem_SI 1095
#endif
#ifdef CON_Sem_DI
  #if (CON_Sem_DI!=1096)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_DI."
  #endif
#else
  #define CON_Sem_DI 1096
#endif
#ifdef CON_Sem_SP
  #if (CON_Sem_SP!=1097)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_SP."
  #endif
#else
  #define CON_Sem_SP 1097
#endif
#ifdef CON_Sem_BP
  #if (CON_Sem_BP!=1098)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_BP."
  #endif
#else
  #define CON_Sem_BP 1098
#endif
#ifdef CON_Sem_R8
  #if (CON_Sem_R8!=1099)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_R8."
  #endif
#else
  #define CON_Sem_R8 1099
#endif
#ifdef CON_Sem_R9
  #if (CON_Sem_R9!=1100)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_R9."
  #endif
#else
  #define CON_Sem_R9 1100
#endif
#ifdef CON_Sem_R10
  #if (CON_Sem_R10!=1101)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_R10."
  #endif
#else
  #define CON_Sem_R10 1101
#endif
#ifdef CON_Sem_R11
  #if (CON_Sem_R11!=1102)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_R11."
  #endif
#else
  #define CON_Sem_R11 1102
#endif
#ifdef CON_Sem_R12
  #if (CON_Sem_R12!=1103)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_R12."
  #endif
#else
  #define CON_Sem_R12 1103
#endif
#ifdef CON_Sem_R13
  #if (CON_Sem_R13!=1104)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_R13."
  #endif
#else
  #define CON_Sem_R13 1104
#endif
#ifdef CON_Sem_R14
  #if (CON_Sem_R14!=1105)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_R14."
  #endif
#else
  #define CON_Sem_R14 1105
#endif
#ifdef CON_Sem_R15
  #if (CON_Sem_R15!=1106)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_R15."
  #endif
#else
  #define CON_Sem_R15 1106
#endif
#ifdef CON_Sem_CS_Base
  #if (CON_Sem_CS_Base!=1107)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_CS_Base."
  #endif
#else
  #define CON_Sem_CS_Base 1107
#endif
#ifdef CON_Sem_DS_Base
  #if (CON_Sem_DS_Base!=1108)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_DS_Base."
  #endif
#else
  #define CON_Sem_DS_Base 1108
#endif
#ifdef CON_Sem_SS_Base
  #if (CON_Sem_SS_Base!=1109)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_SS_Base."
  #endif
#else
  #define CON_Sem_SS_Base 1109
#endif
#ifdef CON_Sem_ES_Base
  #if (CON_Sem_ES_Base!=1110)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ES_Base."
  #endif
#else
  #define CON_Sem_ES_Base 1110
#endif
#ifdef CON_Sem_FS_Base
  #if (CON_Sem_FS_Base!=1111)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_FS_Base."
  #endif
#else
  #define CON_Sem_FS_Base 1111
#endif
#ifdef CON_Sem_GS_Base
  #if (CON_Sem_GS_Base!=1112)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_GS_Base."
  #endif
#else
  #define CON_Sem_GS_Base 1112
#endif
#ifdef CON_Sem_CS
  #if (CON_Sem_CS!=1113)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_CS."
  #endif
#else
  #define CON_Sem_CS 1113
#endif
#ifdef CON_Sem_DS
  #if (CON_Sem_DS!=1114)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_DS."
  #endif
#else
  #define CON_Sem_DS 1114
#endif
#ifdef CON_Sem_SS
  #if (CON_Sem_SS!=1115)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_SS."
  #endif
#else
  #define CON_Sem_SS 1115
#endif
#ifdef CON_Sem_ES
  #if (CON_Sem_ES!=1116)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ES."
  #endif
#else
  #define CON_Sem_ES 1116
#endif
#ifdef CON_Sem_FS
  #if (CON_Sem_FS!=1117)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_FS."
  #endif
#else
  #define CON_Sem_FS 1117
#endif
#ifdef CON_Sem_GS
  #if (CON_Sem_GS!=1118)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_GS."
  #endif
#else
  #define CON_Sem_GS 1118
#endif
#ifdef CON_Sem_ST0
  #if (CON_Sem_ST0!=1119)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ST0."
  #endif
#else
  #define CON_Sem_ST0 1119
#endif
#ifdef CON_Sem_ST1
  #if (CON_Sem_ST1!=1120)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ST1."
  #endif
#else
  #define CON_Sem_ST1 1120
#endif
#ifdef CON_Sem_ST2
  #if (CON_Sem_ST2!=1121)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ST2."
  #endif
#else
  #define CON_Sem_ST2 1121
#endif
#ifdef CON_Sem_ST3
  #if (CON_Sem_ST3!=1122)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ST3."
  #endif
#else
  #define CON_Sem_ST3 1122
#endif
#ifdef CON_Sem_ST4
  #if (CON_Sem_ST4!=1123)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ST4."
  #endif
#else
  #define CON_Sem_ST4 1123
#endif
#ifdef CON_Sem_ST5
  #if (CON_Sem_ST5!=1124)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ST5."
  #endif
#else
  #define CON_Sem_ST5 1124
#endif
#ifdef CON_Sem_ST6
  #if (CON_Sem_ST6!=1125)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ST6."
  #endif
#else
  #define CON_Sem_ST6 1125
#endif
#ifdef CON_Sem_ST7
  #if (CON_Sem_ST7!=1126)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ST7."
  #endif
#else
  #define CON_Sem_ST7 1126
#endif
#ifdef CON_Sem_MM0
  #if (CON_Sem_MM0!=1127)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MM0."
  #endif
#else
  #define CON_Sem_MM0 1127
#endif
#ifdef CON_Sem_MM1
  #if (CON_Sem_MM1!=1128)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MM1."
  #endif
#else
  #define CON_Sem_MM1 1128
#endif
#ifdef CON_Sem_MM2
  #if (CON_Sem_MM2!=1129)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MM2."
  #endif
#else
  #define CON_Sem_MM2 1129
#endif
#ifdef CON_Sem_MM3
  #if (CON_Sem_MM3!=1130)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MM3."
  #endif
#else
  #define CON_Sem_MM3 1130
#endif
#ifdef CON_Sem_MM4
  #if (CON_Sem_MM4!=1131)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MM4."
  #endif
#else
  #define CON_Sem_MM4 1131
#endif
#ifdef CON_Sem_MM5
  #if (CON_Sem_MM5!=1132)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MM5."
  #endif
#else
  #define CON_Sem_MM5 1132
#endif
#ifdef CON_Sem_MM6
  #if (CON_Sem_MM6!=1133)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MM6."
  #endif
#else
  #define CON_Sem_MM6 1133
#endif
#ifdef CON_Sem_MM7
  #if (CON_Sem_MM7!=1134)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MM7."
  #endif
#else
  #define CON_Sem_MM7 1134
#endif
#ifdef CON_Sem_MM8
  #if (CON_Sem_MM8!=1135)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_MM8."
  #endif
#else
  #define CON_Sem_MM8 1135
#endif
#ifdef CON_Sem_XMM0
  #if (CON_Sem_XMM0!=1136)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM0."
  #endif
#else
  #define CON_Sem_XMM0 1136
#endif
#ifdef CON_Sem_XMM1
  #if (CON_Sem_XMM1!=1137)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM1."
  #endif
#else
  #define CON_Sem_XMM1 1137
#endif
#ifdef CON_Sem_XMM2
  #if (CON_Sem_XMM2!=1138)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM2."
  #endif
#else
  #define CON_Sem_XMM2 1138
#endif
#ifdef CON_Sem_XMM3
  #if (CON_Sem_XMM3!=1139)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM3."
  #endif
#else
  #define CON_Sem_XMM3 1139
#endif
#ifdef CON_Sem_XMM4
  #if (CON_Sem_XMM4!=1140)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM4."
  #endif
#else
  #define CON_Sem_XMM4 1140
#endif
#ifdef CON_Sem_XMM5
  #if (CON_Sem_XMM5!=1141)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM5."
  #endif
#else
  #define CON_Sem_XMM5 1141
#endif
#ifdef CON_Sem_XMM6
  #if (CON_Sem_XMM6!=1142)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM6."
  #endif
#else
  #define CON_Sem_XMM6 1142
#endif
#ifdef CON_Sem_XMM7
  #if (CON_Sem_XMM7!=1143)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM7."
  #endif
#else
  #define CON_Sem_XMM7 1143
#endif
#ifdef CON_Sem_XMM8
  #if (CON_Sem_XMM8!=1144)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM8."
  #endif
#else
  #define CON_Sem_XMM8 1144
#endif
#ifdef CON_Sem_XMM9
  #if (CON_Sem_XMM9!=1145)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM9."
  #endif
#else
  #define CON_Sem_XMM9 1145
#endif
#ifdef CON_Sem_XMM10
  #if (CON_Sem_XMM10!=1146)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM10."
  #endif
#else
  #define CON_Sem_XMM10 1146
#endif
#ifdef CON_Sem_XMM11
  #if (CON_Sem_XMM11!=1147)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM11."
  #endif
#else
  #define CON_Sem_XMM11 1147
#endif
#ifdef CON_Sem_XMM12
  #if (CON_Sem_XMM12!=1148)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM12."
  #endif
#else
  #define CON_Sem_XMM12 1148
#endif
#ifdef CON_Sem_XMM13
  #if (CON_Sem_XMM13!=1149)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM13."
  #endif
#else
  #define CON_Sem_XMM13 1149
#endif
#ifdef CON_Sem_XMM14
  #if (CON_Sem_XMM14!=1150)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM14."
  #endif
#else
  #define CON_Sem_XMM14 1150
#endif
#ifdef CON_Sem_XMM15
  #if (CON_Sem_XMM15!=1151)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_XMM15."
  #endif
#else
  #define CON_Sem_XMM15 1151
#endif
#ifdef CON_VIRT_LES
  #if (CON_VIRT_LES!=1152)
    #error "merging GDSL libraries with incompatible definition for CON_VIRT_LES."
  #endif
#else
  #define CON_VIRT_LES 1152
#endif
#ifdef CON_VIRT_LEU
  #if (CON_VIRT_LEU!=1153)
    #error "merging GDSL libraries with incompatible definition for CON_VIRT_LEU."
  #endif
#else
  #define CON_VIRT_LEU 1153
#endif
#ifdef CON_VIRT_LTS
  #if (CON_VIRT_LTS!=1154)
    #error "merging GDSL libraries with incompatible definition for CON_VIRT_LTS."
  #endif
#else
  #define CON_VIRT_LTS 1154
#endif
#ifdef CON_A
  #if (CON_A!=1155)
    #error "merging GDSL libraries with incompatible definition for CON_A."
  #endif
#else
  #define CON_A 1155
#endif
#ifdef CON_B
  #if (CON_B!=1156)
    #error "merging GDSL libraries with incompatible definition for CON_B."
  #endif
#else
  #define CON_B 1156
#endif
#ifdef CON_C
  #if (CON_C!=1157)
    #error "merging GDSL libraries with incompatible definition for CON_C."
  #endif
#else
  #define CON_C 1157
#endif
#ifdef CON_D
  #if (CON_D!=1158)
    #error "merging GDSL libraries with incompatible definition for CON_D."
  #endif
#else
  #define CON_D 1158
#endif
#ifdef CON_SI_
  #if (CON_SI_!=1159)
    #error "merging GDSL libraries with incompatible definition for CON_SI_."
  #endif
#else
  #define CON_SI_ 1159
#endif
#ifdef CON_DI_
  #if (CON_DI_!=1160)
    #error "merging GDSL libraries with incompatible definition for CON_DI_."
  #endif
#else
  #define CON_DI_ 1160
#endif
#ifdef CON_BP_
  #if (CON_BP_!=1161)
    #error "merging GDSL libraries with incompatible definition for CON_BP_."
  #endif
#else
  #define CON_BP_ 1161
#endif
#ifdef CON_SP_
  #if (CON_SP_!=1162)
    #error "merging GDSL libraries with incompatible definition for CON_SP_."
  #endif
#else
  #define CON_SP_ 1162
#endif
#ifdef CON_SEM_DIVISION_OVERFLOW
  #if (CON_SEM_DIVISION_OVERFLOW!=1163)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_DIVISION_OVERFLOW."
  #endif
#else
  #define CON_SEM_DIVISION_OVERFLOW 1163
#endif
#ifdef CON_FLOATING_FLAGS
  #if (CON_FLOATING_FLAGS!=1164)
    #error "merging GDSL libraries with incompatible definition for CON_FLOATING_FLAGS."
  #endif
#else
  #define CON_FLOATING_FLAGS 1164
#endif
#ifdef CON_SEM_DIVISION_BY_ZERO
  #if (CON_SEM_DIVISION_BY_ZERO!=1166)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_DIVISION_BY_ZERO."
  #endif
#else
  #define CON_SEM_DIVISION_BY_ZERO 1166
#endif
#ifdef CON_SEM_SEXPR_ARB
  #if (CON_SEM_SEXPR_ARB!=1174)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_SEXPR_ARB."
  #endif
#else
  #define CON_SEM_SEXPR_ARB 1174
#endif
#ifdef CON_SEM_VARLS_NIL
  #if (CON_SEM_VARLS_NIL!=1196)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VARLS_NIL."
  #endif
#else
  #define CON_SEM_VARLS_NIL 1196
#endif
#ifdef CON_SEM_FADD
  #if (CON_SEM_FADD!=1197)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FADD."
  #endif
#else
  #define CON_SEM_FADD 1197
#endif
#ifdef CON_SEM_FSUB
  #if (CON_SEM_FSUB!=1198)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FSUB."
  #endif
#else
  #define CON_SEM_FSUB 1198
#endif
#ifdef CON_SEM_FMUL
  #if (CON_SEM_FMUL!=1199)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FMUL."
  #endif
#else
  #define CON_SEM_FMUL 1199
#endif
#ifdef CON_HINT_JUMP
  #if (CON_HINT_JUMP!=1210)
    #error "merging GDSL libraries with incompatible definition for CON_HINT_JUMP."
  #endif
#else
  #define CON_HINT_JUMP 1210
#endif
#ifdef CON_HINT_CALL
  #if (CON_HINT_CALL!=1211)
    #error "merging GDSL libraries with incompatible definition for CON_HINT_CALL."
  #endif
#else
  #define CON_HINT_CALL 1211
#endif
#ifdef CON_HINT_RET
  #if (CON_HINT_RET!=1212)
    #error "merging GDSL libraries with incompatible definition for CON_HINT_RET."
  #endif
#else
  #define CON_HINT_RET 1212
#endif
#ifdef CON_SEM_NIL
  #if (CON_SEM_NIL!=1214)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_NIL."
  #endif
#else
  #define CON_SEM_NIL 1214
#endif
#ifdef CON_TLIST_NIL
  #if (CON_TLIST_NIL!=1216)
    #error "merging GDSL libraries with incompatible definition for CON_TLIST_NIL."
  #endif
#else
  #define CON_TLIST_NIL 1216
#endif
#ifdef CON_SEM_LINS_NIL
  #if (CON_SEM_LINS_NIL!=1218)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_LINS_NIL."
  #endif
#else
  #define CON_SEM_LINS_NIL 1218
#endif
#ifdef CON_SEM_ID_OBJ
  #if (CON_SEM_ID_OBJ!=1219)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_ID_OBJ."
  #endif
#else
  #define CON_SEM_ID_OBJ 1219
#endif
#ifdef CON_SEM_ADDRESS_OBJ
  #if (CON_SEM_ADDRESS_OBJ!=1220)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_ADDRESS_OBJ."
  #endif
#else
  #define CON_SEM_ADDRESS_OBJ 1220
#endif
#ifdef CON_SEM_VAR_OBJ
  #if (CON_SEM_VAR_OBJ!=1221)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VAR_OBJ."
  #endif
#else
  #define CON_SEM_VAR_OBJ 1221
#endif
#ifdef CON_SEM_LINEAR_OBJ
  #if (CON_SEM_LINEAR_OBJ!=1222)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_LINEAR_OBJ."
  #endif
#else
  #define CON_SEM_LINEAR_OBJ 1222
#endif
#ifdef CON_SEM_SEXPR_OBJ
  #if (CON_SEM_SEXPR_OBJ!=1223)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_SEXPR_OBJ."
  #endif
#else
  #define CON_SEM_SEXPR_OBJ 1223
#endif
#ifdef CON_SEM_EXPR_CMP_OBJ
  #if (CON_SEM_EXPR_CMP_OBJ!=1224)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXPR_CMP_OBJ."
  #endif
#else
  #define CON_SEM_EXPR_CMP_OBJ 1224
#endif
#ifdef CON_SEM_EXPR_OBJ
  #if (CON_SEM_EXPR_OBJ!=1225)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXPR_OBJ."
  #endif
#else
  #define CON_SEM_EXPR_OBJ 1225
#endif
#ifdef CON_SEM_VARL_OBJ
  #if (CON_SEM_VARL_OBJ!=1226)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VARL_OBJ."
  #endif
#else
  #define CON_SEM_VARL_OBJ 1226
#endif
#ifdef CON_SEM_VARL_LIST_OBJ
  #if (CON_SEM_VARL_LIST_OBJ!=1227)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VARL_LIST_OBJ."
  #endif
#else
  #define CON_SEM_VARL_LIST_OBJ 1227
#endif
#ifdef CON_SEM_FLOP_OBJ
  #if (CON_SEM_FLOP_OBJ!=1228)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FLOP_OBJ."
  #endif
#else
  #define CON_SEM_FLOP_OBJ 1228
#endif
#ifdef CON_SEM_STMT_OBJ
  #if (CON_SEM_STMT_OBJ!=1229)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_STMT_OBJ."
  #endif
#else
  #define CON_SEM_STMT_OBJ 1229
#endif
#ifdef CON_SEM_STMT_LIST_OBJ
  #if (CON_SEM_STMT_LIST_OBJ!=1230)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_STMT_LIST_OBJ."
  #endif
#else
  #define CON_SEM_STMT_LIST_OBJ 1230
#endif
#ifdef CON_BRANCH_OBJ
  #if (CON_BRANCH_OBJ!=1231)
    #error "merging GDSL libraries with incompatible definition for CON_BRANCH_OBJ."
  #endif
#else
  #define CON_BRANCH_OBJ 1231
#endif
#ifdef CON_SEM_EXCEPTION_OBJ
  #if (CON_SEM_EXCEPTION_OBJ!=1232)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXCEPTION_OBJ."
  #endif
#else
  #define CON_SEM_EXCEPTION_OBJ 1232
#endif
#ifdef CON_LIN_NONE
  #if (CON_LIN_NONE!=1234)
    #error "merging GDSL libraries with incompatible definition for CON_LIN_NONE."
  #endif
#else
  #define CON_LIN_NONE 1234
#endif
#ifdef CON_STO_NONE
  #if (CON_STO_NONE!=1237)
    #error "merging GDSL libraries with incompatible definition for CON_STO_NONE."
  #endif
#else
  #define CON_STO_NONE 1237
#endif
#ifdef CON_INSN_LIST_OBJ
  #if (CON_INSN_LIST_OBJ!=1238)
    #error "merging GDSL libraries with incompatible definition for CON_INSN_LIST_OBJ."
  #endif
#else
  #define CON_INSN_LIST_OBJ 1238
#endif
#ifdef CON_INSNS_NIL
  #if (CON_INSNS_NIL!=1240)
    #error "merging GDSL libraries with incompatible definition for CON_INSNS_NIL."
  #endif
#else
  #define CON_INSNS_NIL 1240
#endif
#ifdef CON_SEM_PRESERVATION_EVERYWHERE
  #if (CON_SEM_PRESERVATION_EVERYWHERE!=1241)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_PRESERVATION_EVERYWHERE."
  #endif
#else
  #define CON_SEM_PRESERVATION_EVERYWHERE 1241
#endif
#ifdef CON_SEM_PRESERVATION_BLOCK
  #if (CON_SEM_PRESERVATION_BLOCK!=1242)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_PRESERVATION_BLOCK."
  #endif
#else
  #define CON_SEM_PRESERVATION_BLOCK 1242
#endif
#ifdef CON_SEM_PRESERVATION_CONTEXT
  #if (CON_SEM_PRESERVATION_CONTEXT!=1243)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_PRESERVATION_CONTEXT."
  #endif
#else
  #define CON_SEM_PRESERVATION_CONTEXT 1243
#endif
#ifdef CON_SO_NONE
  #if (CON_SO_NONE!=1245)
    #error "merging GDSL libraries with incompatible definition for CON_SO_NONE."
  #endif
#else
  #define CON_SO_NONE 1245
#endif
#ifdef CON_Signed
  #if (CON_Signed!=1248)
    #error "merging GDSL libraries with incompatible definition for CON_Signed."
  #endif
#else
  #define CON_Signed 1248
#endif
#ifdef CON_Unsigned
  #if (CON_Unsigned!=1249)
    #error "merging GDSL libraries with incompatible definition for CON_Unsigned."
  #endif
#else
  #define CON_Unsigned 1249
#endif
#ifdef CON_OFFSET_NONE
  #if (CON_OFFSET_NONE!=1250)
    #error "merging GDSL libraries with incompatible definition for CON_OFFSET_NONE."
  #endif
#else
  #define CON_OFFSET_NONE 1250
#endif
