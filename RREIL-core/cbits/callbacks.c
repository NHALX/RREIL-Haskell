#include <HsFFI.h>
#ifdef __GLASGOW_HASKELL__
#include <RREIL/Internal/Types_stub.h>
#endif
#include <stdio.h>


#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include <gdsl_generic.h>

//////////////////// ASM /////////////////

static const unboxed_asm_opnd_list_callbacks_t asm_opnd_list_callbacks = {
  .opnd_list_next = (void*)&asm_opnds_next, 
  .init           = (void*)&asm_opnds_init};

static const unboxed_asm_opnd_callbacks_t asm_opnd_callbacks = {
  .opnd_register = (void*) &asm_register, 
  .memory        = (void*) &asm_memory, 
  .imm           = (void*) &asm_imm, 
  .post_op       = (void*) &asm_post_op, 
  .pre_op        = (void*) &asm_pre_op, 
  .rel           = (void*) &asm_rel, 
  .annotated     = (void*) &asm_annotated, 
  .sum           = (void*) &asm_sum, 
  .scale         = (void*) &asm_scale, 
  .bounded       = (void*) &asm_bounded, 
  .sign          = (void*) &asm_sign, 
  .composite     = (void*) &asm_composite};

static const unboxed_asm_signedness_callbacks_t asm_signedness_callbacks = {
  .asm_signed   = (void*) &asm_signed, 
  .asm_unsigned = (void*) &asm_unsigned};

static const unboxed_asm_boundary_callbacks_t asm_boundary_callbacks = {
  .sz   = (void*) &asm_sz, 
  .sz_o = (void*) &asm_sz_o};

static const unboxed_asm_annotation_list_callbacks_t asm_annotation_list_callbacks = {
  .annotation_list_next = (void*) &asm_annotations_next, 
  .init                 = (void*) &asm_annotations_init};

static const unboxed_asm_annotation_callbacks_t asm_annotation_callbacks = {
  .ann_string = (void*) &asm_annotation_string, 
  .function   = (void*) &asm_annotation_function, 
  .opnd       = (void*) &asm_annotation_opnd};

static const unboxed_asm_callbacks_t asm_callbacks = {
  .insn            = (void*) &asm_insn,
  .opnd_list       = (void*) &asm_opnd_list_callbacks,
  .opnd            = (void*) &asm_opnd_callbacks,
  .signedness      = (void*) &asm_signedness_callbacks,
  .boundary        = (void*) &asm_boundary_callbacks,
  .annotation_list = (void*) &asm_annotation_list_callbacks,
  .annotation      = (void*) &asm_annotation_callbacks,
};

//////////////////// RREIL ////////////////////

static const unboxed_sem_id_callbacks_t sem_id_callbacks = {
  .shared = (void*) &sem_id_shared,
  .virt_t = (void*) &sem_id_virt_t,
  .arch   = (void*) &sem_id_arch};

static const unboxed_sem_exception_callbacks_t sem_exception_callbacks = {
  .shared = (void*) &sem_exception_shared,
  .arch = (void*)   &sem_exception_arch};

static const unboxed_sem_address_callbacks_t sem_address_callbacks = {.sem_address_ = (void*) &sem_address};

static const unboxed_sem_var_callbacks_t sem_var_callbacks = {.sem_var_ = (void*) &sem_var};

static const unboxed_sem_linear_callbacks_t sem_linear_callbacks = {
  .sem_lin_var   = (void*) &sem_lin_var,
  .sem_lin_imm   = (void*) &sem_lin_imm,
  .sem_lin_add   = (void*) &sem_lin_add,
  .sem_lin_sub   = (void*) &sem_lin_sub,
  .sem_lin_scale = (void*) &sem_lin_scale};

static const unboxed_sem_sexpr_callbacks_t sem_sexpr_callbacks = {
  .sem_sexpr_lin = (void*) &sem_sexpr_lin,
  .sem_sexpr_cmp = (void*) &sem_sexpr_cmp,
  .sem_sexpr_arb = (void*) &sem_sexpr_arb};

static const unboxed_sem_expr_cmp_callbacks_t sem_expr_cmp_callbacks = {
  .sem_cmpeq  = (void*) &sem_cmpeq,
  .sem_cmpneq = (void*) &sem_cmpneq,
  .sem_cmples = (void*) &sem_cmples,
  .sem_cmpleu = (void*) &sem_cmpleu,
  .sem_cmplts = (void*) &sem_cmplts,
  .sem_cmpltu = (void*) &sem_cmpltu};

static const unboxed_sem_expr_callbacks_t sem_expr_callbacks = {
  .sem_sexpr = (void*) &sem_sexpr,
  .sem_mul   = (void*) &sem_mul,
  .sem_div   = (void*) &sem_div,
  .sem_divs  = (void*) &sem_divs,
  .sem_mod   = (void*) &sem_mod,
  .sem_mods  = (void*) &sem_mods,
  .sem_shl   = (void*) &sem_shl,
  .sem_shr   = (void*) &sem_shr,
  .sem_shrs  = (void*) &sem_shrs,
  .sem_and   = (void*) &sem_and,
  .sem_or    = (void*) &sem_or,
  .sem_xor   = (void*) &sem_xor,
  .sem_sx    = (void*) &sem_sx,
  .sem_zx    = (void*) &sem_zx};

static const unboxed_sem_varl_callbacks_t sem_varl_callbacks = {.sem_varl_ = (void*) &sem_varl};

static const unboxed_sem_varl_list_callbacks_t sem_varl_list_callbacks = {
  .sem_varl_list_next = (void*) &sem_varls_next,
  .sem_varl_list_init = (void*) &sem_varls_init};

static const unboxed_sem_flop_callbacks_t sem_flop_callbacks = {.sem_flop_ = (void*) &sem_flop};

static const unboxed_sem_stmt_callbacks_t sem_stmt_callbacks = {
  .sem_assign  = (void*) &sem_assign,
  .sem_load    = (void*) &sem_load,
  .sem_store   = (void*) &sem_store,
  .sem_ite     = (void*) &sem_ite,
  .sem_while   = (void*) &sem_while,
  .sem_cbranch = (void*) &sem_cbranch,
  .sem_branch  = (void*) &sem_branch,
  .sem_flop    = (void*) &sem_flop_stmt,
  .sem_prim    = (void*) &sem_prim,
  .sem_throw   = (void*) &sem_throw};

static const unboxed_branch_hint_callbacks_t sem_branch_hint_callbacks = {.branch_hint_ = (void*) &sem_branch_hint};

static const unboxed_sem_stmt_list_callbacks_t sem_stmt_list_callbacks = {
  .sem_stmt_list_next = (void*) &sem_stmts_next, 
  .sem_stmt_list_init = (void*) &sem_stmts_init
};

static const unboxed_callbacks_t callbacks = { 
  .sem_id        = (void*) &sem_id_callbacks, 
  .sem_address   = (void*) &sem_address_callbacks, 
  .sem_var       = (void*) &sem_var_callbacks, 
  .sem_linear    = (void*) &sem_linear_callbacks, 
  .sem_sexpr     = (void*) &sem_sexpr_callbacks, 
  .sem_expr_cmp  = (void*) &sem_expr_cmp_callbacks, 
  .sem_expr      = (void*) &sem_expr_callbacks, 
  .sem_varl      = (void*) &sem_varl_callbacks, 
  .sem_varl_list = (void*) &sem_varl_list_callbacks, 
  .sem_flop      = (void*) &sem_flop_callbacks, 
  .sem_stmt      = (void*) &sem_stmt_callbacks, 
  .branch_hint   = (void*) &sem_branch_hint_callbacks, 
  .sem_exception = (void*) &sem_exception_callbacks, 
  .sem_stmt_list = (void*) &sem_stmt_list_callbacks
};


//////////// EXPORTED //////////////

const unboxed_asm_callbacks_t* gdcb_haskell_asm()
{
  return &asm_callbacks;
}

const unboxed_callbacks_t* gdcb_haskell_rreil() 
{
  return &callbacks;
}

