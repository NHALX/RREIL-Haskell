// EDITED!:
#define gdsl_get_ip     gdsl_mips_rreil_get_ip
#define gdsl_seek       gdsl_mips_rreil_seek

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
#ifndef __GDSL_MIPS_RREIL_H
#define __GDSL_MIPS_RREIL_H

/* Create a new decoder state. Should be destroyed by
gdsl_mips_rreil_destroy(). */
state_t
gdsl_mips_rreil_init(void);

/* Set the code buffer. The parameter base denotes the address that ip_get
   in GDSL returns when no bytes have been consumed. */
void
gdsl_mips_rreil_set_code(state_t s, unsigned char* buf, size_t buf_len, size_t base);

/* Query the offset of the current IP relative to base. */
size_t
gdsl_mips_rreil_get_ip(state_t s);

/* Set the current code position to this address. */
int_t
gdsl_mips_rreil_seek(state_t s, size_t i);

/* An exception handler must be installed by calling setjmp with the argument
 * returned by this function.
 * If an exception occurs, control will return from setjmp with
 * value 1 if there are no more bytes in the input buffer or with
 * value 2 if there has been an error (e.g. pattern match failure). In
 * both cases, an error message can be retrieved using get_error_message().
 */
jmp_buf*
gdsl_mips_rreil_err_tgt(state_t s);

/* Retrieve the error message after an exception has been raised. */
char*
gdsl_mips_rreil_get_error_message(state_t s);

/* Reset the heap. Objects returned by exported function are no longer valid
   after a call to this funciton. This function does not necessarily
   deallocate all of the heap. */
void
gdsl_mips_rreil_reset_heap(state_t s);

/* Query the no of bytes currently allocated on the heap. */
size_t
gdsl_mips_rreil_heap_residency(state_t s);

/* Allocate a buffer on the heap and emit the given rope into it.
   Returns a pointer to the buffer on the heap. */
string_t
gdsl_mips_rreil_merge_rope(state_t s, obj_t rope);

/* Frees the heap and the decoder state. */
void
gdsl_mips_rreil_destroy(state_t s);

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
obj_t gdsl_mips_rreil_pretty_arch_exception(state_t s,obj_t exception);
obj_t gdsl_mips_rreil_pretty_arch_id(state_t s,obj_t r);
obj_t gdsl_mips_rreil_translate(state_t s,insndata_t insn);
obj_t gdsl_mips_rreil_succ_pretty(state_t s,obj_t succ,string_t name);
translate_result_t gdsl_mips_rreil_decode_translate_super_block(state_t s,int_t config,int_t limit);
obj_t gdsl_mips_rreil_decode_translate_single(state_t s,int_t config);
int_t gdsl_mips_rreil_select_ins_count(state_t s);
obj_t gdsl_mips_rreil_decode_translate_block(state_t s,int_t config,int_t limit);
opt_result_t gdsl_mips_rreil_decode_translate_block_optimized(state_t s,int_t config,int_t limit,int_t opt_config);
obj_t gdsl_mips_rreil_traverse_insn_list(state_t s,obj_t l,obj_t init,obj_t (*insn_append)(state_t,obj_t,insndata_t));
obj_t gdsl_mips_rreil_optimization_config(state_t s);
obj_t gdsl_mips_rreil_cleanup(state_t s,obj_t stmts);
lv_super_result_t gdsl_mips_rreil_liveness_super(state_t s,translate_result_t data);
obj_t gdsl_mips_rreil_liveness(state_t s,obj_t instructions);
obj_t gdsl_mips_rreil_select_live(state_t s);
obj_t gdsl_mips_rreil_lv_pretty(state_t s,obj_t t);
obj_t gdsl_mips_rreil_rreil_pretty(state_t s,obj_t ss);
obj_t gdsl_mips_rreil_rreil_convert_sem_stmt_list(state_t s,callbacks_t cbs,obj_t stmts);
obj_t gdsl_mips_rreil_example_b(state_t s);
obj_t gdsl_mips_rreil_example_a(state_t s);
int_t gdsl_mips_rreil_rreil_stmts_count(state_t s,obj_t stmts);
obj_t gdsl_mips_rreil_pretty(state_t s,insndata_t i);
asm_insn_t gdsl_mips_rreil_generalize(state_t s,insndata_t insn);
insndata_t gdsl_mips_rreil_decode(state_t s,int_t config);
int_t gdsl_mips_rreil_config_default(state_t s);
obj_t gdsl_mips_rreil_decoder_config(state_t s);
obj_t gdsl_mips_rreil_asm_pretty(state_t s,asm_insn_t ai);
obj_t gdsl_mips_rreil_asm_convert_insn(state_t s,asm_callbacks_t cbs,asm_insn_t insn);
obj_t gdsl_mips_rreil_conf_next(state_t s,obj_t co);
int_t gdsl_mips_rreil_conf_data(state_t s,obj_t co);
string_t gdsl_mips_rreil_conf_long(state_t s,obj_t co);
string_t gdsl_mips_rreil_conf_short(state_t s,obj_t co);
int_t gdsl_mips_rreil_has_conf(state_t s,obj_t co);
int_t gdsl_mips_rreil_int_max(state_t s);
string_t gdsl_mips_rreil_rope_to_string(state_t s,obj_t r,string_t buf);
void gdsl_mips_rreil_rope_print(state_t s,obj_t r);
int_t gdsl_mips_rreil_rope_length(state_t s,obj_t r);
#ifdef WITHMAIN
  #define GDSL_NO_PREFIX
#endif

#ifdef GDSL_NO_PREFIX
#define gdsl_init \
gdsl_mips_rreil_init
#define gdsl_set_code \
gdsl_mips_rreil_set_code
#define gdsl_get_ip \
gdsl_mips_rreil_get_ip
#define gdsl_seek \
gdsl_mips_rreil_seek
#define gdsl_err_tgt \
gdsl_mips_rreil_err_tgt
#define gdsl_get_error_message \
gdsl_mips_rreil_get_error_message
#define gdsl_reset_heap \
gdsl_mips_rreil_reset_heap
#define gdsl_heap_residency \
gdsl_mips_rreil_heap_residency
#define gdsl_merge_rope \
gdsl_mips_rreil_merge_rope
#define gdsl_destroy \
gdsl_mips_rreil_destroy
#define gdsl_pretty_arch_exception gdsl_mips_rreil_pretty_arch_exception
#define gdsl_pretty_arch_id gdsl_mips_rreil_pretty_arch_id
#define gdsl_translate gdsl_mips_rreil_translate
#define gdsl_succ_pretty gdsl_mips_rreil_succ_pretty
#define gdsl_decode_translate_super_block gdsl_mips_rreil_decode_translate_super_block
#define gdsl_decode_translate_single gdsl_mips_rreil_decode_translate_single
#define gdsl_select_ins_count gdsl_mips_rreil_select_ins_count
#define gdsl_decode_translate_block gdsl_mips_rreil_decode_translate_block
#define gdsl_decode_translate_block_optimized gdsl_mips_rreil_decode_translate_block_optimized
#define gdsl_traverse_insn_list gdsl_mips_rreil_traverse_insn_list
#define gdsl_optimization_config gdsl_mips_rreil_optimization_config
#define gdsl_cleanup gdsl_mips_rreil_cleanup
#define gdsl_liveness_super gdsl_mips_rreil_liveness_super
#define gdsl_liveness gdsl_mips_rreil_liveness
#define gdsl_select_live gdsl_mips_rreil_select_live
#define gdsl_lv_pretty gdsl_mips_rreil_lv_pretty
#define gdsl_rreil_pretty gdsl_mips_rreil_rreil_pretty
#define gdsl_rreil_convert_sem_stmt_list gdsl_mips_rreil_rreil_convert_sem_stmt_list
#define gdsl_example_b gdsl_mips_rreil_example_b
#define gdsl_example_a gdsl_mips_rreil_example_a
#define gdsl_rreil_stmts_count gdsl_mips_rreil_rreil_stmts_count
#define gdsl_pretty gdsl_mips_rreil_pretty
#define gdsl_generalize gdsl_mips_rreil_generalize
#define gdsl_decode gdsl_mips_rreil_decode
#define gdsl_config_default gdsl_mips_rreil_config_default
#define gdsl_decoder_config gdsl_mips_rreil_decoder_config
#define gdsl_asm_pretty gdsl_mips_rreil_asm_pretty
#define gdsl_asm_convert_insn gdsl_mips_rreil_asm_convert_insn
#define gdsl_conf_next gdsl_mips_rreil_conf_next
#define gdsl_conf_data gdsl_mips_rreil_conf_data
#define gdsl_conf_long gdsl_mips_rreil_conf_long
#define gdsl_conf_short gdsl_mips_rreil_conf_short
#define gdsl_has_conf gdsl_mips_rreil_has_conf
#define gdsl_int_max gdsl_mips_rreil_int_max
#define gdsl_rope_to_string gdsl_mips_rreil_rope_to_string
#define gdsl_rope_print gdsl_mips_rreil_rope_print
#define gdsl_rope_length gdsl_mips_rreil_rope_length
#endif

#endif /* __GDSL_MIPS_RREIL_H */

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
#ifdef CON_S
  #if (CON_S!=65)
    #error "merging GDSL libraries with incompatible definition for CON_S."
  #endif
#else
  #define CON_S 65
#endif
#ifdef CON_D
  #if (CON_D!=66)
    #error "merging GDSL libraries with incompatible definition for CON_D."
  #endif
#else
  #define CON_D 66
#endif
#ifdef CON_W
  #if (CON_W!=67)
    #error "merging GDSL libraries with incompatible definition for CON_W."
  #endif
#else
  #define CON_W 67
#endif
#ifdef CON_L
  #if (CON_L!=68)
    #error "merging GDSL libraries with incompatible definition for CON_L."
  #endif
#else
  #define CON_L 68
#endif
#ifdef CON_PS
  #if (CON_PS!=69)
    #error "merging GDSL libraries with incompatible definition for CON_PS."
  #endif
#else
  #define CON_PS 69
#endif
#ifdef CON_DERET
  #if (CON_DERET!=123)
    #error "merging GDSL libraries with incompatible definition for CON_DERET."
  #endif
#else
  #define CON_DERET 123
#endif
#ifdef CON_ERET
  #if (CON_ERET!=129)
    #error "merging GDSL libraries with incompatible definition for CON_ERET."
  #endif
#else
  #define CON_ERET 129
#endif
#ifdef CON_TLBINV
  #if (CON_TLBINV!=264)
    #error "merging GDSL libraries with incompatible definition for CON_TLBINV."
  #endif
#else
  #define CON_TLBINV 264
#endif
#ifdef CON_TLBINVF
  #if (CON_TLBINVF!=265)
    #error "merging GDSL libraries with incompatible definition for CON_TLBINVF."
  #endif
#else
  #define CON_TLBINVF 265
#endif
#ifdef CON_TLBP
  #if (CON_TLBP!=266)
    #error "merging GDSL libraries with incompatible definition for CON_TLBP."
  #endif
#else
  #define CON_TLBP 266
#endif
#ifdef CON_TLBR
  #if (CON_TLBR!=267)
    #error "merging GDSL libraries with incompatible definition for CON_TLBR."
  #endif
#else
  #define CON_TLBR 267
#endif
#ifdef CON_TLBWI
  #if (CON_TLBWI!=268)
    #error "merging GDSL libraries with incompatible definition for CON_TLBWI."
  #endif
#else
  #define CON_TLBWI 268
#endif
#ifdef CON_TLBWR
  #if (CON_TLBWR!=269)
    #error "merging GDSL libraries with incompatible definition for CON_TLBWR."
  #endif
#else
  #define CON_TLBWR 269
#endif
#ifdef CON_PAUSE
  #if (CON_PAUSE!=283)
    #error "merging GDSL libraries with incompatible definition for CON_PAUSE."
  #endif
#else
  #define CON_PAUSE 283
#endif
#ifdef CON_ZERO
  #if (CON_ZERO!=284)
    #error "merging GDSL libraries with incompatible definition for CON_ZERO."
  #endif
#else
  #define CON_ZERO 284
#endif
#ifdef CON_AT
  #if (CON_AT!=285)
    #error "merging GDSL libraries with incompatible definition for CON_AT."
  #endif
#else
  #define CON_AT 285
#endif
#ifdef CON_V0
  #if (CON_V0!=286)
    #error "merging GDSL libraries with incompatible definition for CON_V0."
  #endif
#else
  #define CON_V0 286
#endif
#ifdef CON_V1
  #if (CON_V1!=287)
    #error "merging GDSL libraries with incompatible definition for CON_V1."
  #endif
#else
  #define CON_V1 287
#endif
#ifdef CON_A0
  #if (CON_A0!=288)
    #error "merging GDSL libraries with incompatible definition for CON_A0."
  #endif
#else
  #define CON_A0 288
#endif
#ifdef CON_A1
  #if (CON_A1!=289)
    #error "merging GDSL libraries with incompatible definition for CON_A1."
  #endif
#else
  #define CON_A1 289
#endif
#ifdef CON_A2
  #if (CON_A2!=290)
    #error "merging GDSL libraries with incompatible definition for CON_A2."
  #endif
#else
  #define CON_A2 290
#endif
#ifdef CON_A3
  #if (CON_A3!=291)
    #error "merging GDSL libraries with incompatible definition for CON_A3."
  #endif
#else
  #define CON_A3 291
#endif
#ifdef CON_T0
  #if (CON_T0!=292)
    #error "merging GDSL libraries with incompatible definition for CON_T0."
  #endif
#else
  #define CON_T0 292
#endif
#ifdef CON_T1
  #if (CON_T1!=293)
    #error "merging GDSL libraries with incompatible definition for CON_T1."
  #endif
#else
  #define CON_T1 293
#endif
#ifdef CON_T2
  #if (CON_T2!=294)
    #error "merging GDSL libraries with incompatible definition for CON_T2."
  #endif
#else
  #define CON_T2 294
#endif
#ifdef CON_T3
  #if (CON_T3!=295)
    #error "merging GDSL libraries with incompatible definition for CON_T3."
  #endif
#else
  #define CON_T3 295
#endif
#ifdef CON_T4
  #if (CON_T4!=296)
    #error "merging GDSL libraries with incompatible definition for CON_T4."
  #endif
#else
  #define CON_T4 296
#endif
#ifdef CON_T5
  #if (CON_T5!=297)
    #error "merging GDSL libraries with incompatible definition for CON_T5."
  #endif
#else
  #define CON_T5 297
#endif
#ifdef CON_T6
  #if (CON_T6!=298)
    #error "merging GDSL libraries with incompatible definition for CON_T6."
  #endif
#else
  #define CON_T6 298
#endif
#ifdef CON_T7
  #if (CON_T7!=299)
    #error "merging GDSL libraries with incompatible definition for CON_T7."
  #endif
#else
  #define CON_T7 299
#endif
#ifdef CON_S0
  #if (CON_S0!=300)
    #error "merging GDSL libraries with incompatible definition for CON_S0."
  #endif
#else
  #define CON_S0 300
#endif
#ifdef CON_S1
  #if (CON_S1!=301)
    #error "merging GDSL libraries with incompatible definition for CON_S1."
  #endif
#else
  #define CON_S1 301
#endif
#ifdef CON_S2
  #if (CON_S2!=302)
    #error "merging GDSL libraries with incompatible definition for CON_S2."
  #endif
#else
  #define CON_S2 302
#endif
#ifdef CON_S3
  #if (CON_S3!=303)
    #error "merging GDSL libraries with incompatible definition for CON_S3."
  #endif
#else
  #define CON_S3 303
#endif
#ifdef CON_S4
  #if (CON_S4!=304)
    #error "merging GDSL libraries with incompatible definition for CON_S4."
  #endif
#else
  #define CON_S4 304
#endif
#ifdef CON_S5
  #if (CON_S5!=305)
    #error "merging GDSL libraries with incompatible definition for CON_S5."
  #endif
#else
  #define CON_S5 305
#endif
#ifdef CON_S6
  #if (CON_S6!=306)
    #error "merging GDSL libraries with incompatible definition for CON_S6."
  #endif
#else
  #define CON_S6 306
#endif
#ifdef CON_S7
  #if (CON_S7!=307)
    #error "merging GDSL libraries with incompatible definition for CON_S7."
  #endif
#else
  #define CON_S7 307
#endif
#ifdef CON_T8
  #if (CON_T8!=308)
    #error "merging GDSL libraries with incompatible definition for CON_T8."
  #endif
#else
  #define CON_T8 308
#endif
#ifdef CON_T9
  #if (CON_T9!=309)
    #error "merging GDSL libraries with incompatible definition for CON_T9."
  #endif
#else
  #define CON_T9 309
#endif
#ifdef CON_K0
  #if (CON_K0!=310)
    #error "merging GDSL libraries with incompatible definition for CON_K0."
  #endif
#else
  #define CON_K0 310
#endif
#ifdef CON_K1
  #if (CON_K1!=311)
    #error "merging GDSL libraries with incompatible definition for CON_K1."
  #endif
#else
  #define CON_K1 311
#endif
#ifdef CON_GP
  #if (CON_GP!=312)
    #error "merging GDSL libraries with incompatible definition for CON_GP."
  #endif
#else
  #define CON_GP 312
#endif
#ifdef CON_SP
  #if (CON_SP!=313)
    #error "merging GDSL libraries with incompatible definition for CON_SP."
  #endif
#else
  #define CON_SP 313
#endif
#ifdef CON_S8
  #if (CON_S8!=314)
    #error "merging GDSL libraries with incompatible definition for CON_S8."
  #endif
#else
  #define CON_S8 314
#endif
#ifdef CON_RA
  #if (CON_RA!=315)
    #error "merging GDSL libraries with incompatible definition for CON_RA."
  #endif
#else
  #define CON_RA 315
#endif
#ifdef CON_HI
  #if (CON_HI!=316)
    #error "merging GDSL libraries with incompatible definition for CON_HI."
  #endif
#else
  #define CON_HI 316
#endif
#ifdef CON_LO
  #if (CON_LO!=317)
    #error "merging GDSL libraries with incompatible definition for CON_LO."
  #endif
#else
  #define CON_LO 317
#endif
#ifdef CON_PC
  #if (CON_PC!=318)
    #error "merging GDSL libraries with incompatible definition for CON_PC."
  #endif
#else
  #define CON_PC 318
#endif
#ifdef CON_SREG
  #if (CON_SREG!=319)
    #error "merging GDSL libraries with incompatible definition for CON_SREG."
  #endif
#else
  #define CON_SREG 319
#endif
#ifdef CON_F0
  #if (CON_F0!=320)
    #error "merging GDSL libraries with incompatible definition for CON_F0."
  #endif
#else
  #define CON_F0 320
#endif
#ifdef CON_F1
  #if (CON_F1!=321)
    #error "merging GDSL libraries with incompatible definition for CON_F1."
  #endif
#else
  #define CON_F1 321
#endif
#ifdef CON_F2
  #if (CON_F2!=322)
    #error "merging GDSL libraries with incompatible definition for CON_F2."
  #endif
#else
  #define CON_F2 322
#endif
#ifdef CON_F3
  #if (CON_F3!=323)
    #error "merging GDSL libraries with incompatible definition for CON_F3."
  #endif
#else
  #define CON_F3 323
#endif
#ifdef CON_F4
  #if (CON_F4!=324)
    #error "merging GDSL libraries with incompatible definition for CON_F4."
  #endif
#else
  #define CON_F4 324
#endif
#ifdef CON_F5
  #if (CON_F5!=325)
    #error "merging GDSL libraries with incompatible definition for CON_F5."
  #endif
#else
  #define CON_F5 325
#endif
#ifdef CON_F6
  #if (CON_F6!=326)
    #error "merging GDSL libraries with incompatible definition for CON_F6."
  #endif
#else
  #define CON_F6 326
#endif
#ifdef CON_F7
  #if (CON_F7!=327)
    #error "merging GDSL libraries with incompatible definition for CON_F7."
  #endif
#else
  #define CON_F7 327
#endif
#ifdef CON_F8
  #if (CON_F8!=328)
    #error "merging GDSL libraries with incompatible definition for CON_F8."
  #endif
#else
  #define CON_F8 328
#endif
#ifdef CON_F9
  #if (CON_F9!=329)
    #error "merging GDSL libraries with incompatible definition for CON_F9."
  #endif
#else
  #define CON_F9 329
#endif
#ifdef CON_F10
  #if (CON_F10!=330)
    #error "merging GDSL libraries with incompatible definition for CON_F10."
  #endif
#else
  #define CON_F10 330
#endif
#ifdef CON_F11
  #if (CON_F11!=331)
    #error "merging GDSL libraries with incompatible definition for CON_F11."
  #endif
#else
  #define CON_F11 331
#endif
#ifdef CON_F12
  #if (CON_F12!=332)
    #error "merging GDSL libraries with incompatible definition for CON_F12."
  #endif
#else
  #define CON_F12 332
#endif
#ifdef CON_F13
  #if (CON_F13!=333)
    #error "merging GDSL libraries with incompatible definition for CON_F13."
  #endif
#else
  #define CON_F13 333
#endif
#ifdef CON_F14
  #if (CON_F14!=334)
    #error "merging GDSL libraries with incompatible definition for CON_F14."
  #endif
#else
  #define CON_F14 334
#endif
#ifdef CON_F15
  #if (CON_F15!=335)
    #error "merging GDSL libraries with incompatible definition for CON_F15."
  #endif
#else
  #define CON_F15 335
#endif
#ifdef CON_F16
  #if (CON_F16!=336)
    #error "merging GDSL libraries with incompatible definition for CON_F16."
  #endif
#else
  #define CON_F16 336
#endif
#ifdef CON_F17
  #if (CON_F17!=337)
    #error "merging GDSL libraries with incompatible definition for CON_F17."
  #endif
#else
  #define CON_F17 337
#endif
#ifdef CON_F18
  #if (CON_F18!=338)
    #error "merging GDSL libraries with incompatible definition for CON_F18."
  #endif
#else
  #define CON_F18 338
#endif
#ifdef CON_F19
  #if (CON_F19!=339)
    #error "merging GDSL libraries with incompatible definition for CON_F19."
  #endif
#else
  #define CON_F19 339
#endif
#ifdef CON_F20
  #if (CON_F20!=340)
    #error "merging GDSL libraries with incompatible definition for CON_F20."
  #endif
#else
  #define CON_F20 340
#endif
#ifdef CON_F21
  #if (CON_F21!=341)
    #error "merging GDSL libraries with incompatible definition for CON_F21."
  #endif
#else
  #define CON_F21 341
#endif
#ifdef CON_F22
  #if (CON_F22!=342)
    #error "merging GDSL libraries with incompatible definition for CON_F22."
  #endif
#else
  #define CON_F22 342
#endif
#ifdef CON_F23
  #if (CON_F23!=343)
    #error "merging GDSL libraries with incompatible definition for CON_F23."
  #endif
#else
  #define CON_F23 343
#endif
#ifdef CON_F24
  #if (CON_F24!=344)
    #error "merging GDSL libraries with incompatible definition for CON_F24."
  #endif
#else
  #define CON_F24 344
#endif
#ifdef CON_F25
  #if (CON_F25!=345)
    #error "merging GDSL libraries with incompatible definition for CON_F25."
  #endif
#else
  #define CON_F25 345
#endif
#ifdef CON_F26
  #if (CON_F26!=346)
    #error "merging GDSL libraries with incompatible definition for CON_F26."
  #endif
#else
  #define CON_F26 346
#endif
#ifdef CON_F27
  #if (CON_F27!=347)
    #error "merging GDSL libraries with incompatible definition for CON_F27."
  #endif
#else
  #define CON_F27 347
#endif
#ifdef CON_F28
  #if (CON_F28!=348)
    #error "merging GDSL libraries with incompatible definition for CON_F28."
  #endif
#else
  #define CON_F28 348
#endif
#ifdef CON_F29
  #if (CON_F29!=349)
    #error "merging GDSL libraries with incompatible definition for CON_F29."
  #endif
#else
  #define CON_F29 349
#endif
#ifdef CON_F30
  #if (CON_F30!=350)
    #error "merging GDSL libraries with incompatible definition for CON_F30."
  #endif
#else
  #define CON_F30 350
#endif
#ifdef CON_F31
  #if (CON_F31!=351)
    #error "merging GDSL libraries with incompatible definition for CON_F31."
  #endif
#else
  #define CON_F31 351
#endif
#ifdef CON_FIR
  #if (CON_FIR!=352)
    #error "merging GDSL libraries with incompatible definition for CON_FIR."
  #endif
#else
  #define CON_FIR 352
#endif
#ifdef CON_FCCR
  #if (CON_FCCR!=353)
    #error "merging GDSL libraries with incompatible definition for CON_FCCR."
  #endif
#else
  #define CON_FCCR 353
#endif
#ifdef CON_FEXR
  #if (CON_FEXR!=354)
    #error "merging GDSL libraries with incompatible definition for CON_FEXR."
  #endif
#else
  #define CON_FEXR 354
#endif
#ifdef CON_FENR
  #if (CON_FENR!=355)
    #error "merging GDSL libraries with incompatible definition for CON_FENR."
  #endif
#else
  #define CON_FENR 355
#endif
#ifdef CON_FCSR
  #if (CON_FCSR!=356)
    #error "merging GDSL libraries with incompatible definition for CON_FCSR."
  #endif
#else
  #define CON_FCSR 356
#endif
#ifdef CON_NULLOP
  #if (CON_NULLOP!=357)
    #error "merging GDSL libraries with incompatible definition for CON_NULLOP."
  #endif
#else
  #define CON_NULLOP 357
#endif
#ifdef CON_FLOATING_FLAGS
  #if (CON_FLOATING_FLAGS!=369)
    #error "merging GDSL libraries with incompatible definition for CON_FLOATING_FLAGS."
  #endif
#else
  #define CON_FLOATING_FLAGS 369
#endif
#ifdef CON_SEM_DIVISION_BY_ZERO
  #if (CON_SEM_DIVISION_BY_ZERO!=371)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_DIVISION_BY_ZERO."
  #endif
#else
  #define CON_SEM_DIVISION_BY_ZERO 371
#endif
#ifdef CON_SEM_SEXPR_ARB
  #if (CON_SEM_SEXPR_ARB!=379)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_SEXPR_ARB."
  #endif
#else
  #define CON_SEM_SEXPR_ARB 379
#endif
#ifdef CON_SEM_VARLS_NIL
  #if (CON_SEM_VARLS_NIL!=401)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VARLS_NIL."
  #endif
#else
  #define CON_SEM_VARLS_NIL 401
#endif
#ifdef CON_SEM_FADD
  #if (CON_SEM_FADD!=402)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FADD."
  #endif
#else
  #define CON_SEM_FADD 402
#endif
#ifdef CON_SEM_FSUB
  #if (CON_SEM_FSUB!=403)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FSUB."
  #endif
#else
  #define CON_SEM_FSUB 403
#endif
#ifdef CON_SEM_FMUL
  #if (CON_SEM_FMUL!=404)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FMUL."
  #endif
#else
  #define CON_SEM_FMUL 404
#endif
#ifdef CON_HINT_JUMP
  #if (CON_HINT_JUMP!=415)
    #error "merging GDSL libraries with incompatible definition for CON_HINT_JUMP."
  #endif
#else
  #define CON_HINT_JUMP 415
#endif
#ifdef CON_HINT_CALL
  #if (CON_HINT_CALL!=416)
    #error "merging GDSL libraries with incompatible definition for CON_HINT_CALL."
  #endif
#else
  #define CON_HINT_CALL 416
#endif
#ifdef CON_HINT_RET
  #if (CON_HINT_RET!=417)
    #error "merging GDSL libraries with incompatible definition for CON_HINT_RET."
  #endif
#else
  #define CON_HINT_RET 417
#endif
#ifdef CON_SEM_NIL
  #if (CON_SEM_NIL!=419)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_NIL."
  #endif
#else
  #define CON_SEM_NIL 419
#endif
#ifdef CON_TLIST_NIL
  #if (CON_TLIST_NIL!=421)
    #error "merging GDSL libraries with incompatible definition for CON_TLIST_NIL."
  #endif
#else
  #define CON_TLIST_NIL 421
#endif
#ifdef CON_SEM_LINS_NIL
  #if (CON_SEM_LINS_NIL!=423)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_LINS_NIL."
  #endif
#else
  #define CON_SEM_LINS_NIL 423
#endif
#ifdef CON_SEM_ID_OBJ
  #if (CON_SEM_ID_OBJ!=424)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_ID_OBJ."
  #endif
#else
  #define CON_SEM_ID_OBJ 424
#endif
#ifdef CON_SEM_ADDRESS_OBJ
  #if (CON_SEM_ADDRESS_OBJ!=425)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_ADDRESS_OBJ."
  #endif
#else
  #define CON_SEM_ADDRESS_OBJ 425
#endif
#ifdef CON_SEM_VAR_OBJ
  #if (CON_SEM_VAR_OBJ!=426)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VAR_OBJ."
  #endif
#else
  #define CON_SEM_VAR_OBJ 426
#endif
#ifdef CON_SEM_LINEAR_OBJ
  #if (CON_SEM_LINEAR_OBJ!=427)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_LINEAR_OBJ."
  #endif
#else
  #define CON_SEM_LINEAR_OBJ 427
#endif
#ifdef CON_SEM_SEXPR_OBJ
  #if (CON_SEM_SEXPR_OBJ!=428)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_SEXPR_OBJ."
  #endif
#else
  #define CON_SEM_SEXPR_OBJ 428
#endif
#ifdef CON_SEM_EXPR_CMP_OBJ
  #if (CON_SEM_EXPR_CMP_OBJ!=429)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXPR_CMP_OBJ."
  #endif
#else
  #define CON_SEM_EXPR_CMP_OBJ 429
#endif
#ifdef CON_SEM_EXPR_OBJ
  #if (CON_SEM_EXPR_OBJ!=430)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXPR_OBJ."
  #endif
#else
  #define CON_SEM_EXPR_OBJ 430
#endif
#ifdef CON_SEM_VARL_OBJ
  #if (CON_SEM_VARL_OBJ!=431)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VARL_OBJ."
  #endif
#else
  #define CON_SEM_VARL_OBJ 431
#endif
#ifdef CON_SEM_VARL_LIST_OBJ
  #if (CON_SEM_VARL_LIST_OBJ!=432)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_VARL_LIST_OBJ."
  #endif
#else
  #define CON_SEM_VARL_LIST_OBJ 432
#endif
#ifdef CON_SEM_FLOP_OBJ
  #if (CON_SEM_FLOP_OBJ!=433)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_FLOP_OBJ."
  #endif
#else
  #define CON_SEM_FLOP_OBJ 433
#endif
#ifdef CON_SEM_STMT_OBJ
  #if (CON_SEM_STMT_OBJ!=434)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_STMT_OBJ."
  #endif
#else
  #define CON_SEM_STMT_OBJ 434
#endif
#ifdef CON_SEM_STMT_LIST_OBJ
  #if (CON_SEM_STMT_LIST_OBJ!=435)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_STMT_LIST_OBJ."
  #endif
#else
  #define CON_SEM_STMT_LIST_OBJ 435
#endif
#ifdef CON_BRANCH_OBJ
  #if (CON_BRANCH_OBJ!=436)
    #error "merging GDSL libraries with incompatible definition for CON_BRANCH_OBJ."
  #endif
#else
  #define CON_BRANCH_OBJ 436
#endif
#ifdef CON_SEM_EXCEPTION_OBJ
  #if (CON_SEM_EXCEPTION_OBJ!=437)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXCEPTION_OBJ."
  #endif
#else
  #define CON_SEM_EXCEPTION_OBJ 437
#endif
#ifdef CON_LIN_NONE
  #if (CON_LIN_NONE!=439)
    #error "merging GDSL libraries with incompatible definition for CON_LIN_NONE."
  #endif
#else
  #define CON_LIN_NONE 439
#endif
#ifdef CON_STO_NONE
  #if (CON_STO_NONE!=442)
    #error "merging GDSL libraries with incompatible definition for CON_STO_NONE."
  #endif
#else
  #define CON_STO_NONE 442
#endif
#ifdef CON_INSN_LIST_OBJ
  #if (CON_INSN_LIST_OBJ!=443)
    #error "merging GDSL libraries with incompatible definition for CON_INSN_LIST_OBJ."
  #endif
#else
  #define CON_INSN_LIST_OBJ 443
#endif
#ifdef CON_INSNS_NIL
  #if (CON_INSNS_NIL!=445)
    #error "merging GDSL libraries with incompatible definition for CON_INSNS_NIL."
  #endif
#else
  #define CON_INSNS_NIL 445
#endif
#ifdef CON_SEM_PRESERVATION_EVERYWHERE
  #if (CON_SEM_PRESERVATION_EVERYWHERE!=446)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_PRESERVATION_EVERYWHERE."
  #endif
#else
  #define CON_SEM_PRESERVATION_EVERYWHERE 446
#endif
#ifdef CON_SEM_PRESERVATION_BLOCK
  #if (CON_SEM_PRESERVATION_BLOCK!=447)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_PRESERVATION_BLOCK."
  #endif
#else
  #define CON_SEM_PRESERVATION_BLOCK 447
#endif
#ifdef CON_SEM_PRESERVATION_CONTEXT
  #if (CON_SEM_PRESERVATION_CONTEXT!=448)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_PRESERVATION_CONTEXT."
  #endif
#else
  #define CON_SEM_PRESERVATION_CONTEXT 448
#endif
#ifdef CON_SO_NONE
  #if (CON_SO_NONE!=450)
    #error "merging GDSL libraries with incompatible definition for CON_SO_NONE."
  #endif
#else
  #define CON_SO_NONE 450
#endif
#ifdef CON_Signed
  #if (CON_Signed!=451)
    #error "merging GDSL libraries with incompatible definition for CON_Signed."
  #endif
#else
  #define CON_Signed 451
#endif
#ifdef CON_Unsigned
  #if (CON_Unsigned!=452)
    #error "merging GDSL libraries with incompatible definition for CON_Unsigned."
  #endif
#else
  #define CON_Unsigned 452
#endif
#ifdef CON_SEM_EXC_OVERFLOW
  #if (CON_SEM_EXC_OVERFLOW!=453)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXC_OVERFLOW."
  #endif
#else
  #define CON_SEM_EXC_OVERFLOW 453
#endif
#ifdef CON_SEM_EXC_VADDR_ERROR
  #if (CON_SEM_EXC_VADDR_ERROR!=454)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXC_VADDR_ERROR."
  #endif
#else
  #define CON_SEM_EXC_VADDR_ERROR 454
#endif
#ifdef CON_SEM_EXC_TRAP
  #if (CON_SEM_EXC_TRAP!=455)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXC_TRAP."
  #endif
#else
  #define CON_SEM_EXC_TRAP 455
#endif
#ifdef CON_SEM_EXC_SYSTEM_CALL
  #if (CON_SEM_EXC_SYSTEM_CALL!=456)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXC_SYSTEM_CALL."
  #endif
#else
  #define CON_SEM_EXC_SYSTEM_CALL 456
#endif
#ifdef CON_SEM_EXC_BREAKPOINT
  #if (CON_SEM_EXC_BREAKPOINT!=457)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXC_BREAKPOINT."
  #endif
#else
  #define CON_SEM_EXC_BREAKPOINT 457
#endif
#ifdef CON_SEM_EXC_DEBUG_BREAKPOINT
  #if (CON_SEM_EXC_DEBUG_BREAKPOINT!=458)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXC_DEBUG_BREAKPOINT."
  #endif
#else
  #define CON_SEM_EXC_DEBUG_BREAKPOINT 458
#endif
#ifdef CON_SEM_EXC_DEBUG_MODE_BREAKPOINT
  #if (CON_SEM_EXC_DEBUG_MODE_BREAKPOINT!=459)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXC_DEBUG_MODE_BREAKPOINT."
  #endif
#else
  #define CON_SEM_EXC_DEBUG_MODE_BREAKPOINT 459
#endif
#ifdef CON_SEM_EXC_RESERVED_INSTRUCTION
  #if (CON_SEM_EXC_RESERVED_INSTRUCTION!=460)
    #error "merging GDSL libraries with incompatible definition for CON_SEM_EXC_RESERVED_INSTRUCTION."
  #endif
#else
  #define CON_SEM_EXC_RESERVED_INSTRUCTION 460
#endif
#ifdef CON_Sem_PC
  #if (CON_Sem_PC!=461)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_PC."
  #endif
#else
  #define CON_Sem_PC 461
#endif
#ifdef CON_Sem_SREG
  #if (CON_Sem_SREG!=462)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_SREG."
  #endif
#else
  #define CON_Sem_SREG 462
#endif
#ifdef CON_Sem_LLBIT
  #if (CON_Sem_LLBIT!=463)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_LLBIT."
  #endif
#else
  #define CON_Sem_LLBIT 463
#endif
#ifdef CON_Sem_DEBUG
  #if (CON_Sem_DEBUG!=464)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_DEBUG."
  #endif
#else
  #define CON_Sem_DEBUG 464
#endif
#ifdef CON_Sem_CONFIG1
  #if (CON_Sem_CONFIG1!=465)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_CONFIG1."
  #endif
#else
  #define CON_Sem_CONFIG1 465
#endif
#ifdef CON_Sem_CONFIG3
  #if (CON_Sem_CONFIG3!=466)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_CONFIG3."
  #endif
#else
  #define CON_Sem_CONFIG3 466
#endif
#ifdef CON_Sem_ISA_MODE
  #if (CON_Sem_ISA_MODE!=467)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ISA_MODE."
  #endif
#else
  #define CON_Sem_ISA_MODE 467
#endif
#ifdef CON_Sem_SRSCTL
  #if (CON_Sem_SRSCTL!=468)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_SRSCTL."
  #endif
#else
  #define CON_Sem_SRSCTL 468
#endif
#ifdef CON_Sem_EPC
  #if (CON_Sem_EPC!=469)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_EPC."
  #endif
#else
  #define CON_Sem_EPC 469
#endif
#ifdef CON_Sem_ERROR_EPC
  #if (CON_Sem_ERROR_EPC!=470)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ERROR_EPC."
  #endif
#else
  #define CON_Sem_ERROR_EPC 470
#endif
#ifdef CON_Sem_DEPC
  #if (CON_Sem_DEPC!=471)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_DEPC."
  #endif
#else
  #define CON_Sem_DEPC 471
#endif
#ifdef CON_Sem_ZERO
  #if (CON_Sem_ZERO!=472)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ZERO."
  #endif
#else
  #define CON_Sem_ZERO 472
#endif
#ifdef CON_Sem_AT
  #if (CON_Sem_AT!=473)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_AT."
  #endif
#else
  #define CON_Sem_AT 473
#endif
#ifdef CON_Sem_V0
  #if (CON_Sem_V0!=474)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_V0."
  #endif
#else
  #define CON_Sem_V0 474
#endif
#ifdef CON_Sem_V1
  #if (CON_Sem_V1!=475)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_V1."
  #endif
#else
  #define CON_Sem_V1 475
#endif
#ifdef CON_Sem_A0
  #if (CON_Sem_A0!=476)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_A0."
  #endif
#else
  #define CON_Sem_A0 476
#endif
#ifdef CON_Sem_A1
  #if (CON_Sem_A1!=477)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_A1."
  #endif
#else
  #define CON_Sem_A1 477
#endif
#ifdef CON_Sem_A2
  #if (CON_Sem_A2!=478)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_A2."
  #endif
#else
  #define CON_Sem_A2 478
#endif
#ifdef CON_Sem_A3
  #if (CON_Sem_A3!=479)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_A3."
  #endif
#else
  #define CON_Sem_A3 479
#endif
#ifdef CON_Sem_T0
  #if (CON_Sem_T0!=480)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T0."
  #endif
#else
  #define CON_Sem_T0 480
#endif
#ifdef CON_Sem_T1
  #if (CON_Sem_T1!=481)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T1."
  #endif
#else
  #define CON_Sem_T1 481
#endif
#ifdef CON_Sem_T2
  #if (CON_Sem_T2!=482)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T2."
  #endif
#else
  #define CON_Sem_T2 482
#endif
#ifdef CON_Sem_T3
  #if (CON_Sem_T3!=483)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T3."
  #endif
#else
  #define CON_Sem_T3 483
#endif
#ifdef CON_Sem_T4
  #if (CON_Sem_T4!=484)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T4."
  #endif
#else
  #define CON_Sem_T4 484
#endif
#ifdef CON_Sem_T5
  #if (CON_Sem_T5!=485)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T5."
  #endif
#else
  #define CON_Sem_T5 485
#endif
#ifdef CON_Sem_T6
  #if (CON_Sem_T6!=486)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T6."
  #endif
#else
  #define CON_Sem_T6 486
#endif
#ifdef CON_Sem_T7
  #if (CON_Sem_T7!=487)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T7."
  #endif
#else
  #define CON_Sem_T7 487
#endif
#ifdef CON_Sem_S0
  #if (CON_Sem_S0!=488)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_S0."
  #endif
#else
  #define CON_Sem_S0 488
#endif
#ifdef CON_Sem_S1
  #if (CON_Sem_S1!=489)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_S1."
  #endif
#else
  #define CON_Sem_S1 489
#endif
#ifdef CON_Sem_S2
  #if (CON_Sem_S2!=490)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_S2."
  #endif
#else
  #define CON_Sem_S2 490
#endif
#ifdef CON_Sem_S3
  #if (CON_Sem_S3!=491)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_S3."
  #endif
#else
  #define CON_Sem_S3 491
#endif
#ifdef CON_Sem_S4
  #if (CON_Sem_S4!=492)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_S4."
  #endif
#else
  #define CON_Sem_S4 492
#endif
#ifdef CON_Sem_S5
  #if (CON_Sem_S5!=493)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_S5."
  #endif
#else
  #define CON_Sem_S5 493
#endif
#ifdef CON_Sem_S6
  #if (CON_Sem_S6!=494)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_S6."
  #endif
#else
  #define CON_Sem_S6 494
#endif
#ifdef CON_Sem_S7
  #if (CON_Sem_S7!=495)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_S7."
  #endif
#else
  #define CON_Sem_S7 495
#endif
#ifdef CON_Sem_T8
  #if (CON_Sem_T8!=496)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T8."
  #endif
#else
  #define CON_Sem_T8 496
#endif
#ifdef CON_Sem_T9
  #if (CON_Sem_T9!=497)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_T9."
  #endif
#else
  #define CON_Sem_T9 497
#endif
#ifdef CON_Sem_K0
  #if (CON_Sem_K0!=498)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_K0."
  #endif
#else
  #define CON_Sem_K0 498
#endif
#ifdef CON_Sem_K1
  #if (CON_Sem_K1!=499)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_K1."
  #endif
#else
  #define CON_Sem_K1 499
#endif
#ifdef CON_Sem_GP
  #if (CON_Sem_GP!=500)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_GP."
  #endif
#else
  #define CON_Sem_GP 500
#endif
#ifdef CON_Sem_SP
  #if (CON_Sem_SP!=501)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_SP."
  #endif
#else
  #define CON_Sem_SP 501
#endif
#ifdef CON_Sem_S8
  #if (CON_Sem_S8!=502)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_S8."
  #endif
#else
  #define CON_Sem_S8 502
#endif
#ifdef CON_Sem_RA
  #if (CON_Sem_RA!=503)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_RA."
  #endif
#else
  #define CON_Sem_RA 503
#endif
#ifdef CON_Sem_HI
  #if (CON_Sem_HI!=504)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_HI."
  #endif
#else
  #define CON_Sem_HI 504
#endif
#ifdef CON_Sem_LO
  #if (CON_Sem_LO!=505)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_LO."
  #endif
#else
  #define CON_Sem_LO 505
#endif
#ifdef CON_Sem_F0
  #if (CON_Sem_F0!=506)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F0."
  #endif
#else
  #define CON_Sem_F0 506
#endif
#ifdef CON_Sem_F1
  #if (CON_Sem_F1!=507)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F1."
  #endif
#else
  #define CON_Sem_F1 507
#endif
#ifdef CON_Sem_F2
  #if (CON_Sem_F2!=508)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F2."
  #endif
#else
  #define CON_Sem_F2 508
#endif
#ifdef CON_Sem_F3
  #if (CON_Sem_F3!=509)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F3."
  #endif
#else
  #define CON_Sem_F3 509
#endif
#ifdef CON_Sem_F4
  #if (CON_Sem_F4!=510)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F4."
  #endif
#else
  #define CON_Sem_F4 510
#endif
#ifdef CON_Sem_F5
  #if (CON_Sem_F5!=511)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F5."
  #endif
#else
  #define CON_Sem_F5 511
#endif
#ifdef CON_Sem_F6
  #if (CON_Sem_F6!=512)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F6."
  #endif
#else
  #define CON_Sem_F6 512
#endif
#ifdef CON_Sem_F7
  #if (CON_Sem_F7!=513)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F7."
  #endif
#else
  #define CON_Sem_F7 513
#endif
#ifdef CON_Sem_F8
  #if (CON_Sem_F8!=514)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F8."
  #endif
#else
  #define CON_Sem_F8 514
#endif
#ifdef CON_Sem_F9
  #if (CON_Sem_F9!=515)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F9."
  #endif
#else
  #define CON_Sem_F9 515
#endif
#ifdef CON_Sem_F10
  #if (CON_Sem_F10!=516)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F10."
  #endif
#else
  #define CON_Sem_F10 516
#endif
#ifdef CON_Sem_F11
  #if (CON_Sem_F11!=517)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F11."
  #endif
#else
  #define CON_Sem_F11 517
#endif
#ifdef CON_Sem_F12
  #if (CON_Sem_F12!=518)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F12."
  #endif
#else
  #define CON_Sem_F12 518
#endif
#ifdef CON_Sem_F13
  #if (CON_Sem_F13!=519)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F13."
  #endif
#else
  #define CON_Sem_F13 519
#endif
#ifdef CON_Sem_F14
  #if (CON_Sem_F14!=520)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F14."
  #endif
#else
  #define CON_Sem_F14 520
#endif
#ifdef CON_Sem_F15
  #if (CON_Sem_F15!=521)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F15."
  #endif
#else
  #define CON_Sem_F15 521
#endif
#ifdef CON_Sem_F16
  #if (CON_Sem_F16!=522)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F16."
  #endif
#else
  #define CON_Sem_F16 522
#endif
#ifdef CON_Sem_F17
  #if (CON_Sem_F17!=523)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F17."
  #endif
#else
  #define CON_Sem_F17 523
#endif
#ifdef CON_Sem_F18
  #if (CON_Sem_F18!=524)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F18."
  #endif
#else
  #define CON_Sem_F18 524
#endif
#ifdef CON_Sem_F19
  #if (CON_Sem_F19!=525)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F19."
  #endif
#else
  #define CON_Sem_F19 525
#endif
#ifdef CON_Sem_F20
  #if (CON_Sem_F20!=526)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F20."
  #endif
#else
  #define CON_Sem_F20 526
#endif
#ifdef CON_Sem_F21
  #if (CON_Sem_F21!=527)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F21."
  #endif
#else
  #define CON_Sem_F21 527
#endif
#ifdef CON_Sem_F22
  #if (CON_Sem_F22!=528)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F22."
  #endif
#else
  #define CON_Sem_F22 528
#endif
#ifdef CON_Sem_F23
  #if (CON_Sem_F23!=529)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F23."
  #endif
#else
  #define CON_Sem_F23 529
#endif
#ifdef CON_Sem_F24
  #if (CON_Sem_F24!=530)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F24."
  #endif
#else
  #define CON_Sem_F24 530
#endif
#ifdef CON_Sem_F25
  #if (CON_Sem_F25!=531)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F25."
  #endif
#else
  #define CON_Sem_F25 531
#endif
#ifdef CON_Sem_F26
  #if (CON_Sem_F26!=532)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F26."
  #endif
#else
  #define CON_Sem_F26 532
#endif
#ifdef CON_Sem_F27
  #if (CON_Sem_F27!=533)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F27."
  #endif
#else
  #define CON_Sem_F27 533
#endif
#ifdef CON_Sem_F28
  #if (CON_Sem_F28!=534)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F28."
  #endif
#else
  #define CON_Sem_F28 534
#endif
#ifdef CON_Sem_F29
  #if (CON_Sem_F29!=535)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F29."
  #endif
#else
  #define CON_Sem_F29 535
#endif
#ifdef CON_Sem_F30
  #if (CON_Sem_F30!=536)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F30."
  #endif
#else
  #define CON_Sem_F30 536
#endif
#ifdef CON_Sem_F31
  #if (CON_Sem_F31!=537)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_F31."
  #endif
#else
  #define CON_Sem_F31 537
#endif
#ifdef CON_Sem_FIR
  #if (CON_Sem_FIR!=538)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_FIR."
  #endif
#else
  #define CON_Sem_FIR 538
#endif
#ifdef CON_Sem_FCCR
  #if (CON_Sem_FCCR!=539)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_FCCR."
  #endif
#else
  #define CON_Sem_FCCR 539
#endif
#ifdef CON_Sem_FEXR
  #if (CON_Sem_FEXR!=540)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_FEXR."
  #endif
#else
  #define CON_Sem_FEXR 540
#endif
#ifdef CON_Sem_FENR
  #if (CON_Sem_FENR!=541)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_FENR."
  #endif
#else
  #define CON_Sem_FENR 541
#endif
#ifdef CON_Sem_FCSR
  #if (CON_Sem_FCSR!=542)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_FCSR."
  #endif
#else
  #define CON_Sem_FCSR 542
#endif
#ifdef CON_Sem_CPUNUM
  #if (CON_Sem_CPUNUM!=543)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_CPUNUM."
  #endif
#else
  #define CON_Sem_CPUNUM 543
#endif
#ifdef CON_Sem_SYNCI_STEP
  #if (CON_Sem_SYNCI_STEP!=544)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_SYNCI_STEP."
  #endif
#else
  #define CON_Sem_SYNCI_STEP 544
#endif
#ifdef CON_Sem_CC
  #if (CON_Sem_CC!=545)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_CC."
  #endif
#else
  #define CON_Sem_CC 545
#endif
#ifdef CON_Sem_CCRES
  #if (CON_Sem_CCRES!=546)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_CCRES."
  #endif
#else
  #define CON_Sem_CCRES 546
#endif
#ifdef CON_Sem_ULR
  #if (CON_Sem_ULR!=547)
    #error "merging GDSL libraries with incompatible definition for CON_Sem_ULR."
  #endif
#else
  #define CON_Sem_ULR 547
#endif
