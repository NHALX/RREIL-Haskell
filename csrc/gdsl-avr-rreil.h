// EDITED!:
#define gdsl_get_ip     gdsl_avr_rreil_get_ip
#define gdsl_seek       gdsl_avr_rreil_seek

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
#ifndef __GDSL_AVR_RREIL_H
#define __GDSL_AVR_RREIL_H

/* Create a new decoder state. Should be destroyed by
gdsl_avr_rreil_destroy(). */
state_t
gdsl_avr_rreil_init(void);

/* Set the code buffer. The parameter base denotes the address that ip_get
   in GDSL returns when no bytes have been consumed. */
void
gdsl_avr_rreil_set_code(state_t s, unsigned char* buf, size_t buf_len, size_t base);

/* Query the offset of the current IP relative to base. */
size_t
gdsl_avr_rreil_get_ip(state_t s);

/* Set the current code position to this address. */
int_t
gdsl_avr_rreil_seek(state_t s, size_t i);

/* An exception handler must be installed by calling setjmp with the argument
 * returned by this function.
 * If an exception occurs, control will return from setjmp with
 * value 1 if there are no more bytes in the input buffer or with
 * value 2 if there has been an error (e.g. pattern match failure). In
 * both cases, an error message can be retrieved using get_error_message().
 */
jmp_buf*
gdsl_avr_rreil_err_tgt(state_t s);

/* Retrieve the error message after an exception has been raised. */
char*
gdsl_avr_rreil_get_error_message(state_t s);

/* Reset the heap. Objects returned by exported function are no longer valid
   after a call to this funciton. This function does not necessarily
   deallocate all of the heap. */
void
gdsl_avr_rreil_reset_heap(state_t s);

/* Query the no of bytes currently allocated on the heap. */
size_t
gdsl_avr_rreil_heap_residency(state_t s);

/* Allocate a buffer on the heap and emit the given rope into it.
   Returns a pointer to the buffer on the heap. */
string_t
gdsl_avr_rreil_merge_rope(state_t s, obj_t rope);

/* Frees the heap and the decoder state. */
void
gdsl_avr_rreil_destroy(state_t s);

/* Records that are represented as C structs. */
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
  obj_t insn;
  int_t length;
} unboxed_insndata_t;
typedef unboxed_insndata_t* insndata_t;
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
obj_t gdsl_avr_rreil_pretty_arch_exception(state_t s,obj_t exception);
obj_t gdsl_avr_rreil_pretty_arch_id(state_t s,obj_t r);
obj_t gdsl_avr_rreil_translate(state_t s,insndata_t insn);
obj_t gdsl_avr_rreil_succ_pretty(state_t s,obj_t succ,string_t name);
translate_result_t gdsl_avr_rreil_decode_translate_super_block(state_t s,int_t config,int_t limit);
obj_t gdsl_avr_rreil_decode_translate_single(state_t s,int_t config);
int_t gdsl_avr_rreil_select_ins_count(state_t s);
obj_t gdsl_avr_rreil_decode_translate_block(state_t s,int_t config,int_t limit);
opt_result_t gdsl_avr_rreil_decode_translate_block_optimized(state_t s,int_t config,int_t limit,int_t opt_config);
obj_t gdsl_avr_rreil_traverse_insn_list(state_t s,obj_t l,obj_t init,obj_t (*insn_append)(state_t,obj_t,insndata_t));
obj_t gdsl_avr_rreil_optimization_config(state_t s);
obj_t gdsl_avr_rreil_cleanup(state_t s,obj_t stmts);
lv_super_result_t gdsl_avr_rreil_liveness_super(state_t s,translate_result_t data);
obj_t gdsl_avr_rreil_liveness(state_t s,obj_t instructions);
obj_t gdsl_avr_rreil_select_live(state_t s);
obj_t gdsl_avr_rreil_lv_pretty(state_t s,obj_t t);
obj_t gdsl_avr_rreil_rreil_pretty(state_t s,obj_t ss);
obj_t gdsl_avr_rreil_rreil_convert_sem_stmt_list(state_t s,callbacks_t cbs,obj_t stmts);
obj_t gdsl_avr_rreil_example_b(state_t s);
obj_t gdsl_avr_rreil_example_a(state_t s);
int_t gdsl_avr_rreil_rreil_stmts_count(state_t s,obj_t stmts);
obj_t gdsl_avr_rreil_pretty(state_t s,insndata_t i);
asm_insn_t gdsl_avr_rreil_generalize(state_t s,insndata_t insn);
insndata_t gdsl_avr_rreil_decode(state_t s,int_t config);
int_t gdsl_avr_rreil_config_default(state_t s);
obj_t gdsl_avr_rreil_decoder_config(state_t s);
obj_t gdsl_avr_rreil_asm_pretty(state_t s,asm_insn_t ai);
obj_t gdsl_avr_rreil_asm_convert_insn(state_t s,asm_callbacks_t cbs,asm_insn_t insn);
obj_t gdsl_avr_rreil_conf_next(state_t s,obj_t co);
int_t gdsl_avr_rreil_conf_data(state_t s,obj_t co);
string_t gdsl_avr_rreil_conf_long(state_t s,obj_t co);
string_t gdsl_avr_rreil_conf_short(state_t s,obj_t co);
int_t gdsl_avr_rreil_has_conf(state_t s,obj_t co);
int_t gdsl_avr_rreil_int_max(state_t s);
string_t gdsl_avr_rreil_rope_to_string(state_t s,obj_t r,string_t buf);
void gdsl_avr_rreil_rope_print(state_t s,obj_t r);
int_t gdsl_avr_rreil_rope_length(state_t s,obj_t r);
#ifdef WITHMAIN
  #define GDSL_NO_PREFIX
#endif

#ifdef GDSL_NO_PREFIX
#define gdsl_init \
gdsl_avr_rreil_init
#define gdsl_set_code \
gdsl_avr_rreil_set_code
#define gdsl_get_ip \
gdsl_avr_rreil_get_ip
#define gdsl_seek \
gdsl_avr_rreil_seek
#define gdsl_err_tgt \
gdsl_avr_rreil_err_tgt
#define gdsl_get_error_message \
gdsl_avr_rreil_get_error_message
#define gdsl_reset_heap \
gdsl_avr_rreil_reset_heap
#define gdsl_heap_residency \
gdsl_avr_rreil_heap_residency
#define gdsl_merge_rope \
gdsl_avr_rreil_merge_rope
#define gdsl_destroy \
gdsl_avr_rreil_destroy
#define gdsl_pretty_arch_exception gdsl_avr_rreil_pretty_arch_exception
#define gdsl_pretty_arch_id gdsl_avr_rreil_pretty_arch_id
#define gdsl_translate gdsl_avr_rreil_translate
#define gdsl_succ_pretty gdsl_avr_rreil_succ_pretty
#define gdsl_decode_translate_super_block gdsl_avr_rreil_decode_translate_super_block
#define gdsl_decode_translate_single gdsl_avr_rreil_decode_translate_single
#define gdsl_select_ins_count gdsl_avr_rreil_select_ins_count
#define gdsl_decode_translate_block gdsl_avr_rreil_decode_translate_block
#define gdsl_decode_translate_block_optimized gdsl_avr_rreil_decode_translate_block_optimized
#define gdsl_traverse_insn_list gdsl_avr_rreil_traverse_insn_list
#define gdsl_optimization_config gdsl_avr_rreil_optimization_config
#define gdsl_cleanup gdsl_avr_rreil_cleanup
#define gdsl_liveness_super gdsl_avr_rreil_liveness_super
#define gdsl_liveness gdsl_avr_rreil_liveness
#define gdsl_select_live gdsl_avr_rreil_select_live
#define gdsl_lv_pretty gdsl_avr_rreil_lv_pretty
#define gdsl_rreil_pretty gdsl_avr_rreil_rreil_pretty
#define gdsl_rreil_convert_sem_stmt_list gdsl_avr_rreil_rreil_convert_sem_stmt_list
#define gdsl_example_b gdsl_avr_rreil_example_b
#define gdsl_example_a gdsl_avr_rreil_example_a
#define gdsl_rreil_stmts_count gdsl_avr_rreil_rreil_stmts_count
#define gdsl_pretty gdsl_avr_rreil_pretty
#define gdsl_generalize gdsl_avr_rreil_generalize
#define gdsl_decode gdsl_avr_rreil_decode
#define gdsl_config_default gdsl_avr_rreil_config_default
#define gdsl_decoder_config gdsl_avr_rreil_decoder_config
#define gdsl_asm_pretty gdsl_avr_rreil_asm_pretty
#define gdsl_asm_convert_insn gdsl_avr_rreil_asm_convert_insn
#define gdsl_conf_next gdsl_avr_rreil_conf_next
#define gdsl_conf_data gdsl_avr_rreil_conf_data
#define gdsl_conf_long gdsl_avr_rreil_conf_long
#define gdsl_conf_short gdsl_avr_rreil_conf_short
#define gdsl_has_conf gdsl_avr_rreil_has_conf
#define gdsl_int_max gdsl_avr_rreil_int_max
#define gdsl_rope_to_string gdsl_avr_rreil_rope_to_string
#define gdsl_rope_print gdsl_avr_rreil_rope_print
#define gdsl_rope_length gdsl_avr_rreil_rope_length
#endif

#endif /* __GDSL_AVR_RREIL_H */

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
#ifdef CON_NONE
  #if (CON_NONE!=42)
    #error "merging GDSL libraries with incompatible definition for CON_NONE."
  #endif
#else
  #define CON_NONE 42
#endif
#ifdef CON_DECR
  #if (CON_DECR!=44)
    #error "merging GDSL libraries with incompatible definition for CON_DECR."
  #endif
#else
  #define CON_DECR 44
#endif
#ifdef CON_BREAK
  #if (CON_BREAK!=70)
    #error "merging GDSL libraries with incompatible definition for CON_BREAK."
  #endif
#else
  #define CON_BREAK 70
#endif
#ifdef CON_CLC
  #if (CON_CLC!=89)
    #error "merging GDSL libraries with incompatible definition for CON_CLC."
  #endif
#else
  #define CON_CLC 89
#endif
#ifdef CON_CLH
  #if (CON_CLH!=90)
    #error "merging GDSL libraries with incompatible definition for CON_CLH."
  #endif
#else
  #define CON_CLH 90
#endif
#ifdef CON_CLI
  #if (CON_CLI!=91)
    #error "merging GDSL libraries with incompatible definition for CON_CLI."
  #endif
#else
  #define CON_CLI 91
#endif
#ifdef CON_CLN
  #if (CON_CLN!=92)
    #error "merging GDSL libraries with incompatible definition for CON_CLN."
  #endif
#else
  #define CON_CLN 92
#endif
#ifdef CON_CLS
  #if (CON_CLS!=94)
    #error "merging GDSL libraries with incompatible definition for CON_CLS."
  #endif
#else
  #define CON_CLS 94
#endif
#ifdef CON_CLT
  #if (CON_CLT!=95)
    #error "merging GDSL libraries with incompatible definition for CON_CLT."
  #endif
#else
  #define CON_CLT 95
#endif
#ifdef CON_CLV
  #if (CON_CLV!=96)
    #error "merging GDSL libraries with incompatible definition for CON_CLV."
  #endif
#else
  #define CON_CLV 96
#endif
#ifdef CON_CLZ
  #if (CON_CLZ!=97)
    #error "merging GDSL libraries with incompatible definition for CON_CLZ."
  #endif
#else
  #define CON_CLZ 97
#endif
#ifdef CON_EICALL
  #if (CON_EICALL!=105)
    #error "merging GDSL libraries with incompatible definition for CON_EICALL."
  #endif
#else
  #define CON_EICALL 105
#endif
#ifdef CON_EIJMP
  #if (CON_EIJMP!=106)
    #error "merging GDSL libraries with incompatible definition for CON_EIJMP."
  #endif
#else
  #define CON_EIJMP 106
#endif
#ifdef CON_ICALL
  #if (CON_ICALL!=112)
    #error "merging GDSL libraries with incompatible definition for CON_ICALL."
  #endif
#else
  #define CON_ICALL 112
#endif
#ifdef CON_IJMP
  #if (CON_IJMP!=113)
    #error "merging GDSL libraries with incompatible definition for CON_IJMP."
  #endif
#else
  #define CON_IJMP 113
#endif
#ifdef CON_NOP
  #if (CON_NOP!=132)
    #error "merging GDSL libraries with incompatible definition for CON_NOP."
  #endif
#else
  #define CON_NOP 132
#endif
#ifdef CON_RET
  #if (CON_RET!=139)
    #error "merging GDSL libraries with incompatible definition for CON_RET."
  #endif
#else
  #define CON_RET 139
#endif
#ifdef CON_RETI
  #if (CON_RETI!=140)
    #error "merging GDSL libraries with incompatible definition for CON_RETI."
  #endif
#else
  #define CON_RETI 140
#endif
#ifdef CON_SEC
  #if (CON_SEC!=153)
    #error "merging GDSL libraries with incompatible definition for CON_SEC."
  #endif
#else
  #define CON_SEC 153
#endif
#ifdef CON_SEH
  #if (CON_SEH!=154)
    #error "merging GDSL libraries with incompatible definition for CON_SEH."
  #endif
#else
  #define CON_SEH 154
#endif
#ifdef CON_SEI
  #if (CON_SEI!=155)
    #error "merging GDSL libraries with incompatible definition for CON_SEI."
  #endif
#else
  #define CON_SEI 155
#endif
#ifdef CON_SEN
  #if (CON_SEN!=156)
    #error "merging GDSL libraries with incompatible definition for CON_SEN."
  #endif
#else
  #define CON_SEN 156
#endif
#ifdef CON_SES
  #if (CON_SES!=157)
    #error "merging GDSL libraries with incompatible definition for CON_SES."
  #endif
#else
  #define CON_SES 157
#endif
#ifdef CON_SET
  #if (CON_SET!=158)
    #error "merging GDSL libraries with incompatible definition for CON_SET."
  #endif
#else
  #define CON_SET 158
#endif
#ifdef CON_SEV
  #if (CON_SEV!=159)
    #error "merging GDSL libraries with incompatible definition for CON_SEV."
  #endif
#else
  #define CON_SEV 159
#endif
#ifdef CON_SEZ
  #if (CON_SEZ!=160)
    #error "merging GDSL libraries with incompatible definition for CON_SEZ."
  #endif
#else
  #define CON_SEZ 160
#endif
#ifdef CON_SLEEP
  #if (CON_SLEEP!=161)
    #error "merging GDSL libraries with incompatible definition for CON_SLEEP."
  #endif
#else
  #define CON_SLEEP 161
#endif
#ifdef CON_WDR
  #if (CON_WDR!=169)
    #error "merging GDSL libraries with incompatible definition for CON_WDR."
  #endif
#else
  #define CON_WDR 169
#endif
#ifdef CON_R0
  #if (CON_R0!=171)
    #error "merging GDSL libraries with incompatible definition for CON_R0."
  #endif
#else
  #define CON_R0 171
#endif
#ifdef CON_R1
  #if (CON_R1!=172)
    #error "merging GDSL libraries with incompatible definition for CON_R1."
  #endif
#else
  #define CON_R1 172
#endif
#ifdef CON_R2
  #if (CON_R2!=173)
    #error "merging GDSL libraries with incompatible definition for CON_R2."
  #endif
#else
  #define CON_R2 173
#endif
#ifdef CON_R3
  #if (CON_R3!=174)
    #error "merging GDSL libraries with incompatible definition for CON_R3."
  #endif
#else
  #define CON_R3 174
#endif
#ifdef CON_R4
  #if (CON_R4!=175)
    #error "merging GDSL libraries with incompatible definition for CON_R4."
  #endif
#else
  #define CON_R4 175
#endif
#ifdef CON_R5
  #if (CON_R5!=176)
    #error "merging GDSL libraries with incompatible definition for CON_R5."
  #endif
#else
  #define CON_R5 176
#endif
#ifdef CON_R6
  #if (CON_R6!=177)
    #error "merging GDSL libraries with incompatible definition for CON_R6."
  #endif
#else
  #define CON_R6 177
#endif
#ifdef CON_R7
  #if (CON_R7!=178)
    #error "merging GDSL libraries with incompatible definition for CON_R7."
  #endif
#else
  #define CON_R7 178
#endif
#ifdef CON_R8
  #if (CON_R8!=179)
    #error "merging GDSL libraries with incompatible definition for CON_R8."
  #endif
#else
  #define CON_R8 179
#endif
#ifdef CON_R9
  #if (CON_R9!=180)
    #error "merging GDSL libraries with incompatible definition for CON_R9."
  #endif
#else
  #define CON_R9 180
#endif
#ifdef CON_R10
  #if (CON_R10!=181)
    #error "merging GDSL libraries with incompatible definition for CON_R10."
  #endif
#else
  #define CON_R10 181
#endif
#ifdef CON_R11
  #if (CON_R11!=182)
    #error "merging GDSL libraries with incompatible definition for CON_R11."
  #endif
#else
  #define CON_R11 182
#endif
#ifdef CON_R12
  #if (CON_R12!=183)
    #error "merging GDSL libraries with incompatible definition for CON_R12."
  #endif
#else
  #define CON_R12 183
#endif
#ifdef CON_R13
  #if (CON_R13!=184)
    #error "merging GDSL libraries with incompatible definition for CON_R13."
  #endif
#else
  #define CON_R13 184
#endif
#ifdef CON_R14
  #if (CON_R14!=185)
    #error "merging GDSL libraries with incompatible definition for CON_R14."
  #endif
#else
  #define CON_R14 185
#endif
#ifdef CON_R15
  #if (CON_R15!=186)
    #error "merging GDSL libraries with incompatible definition for CON_R15."
  #endif
#else
  #define CON_R15 186
#endif
#ifdef CON_R16
  #if (CON_R16!=187)
    #error "merging GDSL libraries with incompatible definition for CON_R16."
  #endif
#else
  #define CON_R16 187
#endif
#ifdef CON_R17
  #if (CON_R17!=188)
    #error "merging GDSL libraries with incompatible definition for CON_R17."
  #endif
#else
  #define CON_R17 188
#endif
#ifdef CON_R18
  #if (CON_R18!=189)
    #error "merging GDSL libraries with incompatible definition for CON_R18."
  #endif
#else
  #define CON_R18 189
#endif
#ifdef CON_R19
  #if (CON_R19!=190)
    #error "merging GDSL libraries with incompatible definition for CON_R19."
  #endif
#else
  #define CON_R19 190
#endif
#ifdef CON_R20
  #if (CON_R20!=191)
    #error "merging GDSL libraries with incompatible definition for CON_R20."
  #endif
#else
  #define CON_R20 191
#endif
#ifdef CON_R21
  #if (CON_R21!=192)
    #error "merging GDSL libraries with incompatible definition for CON_R21."
  #endif
#else
  #define CON_R21 192
#endif
#ifdef CON_R22
  #if (CON_R22!=193)
    #error "merging GDSL libraries with incompatible definition for CON_R22."
  #endif
#else
  #define CON_R22 193
#endif
#ifdef CON_R23
  #if (CON_R23!=194)
    #error "merging GDSL libraries with incompatible definition for CON_R23."
  #endif
#else
  #define CON_R23 194
#endif
#ifdef CON_R24
  #if (CON_R24!=195)
    #error "merging GDSL libraries with incompatible definition for CON_R24."
  #endif
#else
  #define CON_R24 195
#endif
#ifdef CON_R25
  #if (CON_R25!=196)
    #error "merging GDSL libraries with incompatible definition for CON_R25."
  #endif
#else
  #define CON_R25 196
#endif
#ifdef CON_R26
  #if (CON_R26!=197)
    #error "merging GDSL libraries with incompatible definition for CON_R26."
  #endif
#else
  #define CON_R26 197
#endif
#ifdef CON_R27
  #if (CON_R27!=198)
    #error "merging GDSL libraries with incompatible definition for CON_R27."
  #endif
#else
  #define CON_R27 198
#endif
#ifdef CON_R28
  #if (CON_R28!=199)
    #error "merging GDSL libraries with incompatible definition for CON_R28."
  #endif
#else
  #define CON_R28 199
#endif
#ifdef CON_R29
  #if (CON_R29!=200)
    #error "merging GDSL libraries with incompatible definition for CON_R29."
  #endif
#else
  #define CON_R29 200
#endif
#ifdef CON_R30
  #if (CON_R30!=201)
    #error "merging GDSL libraries with incompatible definition for CON_R30."
  #endif
#else
  #define CON_R30 201
#endif
#ifdef CON_R31
  #if (CON_R31!=202)
    #error "merging GDSL libraries with incompatible definition for CON_R31."
  #endif
#else
  #define CON_R31 202
#endif
#ifdef CON_IO0
  #if (CON_IO0!=203)
    #error "merging GDSL libraries with incompatible definition for CON_IO0."
  #endif
#else
  #define CON_IO0 203
#endif
#ifdef CON_IO1
  #if (CON_IO1!=204)
    #error "merging GDSL libraries with incompatible definition for CON_IO1."
  #endif
#else
  #define CON_IO1 204
#endif
#ifdef CON_IO2
  #if (CON_IO2!=205)
    #error "merging GDSL libraries with incompatible definition for CON_IO2."
  #endif
#else
  #define CON_IO2 205
#endif
#ifdef CON_IO3
  #if (CON_IO3!=206)
    #error "merging GDSL libraries with incompatible definition for CON_IO3."
  #endif
#else
  #define CON_IO3 206
#endif
#ifdef CON_IO4
  #if (CON_IO4!=207)
    #error "merging GDSL libraries with incompatible definition for CON_IO4."
  #endif
#else
  #define CON_IO4 207
#endif
#ifdef CON_IO5
  #if (CON_IO5!=208)
    #error "merging GDSL libraries with incompatible definition for CON_IO5."
  #endif
#else
  #define CON_IO5 208
#endif
#ifdef CON_IO6
  #if (CON_IO6!=209)
    #error "merging GDSL libraries with incompatible definition for CON_IO6."
  #endif
#else
  #define CON_IO6 209
#endif
#ifdef CON_IO7
  #if (CON_IO7!=210)
    #error "merging GDSL libraries with incompatible definition for CON_IO7."
  #endif
#else
  #define CON_IO7 210
#endif
#ifdef CON_IO8
  #if (CON_IO8!=211)
    #error "merging GDSL libraries with incompatible definition for CON_IO8."
  #endif
#else
  #define CON_IO8 211
#endif
#ifdef CON_IO9
  #if (CON_IO9!=212)
    #error "merging GDSL libraries with incompatible definition for CON_IO9."
  #endif
#else
  #define CON_IO9 212
#endif
#ifdef CON_IO10
  #if (CON_IO10!=213)
    #error "merging GDSL libraries with incompatible definition for CON_IO10."
  #endif
#else
  #define CON_IO10 213
#endif
#ifdef CON_IO11
  #if (CON_IO11!=214)
    #error "merging GDSL libraries with incompatible definition for CON_IO11."
  #endif
#else
  #define CON_IO11 214
#endif
#ifdef CON_IO12
  #if (CON_IO12!=215)
    #error "merging GDSL libraries with incompatible definition for CON_IO12."
  #endif
#else
  #define CON_IO12 215
#endif
#ifdef CON_IO13
  #if (CON_IO13!=216)
    #error "merging GDSL libraries with incompatible definition for CON_IO13."
  #endif
#else
  #define CON_IO13 216
#endif
#ifdef CON_IO14
  #if (CON_IO14!=217)
    #error "merging GDSL libraries with incompatible definition for CON_IO14."
  #endif
#else
  #define CON_IO14 217
#endif
#ifdef CON_IO15
  #if (CON_IO15!=218)
    #error "merging GDSL libraries with incompatible definition for CON_IO15."
  #endif
#else
  #define CON_IO15 218
#endif
#ifdef CON_IO16
  #if (CON_IO16!=219)
    #error "merging GDSL libraries with incompatible definition for CON_IO16."
  #endif
#else
  #define CON_IO16 219
#endif
#ifdef CON_IO17
  #if (CON_IO17!=220)
    #error "merging GDSL libraries with incompatible definition for CON_IO17."
  #endif
#else
  #define CON_IO17 220
#endif
#ifdef CON_IO18
  #if (CON_IO18!=221)
    #error "merging GDSL libraries with incompatible definition for CON_IO18."
  #endif
#else
  #define CON_IO18 221
#endif
#ifdef CON_IO19
  #if (CON_IO19!=222)
    #error "merging GDSL libraries with incompatible definition for CON_IO19."
  #endif
#else
  #define CON_IO19 222
#endif
#ifdef CON_IO20
  #if (CON_IO20!=223)
    #error "merging GDSL libraries with incompatible definition for CON_IO20."
  #endif
#else
  #define CON_IO20 223
#endif
#ifdef CON_IO21
  #if (CON_IO21!=224)
    #error "merging GDSL libraries with incompatible definition for CON_IO21."
  #endif
#else
  #define CON_IO21 224
#endif
#ifdef CON_IO22
  #if (CON_IO22!=225)
    #error "merging GDSL libraries with incompatible definition for CON_IO22."
  #endif
#else
  #define CON_IO22 225
#endif
#ifdef CON_IO23
  #if (CON_IO23!=226)
    #error "merging GDSL libraries with incompatible definition for CON_IO23."
  #endif
#else
  #define CON_IO23 226
#endif
#ifdef CON_IO24
  #if (CON_IO24!=227)
    #error "merging GDSL libraries with incompatible definition for CON_IO24."
  #endif
#else
  #define CON_IO24 227
#endif
#ifdef CON_IO25
  #if (CON_IO25!=228)
    #error "merging GDSL libraries with incompatible definition for CON_IO25."
  #endif
#else
  #define CON_IO25 228
#endif
#ifdef CON_IO26
  #if (CON_IO26!=229)
    #error "merging GDSL libraries with incompatible definition for CON_IO26."
  #endif
#else
  #define CON_IO26 229
#endif
#ifdef CON_IO27
  #if (CON_IO27!=230)
    #error "merging GDSL libraries with incompatible definition for CON_IO27."
  #endif
#else
  #define CON_IO27 230
#endif
#ifdef CON_IO28
  #if (CON_IO28!=231)
    #error "merging GDSL libraries with incompatible definition for CON_IO28."
  #endif
#else
  #define CON_IO28 231
#endif
#ifdef CON_IO29
  #if (CON_IO29!=232)
    #error "merging GDSL libraries with incompatible definition for CON_IO29."
  #endif
#else
  #define CON_IO29 232
#endif
#ifdef CON_IO30
  #if (CON_IO30!=233)
    #error "merging GDSL libraries with incompatible definition for CON_IO30."
  #endif
#else
  #define CON_IO30 233
#endif
#ifdef CON_IO31
  #if (CON_IO31!=234)
    #error "merging GDSL libraries with incompatible definition for CON_IO31."
  #endif
#else
  #define CON_IO31 234
#endif
#ifdef CON_IO32
  #if (CON_IO32!=235)
    #error "merging GDSL libraries with incompatible definition for CON_IO32."
  #endif
#else
  #define CON_IO32 235
#endif
#ifdef CON_IO33
  #if (CON_IO33!=236)
    #error "merging GDSL libraries with incompatible definition for CON_IO33."
  #endif
#else
  #define CON_IO33 236
#endif
#ifdef CON_IO34
  #if (CON_IO34!=237)
    #error "merging GDSL libraries with incompatible definition for CON_IO34."
  #endif
#else
  #define CON_IO34 237
#endif
#ifdef CON_IO35
  #if (CON_IO35!=238)
    #error "merging GDSL libraries with incompatible definition for CON_IO35."
  #endif
#else
  #define CON_IO35 238
#endif
#ifdef CON_IO36
  #if (CON_IO36!=239)
    #error "merging GDSL libraries with incompatible definition for CON_IO36."
  #endif
#else
  #define CON_IO36 239
#endif
#ifdef CON_IO37
  #if (CON_IO37!=240)
    #error "merging GDSL libraries with incompatible definition for CON_IO37."
  #endif
#else
  #define CON_IO37 240
#endif
#ifdef CON_IO38
  #if (CON_IO38!=241)
    #error "merging GDSL libraries with incompatible definition for CON_IO38."
  #endif
#else
  #define CON_IO38 241
#endif
#ifdef CON_IO39
  #if (CON_IO39!=242)
    #error "merging GDSL libraries with incompatible definition for CON_IO39."
  #endif
#else
  #define CON_IO39 242
#endif
#ifdef CON_IO40
  #if (CON_IO40!=243)
    #error "merging GDSL libraries with incompatible definition for CON_IO40."
  #endif
#else
  #define CON_IO40 243
#endif
#ifdef CON_IO41
  #if (CON_IO41!=244)
    #error "merging GDSL libraries with incompatible definition for CON_IO41."
  #endif
#else
  #define CON_IO41 244
#endif
#ifdef CON_IO42
  #if (CON_IO42!=245)
    #error "merging GDSL libraries with incompatible definition for CON_IO42."
  #endif
#else
  #define CON_IO42 245
#endif
#ifdef CON_IO43
  #if (CON_IO43!=246)
    #error "merging GDSL libraries with incompatible definition for CON_IO43."
  #endif
#else
  #define CON_IO43 246
#endif
#ifdef CON_IO44
  #if (CON_IO44!=247)
    #error "merging GDSL libraries with incompatible definition for CON_IO44."
  #endif
#else
  #define CON_IO44 247
#endif
#ifdef CON_IO45
  #if (CON_IO45!=248)
    #error "merging GDSL libraries with incompatible definition for CON_IO45."
  #endif
#else
  #define CON_IO45 248
#endif
#ifdef CON_IO46
  #if (CON_IO46!=249)
    #error "merging GDSL libraries with incompatible definition for CON_IO46."
  #endif
#else
  #define CON_IO46 249
#endif
#ifdef CON_IO47
  #if (CON_IO47!=250)
    #error "merging GDSL libraries with incompatible definition for CON_IO47."
  #endif
#else
  #define CON_IO47 250
#endif
#ifdef CON_IO48
  #if (CON_IO48!=251)
    #error "merging GDSL libraries with incompatible definition for CON_IO48."
  #endif
#else
  #define CON_IO48 251
#endif
#ifdef CON_IO49
  #if (CON_IO49!=252)
    #error "merging GDSL libraries with incompatible definition for CON_IO49."
  #endif
#else
  #define CON_IO49 252
#endif
#ifdef CON_IO50
  #if (CON_IO50!=253)
    #error "merging GDSL libraries with incompatible definition for CON_IO50."
  #endif
#else
  #define CON_IO50 253
#endif
#ifdef CON_IO51
  #if (CON_IO51!=254)
    #error "merging GDSL libraries with incompatible definition for CON_IO51."
  #endif
#else
  #define CON_IO51 254
#endif
#ifdef CON_IO52
  #if (CON_IO52!=255)
    #error "merging GDSL libraries with incompatible definition for CON_IO52."
  #endif
#else
  #define CON_IO52 255
#endif
#ifdef CON_IO53
  #if (CON_IO53!=256)
    #error "merging GDSL libraries with incompatible definition for CON_IO53."
  #endif
#else
  #define CON_IO53 256
#endif
#ifdef CON_IO54
  #if (CON_IO54!=257)
    #error "merging GDSL libraries with incompatible definition for CON_IO54."
  #endif
#else
  #define CON_IO54 257
#endif
#ifdef CON_IO55
  #if (CON_IO55!=258)
    #error "merging GDSL libraries with incompatible definition for CON_IO55."
  #endif
#else
  #define CON_IO55 258
#endif
#ifdef CON_RAMPD
  #if (CON_RAMPD!=259)
    #error "merging GDSL libraries with incompatible definition for CON_RAMPD."
  #endif
#else
  #define CON_RAMPD 259
#endif
#ifdef CON_RAMPX
  #if (CON_RAMPX!=260)
    #error "merging GDSL libraries with incompatible definition for CON_RAMPX."
  #endif
#else
  #define CON_RAMPX 260
#endif
#ifdef CON_RAMPY
  #if (CON_RAMPY!=261)
    #error "merging GDSL libraries with incompatible definition for CON_RAMPY."
  #endif
#else
  #define CON_RAMPY 261
#endif
#ifdef CON_RAMPZ
  #if (CON_RAMPZ!=262)
    #error "merging GDSL libraries with incompatible definition for CON_RAMPZ."
  #endif
#else
  #define CON_RAMPZ 262
#endif
#ifdef CON_EIND
  #if (CON_EIND!=263)
    #error "merging GDSL libraries with incompatible definition for CON_EIND."
  #endif
#else
  #define CON_EIND 263
#endif
#ifdef CON_SPL
  #if (CON_SPL!=264)
    #error "merging GDSL libraries with incompatible definition for CON_SPL."
  #endif
#else
  #define CON_SPL 264
#endif
#ifdef CON_SPH
  #if (CON_SPH!=265)
    #error "merging GDSL libraries with incompatible definition for CON_SPH."
  #endif
#else
  #define CON_SPH 265
#endif
#ifdef CON_SREG
  #if (CON_SREG!=266)
    #error "merging GDSL libraries with incompatible definition for CON_SREG."
  #endif
#else
  #define CON_SREG 266
#endif
#ifdef CON_PC
  #if (CON_PC!=267)
    #error "merging GDSL libraries with incompatible definition for CON_PC."
  #endif
#else
  #define CON_PC 267
#endif
#ifdef CON_SP
  #if (CON_SP!=268)
    #error "merging GDSL libraries with incompatible definition for CON_SP."
  #endif
#else
  #define CON_SP 268
#endif
#ifdef CON_UA0
  #if (CON_UA0!=269)
    #error "merging GDSL libraries with incompatible definition for CON_UA0."
  #endif
#else
  #define CON_UA0 269
#endif
#ifdef CON_FLOATING_FLAGS
  #if (CON_FLOATING_FLAGS!=273)
    #error "merging GDSL libraries with incompatible definition for CON_FLOATING_FLAGS."
  #endif
#else
  #define CON_FLOATING_FLAGS 273
#endif
#ifdef CON_SEM_DIVISION_BY_ZERO
  #if (CON_SEM_DIVISION_BY_ZERO!=275)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_DIVISION_BY_ZERO."
  #endif
#else
  #define CON_SEM_DIVISION_BY_ZERO 275
#endif
#ifdef CON_SEM_SEXPR_ARB
  #if (CON_SEM_SEXPR_ARB!=283)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_SEXPR_ARB."
  #endif
#else
  #define CON_SEM_SEXPR_ARB 283
#endif
#ifdef CON_SEM_VARLS_NIL
  #if (CON_SEM_VARLS_NIL!=305)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VARLS_NIL."
  #endif
#else
  #define CON_SEM_VARLS_NIL 305
#endif
#ifdef CON_SEM_FADD
  #if (CON_SEM_FADD!=306)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FADD."
  #endif
#else
  #define CON_SEM_FADD 306
#endif
#ifdef CON_SEM_FSUB
  #if (CON_SEM_FSUB!=307)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FSUB."
  #endif
#else
  #define CON_SEM_FSUB 307
#endif
#ifdef CON_SEM_FMUL
  #if (CON_SEM_FMUL!=308)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FMUL."
  #endif
#else
  #define CON_SEM_FMUL 308
#endif
#ifdef CON_HINT_JUMP
  #if (CON_HINT_JUMP!=319)
    #error "merging GDSL libraries with incompatible definition for CON_HINT_JUMP."
  #endif
#else
  #define CON_HINT_JUMP 319
#endif
#ifdef CON_HINT_CALL
  #if (CON_HINT_CALL!=320)
    #error "merging GDSL libraries with incompatible definition for CON_HINT_CALL."
  #endif
#else
  #define CON_HINT_CALL 320
#endif
#ifdef CON_HINT_RET
  #if (CON_HINT_RET!=321)
    #error "merging GDSL libraries with incompatible definition for CON_HINT_RET."
  #endif
#else
  #define CON_HINT_RET 321
#endif
#ifdef CON_SEM_NIL
  #if (CON_SEM_NIL!=323)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_NIL."
  #endif
#else
  #define CON_SEM_NIL 323
#endif
#ifdef CON_TLIST_NIL
  #if (CON_TLIST_NIL!=325)
    #error "merging GDSL libraries with incompatible definition for CON_TLIST_NIL."
  #endif
#else
  #define CON_TLIST_NIL 325
#endif
#ifdef CON_SEM_LINS_NIL
  #if (CON_SEM_LINS_NIL!=327)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_LINS_NIL."
  #endif
#else
  #define CON_SEM_LINS_NIL 327
#endif
#ifdef CON_SEM_ID_OBJ
  #if (CON_SEM_ID_OBJ!=328)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_ID_OBJ."
  #endif
#else
  #define CON_SEM_ID_OBJ 328
#endif
#ifdef CON_SEM_ADDRESS_OBJ
  #if (CON_SEM_ADDRESS_OBJ!=329)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_ADDRESS_OBJ."
  #endif
#else
  #define CON_SEM_ADDRESS_OBJ 329
#endif
#ifdef CON_SEM_VAR_OBJ
  #if (CON_SEM_VAR_OBJ!=330)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VAR_OBJ."
  #endif
#else
  #define CON_SEM_VAR_OBJ 330
#endif
#ifdef CON_SEM_LINEAR_OBJ
  #if (CON_SEM_LINEAR_OBJ!=331)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_LINEAR_OBJ."
  #endif
#else
  #define CON_SEM_LINEAR_OBJ 331
#endif
#ifdef CON_SEM_SEXPR_OBJ
  #if (CON_SEM_SEXPR_OBJ!=332)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_SEXPR_OBJ."
  #endif
#else
  #define CON_SEM_SEXPR_OBJ 332
#endif
#ifdef CON_SEM_EXPR_CMP_OBJ
  #if (CON_SEM_EXPR_CMP_OBJ!=333)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXPR_CMP_OBJ."
  #endif
#else
  #define CON_SEM_EXPR_CMP_OBJ 333
#endif
#ifdef CON_SEM_EXPR_OBJ
  #if (CON_SEM_EXPR_OBJ!=334)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXPR_OBJ."
  #endif
#else
  #define CON_SEM_EXPR_OBJ 334
#endif
#ifdef CON_SEM_VARL_OBJ
  #if (CON_SEM_VARL_OBJ!=335)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VARL_OBJ."
  #endif
#else
  #define CON_SEM_VARL_OBJ 335
#endif
#ifdef CON_SEM_VARL_LIST_OBJ
  #if (CON_SEM_VARL_LIST_OBJ!=336)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VARL_LIST_OBJ."
  #endif
#else
  #define CON_SEM_VARL_LIST_OBJ 336
#endif
#ifdef CON_SEM_FLOP_OBJ
  #if (CON_SEM_FLOP_OBJ!=337)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FLOP_OBJ."
  #endif
#else
  #define CON_SEM_FLOP_OBJ 337
#endif
#ifdef CON_SEM_STMT_OBJ
  #if (CON_SEM_STMT_OBJ!=338)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_STMT_OBJ."
  #endif
#else
  #define CON_SEM_STMT_OBJ 338
#endif
#ifdef CON_SEM_STMT_LIST_OBJ
  #if (CON_SEM_STMT_LIST_OBJ!=339)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_STMT_LIST_OBJ."
  #endif
#else
  #define CON_SEM_STMT_LIST_OBJ 339
#endif
#ifdef CON_BRANCH_OBJ
  #if (CON_BRANCH_OBJ!=340)
    #error "merging GDSL libraries with incompatible definition for CON_BRANCH_OBJ."
  #endif
#else
  #define CON_BRANCH_OBJ 340
#endif
#ifdef CON_SEM_EXCEPTION_OBJ
  #if (CON_SEM_EXCEPTION_OBJ!=341)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXCEPTION_OBJ."
  #endif
#else
  #define CON_SEM_EXCEPTION_OBJ 341
#endif
#ifdef CON_LIN_NONE
  #if (CON_LIN_NONE!=343)
    #error "merging GDSL libraries with incompatible definition for CON_LIN_NONE."
  #endif
#else
  #define CON_LIN_NONE 343
#endif
#ifdef CON_STO_NONE
  #if (CON_STO_NONE!=346)
    #error "merging GDSL libraries with incompatible definition for CON_STO_NONE."
  #endif
#else
  #define CON_STO_NONE 346
#endif
#ifdef CON_INSN_LIST_OBJ
  #if (CON_INSN_LIST_OBJ!=347)
    #error "merging GDSL libraries with incompatible definition for CON_INSN_LIST_OBJ."
  #endif
#else
  #define CON_INSN_LIST_OBJ 347
#endif
#ifdef CON_INSNS_NIL
  #if (CON_INSNS_NIL!=349)
    #error "merging GDSL libraries with incompatible definition for CON_INSNS_NIL."
  #endif
#else
  #define CON_INSNS_NIL 349
#endif
#ifdef CON_SEM_PRESERVATION_EVERYWHERE
  #if (CON_SEM_PRESERVATION_EVERYWHERE!=350)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_PRESERVATION_EVERYWHERE."
  #endif
#else
  #define CON_SEM_PRESERVATION_EVERYWHERE 350
#endif
#ifdef CON_SEM_PRESERVATION_BLOCK
  #if (CON_SEM_PRESERVATION_BLOCK!=351)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_PRESERVATION_BLOCK."
  #endif
#else
  #define CON_SEM_PRESERVATION_BLOCK 351
#endif
#ifdef CON_SEM_PRESERVATION_CONTEXT
  #if (CON_SEM_PRESERVATION_CONTEXT!=352)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_PRESERVATION_CONTEXT."
  #endif
#else
  #define CON_SEM_PRESERVATION_CONTEXT 352
#endif
#ifdef CON_SO_NONE
  #if (CON_SO_NONE!=354)
    #error "merging GDSL libraries with incompatible definition for CON_SO_NONE."
  #endif
#else
  #define CON_SO_NONE 354
#endif
#ifdef CON_Signed
  #if (CON_Signed!=355)
    #error "merging GDSL libraries with incompatible definition for CON_Signed."
  #endif
#else
  #define CON_Signed 355
#endif
#ifdef CON_Unsigned
  #if (CON_Unsigned!=356)
    #error "merging GDSL libraries with incompatible definition for CON_Unsigned."
  #endif
#else
  #define CON_Unsigned 356
#endif
#ifdef CON_Sem_ALL
  #if (CON_Sem_ALL!=357)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ALL."
  #endif
#else
  #define CON_Sem_ALL 357
#endif
#ifdef CON_Sem_PC
  #if (CON_Sem_PC!=358)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_PC."
  #endif
#else
  #define CON_Sem_PC 358
#endif
#ifdef CON_Sem_PM
  #if (CON_Sem_PM!=359)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_PM."
  #endif
#else
  #define CON_Sem_PM 359
#endif
