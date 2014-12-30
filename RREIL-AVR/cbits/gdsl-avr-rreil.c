/* vim:set ts=2:set sw=2:set expandtab: */
/* Auto-generated file. DO NOT EDIT. */

#include "gdsl-avr-rreil.h"
#include <string.h>
#include <stdio.h>
#include <limits.h>
#ifdef _MSC_VER
  #include <crtdefs.h>
#endif

/* generated declarations for records with fixed fields */
typedef struct {
  obj_t left;
  obj_t payload;
  obj_t right;
  int_t size;
} struct1_t;
typedef struct {
  int_t rope_size;
  string_t rope_string;
} struct2_t;
typedef struct {
  obj_t rope_left;
  obj_t rope_right;
  int_t rope_size;
} struct3_t;
typedef struct {
  vec_t cb;
  vec_t ck;
  int_t config;
  int_t cs;
  vec_t dq;
  int_t foundJump;
  int_t ins_count;
  obj_t insns;
  vec_t io;
  int_t lab;
  obj_t live;
  obj_t maybelive;
  int_t mode64;
  vec_t rd;
  vec_t rr;
  obj_t stack;
  int_t tmp;
} monad_t;
typedef struct {
  vec_t confData;
  string_t confLongName;
  obj_t confNext;
  string_t confShortName;
} struct5_t;
typedef struct {
  obj_t hd;
  obj_t tl;
} struct13_t;
typedef struct {
  obj_t boundary;
  obj_t opnd;
} struct14_t;
typedef struct {
  obj_t lhs;
  obj_t rhs;
} struct15_t;
typedef struct {
  obj_t expr;
  obj_t opnd;
} struct16_t;
typedef struct {
  obj_t imm;
  obj_t op;
} struct18_t;
typedef struct {
  obj_t regh;
  obj_t regl;
} reghl_t;
typedef struct {
  obj_t op;
  obj_t se;
} struct20_t;
typedef struct {
  reghl_t reghl;
  obj_t regi;
} struct21_t;
typedef struct {
  obj_t first;
  obj_t second;
} binop_t;
typedef struct {
  obj_t operand;
} unop_t;
typedef struct {
  obj_t first;
  obj_t second;
  obj_t third;
} ternop_t;
typedef struct {
  obj_t opnd1;
  obj_t opnd2;
} sem_arity2_t;
typedef struct {
  obj_t address;
  int_t size;
} sem_address_t;
typedef struct {
  obj_t lhs;
  obj_t rhs;
  int_t size;
} struct28_t;
typedef struct {
  sem_address_t address;
  obj_t lhs;
  int_t size;
} struct29_t;
typedef struct {
  sem_address_t address;
  obj_t rhs;
  int_t size;
} struct30_t;
typedef struct {
  obj_t cond;
  obj_t else_branch;
  obj_t then_branch;
} struct31_t;
typedef struct {
  obj_t hint;
  sem_address_t target;
} struct32_t;
typedef struct {
  obj_t cond;
  sem_address_t target_false;
  sem_address_t target_true;
} struct33_t;
typedef struct {
  int_t fromsize;
  obj_t opnd1;
} struct34_t;
typedef struct {
  int_t const_;
} struct35_t;
typedef struct {
  obj_t live;
  obj_t maybelive;
} struct51_t;
typedef struct {
  obj_t conservative;
  obj_t greedy;
} struct52_t;
typedef struct {
  insndata_t insn;
  obj_t tl;
} struct55_t;
typedef struct {
  obj_t a;
  obj_t b;
} struct56_t;

struct state {
  void* userdata;      /* a pointer to arbitrary data */
  char* heap_base;    /* the beginning of the heap */
  char* heap_limit;   /* first byte beyond the heap buffer */
  char* heap;         /* current top of the heap */
  monad_t mon_state;      /* the current monadic state */
  unsigned char* ip_start;     /* beginning of code buffer */
  size_t ip_base;     /* base address of code */
  unsigned char* ip_limit;     /* first byte beyond the code buffer */
  unsigned char* ip;           /* current pointer into the buffer */
  int_t token_addr_inv;
  char* err_str;      /* a string describing the fatal error that occurred */
  jmp_buf err_tgt;    /* the position of the exception handler */
  FILE* handle;       /* the file that the puts primitve uses */
  char* const_heap_base;
  /* the following fields contain the values of constant GDSL expressions */
  obj_t bbtree_empty;
  obj_t fitree_empty;
  int_t int_max;
  obj_t asm_anns_none;
  obj_t asm_opnds_none;
  obj_t decoder_config;
  int_t config_default;
  obj_t rZ;
  obj_t rY;
  obj_t rampz_z;
  obj_t rX;
  obj_t fmap_empty;
  obj_t registers_live_map;
  obj_t optimization_config;
  obj_t fSF;
  obj_t fZF;
  obj_t fNF;
  obj_t fVF;
  obj_t fHF;
  obj_t fCF;
  obj_t fIF;
  obj_t fTF;
  obj_t gdsl_avr_rreil_optimization_config;
  int_t gdsl_avr_rreil_config_default;
  obj_t gdsl_avr_rreil_decoder_config;
  int_t gdsl_avr_rreil_int_max;
};

typedef unsigned int field_tag_t;

static field_tag_t field_array_9[] = { 9 };
static field_tag_t field_array_54[] = { 54 };

#define CHUNK_SIZE (4*1024)

#if defined(__CLANG__)
#define INLINE_ATTR inline
#elif defined(__GNUC__)
#define INLINE_ATTR inline
#elif defined(_MSC_VER)
#define INLINE_ATTR __inline
#else
#define INLINE_ATTR inline
#endif

#if defined(__CLANG__)
#define NO_INLINE_ATTR __attribute__((noinline))
#elif defined(__GNUC__)
#define NO_INLINE_ATTR __attribute__((noinline))
#elif defined(_MSC_VER)
#define NO_INLINE_ATTR __declspec(noinline)
#else
#define NO_INLINE_ATTR
#endif

#if defined(__CLANG__)
#define MALLOC_ATTR __attribute__((malloc))
#elif defined(__GNUC__)
#define MALLOC_ATTR __attribute__((malloc))
#elif defined(_MSC_VER)
#define MALLOC_ATTR __declspec(restrict)
#else
#define MALLOC_ATTR
#endif


static NO_INLINE_ATTR void alloc_heap(state_t s, char* prev_page, size_t size) {
  if (size<CHUNK_SIZE) size = CHUNK_SIZE; else size = CHUNK_SIZE*((size/CHUNK_SIZE)+1);
  s->heap_base = (char*) malloc(size);
  if (s->heap_base==NULL) {
    s->err_str = "GDSL runtime: out of memory";
    longjmp(s->err_tgt,2);
  };
  s->heap = s->heap_base+sizeof(char*);
  /* store a pointer to the previous page in the first bytes of this page */
  *((char**) s->heap_base) = prev_page;
  s->heap_limit = s->heap_base+size;
};


void
gdsl_avr_rreil_reset_heap(state_t s) {
  char* heap = s->heap_base;
  if (heap==NULL) return;
  while (1) {
    char* prev = *((char**) heap);
    if (prev==NULL) break;
    free (heap);
    heap = prev;
  }
  s->heap_base = heap;
  s->heap = heap+sizeof(char*);
  s->heap_limit = heap+CHUNK_SIZE;
  memset(&(s->mon_state), 0, sizeof(s->mon_state));
};

size_t
gdsl_avr_rreil_heap_residency(state_t s) {
  char* heap = s->heap_base;
  size_t res;
  if (heap==NULL) return 0;
  res = s->heap - s->heap_base;
  while (1) {
    char* prev = *((char**) heap);
    if (prev==NULL) break;
    res += CHUNK_SIZE;
    heap = prev;
  }
  return res;
};

static INLINE_ATTR MALLOC_ATTR void* alloc(state_t s, size_t bytes) {
  bytes = ((bytes+7)>>3)<<3;    /* align to multiple of 8 */
  if (s->heap+bytes >= s->heap_limit) alloc_heap(s, s->heap_base, bytes);
  char* res = s->heap;
  s->heap = s->heap+bytes;
  return res;
};

#define GEN_ALLOC(type) \
static INLINE_ATTR type ## _t* alloc_ ## type (state_t s, type ## _t v) { \
  type ## _t* res = (type ## _t*) alloc(s, sizeof(type ## _t));\
  *res = v;\
  return res;\
}

#define alloc_string(s,str) str

#define GEN_CON_STRUCT(type)  \
struct con_ ## type {         \
  con_tag_t tag;              \
  type ## _t payload;         \
};                            \
                              \
typedef struct con_ ## type  con_ ## type ## _t

#define GEN_REC_STRUCT(type)  \
struct field_ ## type {       \
  field_tag_t tag;            \
  obj_t next;                 \
  unsigned int size;          \
  type ## _t payload;         \
};                            \
                              \
typedef struct field_ ## type  field_ ## type ## _t

#define GEN_ADD_FIELD(type)                               \
static obj_t add_field_ ## type                           \
(state_t s,field_tag_t tag, type ## _t v, obj_t rec) {    \
  field_ ## type ## _t* res = (field_ ## type ## _t*)     \
    alloc(s, sizeof(field_ ## type ## _t));               \
  res->tag = tag;                                         \
  res->size = sizeof(field_ ## type ## _t);               \
  res->next = rec;                                        \
  res->payload = v;                                       \
  return res;                                             \
}

#define GEN_SELECT_FIELD(type)                            \
static type ## _t select_  ## type                        \
(state_t s,field_tag_t field, obj_t rec) {                \
  field_ ## type ## _t* v = (field_ ## type ## _t*) rec;  \
  while (v) {                                             \
    if (v->tag==field) return v->payload;                 \
    v = (field_ ## type ## _t*) v->next;                                          \
  };                                                      \
  s->err_str = "GDSL runtime: field not found in record"; \
  longjmp(s->err_tgt,1);                                  \
}                                                         \

GEN_REC_STRUCT(obj);

/* Returns a pointer to a record in which the given fields are removed.
  This operation copies all fields of the record except for those that
  are to be removed. The function returns the tail of the old record if
  all given fields could be removed before the end of the record was
  reached.
*/
static obj_t del_fields(state_t s, field_tag_t tags[], int tags_size, obj_t rec) {
  field_obj_t* current = (field_obj_t*) rec;
  int idx;
  obj_t res = NULL;
  obj_t* last_next = &res;
  while (current && tags_size>0) {
    for (idx=0; idx<tags_size; idx++)
      if (current->tag == tags[idx]) break;
    if (idx<tags_size) {
      /* delete this field by doing nothing, but remove the index */
      tags[idx]=tags[--tags_size];
    } else {
      /* this field is not supposed to be deleted, copy it */
      field_obj_t* copy = (field_obj_t*) alloc(s, current->size);
      memcpy(copy,current,current->size);
      *last_next = copy;
      last_next = &copy->next;
    };
    current = (field_obj_t*) current->next;
  };
  *last_next = current;
  return res;
}


/* Functions to allocate values, constructors and record fields on the heap. */
GEN_REC_STRUCT(int);
GEN_SELECT_FIELD(int);
GEN_CON_STRUCT(struct1);
GEN_ALLOC(con_struct1);
GEN_CON_STRUCT(obj);
GEN_ADD_FIELD(int);
GEN_CON_STRUCT(int);
GEN_ALLOC(con_int);
GEN_SELECT_FIELD(obj);
GEN_CON_STRUCT(struct2);
GEN_ALLOC(con_struct2);
GEN_CON_STRUCT(struct3);
GEN_ALLOC(con_struct3);
GEN_ALLOC(int);
GEN_CON_STRUCT(struct5);
GEN_ALLOC(con_struct5);
GEN_ALLOC(vec);
GEN_CON_STRUCT(struct13);
GEN_ALLOC(con_struct13);
GEN_ALLOC(con_obj);
GEN_CON_STRUCT(struct14);
GEN_ALLOC(con_struct14);
GEN_CON_STRUCT(struct15);
GEN_ALLOC(con_struct15);
GEN_CON_STRUCT(struct16);
GEN_ALLOC(con_struct16);
GEN_CON_STRUCT(string);
GEN_ALLOC(con_string);
GEN_CON_STRUCT(vec);
GEN_ALLOC(con_vec);
GEN_CON_STRUCT(struct18);
GEN_ALLOC(con_struct18);
GEN_CON_STRUCT(reghl);
GEN_ALLOC(con_reghl);
GEN_CON_STRUCT(struct20);
GEN_ALLOC(con_struct20);
GEN_CON_STRUCT(struct21);
GEN_ALLOC(con_struct21);
GEN_CON_STRUCT(binop);
GEN_ALLOC(con_binop);
GEN_CON_STRUCT(unop);
GEN_ALLOC(con_unop);
GEN_CON_STRUCT(ternop);
GEN_ALLOC(con_ternop);
GEN_ADD_FIELD(obj);
GEN_CON_STRUCT(sem_arity2);
GEN_ALLOC(con_sem_arity2);
GEN_CON_STRUCT(struct28);
GEN_ALLOC(con_struct28);
GEN_CON_STRUCT(struct29);
GEN_ALLOC(con_struct29);
GEN_CON_STRUCT(struct30);
GEN_ALLOC(con_struct30);
GEN_CON_STRUCT(struct31);
GEN_ALLOC(con_struct31);
GEN_CON_STRUCT(struct32);
GEN_ALLOC(con_struct32);
GEN_CON_STRUCT(struct33);
GEN_ALLOC(con_struct33);
GEN_CON_STRUCT(struct34);
GEN_ALLOC(con_struct34);
GEN_CON_STRUCT(struct35);
GEN_ALLOC(con_struct35);
GEN_CON_STRUCT(struct55);
GEN_ALLOC(con_struct55);
GEN_ALLOC(unboxed_asm_opnd_callbacks);
GEN_ALLOC(unboxed_asm_opnd_list_callbacks);
GEN_ALLOC(unboxed_asm_signedness_callbacks);
GEN_ALLOC(unboxed_asm_boundary_callbacks);
GEN_ALLOC(unboxed_asm_annotation_list_callbacks);
GEN_ALLOC(unboxed_asm_annotation_callbacks);
GEN_ALLOC(unboxed_asm_callbacks);
GEN_ALLOC(unboxed_asm_insn);
GEN_ALLOC(unboxed_insndata);
GEN_ALLOC(unboxed_sem_sexpr_callbacks);
GEN_ALLOC(unboxed_sem_flop_callbacks);
GEN_ALLOC(unboxed_sem_id_callbacks);
GEN_ALLOC(unboxed_sem_address_callbacks);
GEN_ALLOC(unboxed_sem_var_callbacks);
GEN_ALLOC(unboxed_sem_linear_callbacks);
GEN_ALLOC(unboxed_sem_expr_cmp_callbacks);
GEN_ALLOC(unboxed_sem_expr_callbacks);
GEN_ALLOC(unboxed_sem_varl_callbacks);
GEN_ALLOC(unboxed_sem_varl_list_callbacks);
GEN_ALLOC(unboxed_sem_stmt_callbacks);
GEN_ALLOC(unboxed_branch_hint_callbacks);
GEN_ALLOC(unboxed_sem_exception_callbacks);
GEN_ALLOC(unboxed_sem_stmt_list_callbacks);
GEN_ALLOC(unboxed_callbacks);
GEN_ALLOC(unboxed_translate_result);
GEN_ALLOC(unboxed_lv_super_result);
GEN_ALLOC(unboxed_opt_result);
static INLINE_ATTR struct1_t __struct1(state_t s, obj_t left, obj_t payload, obj_t right, int_t size) {
  struct1_t res;
  res.left = left;
  res.payload = payload;
  res.right = right;
  res.size = size;
  return res;
}
static INLINE_ATTR struct2_t __struct2(state_t s, int_t rope_size, string_t rope_string) {
  struct2_t res;
  res.rope_size = rope_size;
  res.rope_string = rope_string;
  return res;
}
static INLINE_ATTR struct3_t __struct3(state_t s, obj_t rope_left, obj_t rope_right, int_t rope_size) {
  struct3_t res;
  res.rope_left = rope_left;
  res.rope_right = rope_right;
  res.rope_size = rope_size;
  return res;
}
static INLINE_ATTR struct5_t __struct5(state_t s, vec_t confData, string_t confLongName, obj_t confNext, string_t confShortName) {
  struct5_t res;
  res.confData = confData;
  res.confLongName = confLongName;
  res.confNext = confNext;
  res.confShortName = confShortName;
  return res;
}
static INLINE_ATTR asm_opnd_callbacks_t __asm_opnd_callbacks(state_t s, obj_t (*annotated)(state_t,obj_t,obj_t), obj_t (*bounded)(state_t,obj_t,obj_t), obj_t (*composite)(state_t,obj_t), obj_t (*imm)(state_t,int_t), obj_t (*memory)(state_t,obj_t), obj_t (*opnd_register)(state_t,string_t), obj_t (*post_op)(state_t,obj_t,obj_t), obj_t (*pre_op)(state_t,obj_t,obj_t), obj_t (*rel)(state_t,obj_t), obj_t (*scale)(state_t,int_t,obj_t), obj_t (*sign)(state_t,obj_t,obj_t), obj_t (*sum)(state_t,obj_t,obj_t)) {
  unboxed_asm_opnd_callbacks_t res;
  res.annotated = annotated;
  res.bounded = bounded;
  res.composite = composite;
  res.imm = imm;
  res.memory = memory;
  res.opnd_register = opnd_register;
  res.post_op = post_op;
  res.pre_op = pre_op;
  res.rel = rel;
  res.scale = scale;
  res.sign = sign;
  res.sum = sum;
  return (asm_opnd_callbacks_t) alloc_unboxed_asm_opnd_callbacks(s,res);
}
static INLINE_ATTR asm_opnd_list_callbacks_t __asm_opnd_list_callbacks(state_t s, obj_t (*init)(state_t), obj_t (*opnd_list_next)(state_t,obj_t,obj_t)) {
  unboxed_asm_opnd_list_callbacks_t res;
  res.init = init;
  res.opnd_list_next = opnd_list_next;
  return (asm_opnd_list_callbacks_t) alloc_unboxed_asm_opnd_list_callbacks(s,res);
}
static INLINE_ATTR asm_signedness_callbacks_t __asm_signedness_callbacks(state_t s, obj_t (*asm_signed)(state_t), obj_t (*asm_unsigned)(state_t)) {
  unboxed_asm_signedness_callbacks_t res;
  res.asm_signed = asm_signed;
  res.asm_unsigned = asm_unsigned;
  return (asm_signedness_callbacks_t) alloc_unboxed_asm_signedness_callbacks(s,res);
}
static INLINE_ATTR asm_boundary_callbacks_t __asm_boundary_callbacks(state_t s, obj_t (*sz)(state_t,int_t), obj_t (*sz_o)(state_t,int_t,int_t)) {
  unboxed_asm_boundary_callbacks_t res;
  res.sz = sz;
  res.sz_o = sz_o;
  return (asm_boundary_callbacks_t) alloc_unboxed_asm_boundary_callbacks(s,res);
}
static INLINE_ATTR asm_annotation_list_callbacks_t __asm_annotation_list_callbacks(state_t s, obj_t (*annotation_list_next)(state_t,obj_t,obj_t), obj_t (*init)(state_t)) {
  unboxed_asm_annotation_list_callbacks_t res;
  res.annotation_list_next = annotation_list_next;
  res.init = init;
  return (asm_annotation_list_callbacks_t) alloc_unboxed_asm_annotation_list_callbacks(s,res);
}
static INLINE_ATTR asm_annotation_callbacks_t __asm_annotation_callbacks(state_t s, obj_t (*ann_string)(state_t,string_t), obj_t (*function)(state_t,string_t,obj_t), obj_t (*opnd)(state_t,string_t,obj_t)) {
  unboxed_asm_annotation_callbacks_t res;
  res.ann_string = ann_string;
  res.function = function;
  res.opnd = opnd;
  return (asm_annotation_callbacks_t) alloc_unboxed_asm_annotation_callbacks(s,res);
}
static INLINE_ATTR asm_callbacks_t __asm_callbacks(state_t s, asm_annotation_callbacks_t annotation, asm_annotation_list_callbacks_t annotation_list, asm_boundary_callbacks_t boundary, obj_t (*insn)(state_t,int_t,string_t,obj_t,obj_t), asm_opnd_callbacks_t opnd, asm_opnd_list_callbacks_t opnd_list, asm_signedness_callbacks_t signedness) {
  unboxed_asm_callbacks_t res;
  res.annotation = annotation;
  res.annotation_list = annotation_list;
  res.boundary = boundary;
  res.insn = insn;
  res.opnd = opnd;
  res.opnd_list = opnd_list;
  res.signedness = signedness;
  return (asm_callbacks_t) alloc_unboxed_asm_callbacks(s,res);
}
static INLINE_ATTR struct13_t __struct13(state_t s, obj_t hd, obj_t tl) {
  struct13_t res;
  res.hd = hd;
  res.tl = tl;
  return res;
}
static INLINE_ATTR struct14_t __struct14(state_t s, obj_t boundary, obj_t opnd) {
  struct14_t res;
  res.boundary = boundary;
  res.opnd = opnd;
  return res;
}
static INLINE_ATTR struct15_t __struct15(state_t s, obj_t lhs, obj_t rhs) {
  struct15_t res;
  res.lhs = lhs;
  res.rhs = rhs;
  return res;
}
static INLINE_ATTR struct16_t __struct16(state_t s, obj_t expr, obj_t opnd) {
  struct16_t res;
  res.expr = expr;
  res.opnd = opnd;
  return res;
}
static INLINE_ATTR asm_insn_t __asm_insn(state_t s, obj_t annotations, int_t length, string_t mnemonic, obj_t opnds) {
  unboxed_asm_insn_t res;
  res.annotations = annotations;
  res.length = length;
  res.mnemonic = mnemonic;
  res.opnds = opnds;
  return (asm_insn_t) alloc_unboxed_asm_insn(s,res);
}
static INLINE_ATTR struct18_t __struct18(state_t s, obj_t imm, obj_t op) {
  struct18_t res;
  res.imm = imm;
  res.op = op;
  return res;
}
static INLINE_ATTR reghl_t __reghl(state_t s, obj_t regh, obj_t regl) {
  reghl_t res;
  res.regh = regh;
  res.regl = regl;
  return res;
}
static INLINE_ATTR struct20_t __struct20(state_t s, obj_t op, obj_t se) {
  struct20_t res;
  res.op = op;
  res.se = se;
  return res;
}
static INLINE_ATTR struct21_t __struct21(state_t s, reghl_t reghl, obj_t regi) {
  struct21_t res;
  res.reghl = reghl;
  res.regi = regi;
  return res;
}
static INLINE_ATTR binop_t __binop(state_t s, obj_t first, obj_t second) {
  binop_t res;
  res.first = first;
  res.second = second;
  return res;
}
static INLINE_ATTR unop_t __unop(state_t s, obj_t operand) {
  unop_t res;
  res.operand = operand;
  return res;
}
static INLINE_ATTR ternop_t __ternop(state_t s, obj_t first, obj_t second, obj_t third) {
  ternop_t res;
  res.first = first;
  res.second = second;
  res.third = third;
  return res;
}
static INLINE_ATTR insndata_t __insndata(state_t s, obj_t insn, int_t length) {
  unboxed_insndata_t res;
  res.insn = insn;
  res.length = length;
  return (insndata_t) alloc_unboxed_insndata(s,res);
}
static INLINE_ATTR sem_arity2_t __sem_arity2(state_t s, obj_t opnd1, obj_t opnd2) {
  sem_arity2_t res;
  res.opnd1 = opnd1;
  res.opnd2 = opnd2;
  return res;
}
static INLINE_ATTR sem_address_t __sem_address(state_t s, obj_t address, int_t size) {
  sem_address_t res;
  res.address = address;
  res.size = size;
  return res;
}
static INLINE_ATTR struct28_t __struct28(state_t s, obj_t lhs, obj_t rhs, int_t size) {
  struct28_t res;
  res.lhs = lhs;
  res.rhs = rhs;
  res.size = size;
  return res;
}
static INLINE_ATTR struct29_t __struct29(state_t s, sem_address_t address, obj_t lhs, int_t size) {
  struct29_t res;
  res.address = address;
  res.lhs = lhs;
  res.size = size;
  return res;
}
static INLINE_ATTR struct30_t __struct30(state_t s, sem_address_t address, obj_t rhs, int_t size) {
  struct30_t res;
  res.address = address;
  res.rhs = rhs;
  res.size = size;
  return res;
}
static INLINE_ATTR struct31_t __struct31(state_t s, obj_t cond, obj_t else_branch, obj_t then_branch) {
  struct31_t res;
  res.cond = cond;
  res.else_branch = else_branch;
  res.then_branch = then_branch;
  return res;
}
static INLINE_ATTR struct32_t __struct32(state_t s, obj_t hint, sem_address_t target) {
  struct32_t res;
  res.hint = hint;
  res.target = target;
  return res;
}
static INLINE_ATTR struct33_t __struct33(state_t s, obj_t cond, sem_address_t target_false, sem_address_t target_true) {
  struct33_t res;
  res.cond = cond;
  res.target_false = target_false;
  res.target_true = target_true;
  return res;
}
static INLINE_ATTR struct34_t __struct34(state_t s, int_t fromsize, obj_t opnd1) {
  struct34_t res;
  res.fromsize = fromsize;
  res.opnd1 = opnd1;
  return res;
}
static INLINE_ATTR struct35_t __struct35(state_t s, int_t const_) {
  struct35_t res;
  res.const_ = const_;
  return res;
}
static INLINE_ATTR sem_sexpr_callbacks_t __sem_sexpr_callbacks(state_t s, obj_t (*sem_sexpr_arb)(state_t), obj_t (*sem_sexpr_cmp)(state_t,obj_t), obj_t (*sem_sexpr_lin)(state_t,obj_t)) {
  unboxed_sem_sexpr_callbacks_t res;
  res.sem_sexpr_arb = sem_sexpr_arb;
  res.sem_sexpr_cmp = sem_sexpr_cmp;
  res.sem_sexpr_lin = sem_sexpr_lin;
  return (sem_sexpr_callbacks_t) alloc_unboxed_sem_sexpr_callbacks(s,res);
}
static INLINE_ATTR sem_flop_callbacks_t __sem_flop_callbacks(state_t s, obj_t (*sem_flop_)(state_t,int_t)) {
  unboxed_sem_flop_callbacks_t res;
  res.sem_flop_ = sem_flop_;
  return (sem_flop_callbacks_t) alloc_unboxed_sem_flop_callbacks(s,res);
}
static INLINE_ATTR sem_id_callbacks_t __sem_id_callbacks(state_t s, obj_t (*arch)(state_t,string_t), obj_t (*shared)(state_t,int_t), obj_t (*virt_t)(state_t,int_t)) {
  unboxed_sem_id_callbacks_t res;
  res.arch = arch;
  res.shared = shared;
  res.virt_t = virt_t;
  return (sem_id_callbacks_t) alloc_unboxed_sem_id_callbacks(s,res);
}
static INLINE_ATTR sem_address_callbacks_t __sem_address_callbacks(state_t s, obj_t (*sem_address_)(state_t,int_t,obj_t)) {
  unboxed_sem_address_callbacks_t res;
  res.sem_address_ = sem_address_;
  return (sem_address_callbacks_t) alloc_unboxed_sem_address_callbacks(s,res);
}
static INLINE_ATTR sem_var_callbacks_t __sem_var_callbacks(state_t s, obj_t (*sem_var_)(state_t,obj_t,int_t)) {
  unboxed_sem_var_callbacks_t res;
  res.sem_var_ = sem_var_;
  return (sem_var_callbacks_t) alloc_unboxed_sem_var_callbacks(s,res);
}
static INLINE_ATTR sem_linear_callbacks_t __sem_linear_callbacks(state_t s, obj_t (*sem_lin_add)(state_t,obj_t,obj_t), obj_t (*sem_lin_imm)(state_t,int_t), obj_t (*sem_lin_scale)(state_t,int_t,obj_t), obj_t (*sem_lin_sub)(state_t,obj_t,obj_t), obj_t (*sem_lin_var)(state_t,obj_t)) {
  unboxed_sem_linear_callbacks_t res;
  res.sem_lin_add = sem_lin_add;
  res.sem_lin_imm = sem_lin_imm;
  res.sem_lin_scale = sem_lin_scale;
  res.sem_lin_sub = sem_lin_sub;
  res.sem_lin_var = sem_lin_var;
  return (sem_linear_callbacks_t) alloc_unboxed_sem_linear_callbacks(s,res);
}
static INLINE_ATTR sem_expr_cmp_callbacks_t __sem_expr_cmp_callbacks(state_t s, obj_t (*sem_cmpeq)(state_t,obj_t,obj_t), obj_t (*sem_cmples)(state_t,obj_t,obj_t), obj_t (*sem_cmpleu)(state_t,obj_t,obj_t), obj_t (*sem_cmplts)(state_t,obj_t,obj_t), obj_t (*sem_cmpltu)(state_t,obj_t,obj_t), obj_t (*sem_cmpneq)(state_t,obj_t,obj_t)) {
  unboxed_sem_expr_cmp_callbacks_t res;
  res.sem_cmpeq = sem_cmpeq;
  res.sem_cmples = sem_cmples;
  res.sem_cmpleu = sem_cmpleu;
  res.sem_cmplts = sem_cmplts;
  res.sem_cmpltu = sem_cmpltu;
  res.sem_cmpneq = sem_cmpneq;
  return (sem_expr_cmp_callbacks_t) alloc_unboxed_sem_expr_cmp_callbacks(s,res);
}
static INLINE_ATTR sem_expr_callbacks_t __sem_expr_callbacks(state_t s, obj_t (*sem_and)(state_t,obj_t,obj_t), obj_t (*sem_div)(state_t,obj_t,obj_t), obj_t (*sem_divs)(state_t,obj_t,obj_t), obj_t (*sem_mod)(state_t,obj_t,obj_t), obj_t (*sem_mods)(state_t,obj_t,obj_t), obj_t (*sem_mul)(state_t,obj_t,obj_t), obj_t (*sem_or)(state_t,obj_t,obj_t), obj_t (*sem_sexpr)(state_t,obj_t), obj_t (*sem_shl)(state_t,obj_t,obj_t), obj_t (*sem_shr)(state_t,obj_t,obj_t), obj_t (*sem_shrs)(state_t,obj_t,obj_t), obj_t (*sem_sx)(state_t,int_t,obj_t), obj_t (*sem_xor)(state_t,obj_t,obj_t), obj_t (*sem_zx)(state_t,int_t,obj_t)) {
  unboxed_sem_expr_callbacks_t res;
  res.sem_and = sem_and;
  res.sem_div = sem_div;
  res.sem_divs = sem_divs;
  res.sem_mod = sem_mod;
  res.sem_mods = sem_mods;
  res.sem_mul = sem_mul;
  res.sem_or = sem_or;
  res.sem_sexpr = sem_sexpr;
  res.sem_shl = sem_shl;
  res.sem_shr = sem_shr;
  res.sem_shrs = sem_shrs;
  res.sem_sx = sem_sx;
  res.sem_xor = sem_xor;
  res.sem_zx = sem_zx;
  return (sem_expr_callbacks_t) alloc_unboxed_sem_expr_callbacks(s,res);
}
static INLINE_ATTR sem_varl_callbacks_t __sem_varl_callbacks(state_t s, obj_t (*sem_varl_)(state_t,obj_t,int_t,int_t)) {
  unboxed_sem_varl_callbacks_t res;
  res.sem_varl_ = sem_varl_;
  return (sem_varl_callbacks_t) alloc_unboxed_sem_varl_callbacks(s,res);
}
static INLINE_ATTR sem_varl_list_callbacks_t __sem_varl_list_callbacks(state_t s, obj_t (*sem_varl_list_init)(state_t), obj_t (*sem_varl_list_next)(state_t,obj_t,obj_t)) {
  unboxed_sem_varl_list_callbacks_t res;
  res.sem_varl_list_init = sem_varl_list_init;
  res.sem_varl_list_next = sem_varl_list_next;
  return (sem_varl_list_callbacks_t) alloc_unboxed_sem_varl_list_callbacks(s,res);
}
static INLINE_ATTR sem_stmt_callbacks_t __sem_stmt_callbacks(state_t s, obj_t (*sem_assign)(state_t,int_t,obj_t,obj_t), obj_t (*sem_branch)(state_t,obj_t,obj_t), obj_t (*sem_cbranch)(state_t,obj_t,obj_t,obj_t), obj_t (*sem_flop)(state_t,obj_t,obj_t,obj_t,obj_t), obj_t (*sem_ite)(state_t,obj_t,obj_t,obj_t), obj_t (*sem_load)(state_t,int_t,obj_t,obj_t), obj_t (*sem_prim)(state_t,string_t,obj_t,obj_t), obj_t (*sem_store)(state_t,int_t,obj_t,obj_t), obj_t (*sem_throw)(state_t,obj_t), obj_t (*sem_while)(state_t,obj_t,obj_t)) {
  unboxed_sem_stmt_callbacks_t res;
  res.sem_assign = sem_assign;
  res.sem_branch = sem_branch;
  res.sem_cbranch = sem_cbranch;
  res.sem_flop = sem_flop;
  res.sem_ite = sem_ite;
  res.sem_load = sem_load;
  res.sem_prim = sem_prim;
  res.sem_store = sem_store;
  res.sem_throw = sem_throw;
  res.sem_while = sem_while;
  return (sem_stmt_callbacks_t) alloc_unboxed_sem_stmt_callbacks(s,res);
}
static INLINE_ATTR branch_hint_callbacks_t __branch_hint_callbacks(state_t s, obj_t (*branch_hint_)(state_t,int_t)) {
  unboxed_branch_hint_callbacks_t res;
  res.branch_hint_ = branch_hint_;
  return (branch_hint_callbacks_t) alloc_unboxed_branch_hint_callbacks(s,res);
}
static INLINE_ATTR sem_exception_callbacks_t __sem_exception_callbacks(state_t s, obj_t (*arch)(state_t,string_t), obj_t (*shared)(state_t,int_t)) {
  unboxed_sem_exception_callbacks_t res;
  res.arch = arch;
  res.shared = shared;
  return (sem_exception_callbacks_t) alloc_unboxed_sem_exception_callbacks(s,res);
}
static INLINE_ATTR sem_stmt_list_callbacks_t __sem_stmt_list_callbacks(state_t s, obj_t (*sem_stmt_list_init)(state_t), obj_t (*sem_stmt_list_next)(state_t,obj_t,obj_t)) {
  unboxed_sem_stmt_list_callbacks_t res;
  res.sem_stmt_list_init = sem_stmt_list_init;
  res.sem_stmt_list_next = sem_stmt_list_next;
  return (sem_stmt_list_callbacks_t) alloc_unboxed_sem_stmt_list_callbacks(s,res);
}
static INLINE_ATTR callbacks_t __callbacks(state_t s, branch_hint_callbacks_t branch_hint, sem_address_callbacks_t sem_address, sem_exception_callbacks_t sem_exception, sem_expr_callbacks_t sem_expr, sem_expr_cmp_callbacks_t sem_expr_cmp, sem_flop_callbacks_t sem_flop, sem_id_callbacks_t sem_id, sem_linear_callbacks_t sem_linear, sem_sexpr_callbacks_t sem_sexpr, sem_stmt_callbacks_t sem_stmt, sem_stmt_list_callbacks_t sem_stmt_list, sem_var_callbacks_t sem_var, sem_varl_callbacks_t sem_varl, sem_varl_list_callbacks_t sem_varl_list) {
  unboxed_callbacks_t res;
  res.branch_hint = branch_hint;
  res.sem_address = sem_address;
  res.sem_exception = sem_exception;
  res.sem_expr = sem_expr;
  res.sem_expr_cmp = sem_expr_cmp;
  res.sem_flop = sem_flop;
  res.sem_id = sem_id;
  res.sem_linear = sem_linear;
  res.sem_sexpr = sem_sexpr;
  res.sem_stmt = sem_stmt;
  res.sem_stmt_list = sem_stmt_list;
  res.sem_var = sem_var;
  res.sem_varl = sem_varl;
  res.sem_varl_list = sem_varl_list;
  return (callbacks_t) alloc_unboxed_callbacks(s,res);
}
static INLINE_ATTR struct51_t __struct51(state_t s, obj_t live, obj_t maybelive) {
  struct51_t res;
  res.live = live;
  res.maybelive = maybelive;
  return res;
}
static INLINE_ATTR struct52_t __struct52(state_t s, obj_t conservative, obj_t greedy) {
  struct52_t res;
  res.conservative = conservative;
  res.greedy = greedy;
  return res;
}
static INLINE_ATTR translate_result_t __translate_result(state_t s, obj_t insns, obj_t succ_a, obj_t succ_b) {
  unboxed_translate_result_t res;
  res.insns = insns;
  res.succ_a = succ_a;
  res.succ_b = succ_b;
  return (translate_result_t) alloc_unboxed_translate_result(s,res);
}
static INLINE_ATTR lv_super_result_t __lv_super_result(state_t s, obj_t after, obj_t initial) {
  unboxed_lv_super_result_t res;
  res.after = after;
  res.initial = initial;
  return (lv_super_result_t) alloc_unboxed_lv_super_result(s,res);
}
static INLINE_ATTR struct55_t __struct55(state_t s, insndata_t insn, obj_t tl) {
  struct55_t res;
  res.insn = insn;
  res.tl = tl;
  return res;
}
static INLINE_ATTR struct56_t __struct56(state_t s, obj_t a, obj_t b) {
  struct56_t res;
  res.a = a;
  res.b = b;
  return res;
}
static INLINE_ATTR opt_result_t __opt_result(state_t s, obj_t insns, obj_t rreil) {
  unboxed_opt_result_t res;
  res.insns = insns;
  res.rreil = rreil;
  return (opt_result_t) alloc_unboxed_opt_result(s,res);
}
#define slice(vec_data,ofs,sz) ((vec_data >> ofs) & ((1ul << sz)-1))

static INLINE_ATTR vec_t gen_vec(unsigned int vec_sz,vec_data_t vec_data) {
  vec_t res;
  res.size=vec_sz;
  res.data=vec_data;
  return res;
}

jmp_buf*
gdsl_avr_rreil_err_tgt(state_t s) {
  return &(s->err_tgt);
};

char*
gdsl_avr_rreil_get_error_message(state_t s) {
  return s->err_str;
};


static INLINE_ATTR int_t consume(state_t s, int_t size) {
  if(s->ip + size > s->ip_limit) {
    s->err_str = "GDSL runtime: end of code input stream";
    longjmp(s->err_tgt, 1);
  };
  int_t result = 0;
  while (size)
    result |= s->ip_start[(s->ip++ - s->ip_start) ^ s->token_addr_inv] << (--size*8);
  return result;
}

static INLINE_ATTR void unconsume(state_t s, int_t size) {
  s->ip -= size;
}

void
gdsl_avr_rreil_endianness(state_t s, int_t le, int_t size) {
  if ((size != 1) && (size != 2) && (size != 4) && (size != 8)) {
    s->err_str = "GDSL runtime: endianness(); invalid token size";
    longjmp(s->err_tgt, 100);
  };
  if ((le != 0) && (le != 1)) {
    s->err_str = "GDSL runtime: endianness(); invalid kind";
    longjmp(s->err_tgt, 101);
  };
  s->token_addr_inv = le * (size - 1);
}

static int_t vec_to_signed(state_t s, vec_t v) {
  unsigned int bit_size = sizeof(int_t)*8;
  if (v.size>bit_size) {
    s->err_str = "GDSL runtime: signed applied to very long vector";
    longjmp(s->err_tgt,2);
  };
  int bits_to_fill = bit_size-v.size;
  return (((int_t) v.data) << bits_to_fill) >> bits_to_fill;
}

static int_t vec_to_unsigned(state_t s, vec_t v) {
  unsigned int int_bitsize = sizeof(int_t)*8;
  if (v.size>int_bitsize) {
    s->err_str = "GDSL runtime: unsigned applied to very long vector";
    longjmp(s->err_tgt,2);
  };
  return (int_t) v.data;
}

static INLINE_ATTR vec_t vec_not(state_t s, vec_t v) {
  vec_data_t mask = (1<<((vec_data_t) v.size))-1;
  vec_t res;
  res.size = v.size;
  res.data = v.data ^ mask;
  return res;
}

static INLINE_ATTR vec_data_t vec_eq(state_t s, vec_data_t d1, vec_data_t d2) {
  return (d1==d2 ? 1 : 0);
}

static INLINE_ATTR vec_t vec_concat(state_t s, vec_t v1, vec_t v2) {
  vec_t res;
  res.size = v1.size+v2.size;
  res.data = v1.data << v2.size | v2.data;
  return res;
}

static string_t int_to_string(state_t s, int_t v) {
  char *str = (char*) alloc(s, 23)+22;
  int negate = v<0;
  int r;
  *str = 0;
  do {
    r = v % 10;
    v = v / 10;
    *--str = "9876543210123456789"[r+9];
  } while (v!=0);
  if (negate) {
    *--str = '-';
  }
  return alloc_string(s,str);
};

void
gdsl_avr_rreil_set_code(state_t s, unsigned char* buf, size_t buf_len, size_t base) {
  s->ip = buf;
  s->ip_limit = buf+buf_len;
  s->ip_start = buf;
  s->ip_base = base;
}

size_t
gdsl_avr_rreil_get_ip(state_t s) {
  return s->ip_base + (s->ip - s->ip_start);
}

int_t
gdsl_avr_rreil_seek(state_t s, size_t i) {
  size_t size = (size_t)(s->ip_limit - s->ip_start);
  size_t start_offset = i - s->ip_base;
  if(start_offset >= size)
    return 1;
  s->ip = s->ip_start + start_offset;
  return 0;
}

string_t
gdsl_avr_rreil_merge_rope(state_t s, obj_t rope) {
  string_t buf,end;
  int_t len =
gdsl_avr_rreil_rope_length(s,rope);
  if (len<0) return ""; /* make MSVC happy */
  buf = (string_t) alloc(s,(size_t) len);
  end =
gdsl_avr_rreil_rope_to_string(s,rope,buf);
  *end = 0;
  return buf;
}

void
gdsl_avr_rreil_destroy(state_t s) {
gdsl_avr_rreil_reset_heap(s);
  char* heap;
  free(s->heap_base);
  /* free heap of GDSL constants */
  heap = s->const_heap_base;
  while (heap!=NULL) {
    char* prev = *((char**) heap);
    free (heap);
    heap = prev;
  }
  free(s);
}

static obj_t search(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it,obj_t acc);
static obj_t maybe_search_right(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it,obj_t acc);
static obj_t maybe_search_left(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it,obj_t acc);
static int_t _slash_m(state_t s,int_t a,int_t b);
static int_t _slash_p(state_t s,int_t a,int_t b);
static obj_t maybe_search_left_(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it);
static obj_t search_(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it);
static obj_t maybe_search_right_(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it);
static obj_t asm_convert_opnds(state_t s,asm_callbacks_t cbs,obj_t opnds);
static obj_t convert_inner_(state_t s,asm_callbacks_t cbs,obj_t list,obj_t opnds);
static obj_t asm_convert_opnd(state_t s,asm_callbacks_t cbs,obj_t opnd__);
static obj_t show_slash_asm_opnds(state_t s,obj_t dlim,obj_t opnds);
static obj_t show_slash_asm_opnd(state_t s,obj_t opnd__);
static obj_t _slash_(state_t s);
static obj_t sizeof_next(state_t s);
static obj_t generalize_opnd(state_t s,obj_t opnd__);
static obj_t generalize_opse(state_t s,struct20_t opse);
static obj_t opnd(state_t s,struct20_t opse);
static obj_t opnd_(state_t s,struct20_t opse);
static obj_t rreil_convert_sem_stmt(state_t s,callbacks_t cbs,obj_t stmt);
static obj_t rreil_convert_sem_stmt_list(state_t s,callbacks_t cbs,obj_t stmts);
static obj_t convert_inner__(state_t s,callbacks_t cbs,obj_t list,obj_t stmts);
static obj_t rreil_show_stmts(state_t s,obj_t ss);
static obj_t rreil_show_stmt(state_t s,obj_t s_);
static obj_t visit_stmt(state_t s,obj_t kills,obj_t stmt);
static obj_t lv_kills(state_t s,obj_t stmts);
static obj_t visit(state_t s,obj_t kills,obj_t stmts);
static obj_t lv_kill(state_t s,obj_t kills,obj_t stmt);
static struct52_t cont(state_t s,struct52_t state,struct13_t x,obj_t kill,struct52_t cont_state);
static struct52_t sweep(state_t s,obj_t stack,struct52_t state);
static struct56_t relative_next(state_t s,obj_t stmts);
static struct56_t relative_next_generic(state_t s,int_t (*is_sem_ip_)(state_t,obj_t),obj_t stmts);

/* fitree-lt? */
static int_t fitree_lt_q_(state_t s,obj_t a,obj_t b) {
  if (select_int(s,13/* lo */,a)<select_int(s,13/* lo */,b)) {
    return 1 /* '1' */;
  } else {
    if (select_int(s,13/* lo */,b)<select_int(s,13/* lo */,a)) {
      return 0 /* '0' */;
    } else {
      return select_int(s,14/* hi */,a)<select_int(s,14/* hi */,b);
    };
  };
}
typedef struct {
  int_t (*func)(state_t,obj_t,obj_t,obj_t);
} closure_int__obj_obj_t;
static int_t fitree_lt_q__closure(state_t s,obj_t v,obj_t a,obj_t b) {
  return fitree_lt_q_(s,a,b);
}
static INLINE_ATTR obj_t constructor_Br(state_t s,struct1_t arg_of_Br) {
  con_struct1_t adt;
  adt.tag = 11/* Br */;
  adt.payload = arg_of_Br;
  return (obj_t) alloc_con_struct1(s,adt);
}
/* bbtree-min */
static obj_t bbtree_min(state_t s,obj_t bt) {
  switch (((con_obj_t*) bt)->tag) {
    case 11/* Br */: {
      struct1_t t;
      obj_t scrutinee;
      t = ((con_struct1_t*) bt)->payload;
      scrutinee = t.left;
      switch (*((int_t*) scrutinee)) {
        case CON_Lf: {
          return t.payload;
        }; break;
        default: {
          return bbtree_min(s,t.left);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-min at specifications/basis/bbtree.ml:235.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* mkBr */
static obj_t mkBr(state_t s,obj_t v,int_t sz,obj_t l,obj_t r) {
  return constructor_Br(s,__struct1(s,l,v,r,sz));
}
/* mkN */
static obj_t mkN(state_t s,obj_t v,obj_t l,obj_t r) {
  switch (*((int_t*) l)) {
    case CON_Lf: {
      switch (*((int_t*) r)) {
        case CON_Lf: {
          return mkBr(s,v,1,l,r);
        }; break;
        case 11/* Br */: {
          struct1_t x;
          x = ((con_struct1_t*) r)->payload;
          return mkBr(s,v,(x.size+1),l,r);
        }; break;
        default: {
          s->err_str = "pattern match failure in mkN at specifications/basis/bbtree.ml:85.16-17";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 11/* Br */: {
      struct1_t x;
      x = ((con_struct1_t*) l)->payload;
      switch (*((int_t*) r)) {
        case CON_Lf: {
          return mkBr(s,v,(x.size+1),l,r);
        }; break;
        case 11/* Br */: {
          struct1_t y;
          y = ((con_struct1_t*) r)->payload;
          return mkBr(s,v,((x.size+y.size)+1),l,r);
        }; break;
        default: {
          s->err_str = "pattern match failure in mkN at specifications/basis/bbtree.ml:90.16-17";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in mkN at specifications/basis/bbtree.ml:87.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-rotateDoubleRight */
static obj_t bbtree_rotateDoubleRight(state_t s,obj_t c,obj_t l,obj_t r) {
  switch (((con_obj_t*) l)->tag) {
    case 11/* Br */: {
      struct1_t l_;
      obj_t scrutinee;
      l_ = ((con_struct1_t*) l)->payload;
      scrutinee = l_.right;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 11/* Br */: {
          struct1_t lr;
          lr = ((con_struct1_t*) scrutinee)->payload;
          return mkN(s,lr.payload,mkN(s,l_.payload,l_.left,lr.left),mkN(s,c,lr.right,r));
        }; break;
        default: {
          s->err_str = "pattern match failure in bbtree-rotateDoubleRight at specifications/basis/bbtree.ml:116.16-18";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-rotateDoubleRight at specifications/basis/bbtree.ml:114.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-rotateDoubleLeft */
static obj_t bbtree_rotateDoubleLeft(state_t s,obj_t a,obj_t l,obj_t r) {
  switch (((con_obj_t*) r)->tag) {
    case 11/* Br */: {
      struct1_t r_;
      obj_t scrutinee;
      r_ = ((con_struct1_t*) r)->payload;
      scrutinee = r_.left;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 11/* Br */: {
          struct1_t rl;
          rl = ((con_struct1_t*) scrutinee)->payload;
          return mkN(s,rl.payload,mkN(s,a,l,rl.left),mkN(s,r_.payload,rl.right,r_.right));
        }; break;
        default: {
          s->err_str = "pattern match failure in bbtree-rotateDoubleLeft at specifications/basis/bbtree.ml:108.16-18";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-rotateDoubleLeft at specifications/basis/bbtree.ml:106.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-rotateSingleRight */
static obj_t bbtree_rotateSingleRight(state_t s,obj_t b,obj_t l,obj_t r) {
  switch (((con_obj_t*) l)->tag) {
    case 11/* Br */: {
      struct1_t l_;
      l_ = ((con_struct1_t*) l)->payload;
      return mkN(s,l_.payload,l_.left,mkN(s,b,l_.right,r));
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-rotateSingleRight at specifications/basis/bbtree.ml:101.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-rotateSingleLeft */
static obj_t bbtree_rotateSingleLeft(state_t s,obj_t a,obj_t l,obj_t r) {
  switch (((con_obj_t*) r)->tag) {
    case 11/* Br */: {
      struct1_t r_;
      r_ = ((con_struct1_t*) r)->payload;
      return mkN(s,r_.payload,mkN(s,a,l,r_.left),r_.right);
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-rotateSingleLeft at specifications/basis/bbtree.ml:96.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-size */
static int_t bbtree_size(state_t s,obj_t t) {
  switch (*((int_t*) t)) {
    case CON_Lf: {
      return 0;
    }; break;
    case 11/* Br */: {
      struct1_t x;
      x = ((con_struct1_t*) t)->payload;
      return x.size;
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-size at specifications/basis/bbtree.ml:75.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* mkT */
static obj_t mkT(state_t s,obj_t v,obj_t lt,obj_t rt) {
  switch (*((int_t*) lt)) {
    case CON_Lf: {
      switch (*((int_t*) rt)) {
        case CON_Lf: {
          return mkBr(s,v,1,lt,rt);
        }; break;
        case 11/* Br */: {
          struct1_t r;
          obj_t scrutinee;
          r = ((con_struct1_t*) rt)->payload;
          scrutinee = r.left;
          switch (*((int_t*) scrutinee)) {
            case CON_Lf: {
              obj_t scrutinee_;
              scrutinee_ = r.right;
              switch (*((int_t*) scrutinee_)) {
                case CON_Lf: {
                  return mkBr(s,v,2,lt,rt);
                }; break;
                default: {
                  return bbtree_rotateSingleLeft(s,v,lt,rt);
                }; break;
              };
            }; break;
            case 11/* Br */: {
              struct1_t rl;
              obj_t scrutinee_;
              rl = ((con_struct1_t*) scrutinee)->payload;
              scrutinee_ = r.right;
              switch (*((int_t*) scrutinee_)) {
                case CON_Lf: {
                  return bbtree_rotateDoubleLeft(s,v,lt,rt);
                }; break;
                case 11/* Br */: {
                  struct1_t rr;
                  rr = ((con_struct1_t*) scrutinee_)->payload;
                  if (rl.size<rr.size) {
                    return bbtree_rotateSingleLeft(s,v,lt,rt);
                  } else {
                    return bbtree_rotateDoubleLeft(s,v,lt,rt);
                  };
                }; break;
                default: {
                  s->err_str = "pattern match failure in mkT at specifications/basis/bbtree.ml:141.28-30";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            default: {
              s->err_str = "pattern match failure in mkT at specifications/basis/bbtree.ml:138.22-24";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        default: {
          s->err_str = "pattern match failure in mkT at specifications/basis/bbtree.ml:131.16-17";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 11/* Br */: {
      struct1_t l;
      l = ((con_struct1_t*) lt)->payload;
      switch (*((int_t*) rt)) {
        case CON_Lf: {
          obj_t scrutinee;
          scrutinee = l.left;
          switch (*((int_t*) scrutinee)) {
            case CON_Lf: {
              obj_t scrutinee_;
              scrutinee_ = l.right;
              switch (*((int_t*) scrutinee_)) {
                case CON_Lf: {
                  return mkBr(s,v,2,lt,rt);
                }; break;
                default: {
                  return bbtree_rotateDoubleRight(s,v,lt,rt);
                }; break;
              };
            }; break;
            case 11/* Br */: {
              struct1_t ll;
              obj_t scrutinee_;
              ll = ((con_struct1_t*) scrutinee)->payload;
              scrutinee_ = l.right;
              switch (*((int_t*) scrutinee_)) {
                case CON_Lf: {
                  return bbtree_rotateSingleRight(s,v,lt,rt);
                }; break;
                case 11/* Br */: {
                  struct1_t lr;
                  lr = ((con_struct1_t*) scrutinee_)->payload;
                  if (lr.size<ll.size) {
                    return bbtree_rotateSingleRight(s,v,lt,rt);
                  } else {
                    return bbtree_rotateDoubleRight(s,v,lt,rt);
                  };
                }; break;
                default: {
                  s->err_str = "pattern match failure in mkT at specifications/basis/bbtree.ml:160.28-30";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            default: {
              s->err_str = "pattern match failure in mkT at specifications/basis/bbtree.ml:157.22-24";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 11/* Br */: {
          struct1_t r;
          r = ((con_struct1_t*) rt)->payload;
          if (3*l.size<=r.size) {
            if (bbtree_size(s,r.left)<bbtree_size(s,r.right)) {
              return bbtree_rotateSingleLeft(s,v,lt,rt);
            } else {
              return bbtree_rotateDoubleLeft(s,v,lt,rt);
            };
          } else {
            if (3*r.size<=l.size) {
              if (bbtree_size(s,l.right)<bbtree_size(s,l.left)) {
                return bbtree_rotateSingleRight(s,v,lt,rt);
              } else {
                return bbtree_rotateDoubleRight(s,v,lt,rt);
              };
            } else {
              return mkBr(s,v,((l.size+r.size)+1),lt,rt);
            };
          };
        }; break;
        default: {
          s->err_str = "pattern match failure in mkT at specifications/basis/bbtree.ml:166.16-17";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in mkT at specifications/basis/bbtree.ml:148.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-remove-min */
static obj_t bbtree_remove_min(state_t s,obj_t bt) {
  switch (((con_obj_t*) bt)->tag) {
    case 11/* Br */: {
      struct1_t t;
      obj_t scrutinee;
      t = ((con_struct1_t*) bt)->payload;
      scrutinee = t.left;
      switch (*((int_t*) scrutinee)) {
        case CON_Lf: {
          return t.right;
        }; break;
        case 11/* Br */: {
          return mkT(s,t.payload,bbtree_remove_min(s,t.left),t.right);
        }; break;
        default: {
          s->err_str = "pattern match failure in bbtree-remove-min at specifications/basis/bbtree.ml:229.16-17";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-remove-min at specifications/basis/bbtree.ml:226.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-concat */
static obj_t bbtree_concat(state_t s,obj_t btl,obj_t btr) {
  switch (*((int_t*) btl)) {
    case CON_Lf: {
      return btr;
    }; break;
    case 11/* Br */: {
      struct1_t l;
      l = ((con_struct1_t*) btl)->payload;
      switch (*((int_t*) btr)) {
        case CON_Lf: {
          return btl;
        }; break;
        case 11/* Br */: {
          struct1_t r;
          r = ((con_struct1_t*) btr)->payload;
          if (l.size*3<r.size) {
            return mkT(s,r.payload,bbtree_concat(s,btl,r.left),r.right);
          } else {
            if (r.size*3<l.size) {
              return mkT(s,l.payload,l.left,bbtree_concat(s,l.right,btr));
            } else {
              return mkT(s,bbtree_min(s,btr),btl,bbtree_remove_min(s,btr));
            };
          };
        }; break;
        default: {
          s->err_str = "pattern match failure in bbtree-concat at specifications/basis/bbtree.ml:316.14-15";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-concat at specifications/basis/bbtree.ml:313.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-add */
static INLINE_ATTR int_t invoke_int_obj_obj_closure(state_t s,obj_t closure,obj_t arg1,obj_t arg2) {
  return ((struct {int_t (*func)(state_t,obj_t,obj_t,obj_t);}*) closure)->func(s,closure,arg1,arg2);
}
static obj_t bbtree_add(state_t s,obj_t lt_q_,obj_t bt,obj_t x) {
  switch (*((int_t*) bt)) {
    case CON_Lf: {
      return mkBr(s,x,1,bt,bt);
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      if (invoke_int_obj_obj_closure(s,lt_q_,x,t.payload)) {
        return mkT(s,t.payload,bbtree_add(s,lt_q_,t.left,x),t.right);
      } else {
        if (invoke_int_obj_obj_closure(s,lt_q_,t.payload,x)) {
          return mkT(s,t.payload,t.left,bbtree_add(s,lt_q_,t.right,x));
        } else {
          return mkBr(s,x,t.size,t.left,t.right);
        };
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-add at specifications/basis/bbtree.ml:184.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-concat3 */
static obj_t bbtree_concat3(state_t s,obj_t lt_q_,obj_t btl,obj_t x,obj_t btr) {
  switch (*((int_t*) btl)) {
    case CON_Lf: {
      return bbtree_add(s,lt_q_,btr,x);
    }; break;
    case 11/* Br */: {
      struct1_t l;
      l = ((con_struct1_t*) btl)->payload;
      switch (*((int_t*) btr)) {
        case CON_Lf: {
          return bbtree_add(s,lt_q_,btl,x);
        }; break;
        case 11/* Br */: {
          struct1_t r;
          r = ((con_struct1_t*) btr)->payload;
          if (l.size*3<r.size) {
            return mkT(s,r.payload,bbtree_concat3(s,lt_q_,btl,x,r.left),r.right);
          } else {
            if (r.size*3<l.size) {
              return mkT(s,l.payload,l.left,bbtree_concat3(s,lt_q_,l.right,x,btr));
            } else {
              return mkN(s,x,btl,btr);
            };
          };
        }; break;
        default: {
          s->err_str = "pattern match failure in bbtree-concat3 at specifications/basis/bbtree.ml:260.14-15";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-concat3 at specifications/basis/bbtree.ml:257.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-split-greater-than */
static obj_t bbtree_split_greater_than(state_t s,obj_t lt_q_,obj_t bt,obj_t x) {
  switch (*((int_t*) bt)) {
    case CON_Lf: {
      return bt;
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      if (invoke_int_obj_obj_closure(s,lt_q_,t.payload,x)) {
        return bbtree_split_greater_than(s,lt_q_,t.right,x);
      } else {
        if (invoke_int_obj_obj_closure(s,lt_q_,x,t.payload)) {
          return bbtree_concat3(s,lt_q_,bbtree_split_greater_than(s,lt_q_,t.left,x),t.payload,t.right);
        } else {
          return t.right;
        };
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-split-greater-than at specifications/basis/bbtree.ml:283.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-split-less-than */
static obj_t bbtree_split_less_than(state_t s,obj_t lt_q_,obj_t bt,obj_t x) {
  switch (*((int_t*) bt)) {
    case CON_Lf: {
      return bt;
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      if (invoke_int_obj_obj_closure(s,lt_q_,x,t.payload)) {
        return bbtree_split_less_than(s,lt_q_,t.left,x);
      } else {
        if (invoke_int_obj_obj_closure(s,lt_q_,t.payload,x)) {
          return bbtree_concat3(s,lt_q_,t.left,t.payload,bbtree_split_less_than(s,lt_q_,t.right,x));
        } else {
          return t.left;
        };
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-split-less-than at specifications/basis/bbtree.ml:272.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-difference */
static obj_t bbtree_difference(state_t s,obj_t lt_q_,obj_t btl,obj_t btr) {
  switch (*((int_t*) btl)) {
    case CON_Lf: {
      return btl;
    }; break;
    case 11/* Br */: {
      switch (*((int_t*) btr)) {
        case CON_Lf: {
          return btl;
        }; break;
        case 11/* Br */: {
          struct1_t r;
          r = ((con_struct1_t*) btr)->payload;
          return bbtree_concat(s,bbtree_difference(s,lt_q_,bbtree_split_less_than(s,lt_q_,btl,r.payload),r.left),bbtree_difference(s,lt_q_,bbtree_split_greater_than(s,lt_q_,btl,r.payload),r.right));
        }; break;
        default: {
          s->err_str = "pattern match failure in bbtree-difference at specifications/basis/bbtree.ml:297.16-17";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-difference at specifications/basis/bbtree.ml:294.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* fitree-difference */
static INLINE_ATTR obj_t gen_int__obj_obj_closure(state_t s,int_t (*func)(state_t,obj_t,obj_t,obj_t)) {
  closure_int__obj_obj_t content;
  content.func = func;
  closure_int__obj_obj_t* closure = (closure_int__obj_obj_t*) alloc(s, sizeof(closure_int__obj_obj_t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t fitree_difference(state_t s,obj_t a,obj_t b) {
  return bbtree_difference(s,gen_int__obj_obj_closure(s,&fitree_lt_q__closure),a,b);
}
/* bbtree-simple-union */
static obj_t bbtree_simple_union(state_t s,obj_t lt_q_,obj_t btl,obj_t btr) {
  switch (*((int_t*) btl)) {
    case CON_Lf: {
      return btr;
    }; break;
    case 11/* Br */: {
      struct1_t l;
      l = ((con_struct1_t*) btl)->payload;
      switch (*((int_t*) btr)) {
        case CON_Lf: {
          return btl;
        }; break;
        case 11/* Br */: {
          return bbtree_concat3(s,lt_q_,bbtree_simple_union(s,lt_q_,l.left,bbtree_split_less_than(s,lt_q_,btr,l.payload)),l.payload,bbtree_simple_union(s,lt_q_,l.right,bbtree_split_greater_than(s,lt_q_,btr,l.payload)));
        }; break;
        default: {
          s->err_str = "pattern match failure in bbtree-simple-union at specifications/basis/bbtree.ml:396.16-17";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-simple-union at specifications/basis/bbtree.ml:393.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-union */
static obj_t bbtree_union(state_t s,obj_t lt_q_,obj_t btl,obj_t btr) {
  return bbtree_simple_union(s,lt_q_,btl,btr);
}
/* fitree-union */
static obj_t fitree_union(state_t s,obj_t a,obj_t b) {
  return bbtree_union(s,gen_int__obj_obj_closure(s,&fitree_lt_q__closure),a,b);
}
/* fitree-add */
static obj_t fitree_add(state_t s,obj_t s_,obj_t x) {
  return bbtree_add(s,gen_int__obj_obj_closure(s,&fitree_lt_q__closure),s_,x);
}
/* interval-contains? */
static int_t interval_contains_q_(state_t s,obj_t x,obj_t y) {
  return (select_int(s,13/* lo */,x)<=select_int(s,13/* lo */,y)) & (select_int(s,14/* hi */,y)<=select_int(s,14/* hi */,x));
}
/* split */
static obj_t split(state_t s,obj_t acc,obj_t x,obj_t y) {
  if (interval_contains_q_(s,y,x)) {
    if (select_int(s,14/* hi */,y)==select_int(s,14/* hi */,x)) {
      return fitree_add(s,acc,add_field_int(s,14/* hi */,(select_int(s,13/* lo */,x)-1),add_field_int(s,13/* lo */,select_int(s,13/* lo */,y),NULL)));
    } else {
      obj_t iteRes;
      if (select_int(s,13/* lo */,y)==select_int(s,13/* lo */,x)) {
        iteRes = acc;
      } else {
        iteRes = fitree_add(s,acc,add_field_int(s,14/* hi */,(select_int(s,13/* lo */,x)-1),add_field_int(s,13/* lo */,select_int(s,13/* lo */,y),NULL)));
      };
      return fitree_add(s,iteRes,add_field_int(s,14/* hi */,select_int(s,14/* hi */,y),add_field_int(s,13/* lo */,(select_int(s,14/* hi */,x)+1),NULL)));
    };
  } else {
    if (select_int(s,13/* lo */,x)<select_int(s,13/* lo */,y)) {
      return fitree_add(s,acc,add_field_int(s,14/* hi */,select_int(s,14/* hi */,y),add_field_int(s,13/* lo */,(select_int(s,14/* hi */,x)+1),NULL)));
    } else {
      return fitree_add(s,acc,add_field_int(s,14/* hi */,(select_int(s,13/* lo */,x)-1),add_field_int(s,13/* lo */,select_int(s,13/* lo */,y),NULL)));
    };
  };
}
/* interval-overlaps? */
static int_t interval_overlaps_q_(state_t s,obj_t x,obj_t y) {
  return (select_int(s,13/* lo */,x)<=select_int(s,14/* hi */,y)) & (select_int(s,13/* lo */,y)<=select_int(s,14/* hi */,x));
}
/* interval-split */
static obj_t interval_split(state_t s,obj_t x,obj_t acc,obj_t y) {
  if (interval_contains_q_(s,x,y)) {
    return acc;
  } else {
    if (interval_overlaps_q_(s,x,y)) {
      return split(s,acc,x,y);
    } else {
      return fitree_add(s,acc,y);
    };
  };
}
typedef struct {
  obj_t (*func)(state_t,obj_t,obj_t,obj_t);
  obj_t arg1;
} closure_obj_obj__obj_obj_t;
static obj_t interval_split_closure(state_t s,obj_t v,obj_t acc,obj_t y) {
  closure_obj_obj__obj_obj_t* c = (closure_obj_obj__obj_obj_t*) v;
  return interval_split(s,c->arg1,acc,y);
}
/* bbtree-fold */
static INLINE_ATTR obj_t invoke_obj_obj_obj_closure(state_t s,obj_t closure,obj_t arg1,obj_t arg2) {
  return ((struct {obj_t (*func)(state_t,obj_t,obj_t,obj_t);}*) closure)->func(s,closure,arg1,arg2);
}
static obj_t bbtree_fold(state_t s,obj_t f,obj_t s_,obj_t bt) {
  switch (*((int_t*) bt)) {
    case CON_Lf: {
      return s_;
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      return bbtree_fold(s,f,invoke_obj_obj_obj_closure(s,f,bbtree_fold(s,f,s_,t.right),t.payload),t.left);
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-fold at specifications/basis/bbtree.ml:416.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* fitree-fold */
static obj_t fitree_fold(state_t s,obj_t f,obj_t s_,obj_t t) {
  return bbtree_fold(s,f,s_,t);
}
/* fitree-interval-split */
static INLINE_ATTR obj_t gen_obj_obj__obj_obj_closure(state_t s,obj_t (*func)(state_t,obj_t,obj_t,obj_t),obj_t arg1) {
  closure_obj_obj__obj_obj_t content;
  content.func = func;
  content.arg1 = arg1;
  closure_obj_obj__obj_obj_t* closure = (closure_obj_obj__obj_obj_t*) alloc(s, sizeof(closure_obj_obj__obj_obj_t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t fitree_interval_split(state_t s,obj_t t,obj_t x) {
  return fitree_fold(s,gen_obj_obj__obj_obj_closure(s,&interval_split_closure,x),s->fitree_empty,t);
}
/* rebuild */
static obj_t rebuild(state_t s,obj_t t,obj_t overlapping,obj_t x) {
  return fitree_union(s,fitree_difference(s,t,overlapping),fitree_interval_split(s,overlapping,x));
}
/* bbtree-max */
static obj_t bbtree_max(state_t s,obj_t bt) {
  switch (((con_obj_t*) bt)->tag) {
    case 11/* Br */: {
      struct1_t t;
      obj_t scrutinee;
      t = ((con_struct1_t*) bt)->payload;
      scrutinee = t.right;
      switch (*((int_t*) scrutinee)) {
        case CON_Lf: {
          return t.payload;
        }; break;
        default: {
          return bbtree_max(s,t.right);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-max at specifications/basis/bbtree.ml:244.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* search */
static obj_t search(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it,obj_t acc) {
  switch (*((int_t*) it)) {
    case CON_Lf: {
      return acc;
    }; break;
    case 11/* Br */: {
      struct1_t t;
      obj_t iteRes;
      t = ((con_struct1_t*) it)->payload;
      if (p_q_(s,x,t.payload)) {
        iteRes = fitree_add(s,acc,t.payload);
      } else {
        iteRes = acc;
      };
      return maybe_search_left(s,p_q_,x,t.left,maybe_search_right(s,p_q_,x,t.right,iteRes));
    }; break;
    default: {
      s->err_str = "pattern match failure in search at specifications/basis/bbtree.ml:474.16-17";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* maybe-search-right */
static obj_t maybe_search_right(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it,obj_t acc) {
  switch (*((int_t*) it)) {
    case CON_Lf: {
      return acc;
    }; break;
    default: {
      if (select_int(s,13/* lo */,bbtree_min(s,it))<=select_int(s,14/* hi */,x)) {
        return search(s,p_q_,x,it,acc);
      } else {
        return acc;
      };
    }; break;
  };
}
/* maybe-search-left */
static obj_t maybe_search_left(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it,obj_t acc) {
  switch (*((int_t*) it)) {
    case CON_Lf: {
      return acc;
    }; break;
    default: {
      if (select_int(s,13/* lo */,x)<=select_int(s,14/* hi */,bbtree_max(s,it))) {
        return search(s,p_q_,x,it,acc);
      } else {
        return acc;
      };
    }; break;
  };
}
/* fitree-collect */
static obj_t fitree_collect(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t it,obj_t x) {
  return search(s,p_q_,x,it,s->fitree_empty);
}
/* fitree-collect-overlapping */
static obj_t fitree_collect_overlapping(state_t s,obj_t t,obj_t x) {
  return fitree_collect(s,interval_overlaps_q_,t,x);
}
/* rebuild-overlapping */
static obj_t rebuild_overlapping(state_t s,obj_t t,obj_t x) {
  return rebuild(s,t,fitree_collect_overlapping(s,t,x),x);
}
typedef struct {
  obj_t (*func)(state_t,obj_t,obj_t,obj_t);
} closure_obj__obj_obj_t;
static obj_t rebuild_overlapping_closure(state_t s,obj_t v,obj_t t,obj_t x) {
  return rebuild_overlapping(s,t,x);
}
static INLINE_ATTR obj_t constructor_VIRT_T(state_t s,int_t arg_of_VIRT_T) {
  con_int_t adt;
  adt.tag = 274/* VIRT_T */;
  adt.payload = arg_of_VIRT_T;
  return (obj_t) alloc_con_int(s,adt);
}
/* ltf? */
static int_t ltf_q_(state_t s,obj_t a,obj_t b) {
  switch (((con_obj_t*) b)->tag) {
    case 274/* VIRT_T */: {
      return 0 /* '0' */;
    }; break;
    default: {
      return ((con_obj_t*) a)->tag<((con_obj_t*) b)->tag;
    }; break;
  };
}
/* rreil-ltid? */
static int_t rreil_ltid_q_(state_t s,obj_t a,obj_t b) {
  switch (((con_obj_t*) a)->tag) {
    case 274/* VIRT_T */: {
      int_t x;
      x = ((con_int_t*) a)->payload;
      switch (((con_obj_t*) b)->tag) {
        case 274/* VIRT_T */: {
          int_t y;
          y = ((con_int_t*) b)->payload;
          return x<y;
        }; break;
        default: {
          return 1 /* '1' */;
        }; break;
      };
    }; break;
    default: {
      return ltf_q_(s,a,b);
    }; break;
  };
}
/* fmap-lt? */
static int_t fmap_lt_q_(state_t s,obj_t a,obj_t b) {
  return rreil_ltid_q_(s,select_obj(s,76/* id */,a),select_obj(s,76/* id */,b));
}
static int_t fmap_lt_q__closure(state_t s,obj_t v,obj_t a,obj_t b) {
  return fmap_lt_q_(s,a,b);
}
static INLINE_ATTR obj_t constructor_RopeLeaf(state_t s,struct2_t arg_of_RopeLeaf) {
  con_struct2_t adt;
  adt.tag = 1/* RopeLeaf */;
  adt.payload = arg_of_RopeLeaf;
  return (obj_t) alloc_con_struct2(s,adt);
}
static INLINE_ATTR obj_t constructor_RopeInner(state_t s,struct3_t arg_of_RopeInner) {
  con_struct3_t adt;
  adt.tag = 2/* RopeInner */;
  adt.payload = arg_of_RopeInner;
  return (obj_t) alloc_con_struct3(s,adt);
}
/* rope-length */
static int_t rope_length(state_t s,obj_t r) {
  switch (((con_obj_t*) r)->tag) {
    case 1/* RopeLeaf */: {
      struct2_t n;
      n = ((con_struct2_t*) r)->payload;
      return n.rope_size;
    }; break;
    case 2/* RopeInner */: {
      struct3_t n;
      n = ((con_struct3_t*) r)->payload;
      return n.rope_size;
    }; break;
    default: {
      s->err_str = "pattern match failure in rope-length at specifications/basis/prelude.ml:19.17-18";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rope-print */
static void rope_print(state_t s,obj_t r) {
  switch (((con_obj_t*) r)->tag) {
    case 1/* RopeLeaf */: {
      struct2_t n;
      n = ((con_struct2_t*) r)->payload;
      fputs(n.rope_string, s->handle);
    }; break;
    case 2/* RopeInner */: {
      struct3_t n;
      n = ((con_struct3_t*) r)->payload;
      rope_print(s,n.rope_left);
      rope_print(s,n.rope_right);
    }; break;
    default: {
      s->err_str = "pattern match failure in rope-print at specifications/basis/prelude.ml:25.17-18";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* add-to-string */
static string_t add_to_string(state_t s,obj_t r,string_t ptr) {
  switch (((con_obj_t*) r)->tag) {
    case 1/* RopeLeaf */: {
      struct2_t n;
      n = ((con_struct2_t*) r)->payload;
      return (string_t) memcpy(ptr,n.rope_string, (size_t) n.rope_size)+n.rope_size;
    }; break;
    case 2/* RopeInner */: {
      struct3_t n;
      string_t ptr_;
      n = ((con_struct3_t*) r)->payload;
      ptr_ = add_to_string(s,n.rope_left,ptr);
      return add_to_string(s,n.rope_right,ptr_);
    }; break;
    default: {
      s->err_str = "pattern match failure in add-to-string at specifications/basis/prelude.ml:38.23-24";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rope-to-string */
static string_t rope_to_string(state_t s,obj_t r,string_t buf) {
  return add_to_string(s,r,buf);
}
/* from-string-lit */
static obj_t from_string_lit(state_t s,string_t s_) {
  return constructor_RopeLeaf(s,__struct2(s,strlen(s_),s_));
}
/* string-from-rope */
static string_t string_from_rope(state_t s,obj_t r) {
  switch (((con_obj_t*) r)->tag) {
    case 1/* RopeLeaf */: {
      struct2_t l;
      l = ((con_struct2_t*) r)->payload;
      return l.rope_string;
    }; break;
    case 2/* RopeInner */: {
      return gdsl_avr_rreil_merge_rope(s,r);
    }; break;
    default: {
      s->err_str = "pattern match failure in string-from-rope at specifications/basis/prelude.ml:55.14-15";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show-int */
static obj_t show_int(state_t s,int_t s_) {
  return from_string_lit(s,int_to_string(s,s_));
}
/* +++ */
static obj_t _plus__plus__plus_(state_t s,obj_t r1,obj_t r2) {
  return constructor_RopeInner(s,__struct3(s,r1,r2,(rope_length(s,r1)+rope_length(s,r2))));
}
/* /m */
static int_t _slash_m(state_t s,int_t a,int_t b) {
  if (b<0) {
    return (0-_slash_p(s,a,(0-b)));
  } else {
    if (0<=a) {
      return (a)/(b);
    } else {
      return (((a-b)+1))/(b);
    };
  };
}
/* /p */
static int_t _slash_p(state_t s,int_t a,int_t b) {
  if (b<0) {
    return (0-_slash_m(s,a,(0-b)));
  } else {
    if (a<=0) {
      return (a)/(b);
    } else {
      return (((a+b)-1))/(b);
    };
  };
}
/* addi */
static int_t addi(state_t s,int_t a,int_t b) {
  return (a+b);
}
/* subi */
static int_t subi(state_t s,int_t a,int_t b) {
  return (a-b);
}
static INLINE_ATTR obj_t constructor_IO_SOME(state_t s,int_t arg_of_IO_SOME) {
  con_int_t adt;
  adt.tag = 3/* IO_SOME */;
  adt.payload = arg_of_IO_SOME;
  return (obj_t) alloc_con_int(s,adt);
}
/* io-binop */
static obj_t io_binop(state_t s,int_t (*binop_)(state_t,int_t,int_t),obj_t a,obj_t b) {
  switch (((con_obj_t*) a)->tag) {
    case 3/* IO_SOME */: {
      int_t i;
      i = ((con_int_t*) a)->payload;
      switch (((con_obj_t*) b)->tag) {
        case 3/* IO_SOME */: {
          int_t j;
          j = ((con_int_t*) b)->payload;
          return constructor_IO_SOME(s,binop_(s,i,j));
        }; break;
        case CON_IO_NONE: {
          return alloc_int(s,CON_IO_NONE);
        }; break;
        default: {
          s->err_str = "pattern match failure in io-binop at specifications/basis/prelude.ml:103.9-16";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case CON_IO_NONE: {
      return alloc_int(s,CON_IO_NONE);
    }; break;
    default: {
      s->err_str = "pattern match failure in io-binop at specifications/basis/prelude.ml:105.6-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* otherwise */
static int_t otherwise(state_t s,monad_t s_) {
  return 1 /* '1' */;
}
/* has-conf */
static int_t has_conf(state_t s,obj_t co) {
  switch (*((int_t*) co)) {
    case CON_END: {
      return 0 /* '0' */;
    }; break;
    default: {
      return 1 /* '1' */;
    }; break;
  };
}
static INLINE_ATTR obj_t constructor_CONF(state_t s,struct5_t arg_of_CONF) {
  con_struct5_t adt;
  adt.tag = 6/* CONF */;
  adt.payload = arg_of_CONF;
  return (obj_t) alloc_con_struct5(s,adt);
}
/* conf-short */
static string_t conf_short(state_t s,obj_t co) {
  switch (((con_obj_t*) co)->tag) {
    case 6/* CONF */: {
      struct5_t c;
      c = ((con_struct5_t*) co)->payload;
      return c.confShortName;
    }; break;
    default: {
      s->err_str = "pattern match failure in conf-short at specifications/basis/prelude.ml:161.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* conf-long */
static string_t conf_long(state_t s,obj_t co) {
  switch (((con_obj_t*) co)->tag) {
    case 6/* CONF */: {
      struct5_t c;
      c = ((con_struct5_t*) co)->payload;
      return c.confLongName;
    }; break;
    default: {
      s->err_str = "pattern match failure in conf-long at specifications/basis/prelude.ml:166.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* conf-data */
static int_t conf_data(state_t s,obj_t co) {
  switch (((con_obj_t*) co)->tag) {
    case 6/* CONF */: {
      struct5_t c;
      c = ((con_struct5_t*) co)->payload;
      return vec_to_unsigned(s,c.confData);
    }; break;
    default: {
      s->err_str = "pattern match failure in conf-data at specifications/basis/prelude.ml:171.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* conf-next */
static obj_t conf_next(state_t s,obj_t co) {
  switch (((con_obj_t*) co)->tag) {
    case 6/* CONF */: {
      struct5_t c;
      c = ((con_struct5_t*) co)->payload;
      return c.confNext;
    }; break;
    default: {
      s->err_str = "pattern match failure in conf-next at specifications/basis/prelude.ml:176.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* &* */
static obj_t _amp__star_(state_t s,obj_t c,obj_t cs) {
  switch (*((int_t*) c)) {
    case CON_END: {
      return cs;
    }; break;
    case 6/* CONF */: {
      struct5_t r;
      struct5_t con_payload;
      r = ((con_struct5_t*) c)->payload;
      con_payload = __struct5(s,r.confData,r.confLongName,cs,r.confShortName);
      return constructor_CONF(s,__struct5(s,con_payload.confData,con_payload.confLongName,con_payload.confNext,con_payload.confShortName));
    }; break;
    default: {
      s->err_str = "pattern match failure in &* at specifications/basis/prelude.ml:189.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* conf */
static obj_t conf(state_t s,vec_t data,obj_t short_,obj_t long_) {
  return constructor_CONF(s,__struct5(s,data,string_from_rope(s,long_),alloc_int(s,CON_END),string_from_rope(s,short_)));
}
/* e */
static int_t e(state_t s,int_t kind) {
  switch (kind) {
    case CON_LITTLE_ENDIAN: {
      return 1;
    }; break;
    default: {
      s->err_str = "pattern match failure in e at specifications/basis/prelude.ml:210.7-21";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* set-endianness */
static void set_endianness(state_t s,int_t kind,int_t size) {
  gdsl_avr_rreil_endianness(s,e(s,kind),size);
}
/* bbtree-empty? */
static int_t bbtree_empty_q_(state_t s,obj_t t) {
  switch (*((int_t*) t)) {
    case CON_Lf: {
      return 1 /* '1' */;
    }; break;
    default: {
      return 0 /* '0' */;
    }; break;
  };
}
/* bbtree-add-with */
static obj_t bbtree_add_with(state_t s,obj_t lt_q_,obj_t (*f)(state_t,obj_t,obj_t),obj_t bt,obj_t x) {
  switch (*((int_t*) bt)) {
    case CON_Lf: {
      return mkBr(s,x,1,bt,bt);
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      if (invoke_int_obj_obj_closure(s,lt_q_,x,t.payload)) {
        return mkT(s,t.payload,bbtree_add_with(s,lt_q_,f,t.left,x),t.right);
      } else {
        if (invoke_int_obj_obj_closure(s,lt_q_,t.payload,x)) {
          return mkT(s,t.payload,t.left,bbtree_add_with(s,lt_q_,f,t.right,x));
        } else {
          return mkBr(s,f(s,t.payload,x),t.size,t.left,t.right);
        };
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-add-with at specifications/basis/bbtree.ml:195.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-singleton */
static obj_t bbtree_singleton(state_t s,obj_t x) {
  return mkBr(s,x,1,alloc_int(s,CON_Lf),alloc_int(s,CON_Lf));
}
/* bbtree-contains? */
static int_t bbtree_contains_q_(state_t s,obj_t lt_q_,obj_t bt,obj_t x) {
  switch (*((int_t*) bt)) {
    case CON_Lf: {
      return 0 /* '0' */;
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      if (invoke_int_obj_obj_closure(s,lt_q_,x,t.payload)) {
        return bbtree_contains_q_(s,lt_q_,t.left,x);
      } else {
        if (invoke_int_obj_obj_closure(s,lt_q_,t.payload,x)) {
          return bbtree_contains_q_(s,lt_q_,t.right,x);
        } else {
          return 1 /* '1' */;
        };
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-contains? at specifications/basis/bbtree.ml:328.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-get */
static obj_t bbtree_get(state_t s,obj_t lt_q_,obj_t bt,obj_t x) {
  switch (((con_obj_t*) bt)->tag) {
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      if (invoke_int_obj_obj_closure(s,lt_q_,x,t.payload)) {
        return bbtree_get(s,lt_q_,t.left,x);
      } else {
        if (invoke_int_obj_obj_closure(s,lt_q_,t.payload,x)) {
          return bbtree_get(s,lt_q_,t.right,x);
        } else {
          return t.payload;
        };
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-get at specifications/basis/bbtree.ml:338.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-get-orelse */
static obj_t bbtree_get_orelse(state_t s,obj_t lt_q_,obj_t bt,obj_t x) {
  switch (*((int_t*) bt)) {
    case CON_Lf: {
      return x;
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      if (invoke_int_obj_obj_closure(s,lt_q_,x,t.payload)) {
        return bbtree_get_orelse(s,lt_q_,t.left,x);
      } else {
        if (invoke_int_obj_obj_closure(s,lt_q_,t.payload,x)) {
          return bbtree_get_orelse(s,lt_q_,t.right,x);
        } else {
          return t.payload;
        };
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-get-orelse at specifications/basis/bbtree.ml:349.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* bbtree-intersection */
static obj_t bbtree_intersection(state_t s,obj_t lt_q_,obj_t btl,obj_t btr) {
  switch (*((int_t*) btl)) {
    case CON_Lf: {
      return btl;
    }; break;
    case 11/* Br */: {
      switch (*((int_t*) btr)) {
        case CON_Lf: {
          return btr;
        }; break;
        case 11/* Br */: {
          struct1_t r;
          r = ((con_struct1_t*) btr)->payload;
          if (bbtree_contains_q_(s,lt_q_,btl,r.payload)) {
            return bbtree_concat3(s,lt_q_,bbtree_intersection(s,lt_q_,bbtree_split_less_than(s,lt_q_,btl,r.payload),r.left),r.payload,bbtree_intersection(s,lt_q_,bbtree_split_greater_than(s,lt_q_,btl,r.payload),r.right));
          } else {
            return bbtree_concat(s,bbtree_intersection(s,lt_q_,bbtree_split_less_than(s,lt_q_,btl,r.payload),r.left),bbtree_intersection(s,lt_q_,bbtree_split_greater_than(s,lt_q_,btl,r.payload),r.right));
          };
        }; break;
        default: {
          s->err_str = "pattern match failure in bbtree-intersection at specifications/basis/bbtree.ml:363.16-17";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-intersection at specifications/basis/bbtree.ml:360.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* prettyKey */
static obj_t prettyKey(state_t s,obj_t (*f)(state_t,obj_t),obj_t s_,obj_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,s_,f(s,x)),from_string_lit(s,","));
}
typedef struct {
  obj_t (*func)(state_t,obj_t,obj_t,obj_t);
  obj_t (*arg1)(state_t,obj_t);
} closure_obj__obj_obj_fun__obj_obj_t;
static obj_t prettyKey_closure(state_t s,obj_t v,obj_t s_,obj_t x) {
  closure_obj__obj_obj_fun__obj_obj_t* c = (closure_obj__obj_obj_fun__obj_obj_t*) v;
  return prettyKey(s,c->arg1,s_,x);
}
/* bbtree-pretty */
static INLINE_ATTR obj_t gen_obj__obj_obj_fun__obj_obj_closure(state_t s,obj_t (*func)(state_t,obj_t,obj_t,obj_t),obj_t (*arg1)(state_t,obj_t)) {
  closure_obj__obj_obj_fun__obj_obj_t content;
  content.func = func;
  content.arg1 = arg1;
  closure_obj__obj_obj_fun__obj_obj_t* closure = (closure_obj__obj_obj_fun__obj_obj_t*) alloc(s, sizeof(closure_obj__obj_obj_fun__obj_obj_t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t bbtree_pretty(state_t s,obj_t (*f)(state_t,obj_t),obj_t bt) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"{"),bbtree_fold(s,gen_obj__obj_obj_fun__obj_obj_closure(s,&prettyKey_closure,f),from_string_lit(s,""),bt)),from_string_lit(s,"}"));
}
/* maybe-search-left */
static obj_t maybe_search_left_(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it) {
  switch (*((int_t*) it)) {
    case CON_Lf: {
      return alloc_vec(s,gen_vec(1, 0 /* '0' */));
    }; break;
    default: {
      if (select_int(s,13/* lo */,x)<=select_int(s,14/* hi */,bbtree_max(s,it))) {
        return search_(s,p_q_,x,it);
      } else {
        return alloc_vec(s,gen_vec(1, 0 /* '0' */));
      };
    }; break;
  };
}
/* search */
static obj_t search_(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it) {
  switch (*((int_t*) it)) {
    case CON_Lf: {
      return alloc_vec(s,gen_vec(1, 0 /* '0' */));
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) it)->payload;
      if (p_q_(s,x,t.payload)) {
        return alloc_vec(s,gen_vec(1, 1 /* '1' */));
      } else {
        return alloc_vec(s,gen_vec(0, (((vec_t*) maybe_search_left_(s,p_q_,x,t.left))->data) | (((vec_t*) maybe_search_right_(s,p_q_,x,t.right))->data)));
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in search at specifications/basis/bbtree.ml:508.16-17";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* maybe-search-right */
static obj_t maybe_search_right_(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it) {
  switch (*((int_t*) it)) {
    case CON_Lf: {
      return alloc_vec(s,gen_vec(1, 0 /* '0' */));
    }; break;
    default: {
      if (select_int(s,13/* lo */,bbtree_min(s,it))<=select_int(s,14/* hi */,x)) {
        return search_(s,p_q_,x,it);
      } else {
        return alloc_vec(s,gen_vec(1, 0 /* '0' */));
      };
    }; break;
  };
}
/* fitree-any */
static obj_t fitree_any(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t it,obj_t x) {
  return search_(s,p_q_,x,it);
}
/* fitree-any-overlapping? */
static obj_t fitree_any_overlapping_q_(state_t s,obj_t t,obj_t x) {
  return fitree_any(s,interval_overlaps_q_,t,x);
}
/* fitree-interval-difference */
static INLINE_ATTR obj_t gen_obj__obj_obj_closure(state_t s,obj_t (*func)(state_t,obj_t,obj_t,obj_t)) {
  closure_obj__obj_obj_t content;
  content.func = func;
  closure_obj__obj_obj_t* closure = (closure_obj__obj_obj_t*) alloc(s, sizeof(closure_obj__obj_obj_t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t fitree_interval_difference(state_t s,obj_t a,obj_t b) {
  return fitree_fold(s,gen_obj__obj_obj_closure(s,&rebuild_overlapping_closure),a,b);
}
/* fitree-singleton */
static obj_t fitree_singleton(state_t s,obj_t x) {
  return bbtree_singleton(s,x);
}
/* pretty-interval */
static obj_t pretty_interval(state_t s,obj_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"["),show_int(s,select_int(s,13/* lo */,x))),from_string_lit(s,",")),show_int(s,select_int(s,14/* hi */,x))),from_string_lit(s,"]"));
}
/* fitree-pretty */
static obj_t fitree_pretty(state_t s,obj_t t) {
  return bbtree_pretty(s,pretty_interval,t);
}
/* convert-inner */
static obj_t convert_inner(state_t s,asm_callbacks_t cbs,obj_t list,obj_t anns) {
  switch (*((int_t*) anns)) {
    case CON_ASM_ANNS_NIL: {
      return list;
    }; break;
    default: {
      s->err_str = "pattern match failure in convert-inner at specifications/asm/asm-cif.ml:96.20-24";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* asm-convert-annotations */
static obj_t asm_convert_annotations(state_t s,asm_callbacks_t cbs,obj_t anns) {
  return convert_inner(s,cbs,cbs->annotation_list->init(s),anns);
}
static INLINE_ATTR obj_t constructor_ASM_OPNDS_CONS(state_t s,struct13_t arg_of_ASM_OPNDS_CONS) {
  con_struct13_t adt;
  adt.tag = 20/* ASM_OPNDS_CONS */;
  adt.payload = arg_of_ASM_OPNDS_CONS;
  return (obj_t) alloc_con_struct13(s,adt);
}
static INLINE_ATTR obj_t constructor_ASM_COMPOSITE(state_t s,obj_t arg_of_ASM_COMPOSITE) {
  con_obj_t adt;
  adt.tag = 32/* ASM_COMPOSITE */;
  adt.payload = arg_of_ASM_COMPOSITE;
  return (obj_t) alloc_con_obj(s,adt);
}
static INLINE_ATTR obj_t constructor_ASM_BOUNDED(state_t s,struct14_t arg_of_ASM_BOUNDED) {
  con_struct14_t adt;
  adt.tag = 30/* ASM_BOUNDED */;
  adt.payload = arg_of_ASM_BOUNDED;
  return (obj_t) alloc_con_struct14(s,adt);
}
static INLINE_ATTR obj_t constructor_ASM_SUM(state_t s,struct15_t arg_of_ASM_SUM) {
  con_struct15_t adt;
  adt.tag = 28/* ASM_SUM */;
  adt.payload = arg_of_ASM_SUM;
  return (obj_t) alloc_con_struct15(s,adt);
}
static INLINE_ATTR obj_t constructor_ASM_POST_OP(state_t s,struct16_t arg_of_ASM_POST_OP) {
  con_struct16_t adt;
  adt.tag = 24/* ASM_POST_OP */;
  adt.payload = arg_of_ASM_POST_OP;
  return (obj_t) alloc_con_struct16(s,adt);
}
static INLINE_ATTR obj_t constructor_ASM_IMM(state_t s,int_t arg_of_ASM_IMM) {
  con_int_t adt;
  adt.tag = 23/* ASM_IMM */;
  adt.payload = arg_of_ASM_IMM;
  return (obj_t) alloc_con_int(s,adt);
}
static INLINE_ATTR obj_t constructor_ASM_REGISTER(state_t s,string_t arg_of_ASM_REGISTER) {
  con_string_t adt;
  adt.tag = 21/* ASM_REGISTER */;
  adt.payload = arg_of_ASM_REGISTER;
  return (obj_t) alloc_con_string(s,adt);
}
static INLINE_ATTR obj_t constructor_ASM_BOUNDARY_SZ(state_t s,int_t arg_of_ASM_BOUNDARY_SZ) {
  con_int_t adt;
  adt.tag = 35/* ASM_BOUNDARY_SZ */;
  adt.payload = arg_of_ASM_BOUNDARY_SZ;
  return (obj_t) alloc_con_int(s,adt);
}
/* asm-convert-boundary */
static obj_t asm_convert_boundary(state_t s,asm_callbacks_t cbs,obj_t b) {
  switch (((con_obj_t*) b)->tag) {
    case 35/* ASM_BOUNDARY_SZ */: {
      int_t sz;
      sz = ((con_int_t*) b)->payload;
      return cbs->boundary->sz(s,(sz+0));
    }; break;
    default: {
      s->err_str = "pattern match failure in asm-convert-boundary at specifications/asm/asm-cif.ml:90.22-25";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* asm-convert-opnds */
static obj_t asm_convert_opnds(state_t s,asm_callbacks_t cbs,obj_t opnds) {
  return convert_inner_(s,cbs,cbs->opnd_list->init(s),opnds);
}
/* convert-inner */
static obj_t convert_inner_(state_t s,asm_callbacks_t cbs,obj_t list,obj_t opnds) {
  switch (*((int_t*) opnds)) {
    case CON_ASM_OPNDS_NIL: {
      return list;
    }; break;
    case 20/* ASM_OPNDS_CONS */: {
      struct13_t next;
      next = ((con_struct13_t*) opnds)->payload;
      return convert_inner_(s,cbs,cbs->opnd_list->opnd_list_next(s,asm_convert_opnd(s,cbs,next.hd),list),next.tl);
    }; break;
    default: {
      s->err_str = "pattern match failure in convert-inner at specifications/asm/asm-cif.ml:62.21-25";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* asm-convert-opnd */
static obj_t asm_convert_opnd(state_t s,asm_callbacks_t cbs,obj_t opnd__) {
  switch (((con_obj_t*) opnd__)->tag) {
    case 21/* ASM_REGISTER */: {
      string_t r;
      r = ((con_string_t*) opnd__)->payload;
      return cbs->opnd->opnd_register(s,r);
    }; break;
    case 23/* ASM_IMM */: {
      int_t i;
      i = ((con_int_t*) opnd__)->payload;
      return cbs->opnd->imm(s,(i+0));
    }; break;
    case 24/* ASM_POST_OP */: {
      struct16_t po;
      po = ((con_struct16_t*) opnd__)->payload;
      return cbs->opnd->post_op(s,asm_convert_opnd(s,cbs,po.expr),asm_convert_opnd(s,cbs,po.opnd));
    }; break;
    case 28/* ASM_SUM */: {
      struct15_t s_;
      s_ = ((con_struct15_t*) opnd__)->payload;
      return cbs->opnd->sum(s,asm_convert_opnd(s,cbs,s_.lhs),asm_convert_opnd(s,cbs,s_.rhs));
    }; break;
    case 30/* ASM_BOUNDED */: {
      struct14_t b;
      b = ((con_struct14_t*) opnd__)->payload;
      return cbs->opnd->bounded(s,asm_convert_boundary(s,cbs,b.boundary),asm_convert_opnd(s,cbs,b.opnd));
    }; break;
    case 32/* ASM_COMPOSITE */: {
      obj_t c;
      c = ((con_obj_t*) opnd__)->payload;
      return cbs->opnd->composite(s,asm_convert_opnds(s,cbs,c));
    }; break;
    default: {
      s->err_str = "pattern match failure in asm-convert-opnd at specifications/asm/asm-cif.ml:80.18-19";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* asm-convert-insn */
static obj_t asm_convert_insn(state_t s,asm_callbacks_t cbs,asm_insn_t insn) {
  return cbs->insn(s,(insn->length+0),insn->mnemonic,asm_convert_annotations(s,cbs,insn->annotations),asm_convert_opnds(s,cbs,insn->opnds));
}
/* asm-insn */
static asm_insn_t asm_insn(state_t s,int_t l,string_t m,obj_t o) {
  return __asm_insn(s,s->asm_anns_none,l,m,o);
}
/* asm-opnds-one */
static obj_t asm_opnds_one(state_t s,obj_t hd) {
  return constructor_ASM_OPNDS_CONS(s,__struct13(s,hd,alloc_int(s,CON_ASM_OPNDS_NIL)));
}
/* asm-opnds-more */
static obj_t asm_opnds_more(state_t s,obj_t hd,obj_t tl) {
  return constructor_ASM_OPNDS_CONS(s,__struct13(s,hd,tl));
}
/* asm-reg */
static obj_t asm_reg(state_t s,string_t r) {
  return constructor_ASM_REGISTER(s,r);
}
/* asm-imm */
static obj_t asm_imm(state_t s,int_t simm) {
  return constructor_ASM_IMM(s,simm);
}
/* asm-po */
static obj_t asm_po(state_t s,obj_t expr,obj_t opnd__) {
  return constructor_ASM_POST_OP(s,__struct16(s,expr,opnd__));
}
/* asm-sum */
static obj_t asm_sum(state_t s,obj_t l,obj_t r) {
  return constructor_ASM_SUM(s,__struct15(s,l,r));
}
/* asm-bounded */
static obj_t asm_bounded(state_t s,obj_t b,obj_t o) {
  return constructor_ASM_BOUNDED(s,__struct14(s,b,o));
}
/* asm-composite */
static obj_t asm_composite(state_t s,obj_t c) {
  return constructor_ASM_COMPOSITE(s,c);
}
/* asm-boundary-sz */
static obj_t asm_boundary_sz(state_t s,int_t sz) {
  return constructor_ASM_BOUNDARY_SZ(s,sz);
}
/* -++ */
static obj_t __plus__plus_(state_t s,obj_t a,obj_t b) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,a,from_string_lit(s," ")),b);
}
/* show/asm-annotations */
static obj_t show_slash_asm_annotations(state_t s,obj_t anns) {
  switch (*((int_t*) anns)) {
    case CON_ASM_ANNS_NIL: {
      return from_string_lit(s,"");
    }; break;
    default: {
      s->err_str = "pattern match failure in show/asm-annotations at specifications/asm/asm-pretty.ml:41.18-19";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/asm-boundary */
static obj_t show_slash_asm_boundary(state_t s,obj_t b) {
  switch (((con_obj_t*) b)->tag) {
    case 35/* ASM_BOUNDARY_SZ */: {
      int_t s_;
      s_ = ((con_int_t*) b)->payload;
      return _plus__plus__plus_(s,from_string_lit(s,"/"),show_int(s,s_));
    }; break;
    default: {
      s->err_str = "pattern match failure in show/asm-boundary at specifications/asm/asm-pretty.ml:32.22-25";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/asm-opnds */
static obj_t show_slash_asm_opnds(state_t s,obj_t dlim,obj_t opnds) {
  switch (*((int_t*) opnds)) {
    case CON_ASM_OPNDS_NIL: {
      return from_string_lit(s,"");
    }; break;
    case 20/* ASM_OPNDS_CONS */: {
      struct13_t c;
      obj_t scrutinee;
      obj_t caseRes;
      c = ((con_struct13_t*) opnds)->payload;
      scrutinee = c.tl;
      switch (*((int_t*) scrutinee)) {
        case CON_ASM_OPNDS_NIL: {
          caseRes = from_string_lit(s,"");
        }; break;
        default: {
          caseRes = _plus__plus__plus_(s,dlim,show_slash_asm_opnds(s,dlim,c.tl));
        }; break;
      };
      return _plus__plus__plus_(s,show_slash_asm_opnd(s,c.hd),caseRes);
    }; break;
    default: {
      s->err_str = "pattern match failure in show/asm-opnds at specifications/asm/asm-pretty.ml:7.19-20";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/asm-opnd */
static obj_t show_slash_asm_opnd(state_t s,obj_t opnd__) {
  switch (((con_obj_t*) opnd__)->tag) {
    case 21/* ASM_REGISTER */: {
      string_t r;
      r = ((con_string_t*) opnd__)->payload;
      return from_string_lit(s,r);
    }; break;
    case 23/* ASM_IMM */: {
      int_t i;
      i = ((con_int_t*) opnd__)->payload;
      return show_int(s,i);
    }; break;
    case 24/* ASM_POST_OP */: {
      struct16_t po;
      po = ((con_struct16_t*) opnd__)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"("),show_slash_asm_opnd(s,po.opnd)),from_string_lit(s," [")),show_slash_asm_opnd(s,po.opnd)),from_string_lit(s," := ")),show_slash_asm_opnd(s,po.expr)),from_string_lit(s,"])"));
    }; break;
    case 28/* ASM_SUM */: {
      struct15_t s_;
      s_ = ((con_struct15_t*) opnd__)->payload;
      return _plus__plus__plus_(s,__plus__plus_(s,__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"("),show_slash_asm_opnd(s,s_.lhs)),from_string_lit(s,"+")),show_slash_asm_opnd(s,s_.rhs)),from_string_lit(s,")"));
    }; break;
    case 30/* ASM_BOUNDED */: {
      struct14_t b;
      b = ((con_struct14_t*) opnd__)->payload;
      return _plus__plus__plus_(s,show_slash_asm_opnd(s,b.opnd),show_slash_asm_boundary(s,b.boundary));
    }; break;
    case 32/* ASM_COMPOSITE */: {
      obj_t c;
      c = ((con_obj_t*) opnd__)->payload;
      return show_slash_asm_opnds(s,from_string_lit(s,":"),c);
    }; break;
    default: {
      s->err_str = "pattern match failure in show/asm-opnd at specifications/asm/asm-pretty.ml:22.18-19";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* asm-pretty */
static obj_t asm_pretty(state_t s,asm_insn_t ai) {
  return __plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,ai->mnemonic),show_slash_asm_annotations(s,ai->annotations)),show_slash_asm_opnds(s,from_string_lit(s," "),ai->opnds));
}
static INLINE_ATTR obj_t constructor_IMM6(state_t s,vec_t arg_of_IMM6) {
  con_vec_t adt;
  adt.tag = 47/* IMM6 */;
  adt.payload = arg_of_IMM6;
  return (obj_t) alloc_con_vec(s,adt);
}
/* dq6 */
static obj_t dq6(state_t s) {
  vec_t dq;
  dq = s->mon_state.dq;
  s->mon_state.dq = gen_vec(0, 0 /* '' */);;
  return constructor_IMM6(s,dq);
}
static INLINE_ATTR obj_t constructor_OPDI(state_t s,struct18_t arg_of_OPDI) {
  con_struct18_t adt;
  adt.tag = 60/* OPDI */;
  adt.payload = arg_of_OPDI;
  return (obj_t) alloc_con_struct18(s,adt);
}
static INLINE_ATTR obj_t constructor_REGHL(state_t s,reghl_t arg_of_REGHL) {
  con_reghl_t adt;
  adt.tag = 55/* REGHL */;
  adt.payload = arg_of_REGHL;
  return (obj_t) alloc_con_reghl(s,adt);
}
/* /Z */
static obj_t _slash_Z(state_t s) {
  return s->rZ;
}
/* ///Z */
static obj_t _slash__slash__slash_Z(state_t s,obj_t (*imm_)(state_t)) {
  obj_t _slash_Z_;
  obj_t imm__;
  _slash_Z_ = _slash_Z(s);
  imm__ = imm_(s);
  return constructor_OPDI(s,__struct18(s,imm__,_slash_Z_));
}
/* /Action26 */
static obj_t _slash_Action26(state_t s) {
  return _slash__slash__slash_Z(s,dq6);
}
/* /Y */
static obj_t _slash_Y(state_t s) {
  return s->rY;
}
/* ///Y */
static obj_t _slash__slash__slash_Y(state_t s,obj_t (*imm_)(state_t)) {
  obj_t _slash_Y_;
  obj_t imm__;
  _slash_Y_ = _slash_Y(s);
  imm__ = imm_(s);
  return constructor_OPDI(s,__struct18(s,imm__,_slash_Y_));
}
/* /Action25 */
static obj_t _slash_Action25(state_t s) {
  return _slash__slash__slash_Y(s,dq6);
}
/* /Action24 */
static obj_t _slash_Action24(state_t s) {
  return _slash__slash__slash_Z(s,dq6);
}
/* /Action23 */
static obj_t _slash_Action23(state_t s) {
  return _slash__slash__slash_Y(s,dq6);
}
static INLINE_ATTR obj_t constructor_INCR(state_t s,int_t arg_of_INCR) {
  con_int_t adt;
  adt.tag = 43/* INCR */;
  adt.payload = arg_of_INCR;
  return (obj_t) alloc_con_int(s,adt);
}
static INLINE_ATTR obj_t constructor_OPSE(state_t s,struct20_t arg_of_OPSE) {
  con_struct20_t adt;
  adt.tag = 59/* OPSE */;
  adt.payload = arg_of_OPSE;
  return (obj_t) alloc_con_struct20(s,adt);
}
/* //Z */
static obj_t _slash__slash_Z(state_t s,obj_t se) {
  obj_t _slash_Z_;
  _slash_Z_ = _slash_Z(s);
  return constructor_OPSE(s,__struct20(s,_slash_Z_,se));
}
/* /Action22 */
static obj_t _slash_Action22(state_t s) {
  return _slash__slash_Z(s,constructor_INCR(s,1));
}
/* /Action21 */
static obj_t _slash_Action21(state_t s) {
  return _slash__slash_Z(s,alloc_int(s,CON_DECR));
}
/* /Action20 */
static obj_t _slash_Action20(state_t s) {
  return _slash__slash_Z(s,alloc_int(s,CON_NONE));
}
/* /Action19 */
static obj_t _slash_Action19(state_t s) {
  return _slash__slash_Z(s,constructor_INCR(s,1));
}
static INLINE_ATTR obj_t constructor_REGIHL(state_t s,struct21_t arg_of_REGIHL) {
  con_struct21_t adt;
  adt.tag = 56/* REGIHL */;
  adt.payload = arg_of_REGIHL;
  return (obj_t) alloc_con_struct21(s,adt);
}
/* /RAMPZ-Z */
static obj_t _slash_RAMPZ_Z(state_t s) {
  return s->rampz_z;
}
/* //RAMPZ-Z */
static obj_t _slash__slash_RAMPZ_Z(state_t s,obj_t se) {
  obj_t _slash_RAMPZ_Z_;
  _slash_RAMPZ_Z_ = _slash_RAMPZ_Z(s);
  return constructor_OPSE(s,__struct20(s,_slash_RAMPZ_Z_,se));
}
/* /Action18 */
static obj_t _slash_Action18(state_t s) {
  return _slash__slash_RAMPZ_Z(s,alloc_int(s,CON_NONE));
}
/* /Action17 */
static obj_t _slash_Action17(state_t s) {
  return _slash__slash_RAMPZ_Z(s,constructor_INCR(s,1));
}
/* //Y */
static obj_t _slash__slash_Y(state_t s,obj_t se) {
  obj_t _slash_Y_;
  _slash_Y_ = _slash_Y(s);
  return constructor_OPSE(s,__struct20(s,_slash_Y_,se));
}
/* /Action16 */
static obj_t _slash_Action16(state_t s) {
  return _slash__slash_Y(s,constructor_INCR(s,1));
}
/* /Action15 */
static obj_t _slash_Action15(state_t s) {
  return _slash__slash_Y(s,alloc_int(s,CON_DECR));
}
/* /X */
static obj_t _slash_X(state_t s) {
  return s->rX;
}
/* //X */
static obj_t _slash__slash_X(state_t s,obj_t se) {
  obj_t _slash_X_;
  _slash_X_ = _slash_X(s);
  return constructor_OPSE(s,__struct20(s,_slash_X_,se));
}
/* /Action14 */
static obj_t _slash_Action14(state_t s) {
  return _slash__slash_X(s,alloc_int(s,CON_NONE));
}
/* /Action13 */
static obj_t _slash_Action13(state_t s) {
  return _slash__slash_X(s,constructor_INCR(s,1));
}
/* /Action12 */
static obj_t _slash_Action12(state_t s) {
  return _slash__slash_X(s,alloc_int(s,CON_DECR));
}
/* /Action11 */
static obj_t _slash_Action11(state_t s) {
  return _slash__slash_Z(s,constructor_INCR(s,1));
}
/* /Action10 */
static obj_t _slash_Action10(state_t s) {
  return _slash__slash_Z(s,alloc_int(s,CON_DECR));
}
/* /Action9 */
static obj_t _slash_Action9(state_t s) {
  return _slash__slash_Y(s,constructor_INCR(s,1));
}
/* /Action8 */
static obj_t _slash_Action8(state_t s) {
  return _slash__slash_Y(s,alloc_int(s,CON_DECR));
}
/* /Action7 */
static obj_t _slash_Action7(state_t s) {
  return _slash__slash_X(s,alloc_int(s,CON_NONE));
}
/* /Action6 */
static obj_t _slash_Action6(state_t s) {
  return _slash__slash_X(s,constructor_INCR(s,1));
}
/* /Action5 */
static obj_t _slash_Action5(state_t s) {
  return _slash__slash_X(s,alloc_int(s,CON_DECR));
}
/* /Action4 */
static obj_t _slash_Action4(state_t s) {
  return _slash__slash_Z(s,alloc_int(s,CON_NONE));
}
/* /Action3 */
static obj_t _slash_Action3(state_t s) {
  return _slash__slash_RAMPZ_Z(s,alloc_int(s,CON_NONE));
}
/* /Action2 */
static obj_t _slash_Action2(state_t s) {
  return _slash__slash_RAMPZ_Z(s,alloc_int(s,CON_NONE));
}
/* /Action1 */
static obj_t _slash_Action1(state_t s) {
  return _slash__slash_RAMPZ_Z(s,constructor_INCR(s,2));
}
static INLINE_ATTR obj_t constructor_XCH(state_t s,binop_t arg_of_XCH) {
  con_binop_t adt;
  adt.tag = 170/* XCH */;
  adt.payload = arg_of_XCH;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_SWAP(state_t s,unop_t arg_of_SWAP) {
  con_unop_t adt;
  adt.tag = 167/* SWAP */;
  adt.payload = arg_of_SWAP;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_SUB(state_t s,binop_t arg_of_SUB) {
  con_binop_t adt;
  adt.tag = 165/* SUB */;
  adt.payload = arg_of_SUB;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_STS(state_t s,binop_t arg_of_STS) {
  con_binop_t adt;
  adt.tag = 164/* STS */;
  adt.payload = arg_of_STS;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_ST(state_t s,binop_t arg_of_ST) {
  con_binop_t adt;
  adt.tag = 163/* ST */;
  adt.payload = arg_of_ST;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_SPM(state_t s,unop_t arg_of_SPM) {
  con_unop_t adt;
  adt.tag = 162/* SPM */;
  adt.payload = arg_of_SPM;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_SBRS(state_t s,ternop_t arg_of_SBRS) {
  con_ternop_t adt;
  adt.tag = 152/* SBRS */;
  adt.payload = arg_of_SBRS;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SBRC(state_t s,ternop_t arg_of_SBRC) {
  con_ternop_t adt;
  adt.tag = 151/* SBRC */;
  adt.payload = arg_of_SBRC;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SBIW(state_t s,binop_t arg_of_SBIW) {
  con_binop_t adt;
  adt.tag = 149/* SBIW */;
  adt.payload = arg_of_SBIW;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_SBIS(state_t s,ternop_t arg_of_SBIS) {
  con_ternop_t adt;
  adt.tag = 148/* SBIS */;
  adt.payload = arg_of_SBIS;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SBIC(state_t s,ternop_t arg_of_SBIC) {
  con_ternop_t adt;
  adt.tag = 147/* SBIC */;
  adt.payload = arg_of_SBIC;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SBI(state_t s,binop_t arg_of_SBI) {
  con_binop_t adt;
  adt.tag = 146/* SBI */;
  adt.payload = arg_of_SBI;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_SBCI(state_t s,binop_t arg_of_SBCI) {
  con_binop_t adt;
  adt.tag = 145/* SBCI */;
  adt.payload = arg_of_SBCI;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_SBC(state_t s,binop_t arg_of_SBC) {
  con_binop_t adt;
  adt.tag = 144/* SBC */;
  adt.payload = arg_of_SBC;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_ROR(state_t s,unop_t arg_of_ROR) {
  con_unop_t adt;
  adt.tag = 143/* ROR */;
  adt.payload = arg_of_ROR;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_RJMP(state_t s,unop_t arg_of_RJMP) {
  con_unop_t adt;
  adt.tag = 141/* RJMP */;
  adt.payload = arg_of_RJMP;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_RCALL(state_t s,unop_t arg_of_RCALL) {
  con_unop_t adt;
  adt.tag = 138/* RCALL */;
  adt.payload = arg_of_RCALL;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_PUSH(state_t s,unop_t arg_of_PUSH) {
  con_unop_t adt;
  adt.tag = 137/* PUSH */;
  adt.payload = arg_of_PUSH;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_POP(state_t s,unop_t arg_of_POP) {
  con_unop_t adt;
  adt.tag = 136/* POP */;
  adt.payload = arg_of_POP;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_OUT(state_t s,binop_t arg_of_OUT) {
  con_binop_t adt;
  adt.tag = 135/* OUT */;
  adt.payload = arg_of_OUT;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_ORI(state_t s,binop_t arg_of_ORI) {
  con_binop_t adt;
  adt.tag = 134/* ORI */;
  adt.payload = arg_of_ORI;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_OR(state_t s,binop_t arg_of_OR) {
  con_binop_t adt;
  adt.tag = 133/* OR */;
  adt.payload = arg_of_OR;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_NEG(state_t s,unop_t arg_of_NEG) {
  con_unop_t adt;
  adt.tag = 131/* NEG */;
  adt.payload = arg_of_NEG;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_MULSU(state_t s,binop_t arg_of_MULSU) {
  con_binop_t adt;
  adt.tag = 130/* MULSU */;
  adt.payload = arg_of_MULSU;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MULS(state_t s,binop_t arg_of_MULS) {
  con_binop_t adt;
  adt.tag = 129/* MULS */;
  adt.payload = arg_of_MULS;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MUL(state_t s,binop_t arg_of_MUL) {
  con_binop_t adt;
  adt.tag = 128/* MUL */;
  adt.payload = arg_of_MUL;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MOVW(state_t s,binop_t arg_of_MOVW) {
  con_binop_t adt;
  adt.tag = 127/* MOVW */;
  adt.payload = arg_of_MOVW;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MOV(state_t s,binop_t arg_of_MOV) {
  con_binop_t adt;
  adt.tag = 126/* MOV */;
  adt.payload = arg_of_MOV;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_LSR(state_t s,unop_t arg_of_LSR) {
  con_unop_t adt;
  adt.tag = 125/* LSR */;
  adt.payload = arg_of_LSR;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_LPM(state_t s,binop_t arg_of_LPM) {
  con_binop_t adt;
  adt.tag = 123/* LPM */;
  adt.payload = arg_of_LPM;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_LDS(state_t s,binop_t arg_of_LDS) {
  con_binop_t adt;
  adt.tag = 122/* LDS */;
  adt.payload = arg_of_LDS;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_LDI(state_t s,binop_t arg_of_LDI) {
  con_binop_t adt;
  adt.tag = 121/* LDI */;
  adt.payload = arg_of_LDI;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_LD(state_t s,binop_t arg_of_LD) {
  con_binop_t adt;
  adt.tag = 120/* LD */;
  adt.payload = arg_of_LD;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_LAT(state_t s,binop_t arg_of_LAT) {
  con_binop_t adt;
  adt.tag = 119/* LAT */;
  adt.payload = arg_of_LAT;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_LAS(state_t s,binop_t arg_of_LAS) {
  con_binop_t adt;
  adt.tag = 118/* LAS */;
  adt.payload = arg_of_LAS;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_LAC(state_t s,binop_t arg_of_LAC) {
  con_binop_t adt;
  adt.tag = 117/* LAC */;
  adt.payload = arg_of_LAC;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_JMP(state_t s,unop_t arg_of_JMP) {
  con_unop_t adt;
  adt.tag = 116/* JMP */;
  adt.payload = arg_of_JMP;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_INC(state_t s,unop_t arg_of_INC) {
  con_unop_t adt;
  adt.tag = 115/* INC */;
  adt.payload = arg_of_INC;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_IN(state_t s,binop_t arg_of_IN) {
  con_binop_t adt;
  adt.tag = 114/* IN */;
  adt.payload = arg_of_IN;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_FMULSU(state_t s,binop_t arg_of_FMULSU) {
  con_binop_t adt;
  adt.tag = 111/* FMULSU */;
  adt.payload = arg_of_FMULSU;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_FMULS(state_t s,binop_t arg_of_FMULS) {
  con_binop_t adt;
  adt.tag = 110/* FMULS */;
  adt.payload = arg_of_FMULS;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_FMUL(state_t s,binop_t arg_of_FMUL) {
  con_binop_t adt;
  adt.tag = 109/* FMUL */;
  adt.payload = arg_of_FMUL;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_EOR(state_t s,binop_t arg_of_EOR) {
  con_binop_t adt;
  adt.tag = 108/* EOR */;
  adt.payload = arg_of_EOR;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_ELPM(state_t s,binop_t arg_of_ELPM) {
  con_binop_t adt;
  adt.tag = 107/* ELPM */;
  adt.payload = arg_of_ELPM;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_DES(state_t s,unop_t arg_of_DES) {
  con_unop_t adt;
  adt.tag = 104/* DES */;
  adt.payload = arg_of_DES;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_DEC(state_t s,unop_t arg_of_DEC) {
  con_unop_t adt;
  adt.tag = 103/* DEC */;
  adt.payload = arg_of_DEC;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_CPSE(state_t s,ternop_t arg_of_CPSE) {
  con_ternop_t adt;
  adt.tag = 102/* CPSE */;
  adt.payload = arg_of_CPSE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_CPI(state_t s,binop_t arg_of_CPI) {
  con_binop_t adt;
  adt.tag = 101/* CPI */;
  adt.payload = arg_of_CPI;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_CPC(state_t s,binop_t arg_of_CPC) {
  con_binop_t adt;
  adt.tag = 100/* CPC */;
  adt.payload = arg_of_CPC;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_CP(state_t s,binop_t arg_of_CP) {
  con_binop_t adt;
  adt.tag = 99/* CP */;
  adt.payload = arg_of_CP;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_COM(state_t s,unop_t arg_of_COM) {
  con_unop_t adt;
  adt.tag = 98/* COM */;
  adt.payload = arg_of_COM;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_CBI(state_t s,binop_t arg_of_CBI) {
  con_binop_t adt;
  adt.tag = 87/* CBI */;
  adt.payload = arg_of_CBI;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_CALL(state_t s,unop_t arg_of_CALL) {
  con_unop_t adt;
  adt.tag = 86/* CALL */;
  adt.payload = arg_of_CALL;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BST(state_t s,binop_t arg_of_BST) {
  con_binop_t adt;
  adt.tag = 85/* BST */;
  adt.payload = arg_of_BST;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRVS(state_t s,unop_t arg_of_BRVS) {
  con_unop_t adt;
  adt.tag = 84/* BRVS */;
  adt.payload = arg_of_BRVS;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRVC(state_t s,unop_t arg_of_BRVC) {
  con_unop_t adt;
  adt.tag = 83/* BRVC */;
  adt.payload = arg_of_BRVC;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRTS(state_t s,unop_t arg_of_BRTS) {
  con_unop_t adt;
  adt.tag = 82/* BRTS */;
  adt.payload = arg_of_BRTS;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRTC(state_t s,unop_t arg_of_BRTC) {
  con_unop_t adt;
  adt.tag = 81/* BRTC */;
  adt.payload = arg_of_BRTC;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRPL(state_t s,unop_t arg_of_BRPL) {
  con_unop_t adt;
  adt.tag = 80/* BRPL */;
  adt.payload = arg_of_BRPL;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRNE(state_t s,unop_t arg_of_BRNE) {
  con_unop_t adt;
  adt.tag = 79/* BRNE */;
  adt.payload = arg_of_BRNE;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRMI(state_t s,unop_t arg_of_BRMI) {
  con_unop_t adt;
  adt.tag = 78/* BRMI */;
  adt.payload = arg_of_BRMI;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRLT(state_t s,unop_t arg_of_BRLT) {
  con_unop_t adt;
  adt.tag = 77/* BRLT */;
  adt.payload = arg_of_BRLT;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRIE(state_t s,unop_t arg_of_BRIE) {
  con_unop_t adt;
  adt.tag = 76/* BRIE */;
  adt.payload = arg_of_BRIE;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRID(state_t s,unop_t arg_of_BRID) {
  con_unop_t adt;
  adt.tag = 75/* BRID */;
  adt.payload = arg_of_BRID;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRHS(state_t s,unop_t arg_of_BRHS) {
  con_unop_t adt;
  adt.tag = 74/* BRHS */;
  adt.payload = arg_of_BRHS;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRHC(state_t s,unop_t arg_of_BRHC) {
  con_unop_t adt;
  adt.tag = 73/* BRHC */;
  adt.payload = arg_of_BRHC;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRGE(state_t s,unop_t arg_of_BRGE) {
  con_unop_t adt;
  adt.tag = 72/* BRGE */;
  adt.payload = arg_of_BRGE;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BREQ(state_t s,unop_t arg_of_BREQ) {
  con_unop_t adt;
  adt.tag = 71/* BREQ */;
  adt.payload = arg_of_BREQ;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRCS(state_t s,unop_t arg_of_BRCS) {
  con_unop_t adt;
  adt.tag = 69/* BRCS */;
  adt.payload = arg_of_BRCS;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BRCC(state_t s,unop_t arg_of_BRCC) {
  con_unop_t adt;
  adt.tag = 68/* BRCC */;
  adt.payload = arg_of_BRCC;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_BLD(state_t s,binop_t arg_of_BLD) {
  con_binop_t adt;
  adt.tag = 67/* BLD */;
  adt.payload = arg_of_BLD;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_ASR(state_t s,unop_t arg_of_ASR) {
  con_unop_t adt;
  adt.tag = 66/* ASR */;
  adt.payload = arg_of_ASR;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_ANDI(state_t s,binop_t arg_of_ANDI) {
  con_binop_t adt;
  adt.tag = 65/* ANDI */;
  adt.payload = arg_of_ANDI;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_AND(state_t s,binop_t arg_of_AND) {
  con_binop_t adt;
  adt.tag = 64/* AND */;
  adt.payload = arg_of_AND;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_ADIW(state_t s,binop_t arg_of_ADIW) {
  con_binop_t adt;
  adt.tag = 63/* ADIW */;
  adt.payload = arg_of_ADIW;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_ADD(state_t s,binop_t arg_of_ADD) {
  con_binop_t adt;
  adt.tag = 62/* ADD */;
  adt.payload = arg_of_ADD;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_ADC(state_t s,binop_t arg_of_ADC) {
  con_binop_t adt;
  adt.tag = 61/* ADC */;
  adt.payload = arg_of_ADC;
  return (obj_t) alloc_con_binop(s,adt);
}
/* nullop */
static obj_t nullop(state_t s,obj_t cons) {
  return cons;
}
/* unop */
static obj_t unop(state_t s,obj_t (*cons)(state_t,unop_t),obj_t (*operand)(state_t)) {
  obj_t operand_;
  operand_ = operand(s);
  return cons(s,__unop(s,operand_));
}
/* binop */
static obj_t binop(state_t s,obj_t (*cons)(state_t,binop_t),obj_t (*first)(state_t),obj_t (*second)(state_t)) {
  obj_t first_;
  obj_t second_;
  first_ = first(s);
  second_ = second(s);
  return cons(s,__binop(s,first_,second_));
}
/* ternop */
static obj_t ternop(state_t s,obj_t (*cons)(state_t,ternop_t),obj_t (*first)(state_t),obj_t (*second)(state_t),obj_t (*third)(state_t)) {
  obj_t first_;
  obj_t second_;
  obj_t third_;
  first_ = first(s);
  second_ = second(s);
  third_ = third(s);
  return cons(s,__ternop(s,first_,second_,third_));
}
static INLINE_ATTR obj_t constructor_IMMi(state_t s,int_t arg_of_IMMi) {
  con_int_t adt;
  adt.tag = 53/* IMMi */;
  adt.payload = arg_of_IMMi;
  return (obj_t) alloc_con_int(s,adt);
}
static INLINE_ATTR obj_t constructor_IMM(state_t s,obj_t arg_of_IMM) {
  con_obj_t adt;
  adt.tag = 58/* IMM */;
  adt.payload = arg_of_IMM;
  return (obj_t) alloc_con_obj(s,adt);
}
/* register-from-bits */
static obj_t register_from_bits(state_t s,vec_t bits) {
  switch (slice(bits.data, 0, 5)) {
    case 0: /* '00000' */ {
      return alloc_int(s,CON_R0);
    }; break;
    case 1: /* '00001' */ {
      return alloc_int(s,CON_R1);
    }; break;
    case 2: /* '00010' */ {
      return alloc_int(s,CON_R2);
    }; break;
    case 3: /* '00011' */ {
      return alloc_int(s,CON_R3);
    }; break;
    case 4: /* '00100' */ {
      return alloc_int(s,CON_R4);
    }; break;
    case 5: /* '00101' */ {
      return alloc_int(s,CON_R5);
    }; break;
    case 6: /* '00110' */ {
      return alloc_int(s,CON_R6);
    }; break;
    case 7: /* '00111' */ {
      return alloc_int(s,CON_R7);
    }; break;
    case 8: /* '01000' */ {
      return alloc_int(s,CON_R8);
    }; break;
    case 9: /* '01001' */ {
      return alloc_int(s,CON_R9);
    }; break;
    case 10: /* '01010' */ {
      return alloc_int(s,CON_R10);
    }; break;
    case 11: /* '01011' */ {
      return alloc_int(s,CON_R11);
    }; break;
    case 12: /* '01100' */ {
      return alloc_int(s,CON_R12);
    }; break;
    case 13: /* '01101' */ {
      return alloc_int(s,CON_R13);
    }; break;
    case 14: /* '01110' */ {
      return alloc_int(s,CON_R14);
    }; break;
    case 15: /* '01111' */ {
      return alloc_int(s,CON_R15);
    }; break;
    case 16: /* '10000' */ {
      return alloc_int(s,CON_R16);
    }; break;
    case 17: /* '10001' */ {
      return alloc_int(s,CON_R17);
    }; break;
    case 18: /* '10010' */ {
      return alloc_int(s,CON_R18);
    }; break;
    case 19: /* '10011' */ {
      return alloc_int(s,CON_R19);
    }; break;
    case 20: /* '10100' */ {
      return alloc_int(s,CON_R20);
    }; break;
    case 21: /* '10101' */ {
      return alloc_int(s,CON_R21);
    }; break;
    case 22: /* '10110' */ {
      return alloc_int(s,CON_R22);
    }; break;
    case 23: /* '10111' */ {
      return alloc_int(s,CON_R23);
    }; break;
    case 24: /* '11000' */ {
      return alloc_int(s,CON_R24);
    }; break;
    case 25: /* '11001' */ {
      return alloc_int(s,CON_R25);
    }; break;
    case 26: /* '11010' */ {
      return alloc_int(s,CON_R26);
    }; break;
    case 27: /* '11011' */ {
      return alloc_int(s,CON_R27);
    }; break;
    case 28: /* '11100' */ {
      return alloc_int(s,CON_R28);
    }; break;
    case 29: /* '11101' */ {
      return alloc_int(s,CON_R29);
    }; break;
    case 30: /* '11110' */ {
      return alloc_int(s,CON_R30);
    }; break;
    case 31: /* '11111' */ {
      return alloc_int(s,CON_R31);
    }; break;
    default: {
      s->err_str = "pattern match failure in register-from-bits at specifications/avr/avr.ml:828.5-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rr4h-rr4l */
static obj_t rr4h_rr4l(state_t s) {
  vec_t rr;
  obj_t rr_regl;
  obj_t rr_regh;
  rr = s->mon_state.rr;
  rr_regl = register_from_bits(s,vec_concat(s,rr,gen_vec(1, 0 /* '0' */)));
  rr_regh = register_from_bits(s,vec_concat(s,rr,gen_vec(1, 1 /* '1' */)));
  s->mon_state.rr = gen_vec(0, 0 /* '' */);;
  return constructor_REGHL(s,__reghl(s,rr_regh,rr_regl));
}
/* rd4h-rd4l */
static obj_t rd4h_rd4l(state_t s) {
  vec_t rd;
  obj_t rd_regl;
  obj_t rd_regh;
  rd = s->mon_state.rd;
  rd_regl = register_from_bits(s,vec_concat(s,rd,gen_vec(1, 0 /* '0' */)));
  rd_regh = register_from_bits(s,vec_concat(s,rd,gen_vec(1, 1 /* '1' */)));
  s->mon_state.rd = gen_vec(0, 0 /* '' */);;
  return constructor_REGHL(s,__reghl(s,rd_regh,rd_regl));
}
/* rd2h-rd2l */
static obj_t rd2h_rd2l(state_t s) {
  vec_t rd;
  obj_t rd_regl;
  obj_t rd_regh;
  rd = s->mon_state.rd;
  rd_regl = register_from_bits(s,vec_concat(s,vec_concat(s,gen_vec(2, 3 /* '11' */),rd),gen_vec(1, 0 /* '0' */)));
  rd_regh = register_from_bits(s,vec_concat(s,vec_concat(s,gen_vec(2, 3 /* '11' */),rd),gen_vec(1, 1 /* '1' */)));
  s->mon_state.rd = gen_vec(0, 0 /* '' */);;
  return constructor_REGHL(s,__reghl(s,rd_regh,rd_regl));
}
static INLINE_ATTR obj_t constructor_IOREG(state_t s,obj_t arg_of_IOREG) {
  con_obj_t adt;
  adt.tag = 57/* IOREG */;
  adt.payload = arg_of_IOREG;
  return (obj_t) alloc_con_obj(s,adt);
}
/* io-register-from-bits */
static obj_t io_register_from_bits(state_t s,vec_t bits) {
  switch (slice(bits.data, 0, 6)) {
    case 0: /* '000000' */ {
      return alloc_int(s,CON_IO0);
    }; break;
    case 1: /* '000001' */ {
      return alloc_int(s,CON_IO1);
    }; break;
    case 2: /* '000010' */ {
      return alloc_int(s,CON_IO2);
    }; break;
    case 3: /* '000011' */ {
      return alloc_int(s,CON_IO3);
    }; break;
    case 4: /* '000100' */ {
      return alloc_int(s,CON_IO4);
    }; break;
    case 5: /* '000101' */ {
      return alloc_int(s,CON_IO5);
    }; break;
    case 6: /* '000110' */ {
      return alloc_int(s,CON_IO6);
    }; break;
    case 7: /* '000111' */ {
      return alloc_int(s,CON_IO7);
    }; break;
    case 8: /* '001000' */ {
      return alloc_int(s,CON_IO8);
    }; break;
    case 9: /* '001001' */ {
      return alloc_int(s,CON_IO9);
    }; break;
    case 10: /* '001010' */ {
      return alloc_int(s,CON_IO10);
    }; break;
    case 11: /* '001011' */ {
      return alloc_int(s,CON_IO11);
    }; break;
    case 12: /* '001100' */ {
      return alloc_int(s,CON_IO12);
    }; break;
    case 13: /* '001101' */ {
      return alloc_int(s,CON_IO13);
    }; break;
    case 14: /* '001110' */ {
      return alloc_int(s,CON_IO14);
    }; break;
    case 15: /* '001111' */ {
      return alloc_int(s,CON_IO15);
    }; break;
    case 16: /* '010000' */ {
      return alloc_int(s,CON_IO16);
    }; break;
    case 17: /* '010001' */ {
      return alloc_int(s,CON_IO17);
    }; break;
    case 18: /* '010010' */ {
      return alloc_int(s,CON_IO18);
    }; break;
    case 19: /* '010011' */ {
      return alloc_int(s,CON_IO19);
    }; break;
    case 20: /* '010100' */ {
      return alloc_int(s,CON_IO20);
    }; break;
    case 21: /* '010101' */ {
      return alloc_int(s,CON_IO21);
    }; break;
    case 22: /* '010110' */ {
      return alloc_int(s,CON_IO22);
    }; break;
    case 23: /* '010111' */ {
      return alloc_int(s,CON_IO23);
    }; break;
    case 24: /* '011000' */ {
      return alloc_int(s,CON_IO24);
    }; break;
    case 25: /* '011001' */ {
      return alloc_int(s,CON_IO25);
    }; break;
    case 26: /* '011010' */ {
      return alloc_int(s,CON_IO26);
    }; break;
    case 27: /* '011011' */ {
      return alloc_int(s,CON_IO27);
    }; break;
    case 28: /* '011100' */ {
      return alloc_int(s,CON_IO28);
    }; break;
    case 29: /* '011101' */ {
      return alloc_int(s,CON_IO29);
    }; break;
    case 30: /* '011110' */ {
      return alloc_int(s,CON_IO30);
    }; break;
    case 31: /* '011111' */ {
      return alloc_int(s,CON_IO31);
    }; break;
    case 32: /* '100000' */ {
      return alloc_int(s,CON_IO32);
    }; break;
    case 33: /* '100001' */ {
      return alloc_int(s,CON_IO33);
    }; break;
    case 34: /* '100010' */ {
      return alloc_int(s,CON_IO34);
    }; break;
    case 35: /* '100011' */ {
      return alloc_int(s,CON_IO35);
    }; break;
    case 36: /* '100100' */ {
      return alloc_int(s,CON_IO36);
    }; break;
    case 37: /* '100101' */ {
      return alloc_int(s,CON_IO37);
    }; break;
    case 38: /* '100110' */ {
      return alloc_int(s,CON_IO38);
    }; break;
    case 39: /* '100111' */ {
      return alloc_int(s,CON_IO39);
    }; break;
    case 40: /* '101000' */ {
      return alloc_int(s,CON_IO40);
    }; break;
    case 41: /* '101001' */ {
      return alloc_int(s,CON_IO41);
    }; break;
    case 42: /* '101010' */ {
      return alloc_int(s,CON_IO42);
    }; break;
    case 43: /* '101011' */ {
      return alloc_int(s,CON_IO43);
    }; break;
    case 44: /* '101100' */ {
      return alloc_int(s,CON_IO44);
    }; break;
    case 45: /* '101101' */ {
      return alloc_int(s,CON_IO45);
    }; break;
    case 46: /* '101110' */ {
      return alloc_int(s,CON_IO46);
    }; break;
    case 47: /* '101111' */ {
      return alloc_int(s,CON_IO47);
    }; break;
    case 48: /* '110000' */ {
      return alloc_int(s,CON_IO48);
    }; break;
    case 49: /* '110001' */ {
      return alloc_int(s,CON_IO49);
    }; break;
    case 50: /* '110010' */ {
      return alloc_int(s,CON_IO50);
    }; break;
    case 51: /* '110011' */ {
      return alloc_int(s,CON_IO51);
    }; break;
    case 52: /* '110100' */ {
      return alloc_int(s,CON_IO52);
    }; break;
    case 53: /* '110101' */ {
      return alloc_int(s,CON_IO53);
    }; break;
    case 54: /* '110110' */ {
      return alloc_int(s,CON_IO54);
    }; break;
    case 55: /* '110111' */ {
      return alloc_int(s,CON_IO55);
    }; break;
    case 56: /* '111000' */ {
      return alloc_int(s,CON_RAMPD);
    }; break;
    case 57: /* '111001' */ {
      return alloc_int(s,CON_RAMPX);
    }; break;
    case 58: /* '111010' */ {
      return alloc_int(s,CON_RAMPY);
    }; break;
    case 59: /* '111011' */ {
      return alloc_int(s,CON_RAMPZ);
    }; break;
    case 60: /* '111100' */ {
      return alloc_int(s,CON_EIND);
    }; break;
    case 61: /* '111101' */ {
      return alloc_int(s,CON_SPL);
    }; break;
    case 62: /* '111110' */ {
      return alloc_int(s,CON_SPH);
    }; break;
    case 63: /* '111111' */ {
      return alloc_int(s,CON_SREG);
    }; break;
    default: {
      s->err_str = "pattern match failure in io-register-from-bits at specifications/avr/avr.ml:896.5-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* io6 */
static obj_t io6(state_t s) {
  vec_t io_;
  io_ = s->mon_state.io;
  s->mon_state.io = gen_vec(0, 0 /* '' */);;
  return constructor_IOREG(s,io_register_from_bits(s,io_));
}
/* io5 */
static obj_t io5(state_t s) {
  vec_t io_;
  io_ = s->mon_state.io;
  s->mon_state.io = gen_vec(0, 0 /* '' */);;
  return constructor_IOREG(s,io_register_from_bits(s,vec_concat(s,gen_vec(1, 0 /* '0' */),io_)));
}
static INLINE_ATTR obj_t constructor_IMM3(state_t s,vec_t arg_of_IMM3) {
  con_vec_t adt;
  adt.tag = 45/* IMM3 */;
  adt.payload = arg_of_IMM3;
  return (obj_t) alloc_con_vec(s,adt);
}
/* cb3 */
static obj_t cb3(state_t s) {
  vec_t cb;
  cb = s->mon_state.cb;
  s->mon_state.cb = gen_vec(0, 0 /* '' */);;
  return constructor_IMM(s,constructor_IMM3(s,cb));
}
static INLINE_ATTR obj_t constructor_IMM22(state_t s,vec_t arg_of_IMM22) {
  con_vec_t adt;
  adt.tag = 52/* IMM22 */;
  adt.payload = arg_of_IMM22;
  return (obj_t) alloc_con_vec(s,adt);
}
/* ck22 */
static obj_t ck22(state_t s) {
  vec_t ck;
  ck = s->mon_state.ck;
  s->mon_state.ck = gen_vec(0, 0 /* '' */);;
  return constructor_IMM(s,constructor_IMM22(s,ck));
}
static INLINE_ATTR obj_t constructor_IMM16(state_t s,vec_t arg_of_IMM16) {
  con_vec_t adt;
  adt.tag = 51/* IMM16 */;
  adt.payload = arg_of_IMM16;
  return (obj_t) alloc_con_vec(s,adt);
}
/* ck16 */
static obj_t ck16(state_t s) {
  vec_t ck;
  ck = s->mon_state.ck;
  s->mon_state.ck = gen_vec(0, 0 /* '' */);;
  return constructor_IMM(s,constructor_IMM16(s,ck));
}
static INLINE_ATTR obj_t constructor_IMM12(state_t s,vec_t arg_of_IMM12) {
  con_vec_t adt;
  adt.tag = 50/* IMM12 */;
  adt.payload = arg_of_IMM12;
  return (obj_t) alloc_con_vec(s,adt);
}
/* ck12 */
static obj_t ck12(state_t s) {
  vec_t ck;
  ck = s->mon_state.ck;
  s->mon_state.ck = gen_vec(0, 0 /* '' */);;
  return constructor_IMM(s,constructor_IMM12(s,ck));
}
static INLINE_ATTR obj_t constructor_IMM8(state_t s,vec_t arg_of_IMM8) {
  con_vec_t adt;
  adt.tag = 49/* IMM8 */;
  adt.payload = arg_of_IMM8;
  return (obj_t) alloc_con_vec(s,adt);
}
/* ck8 */
static obj_t ck8(state_t s) {
  vec_t ck;
  ck = s->mon_state.ck;
  s->mon_state.ck = gen_vec(0, 0 /* '' */);;
  return constructor_IMM(s,constructor_IMM8(s,ck));
}
static INLINE_ATTR obj_t constructor_IMM7(state_t s,vec_t arg_of_IMM7) {
  con_vec_t adt;
  adt.tag = 48/* IMM7 */;
  adt.payload = arg_of_IMM7;
  return (obj_t) alloc_con_vec(s,adt);
}
/* ck7 */
static obj_t ck7(state_t s) {
  vec_t ck;
  ck = s->mon_state.ck;
  s->mon_state.ck = gen_vec(0, 0 /* '' */);;
  return constructor_IMM(s,constructor_IMM7(s,ck));
}
/* ck6 */
static obj_t ck6(state_t s) {
  vec_t ck;
  ck = s->mon_state.ck;
  s->mon_state.ck = gen_vec(0, 0 /* '' */);;
  return constructor_IMM(s,constructor_IMM6(s,ck));
}
static INLINE_ATTR obj_t constructor_IMM4(state_t s,vec_t arg_of_IMM4) {
  con_vec_t adt;
  adt.tag = 46/* IMM4 */;
  adt.payload = arg_of_IMM4;
  return (obj_t) alloc_con_vec(s,adt);
}
/* ck4 */
static obj_t ck4(state_t s) {
  vec_t ck;
  ck = s->mon_state.ck;
  s->mon_state.ck = gen_vec(0, 0 /* '' */);;
  return constructor_IMM(s,constructor_IMM4(s,ck));
}
static INLINE_ATTR obj_t constructor_REG(state_t s,obj_t arg_of_REG) {
  con_obj_t adt;
  adt.tag = 54/* REG */;
  adt.payload = arg_of_REG;
  return (obj_t) alloc_con_obj(s,adt);
}
/* rr3 */
static obj_t rr3(state_t s) {
  vec_t rr;
  rr = s->mon_state.rr;
  s->mon_state.rr = gen_vec(0, 0 /* '' */);;
  return constructor_REG(s,register_from_bits(s,vec_concat(s,gen_vec(2, 2 /* '10' */),rr)));
}
/* rr4 */
static obj_t rr4(state_t s) {
  vec_t rr;
  rr = s->mon_state.rr;
  s->mon_state.rr = gen_vec(0, 0 /* '' */);;
  return constructor_REG(s,register_from_bits(s,vec_concat(s,gen_vec(1, 1 /* '1' */),rr)));
}
/* rr5 */
static obj_t rr5(state_t s) {
  vec_t rr;
  rr = s->mon_state.rr;
  s->mon_state.rr = gen_vec(0, 0 /* '' */);;
  return constructor_REG(s,register_from_bits(s,rr));
}
/* rd3 */
static obj_t rd3(state_t s) {
  vec_t rd;
  rd = s->mon_state.rd;
  s->mon_state.rd = gen_vec(0, 0 /* '' */);;
  return constructor_REG(s,register_from_bits(s,vec_concat(s,gen_vec(2, 2 /* '10' */),rd)));
}
/* rd4 */
static obj_t rd4(state_t s) {
  vec_t rd;
  rd = s->mon_state.rd;
  s->mon_state.rd = gen_vec(0, 0 /* '' */);;
  return constructor_REG(s,register_from_bits(s,vec_concat(s,gen_vec(1, 1 /* '1' */),rd)));
}
/* rd5 */
static obj_t rd5(state_t s) {
  vec_t rd;
  rd = s->mon_state.rd;
  s->mon_state.rd = gen_vec(0, 0 /* '' */);;
  return constructor_REG(s,register_from_bits(s,rd));
}
/* r0 */
static obj_t r0(state_t s) {
  return constructor_REG(s,alloc_int(s,CON_R0));
}
/* /tiny */
static obj_t _slash_tiny(state_t s) {
  int_t tok;
  tok = consume(s, 2);
  switch (slice(tok, 11, 5)) {
    case 21: /* '10101' */ {
      int_t bit;
      int_t bit_;
      int_t bit__;
      int_t bit___;
      int_t bit____;
      int_t bit_____;
      int_t bit______;
      int_t bit_______;
      int_t bit________;
      int_t bit_________;
      int_t bit__________;
      vec_t ck;
      vec_t ck_;
      vec_t ck__;
      vec_t rr;
      vec_t rr_;
      vec_t rr__;
      vec_t rr___;
      vec_t ck___;
      vec_t ck____;
      vec_t ck_____;
      vec_t ck______;
      bit = slice(tok, 0, 1);
      bit_ = slice(tok, 1, 1);
      bit__ = slice(tok, 2, 1);
      bit___ = slice(tok, 3, 1);
      bit____ = slice(tok, 4, 1);
      bit_____ = slice(tok, 5, 1);
      bit______ = slice(tok, 6, 1);
      bit_______ = slice(tok, 7, 1);
      bit________ = slice(tok, 8, 1);
      bit_________ = slice(tok, 9, 1);
      bit__________ = slice(tok, 10, 1);
      ck = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit__________));;
      ck_ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_________));;
      ck__ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit________));;
      rr = s->mon_state.rr;
      s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_______));;
      rr_ = s->mon_state.rr;
      s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit______));;
      rr__ = s->mon_state.rr;
      s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit_____));;
      rr___ = s->mon_state.rr;
      s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit____));;
      ck___ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
      ck____ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
      ck_____ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
      ck______ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
      return binop(s,constructor_STS,ck7,rr4);
    }; break;
    case 20: /* '10100' */ {
      int_t bit;
      int_t bit_;
      int_t bit__;
      int_t bit___;
      int_t bit____;
      int_t bit_____;
      int_t bit______;
      int_t bit_______;
      int_t bit________;
      int_t bit_________;
      int_t bit__________;
      vec_t ck;
      vec_t ck_;
      vec_t ck__;
      vec_t rd;
      vec_t rd_;
      vec_t rd__;
      vec_t rd___;
      vec_t ck___;
      vec_t ck____;
      vec_t ck_____;
      vec_t ck______;
      bit = slice(tok, 0, 1);
      bit_ = slice(tok, 1, 1);
      bit__ = slice(tok, 2, 1);
      bit___ = slice(tok, 3, 1);
      bit____ = slice(tok, 4, 1);
      bit_____ = slice(tok, 5, 1);
      bit______ = slice(tok, 6, 1);
      bit_______ = slice(tok, 7, 1);
      bit________ = slice(tok, 8, 1);
      bit_________ = slice(tok, 9, 1);
      bit__________ = slice(tok, 10, 1);
      ck = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit__________));;
      ck_ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_________));;
      ck__ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit________));;
      rd = s->mon_state.rd;
      s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
      rd_ = s->mon_state.rd;
      s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
      rd__ = s->mon_state.rd;
      s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
      rd___ = s->mon_state.rd;
      s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
      ck___ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
      ck____ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
      ck_____ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
      ck______ = s->mon_state.ck;
      s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
      return binop(s,constructor_LDS,rd4,ck7);
    }; break;
    default: {
      unconsume(s, 2);
      s->err_str = "DecodeSequenceMatchFailure";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* genTinyInstr */
static obj_t genTinyInstr(state_t s) {
  int_t index;
  s->mon_state.rd = gen_vec(0, 0 /* '' */);
  s->mon_state.rr = gen_vec(0, 0 /* '' */);
  s->mon_state.ck = gen_vec(0, 0 /* '' */);
  s->mon_state.cs = 0 /* '' */;
  s->mon_state.io = gen_vec(0, 0 /* '' */);
  s->mon_state.cb = gen_vec(0, 0 /* '' */);
  s->mon_state.dq = gen_vec(0, 0 /* '' */);;
  index = gdsl_get_ip(s);
  alloc_int(s,gdsl_seek(s, (size_t) ((index-4))));
  return _slash_tiny(s);
}
/* isTiny */
static int_t isTiny(state_t s,monad_t s_) {
  return 0<vec_to_unsigned(s,gen_vec(0, (s_.config) & (1 /* '1' */)));
}
/* / */
static obj_t _slash_(state_t s) {
  int_t tok;
  tok = consume(s, 2);
  switch (vec_concat(s,gen_vec(2, slice(tok,14,2)),gen_vec(1, slice(tok,12,1))).data) {
    case 7: /* '111' */ {
      switch (slice(tok, 13, 1)) {
        case 1: /* '1' */ {
          switch (slice(tok, 10, 2)) {
            case 3: /* '11' */ {
              switch (slice(vec_concat(s,gen_vec(3, slice(tok,9,3)),gen_vec(4, slice(tok,0,4))).data, 3, 2)) {
                case 2: /* '10' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  vec_t cb;
                  vec_t cb_;
                  vec_t cb__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 4, 1);
                  bit____ = slice(tok, 5, 1);
                  bit_____ = slice(tok, 6, 1);
                  bit______ = slice(tok, 7, 1);
                  bit_______ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_______));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit______));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit_____));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit____));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit___));;
                  cb = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb,gen_vec(1, bit__));;
                  cb_ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb_,gen_vec(1, bit_));;
                  cb__ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb__,gen_vec(1, bit));;
                  return ternop(s,constructor_SBRS,rr5,cb3,sizeof_next);
                }; break;
                case 0: /* '00' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  vec_t cb;
                  vec_t cb_;
                  vec_t cb__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 4, 1);
                  bit____ = slice(tok, 5, 1);
                  bit_____ = slice(tok, 6, 1);
                  bit______ = slice(tok, 7, 1);
                  bit_______ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_______));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit______));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit_____));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit____));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit___));;
                  cb = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb,gen_vec(1, bit__));;
                  cb_ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb_,gen_vec(1, bit_));;
                  cb__ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb__,gen_vec(1, bit));;
                  return ternop(s,constructor_SBRC,rr5,cb3,sizeof_next);
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 2: /* '10' */ {
              switch (slice(vec_concat(s,gen_vec(3, slice(tok,9,3)),gen_vec(4, slice(tok,0,4))).data, 3, 2)) {
                case 2: /* '10' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  vec_t cb;
                  vec_t cb_;
                  vec_t cb__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 4, 1);
                  bit____ = slice(tok, 5, 1);
                  bit_____ = slice(tok, 6, 1);
                  bit______ = slice(tok, 7, 1);
                  bit_______ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit___));;
                  cb = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb,gen_vec(1, bit__));;
                  cb_ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb_,gen_vec(1, bit_));;
                  cb__ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb__,gen_vec(1, bit));;
                  return binop(s,constructor_BST,rd5,cb3);
                }; break;
                case 0: /* '00' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  vec_t cb;
                  vec_t cb_;
                  vec_t cb__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 4, 1);
                  bit____ = slice(tok, 5, 1);
                  bit_____ = slice(tok, 6, 1);
                  bit______ = slice(tok, 7, 1);
                  bit_______ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit___));;
                  cb = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb,gen_vec(1, bit__));;
                  cb_ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb_,gen_vec(1, bit_));;
                  cb__ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb__,gen_vec(1, bit));;
                  return binop(s,constructor_BLD,rd5,cb3);
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 1: /* '01' */ {
              switch (slice(tok, 0, 3)) {
                case 7: /* '111' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRID,ck7);
                }; break;
                case 6: /* '110' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRTC,ck7);
                }; break;
                case 5: /* '101' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRHC,ck7);
                }; break;
                case 4: /* '100' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRGE,ck7);
                }; break;
                case 3: /* '011' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRVC,ck7);
                }; break;
                case 2: /* '010' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRPL,ck7);
                }; break;
                case 1: /* '001' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRNE,ck7);
                }; break;
                case 0: /* '000' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRCC,ck7);
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 0: /* '00' */ {
              switch (slice(tok, 0, 3)) {
                case 7: /* '111' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRIE,ck7);
                }; break;
                case 6: /* '110' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRTS,ck7);
                }; break;
                case 5: /* '101' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRHS,ck7);
                }; break;
                case 4: /* '100' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRLT,ck7);
                }; break;
                case 3: /* '011' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRVS,ck7);
                }; break;
                case 2: /* '010' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRMI,ck7);
                }; break;
                case 1: /* '001' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BREQ,ck7);
                }; break;
                case 0: /* '000' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  bit = slice(tok, 3, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  bit______ = slice(tok, 9, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit_____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit____));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit___));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit__));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit));;
                  return unop(s,constructor_BRCS,ck7);
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            default: {
              unconsume(s, 2);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 0: /* '0' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          int_t bit___________;
          vec_t ck;
          vec_t ck_;
          vec_t ck__;
          vec_t ck___;
          vec_t ck____;
          vec_t ck_____;
          vec_t ck______;
          vec_t ck_______;
          vec_t ck________;
          vec_t ck_________;
          vec_t ck__________;
          vec_t ck___________;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          bit___________ = slice(tok, 11, 1);
          ck = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit___________));;
          ck_ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit__________));;
          ck__ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit_________));;
          ck___ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit________));;
          ck____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit_______));;
          ck_____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit______));;
          ck______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_____));;
          ck_______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit____));;
          ck________ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck________,gen_vec(1, bit___));;
          ck_________ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_________,gen_vec(1, bit__));;
          ck__________ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__________,gen_vec(1, bit_));;
          ck___________ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___________,gen_vec(1, bit));;
          return unop(s,constructor_RCALL,ck12);
        }; break;
        default: {
          unconsume(s, 2);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 6: /* '110' */ {
      switch (slice(tok, 13, 1)) {
        case 1: /* '1' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          int_t bit___________;
          vec_t ck;
          vec_t ck_;
          vec_t ck__;
          vec_t ck___;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t ck____;
          vec_t ck_____;
          vec_t ck______;
          vec_t ck_______;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          bit___________ = slice(tok, 11, 1);
          ck = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit___________));;
          ck_ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit__________));;
          ck__ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit_________));;
          ck___ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
          ck____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit___));;
          ck_____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit__));;
          ck______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_));;
          ck_______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit));;
          return binop(s,constructor_LDI,rd4,ck8);
        }; break;
        case 0: /* '0' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          int_t bit___________;
          vec_t ck;
          vec_t ck_;
          vec_t ck__;
          vec_t ck___;
          vec_t ck____;
          vec_t ck_____;
          vec_t ck______;
          vec_t ck_______;
          vec_t ck________;
          vec_t ck_________;
          vec_t ck__________;
          vec_t ck___________;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          bit___________ = slice(tok, 11, 1);
          ck = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit___________));;
          ck_ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit__________));;
          ck__ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit_________));;
          ck___ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit________));;
          ck____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit_______));;
          ck_____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit______));;
          ck______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_____));;
          ck_______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit____));;
          ck________ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck________,gen_vec(1, bit___));;
          ck_________ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_________,gen_vec(1, bit__));;
          ck__________ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__________,gen_vec(1, bit_));;
          ck___________ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___________,gen_vec(1, bit));;
          return unop(s,constructor_RJMP,ck12);
        }; break;
        default: {
          unconsume(s, 2);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 5: /* '101' */ {
      switch (slice(vec_concat(s,gen_vec(1, slice(tok,13,1)),gen_vec(12, slice(tok,0,12))).data, 11, 2)) {
        case 3: /* '11' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          vec_t io_;
          vec_t io__;
          vec_t rr;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          vec_t io___;
          vec_t io____;
          vec_t io_____;
          vec_t io______;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          io_ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io_,gen_vec(1, bit__________));;
          io__ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io__,gen_vec(1, bit_________));;
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit________));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit_______));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit______));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_____));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit____));;
          io___ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io___,gen_vec(1, bit___));;
          io____ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io____,gen_vec(1, bit__));;
          io_____ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io_____,gen_vec(1, bit_));;
          io______ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io______,gen_vec(1, bit));;
          return binop(s,constructor_OUT,io6,rr5);
        }; break;
        case 2: /* '10' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          vec_t io_;
          vec_t io__;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t io___;
          vec_t io____;
          vec_t io_____;
          vec_t io______;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          io_ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io_,gen_vec(1, bit__________));;
          io__ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io__,gen_vec(1, bit_________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
          io___ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io___,gen_vec(1, bit___));;
          io____ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io____,gen_vec(1, bit__));;
          io_____ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io_____,gen_vec(1, bit_));;
          io______ = s->mon_state.io;
          s->mon_state.io = vec_concat(s,io______,gen_vec(1, bit));;
          return binop(s,constructor_IN,rd5,io6);
        }; break;
        case 1: /* '01' */ {
          switch (slice(tok, 10, 1)) {
            case 1: /* '1' */ {
              int_t bit;
              int_t bit_;
              int_t bit__;
              int_t bit___;
              int_t bit____;
              int_t bit_____;
              int_t bit______;
              int_t bit_______;
              int_t bit________;
              int_t bit_________;
              vec_t rr;
              vec_t rd;
              vec_t rd_;
              vec_t rd__;
              vec_t rd___;
              vec_t rd____;
              vec_t rr_;
              vec_t rr__;
              vec_t rr___;
              vec_t rr____;
              bit = slice(tok, 0, 1);
              bit_ = slice(tok, 1, 1);
              bit__ = slice(tok, 2, 1);
              bit___ = slice(tok, 3, 1);
              bit____ = slice(tok, 4, 1);
              bit_____ = slice(tok, 5, 1);
              bit______ = slice(tok, 6, 1);
              bit_______ = slice(tok, 7, 1);
              bit________ = slice(tok, 8, 1);
              bit_________ = slice(tok, 9, 1);
              rr = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
              rd = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
              rd_ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
              rd__ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
              rd___ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
              rd____ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
              rr_ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
              rr__ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
              rr___ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
              rr____ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
              return binop(s,constructor_MUL,rd5,rr5);
            }; break;
            case 0: /* '0' */ {
              switch (slice(tok, 8, 2)) {
                case 3: /* '11' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t io_;
                  vec_t io__;
                  vec_t io___;
                  vec_t io____;
                  vec_t io_____;
                  vec_t cb;
                  vec_t cb_;
                  vec_t cb__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 3, 1);
                  bit____ = slice(tok, 4, 1);
                  bit_____ = slice(tok, 5, 1);
                  bit______ = slice(tok, 6, 1);
                  bit_______ = slice(tok, 7, 1);
                  io_ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io_,gen_vec(1, bit_______));;
                  io__ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io__,gen_vec(1, bit______));;
                  io___ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io___,gen_vec(1, bit_____));;
                  io____ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io____,gen_vec(1, bit____));;
                  io_____ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io_____,gen_vec(1, bit___));;
                  cb = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb,gen_vec(1, bit__));;
                  cb_ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb_,gen_vec(1, bit_));;
                  cb__ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb__,gen_vec(1, bit));;
                  return ternop(s,constructor_SBIS,io5,cb3,sizeof_next);
                }; break;
                case 2: /* '10' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t io_;
                  vec_t io__;
                  vec_t io___;
                  vec_t io____;
                  vec_t io_____;
                  vec_t cb;
                  vec_t cb_;
                  vec_t cb__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 3, 1);
                  bit____ = slice(tok, 4, 1);
                  bit_____ = slice(tok, 5, 1);
                  bit______ = slice(tok, 6, 1);
                  bit_______ = slice(tok, 7, 1);
                  io_ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io_,gen_vec(1, bit_______));;
                  io__ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io__,gen_vec(1, bit______));;
                  io___ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io___,gen_vec(1, bit_____));;
                  io____ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io____,gen_vec(1, bit____));;
                  io_____ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io_____,gen_vec(1, bit___));;
                  cb = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb,gen_vec(1, bit__));;
                  cb_ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb_,gen_vec(1, bit_));;
                  cb__ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb__,gen_vec(1, bit));;
                  return binop(s,constructor_SBI,io5,cb3);
                }; break;
                case 1: /* '01' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t io_;
                  vec_t io__;
                  vec_t io___;
                  vec_t io____;
                  vec_t io_____;
                  vec_t cb;
                  vec_t cb_;
                  vec_t cb__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 3, 1);
                  bit____ = slice(tok, 4, 1);
                  bit_____ = slice(tok, 5, 1);
                  bit______ = slice(tok, 6, 1);
                  bit_______ = slice(tok, 7, 1);
                  io_ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io_,gen_vec(1, bit_______));;
                  io__ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io__,gen_vec(1, bit______));;
                  io___ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io___,gen_vec(1, bit_____));;
                  io____ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io____,gen_vec(1, bit____));;
                  io_____ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io_____,gen_vec(1, bit___));;
                  cb = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb,gen_vec(1, bit__));;
                  cb_ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb_,gen_vec(1, bit_));;
                  cb__ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb__,gen_vec(1, bit));;
                  return ternop(s,constructor_SBIC,io5,cb3,sizeof_next);
                }; break;
                case 0: /* '00' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t io_;
                  vec_t io__;
                  vec_t io___;
                  vec_t io____;
                  vec_t io_____;
                  vec_t cb;
                  vec_t cb_;
                  vec_t cb__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 3, 1);
                  bit____ = slice(tok, 4, 1);
                  bit_____ = slice(tok, 5, 1);
                  bit______ = slice(tok, 6, 1);
                  bit_______ = slice(tok, 7, 1);
                  io_ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io_,gen_vec(1, bit_______));;
                  io__ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io__,gen_vec(1, bit______));;
                  io___ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io___,gen_vec(1, bit_____));;
                  io____ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io____,gen_vec(1, bit____));;
                  io_____ = s->mon_state.io;
                  s->mon_state.io = vec_concat(s,io_____,gen_vec(1, bit___));;
                  cb = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb,gen_vec(1, bit__));;
                  cb_ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb_,gen_vec(1, bit_));;
                  cb__ = s->mon_state.cb;
                  s->mon_state.cb = vec_concat(s,cb__,gen_vec(1, bit));;
                  return binop(s,constructor_CBI,io5,cb3);
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            default: {
              unconsume(s, 2);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 0: /* '00' */ {
          switch (slice(tok, 9, 2)) {
            case 3: /* '11' */ {
              switch (slice(tok, 8, 1)) {
                case 1: /* '1' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t rd;
                  vec_t rd_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 3, 1);
                  bit____ = slice(tok, 4, 1);
                  bit_____ = slice(tok, 5, 1);
                  bit______ = slice(tok, 6, 1);
                  bit_______ = slice(tok, 7, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit_______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit______));;
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit___));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit__));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit_));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit));;
                  return binop(s,constructor_SBIW,rd2h_rd2l,ck6);
                }; break;
                case 0: /* '0' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  vec_t ck;
                  vec_t ck_;
                  vec_t rd;
                  vec_t rd_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 3, 1);
                  bit____ = slice(tok, 4, 1);
                  bit_____ = slice(tok, 5, 1);
                  bit______ = slice(tok, 6, 1);
                  bit_______ = slice(tok, 7, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit_______));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit______));;
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit___));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit__));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit_));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit));;
                  return binop(s,constructor_ADIW,rd2h_rd2l,ck6);
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 2: /* '10' */ {
              switch (slice(tok, 1, 3)) {
                case 4: /* '100' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,4,5)),gen_vec(1, slice(tok,0,1))).data, 0, 6)) {
                    case 62: /* '111110' */ {
                      return unop(s,constructor_SPM,_slash_Action1);
                    }; break;
                    case 60: /* '111100' */ {
                      return unop(s,constructor_SPM,_slash_Action2);
                    }; break;
                    case 58: /* '111010' */ {
                      return binop(s,constructor_ELPM,r0,_slash_Action3);
                    }; break;
                    case 56: /* '111000' */ {
                      return binop(s,constructor_LPM,r0,_slash_Action4);
                    }; break;
                    case 52: /* '110100' */ {
                      return nullop(s,alloc_int(s,CON_WDR));
                    }; break;
                    case 50: /* '110010' */ {
                      return nullop(s,alloc_int(s,CON_BREAK));
                    }; break;
                    case 48: /* '110000' */ {
                      return nullop(s,alloc_int(s,CON_SLEEP));
                    }; break;
                    case 35: /* '100011' */ {
                      return nullop(s,alloc_int(s,CON_EICALL));
                    }; break;
                    case 34: /* '100010' */ {
                      return nullop(s,alloc_int(s,CON_RETI));
                    }; break;
                    case 33: /* '100001' */ {
                      return nullop(s,alloc_int(s,CON_ICALL));
                    }; break;
                    case 32: /* '100000' */ {
                      return nullop(s,alloc_int(s,CON_RET));
                    }; break;
                    case 30: /* '011110' */ {
                      return nullop(s,alloc_int(s,CON_CLI));
                    }; break;
                    case 28: /* '011100' */ {
                      return nullop(s,alloc_int(s,CON_CLT));
                    }; break;
                    case 26: /* '011010' */ {
                      return nullop(s,alloc_int(s,CON_CLH));
                    }; break;
                    case 24: /* '011000' */ {
                      return nullop(s,alloc_int(s,CON_CLS));
                    }; break;
                    case 22: /* '010110' */ {
                      return nullop(s,alloc_int(s,CON_CLV));
                    }; break;
                    case 20: /* '010100' */ {
                      return nullop(s,alloc_int(s,CON_CLN));
                    }; break;
                    case 18: /* '010010' */ {
                      return nullop(s,alloc_int(s,CON_CLZ));
                    }; break;
                    case 16: /* '010000' */ {
                      return nullop(s,alloc_int(s,CON_CLC));
                    }; break;
                    case 14: /* '001110' */ {
                      return nullop(s,alloc_int(s,CON_SEI));
                    }; break;
                    case 12: /* '001100' */ {
                      return nullop(s,alloc_int(s,CON_SET));
                    }; break;
                    case 10: /* '001010' */ {
                      return nullop(s,alloc_int(s,CON_SEH));
                    }; break;
                    case 8: /* '001000' */ {
                      return nullop(s,alloc_int(s,CON_SES));
                    }; break;
                    case 6: /* '000110' */ {
                      return nullop(s,alloc_int(s,CON_SEV));
                    }; break;
                    case 4: /* '000100' */ {
                      return nullop(s,alloc_int(s,CON_SEN));
                    }; break;
                    case 3: /* '000011' */ {
                      return nullop(s,alloc_int(s,CON_EIJMP));
                    }; break;
                    case 2: /* '000010' */ {
                      return nullop(s,alloc_int(s,CON_SEZ));
                    }; break;
                    case 1: /* '000001' */ {
                      return nullop(s,alloc_int(s,CON_IJMP));
                    }; break;
                    case 0: /* '000000' */ {
                      return nullop(s,alloc_int(s,CON_SEC));
                    }; break;
                    default: {
                      unconsume(s, 2);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 5: /* '101' */ {
                  switch (slice(tok, 0, 1)) {
                    case 1: /* '1' */ {
                      switch (slice(tok, 8, 1)) {
                        case 0: /* '0' */ {
                          int_t bit;
                          int_t bit_;
                          int_t bit__;
                          int_t bit___;
                          vec_t ck;
                          vec_t ck_;
                          vec_t ck__;
                          vec_t ck___;
                          bit = slice(tok, 4, 1);
                          bit_ = slice(tok, 5, 1);
                          bit__ = slice(tok, 6, 1);
                          bit___ = slice(tok, 7, 1);
                          ck = s->mon_state.ck;
                          s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit___));;
                          ck_ = s->mon_state.ck;
                          s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit__));;
                          ck__ = s->mon_state.ck;
                          s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit_));;
                          ck___ = s->mon_state.ck;
                          s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit));;
                          return unop(s,constructor_DES,ck4);
                        }; break;
                        default: {
                          unconsume(s, 2);
                          s->err_str = "DecodeSequenceMatchFailure";
                          longjmp(s->err_tgt,0);
                        }; break;
                      };
                    }; break;
                    case 0: /* '0' */ {
                      int_t bit;
                      int_t bit_;
                      int_t bit__;
                      int_t bit___;
                      int_t bit____;
                      vec_t rd;
                      vec_t rd_;
                      vec_t rd__;
                      vec_t rd___;
                      vec_t rd____;
                      bit = slice(tok, 4, 1);
                      bit_ = slice(tok, 5, 1);
                      bit__ = slice(tok, 6, 1);
                      bit___ = slice(tok, 7, 1);
                      bit____ = slice(tok, 8, 1);
                      rd = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                      rd_ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                      rd__ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                      rd___ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                      rd____ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                      return unop(s,constructor_DEC,rd5);
                    }; break;
                    default: {
                      unconsume(s, 2);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 7: /* '111' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t tok_;
                  int_t bit______;
                  int_t bit_______;
                  int_t bit________;
                  int_t bit_________;
                  int_t bit__________;
                  int_t bit___________;
                  int_t bit____________;
                  int_t bit_____________;
                  int_t bit______________;
                  int_t bit_______________;
                  int_t bit________________;
                  int_t bit_________________;
                  int_t bit__________________;
                  int_t bit___________________;
                  int_t bit____________________;
                  int_t bit_____________________;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  vec_t ck_______;
                  vec_t ck________;
                  vec_t ck_________;
                  vec_t ck__________;
                  vec_t ck___________;
                  vec_t ck____________;
                  vec_t ck_____________;
                  vec_t ck______________;
                  vec_t ck_______________;
                  vec_t ck________________;
                  vec_t ck_________________;
                  vec_t ck__________________;
                  vec_t ck___________________;
                  vec_t ck____________________;
                  vec_t ck_____________________;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  tok_ = consume(s, 2);
                  bit______ = slice(tok_, 0, 1);
                  bit_______ = slice(tok_, 1, 1);
                  bit________ = slice(tok_, 2, 1);
                  bit_________ = slice(tok_, 3, 1);
                  bit__________ = slice(tok_, 4, 1);
                  bit___________ = slice(tok_, 5, 1);
                  bit____________ = slice(tok_, 6, 1);
                  bit_____________ = slice(tok_, 7, 1);
                  bit______________ = slice(tok_, 8, 1);
                  bit_______________ = slice(tok_, 9, 1);
                  bit________________ = slice(tok_, 10, 1);
                  bit_________________ = slice(tok_, 11, 1);
                  bit__________________ = slice(tok_, 12, 1);
                  bit___________________ = slice(tok_, 13, 1);
                  bit____________________ = slice(tok_, 14, 1);
                  bit_____________________ = slice(tok_, 15, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit_____));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit___));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit__));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit_));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_____________________));;
                  ck_______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit____________________));;
                  ck________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck________,gen_vec(1, bit___________________));;
                  ck_________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_________,gen_vec(1, bit__________________));;
                  ck__________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__________,gen_vec(1, bit_________________));;
                  ck___________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___________,gen_vec(1, bit________________));;
                  ck____________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____________,gen_vec(1, bit_______________));;
                  ck_____________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____________,gen_vec(1, bit______________));;
                  ck______________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______________,gen_vec(1, bit_____________));;
                  ck_______________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_______________,gen_vec(1, bit____________));;
                  ck________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck________________,gen_vec(1, bit___________));;
                  ck_________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_________________,gen_vec(1, bit__________));;
                  ck__________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__________________,gen_vec(1, bit_________));;
                  ck___________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___________________,gen_vec(1, bit________));;
                  ck____________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____________________,gen_vec(1, bit_______));;
                  ck_____________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____________________,gen_vec(1, bit______));;
                  return unop(s,constructor_CALL,ck22);
                }; break;
                case 6: /* '110' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  int_t tok_;
                  int_t bit______;
                  int_t bit_______;
                  int_t bit________;
                  int_t bit_________;
                  int_t bit__________;
                  int_t bit___________;
                  int_t bit____________;
                  int_t bit_____________;
                  int_t bit______________;
                  int_t bit_______________;
                  int_t bit________________;
                  int_t bit_________________;
                  int_t bit__________________;
                  int_t bit___________________;
                  int_t bit____________________;
                  int_t bit_____________________;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  vec_t ck_______;
                  vec_t ck________;
                  vec_t ck_________;
                  vec_t ck__________;
                  vec_t ck___________;
                  vec_t ck____________;
                  vec_t ck_____________;
                  vec_t ck______________;
                  vec_t ck_______________;
                  vec_t ck________________;
                  vec_t ck_________________;
                  vec_t ck__________________;
                  vec_t ck___________________;
                  vec_t ck____________________;
                  vec_t ck_____________________;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 4, 1);
                  bit__ = slice(tok, 5, 1);
                  bit___ = slice(tok, 6, 1);
                  bit____ = slice(tok, 7, 1);
                  bit_____ = slice(tok, 8, 1);
                  tok_ = consume(s, 2);
                  bit______ = slice(tok_, 0, 1);
                  bit_______ = slice(tok_, 1, 1);
                  bit________ = slice(tok_, 2, 1);
                  bit_________ = slice(tok_, 3, 1);
                  bit__________ = slice(tok_, 4, 1);
                  bit___________ = slice(tok_, 5, 1);
                  bit____________ = slice(tok_, 6, 1);
                  bit_____________ = slice(tok_, 7, 1);
                  bit______________ = slice(tok_, 8, 1);
                  bit_______________ = slice(tok_, 9, 1);
                  bit________________ = slice(tok_, 10, 1);
                  bit_________________ = slice(tok_, 11, 1);
                  bit__________________ = slice(tok_, 12, 1);
                  bit___________________ = slice(tok_, 13, 1);
                  bit____________________ = slice(tok_, 14, 1);
                  bit_____________________ = slice(tok_, 15, 1);
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit_____));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit____));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit___));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit__));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit_));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_____________________));;
                  ck_______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit____________________));;
                  ck________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck________,gen_vec(1, bit___________________));;
                  ck_________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_________,gen_vec(1, bit__________________));;
                  ck__________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__________,gen_vec(1, bit_________________));;
                  ck___________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___________,gen_vec(1, bit________________));;
                  ck____________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____________,gen_vec(1, bit_______________));;
                  ck_____________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____________,gen_vec(1, bit______________));;
                  ck______________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______________,gen_vec(1, bit_____________));;
                  ck_______________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_______________,gen_vec(1, bit____________));;
                  ck________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck________________,gen_vec(1, bit___________));;
                  ck_________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_________________,gen_vec(1, bit__________));;
                  ck__________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__________________,gen_vec(1, bit_________));;
                  ck___________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___________________,gen_vec(1, bit________));;
                  ck____________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____________________,gen_vec(1, bit_______));;
                  ck_____________________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____________________,gen_vec(1, bit______));;
                  return unop(s,constructor_JMP,ck22);
                }; break;
                case 3: /* '011' */ {
                  switch (slice(tok, 0, 1)) {
                    case 1: /* '1' */ {
                      int_t bit;
                      int_t bit_;
                      int_t bit__;
                      int_t bit___;
                      int_t bit____;
                      vec_t rd;
                      vec_t rd_;
                      vec_t rd__;
                      vec_t rd___;
                      vec_t rd____;
                      bit = slice(tok, 4, 1);
                      bit_ = slice(tok, 5, 1);
                      bit__ = slice(tok, 6, 1);
                      bit___ = slice(tok, 7, 1);
                      bit____ = slice(tok, 8, 1);
                      rd = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                      rd_ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                      rd__ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                      rd___ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                      rd____ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                      return unop(s,constructor_ROR,rd5);
                    }; break;
                    case 0: /* '0' */ {
                      int_t bit;
                      int_t bit_;
                      int_t bit__;
                      int_t bit___;
                      int_t bit____;
                      vec_t rd;
                      vec_t rd_;
                      vec_t rd__;
                      vec_t rd___;
                      vec_t rd____;
                      bit = slice(tok, 4, 1);
                      bit_ = slice(tok, 5, 1);
                      bit__ = slice(tok, 6, 1);
                      bit___ = slice(tok, 7, 1);
                      bit____ = slice(tok, 8, 1);
                      rd = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                      rd_ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                      rd__ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                      rd___ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                      rd____ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                      return unop(s,constructor_LSR,rd5);
                    }; break;
                    default: {
                      unconsume(s, 2);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 2: /* '010' */ {
                  switch (slice(tok, 0, 1)) {
                    case 1: /* '1' */ {
                      int_t bit;
                      int_t bit_;
                      int_t bit__;
                      int_t bit___;
                      int_t bit____;
                      vec_t rd;
                      vec_t rd_;
                      vec_t rd__;
                      vec_t rd___;
                      vec_t rd____;
                      bit = slice(tok, 4, 1);
                      bit_ = slice(tok, 5, 1);
                      bit__ = slice(tok, 6, 1);
                      bit___ = slice(tok, 7, 1);
                      bit____ = slice(tok, 8, 1);
                      rd = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                      rd_ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                      rd__ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                      rd___ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                      rd____ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                      return unop(s,constructor_ASR,rd5);
                    }; break;
                    default: {
                      unconsume(s, 2);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 1: /* '001' */ {
                  switch (slice(tok, 0, 1)) {
                    case 1: /* '1' */ {
                      int_t bit;
                      int_t bit_;
                      int_t bit__;
                      int_t bit___;
                      int_t bit____;
                      vec_t rd;
                      vec_t rd_;
                      vec_t rd__;
                      vec_t rd___;
                      vec_t rd____;
                      bit = slice(tok, 4, 1);
                      bit_ = slice(tok, 5, 1);
                      bit__ = slice(tok, 6, 1);
                      bit___ = slice(tok, 7, 1);
                      bit____ = slice(tok, 8, 1);
                      rd = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                      rd_ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                      rd__ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                      rd___ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                      rd____ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                      return unop(s,constructor_INC,rd5);
                    }; break;
                    case 0: /* '0' */ {
                      int_t bit;
                      int_t bit_;
                      int_t bit__;
                      int_t bit___;
                      int_t bit____;
                      vec_t rd;
                      vec_t rd_;
                      vec_t rd__;
                      vec_t rd___;
                      vec_t rd____;
                      bit = slice(tok, 4, 1);
                      bit_ = slice(tok, 5, 1);
                      bit__ = slice(tok, 6, 1);
                      bit___ = slice(tok, 7, 1);
                      bit____ = slice(tok, 8, 1);
                      rd = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                      rd_ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                      rd__ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                      rd___ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                      rd____ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                      return unop(s,constructor_SWAP,rd5);
                    }; break;
                    default: {
                      unconsume(s, 2);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 0: /* '000' */ {
                  switch (slice(tok, 0, 1)) {
                    case 1: /* '1' */ {
                      int_t bit;
                      int_t bit_;
                      int_t bit__;
                      int_t bit___;
                      int_t bit____;
                      vec_t rd;
                      vec_t rd_;
                      vec_t rd__;
                      vec_t rd___;
                      vec_t rd____;
                      bit = slice(tok, 4, 1);
                      bit_ = slice(tok, 5, 1);
                      bit__ = slice(tok, 6, 1);
                      bit___ = slice(tok, 7, 1);
                      bit____ = slice(tok, 8, 1);
                      rd = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                      rd_ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                      rd__ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                      rd___ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                      rd____ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                      return unop(s,constructor_NEG,rd5);
                    }; break;
                    case 0: /* '0' */ {
                      int_t bit;
                      int_t bit_;
                      int_t bit__;
                      int_t bit___;
                      int_t bit____;
                      vec_t rd;
                      vec_t rd_;
                      vec_t rd__;
                      vec_t rd___;
                      vec_t rd____;
                      bit = slice(tok, 4, 1);
                      bit_ = slice(tok, 5, 1);
                      bit__ = slice(tok, 6, 1);
                      bit___ = slice(tok, 7, 1);
                      bit____ = slice(tok, 8, 1);
                      rd = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                      rd_ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                      rd__ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                      rd___ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                      rd____ = s->mon_state.rd;
                      s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                      return unop(s,constructor_COM,rd5);
                    }; break;
                    default: {
                      unconsume(s, 2);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 1: /* '01' */ {
              switch (slice(tok, 0, 4)) {
                case 15: /* '1111' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit____));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
                  return unop(s,constructor_PUSH,rr5);
                }; break;
                case 14: /* '1110' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit____));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
                  return binop(s,constructor_ST,_slash_Action5,rr5);
                }; break;
                case 13: /* '1101' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit____));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
                  return binop(s,constructor_ST,_slash_Action6,rr5);
                }; break;
                case 12: /* '1100' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit____));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
                  return binop(s,constructor_ST,_slash_Action7,rr5);
                }; break;
                case 10: /* '1010' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit____));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
                  return binop(s,constructor_ST,_slash_Action8,rr5);
                }; break;
                case 9: /* '1001' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit____));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
                  return binop(s,constructor_ST,_slash_Action9,rr5);
                }; break;
                case 7: /* '0111' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LAT,_slash_Z,rd5);
                }; break;
                case 6: /* '0110' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LAC,_slash_Z,rd5);
                }; break;
                case 5: /* '0101' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LAS,_slash_Z,rd5);
                }; break;
                case 4: /* '0100' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_XCH,_slash_Z,rd5);
                }; break;
                case 2: /* '0010' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit____));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
                  return binop(s,constructor_ST,_slash_Action10,rr5);
                }; break;
                case 1: /* '0001' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit____));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
                  return binop(s,constructor_ST,_slash_Action11,rr5);
                }; break;
                case 0: /* '0000' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t tok_;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  int_t bit________;
                  int_t bit_________;
                  int_t bit__________;
                  int_t bit___________;
                  int_t bit____________;
                  int_t bit_____________;
                  int_t bit______________;
                  int_t bit_______________;
                  int_t bit________________;
                  int_t bit_________________;
                  int_t bit__________________;
                  int_t bit___________________;
                  int_t bit____________________;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  vec_t rr___;
                  vec_t rr____;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  vec_t ck_______;
                  vec_t ck________;
                  vec_t ck_________;
                  vec_t ck__________;
                  vec_t ck___________;
                  vec_t ck____________;
                  vec_t ck_____________;
                  vec_t ck______________;
                  vec_t ck_______________;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  tok_ = consume(s, 2);
                  bit_____ = slice(tok_, 0, 1);
                  bit______ = slice(tok_, 1, 1);
                  bit_______ = slice(tok_, 2, 1);
                  bit________ = slice(tok_, 3, 1);
                  bit_________ = slice(tok_, 4, 1);
                  bit__________ = slice(tok_, 5, 1);
                  bit___________ = slice(tok_, 6, 1);
                  bit____________ = slice(tok_, 7, 1);
                  bit_____________ = slice(tok_, 8, 1);
                  bit______________ = slice(tok_, 9, 1);
                  bit_______________ = slice(tok_, 10, 1);
                  bit________________ = slice(tok_, 11, 1);
                  bit_________________ = slice(tok_, 12, 1);
                  bit__________________ = slice(tok_, 13, 1);
                  bit___________________ = slice(tok_, 14, 1);
                  bit____________________ = slice(tok_, 15, 1);
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit____));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
                  rr___ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
                  rr____ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit____________________));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit___________________));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit__________________));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit_________________));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit________________));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_______________));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit______________));;
                  ck_______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit_____________));;
                  ck________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck________,gen_vec(1, bit____________));;
                  ck_________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_________,gen_vec(1, bit___________));;
                  ck__________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__________,gen_vec(1, bit__________));;
                  ck___________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___________,gen_vec(1, bit_________));;
                  ck____________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____________,gen_vec(1, bit________));;
                  ck_____________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____________,gen_vec(1, bit_______));;
                  ck______________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______________,gen_vec(1, bit______));;
                  ck_______________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_______________,gen_vec(1, bit_____));;
                  return binop(s,constructor_STS,ck16,rr5);
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 0: /* '00' */ {
              switch (slice(tok, 0, 4)) {
                case 15: /* '1111' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return unop(s,constructor_POP,rd5);
                }; break;
                case 14: /* '1110' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LD,rd5,_slash_Action12);
                }; break;
                case 13: /* '1101' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LD,rd5,_slash_Action13);
                }; break;
                case 12: /* '1100' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LD,rd5,_slash_Action14);
                }; break;
                case 10: /* '1010' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LD,rd5,_slash_Action15);
                }; break;
                case 9: /* '1001' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LD,rd5,_slash_Action16);
                }; break;
                case 7: /* '0111' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_ELPM,rd5,_slash_Action17);
                }; break;
                case 6: /* '0110' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_ELPM,rd5,_slash_Action18);
                }; break;
                case 5: /* '0101' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LPM,rd5,_slash_Action19);
                }; break;
                case 4: /* '0100' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LPM,rd5,_slash_Action20);
                }; break;
                case 2: /* '0010' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LD,rd5,_slash_Action21);
                }; break;
                case 1: /* '0001' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  return binop(s,constructor_LD,rd5,_slash_Action22);
                }; break;
                case 0: /* '0000' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t tok_;
                  int_t bit_____;
                  int_t bit______;
                  int_t bit_______;
                  int_t bit________;
                  int_t bit_________;
                  int_t bit__________;
                  int_t bit___________;
                  int_t bit____________;
                  int_t bit_____________;
                  int_t bit______________;
                  int_t bit_______________;
                  int_t bit________________;
                  int_t bit_________________;
                  int_t bit__________________;
                  int_t bit___________________;
                  int_t bit____________________;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rd___;
                  vec_t rd____;
                  vec_t ck;
                  vec_t ck_;
                  vec_t ck__;
                  vec_t ck___;
                  vec_t ck____;
                  vec_t ck_____;
                  vec_t ck______;
                  vec_t ck_______;
                  vec_t ck________;
                  vec_t ck_________;
                  vec_t ck__________;
                  vec_t ck___________;
                  vec_t ck____________;
                  vec_t ck_____________;
                  vec_t ck______________;
                  vec_t ck_______________;
                  bit = slice(tok, 4, 1);
                  bit_ = slice(tok, 5, 1);
                  bit__ = slice(tok, 6, 1);
                  bit___ = slice(tok, 7, 1);
                  bit____ = slice(tok, 8, 1);
                  tok_ = consume(s, 2);
                  bit_____ = slice(tok_, 0, 1);
                  bit______ = slice(tok_, 1, 1);
                  bit_______ = slice(tok_, 2, 1);
                  bit________ = slice(tok_, 3, 1);
                  bit_________ = slice(tok_, 4, 1);
                  bit__________ = slice(tok_, 5, 1);
                  bit___________ = slice(tok_, 6, 1);
                  bit____________ = slice(tok_, 7, 1);
                  bit_____________ = slice(tok_, 8, 1);
                  bit______________ = slice(tok_, 9, 1);
                  bit_______________ = slice(tok_, 10, 1);
                  bit________________ = slice(tok_, 11, 1);
                  bit_________________ = slice(tok_, 12, 1);
                  bit__________________ = slice(tok_, 13, 1);
                  bit___________________ = slice(tok_, 14, 1);
                  bit____________________ = slice(tok_, 15, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit___));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit__));;
                  rd___ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_));;
                  rd____ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit));;
                  ck = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit____________________));;
                  ck_ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit___________________));;
                  ck__ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit__________________));;
                  ck___ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit_________________));;
                  ck____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit________________));;
                  ck_____ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit_______________));;
                  ck______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit______________));;
                  ck_______ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit_____________));;
                  ck________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck________,gen_vec(1, bit____________));;
                  ck_________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_________,gen_vec(1, bit___________));;
                  ck__________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck__________,gen_vec(1, bit__________));;
                  ck___________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck___________,gen_vec(1, bit_________));;
                  ck____________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck____________,gen_vec(1, bit________));;
                  ck_____________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_____________,gen_vec(1, bit_______));;
                  ck______________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck______________,gen_vec(1, bit______));;
                  ck_______________ = s->mon_state.ck;
                  s->mon_state.ck = vec_concat(s,ck_______________,gen_vec(1, bit_____));;
                  return binop(s,constructor_LDS,rd5,ck16);
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            default: {
              unconsume(s, 2);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        default: {
          unconsume(s, 2);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 4: /* '100' */ {
      switch (vec_concat(s,gen_vec(1, slice(tok,9,1)),gen_vec(1, slice(tok,3,1))).data) {
        case 3: /* '11' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          vec_t dq;
          vec_t dq_;
          vec_t dq__;
          vec_t rr;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          vec_t dq___;
          vec_t dq____;
          vec_t dq_____;
          int_t g;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 4, 1);
          bit____ = slice(tok, 5, 1);
          bit_____ = slice(tok, 6, 1);
          bit______ = slice(tok, 7, 1);
          bit_______ = slice(tok, 8, 1);
          bit________ = slice(tok, 10, 1);
          bit_________ = slice(tok, 11, 1);
          bit__________ = slice(tok, 13, 1);
          dq = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq,gen_vec(1, bit__________));;
          dq_ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq_,gen_vec(1, bit_________));;
          dq__ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq__,gen_vec(1, bit________));;
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_______));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit______));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit_____));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit____));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit___));;
          dq___ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq___,gen_vec(1, bit__));;
          dq____ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq____,gen_vec(1, bit_));;
          dq_____ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq_____,gen_vec(1, bit));;
          g = isTiny(s,s->mon_state);
          if (g) {
            return genTinyInstr(s);
          } else {
            int_t g_;
            g_ = otherwise(s,s->mon_state);
            if (g_) {
              return binop(s,constructor_ST,_slash_Action23,rr5);
            } else {
              s->err_str = "unsatisfiable guards at specifications/avr/avr.ml:486.45-55";
              longjmp(s->err_tgt,0);
            };
          };
        }; break;
        case 2: /* '10' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          vec_t dq;
          vec_t dq_;
          vec_t dq__;
          vec_t rr;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          vec_t dq___;
          vec_t dq____;
          vec_t dq_____;
          int_t g;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 4, 1);
          bit____ = slice(tok, 5, 1);
          bit_____ = slice(tok, 6, 1);
          bit______ = slice(tok, 7, 1);
          bit_______ = slice(tok, 8, 1);
          bit________ = slice(tok, 10, 1);
          bit_________ = slice(tok, 11, 1);
          bit__________ = slice(tok, 13, 1);
          dq = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq,gen_vec(1, bit__________));;
          dq_ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq_,gen_vec(1, bit_________));;
          dq__ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq__,gen_vec(1, bit________));;
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_______));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit______));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit_____));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit____));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit___));;
          dq___ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq___,gen_vec(1, bit__));;
          dq____ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq____,gen_vec(1, bit_));;
          dq_____ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq_____,gen_vec(1, bit));;
          g = isTiny(s,s->mon_state);
          if (g) {
            return genTinyInstr(s);
          } else {
            int_t g_;
            g_ = otherwise(s,s->mon_state);
            if (g_) {
              return binop(s,constructor_ST,_slash_Action24,rr5);
            } else {
              s->err_str = "unsatisfiable guards at specifications/avr/avr.ml:493.45-55";
              longjmp(s->err_tgt,0);
            };
          };
        }; break;
        case 1: /* '01' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          vec_t dq;
          vec_t dq_;
          vec_t dq__;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t dq___;
          vec_t dq____;
          vec_t dq_____;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 4, 1);
          bit____ = slice(tok, 5, 1);
          bit_____ = slice(tok, 6, 1);
          bit______ = slice(tok, 7, 1);
          bit_______ = slice(tok, 8, 1);
          bit________ = slice(tok, 10, 1);
          bit_________ = slice(tok, 11, 1);
          bit__________ = slice(tok, 13, 1);
          dq = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq,gen_vec(1, bit__________));;
          dq_ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq_,gen_vec(1, bit_________));;
          dq__ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq__,gen_vec(1, bit________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit___));;
          dq___ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq___,gen_vec(1, bit__));;
          dq____ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq____,gen_vec(1, bit_));;
          dq_____ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq_____,gen_vec(1, bit));;
          return binop(s,constructor_LD,rd5,_slash_Action25);
        }; break;
        case 0: /* '00' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          vec_t dq;
          vec_t dq_;
          vec_t dq__;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t dq___;
          vec_t dq____;
          vec_t dq_____;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 4, 1);
          bit____ = slice(tok, 5, 1);
          bit_____ = slice(tok, 6, 1);
          bit______ = slice(tok, 7, 1);
          bit_______ = slice(tok, 8, 1);
          bit________ = slice(tok, 10, 1);
          bit_________ = slice(tok, 11, 1);
          bit__________ = slice(tok, 13, 1);
          dq = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq,gen_vec(1, bit__________));;
          dq_ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq_,gen_vec(1, bit_________));;
          dq__ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq__,gen_vec(1, bit________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit___));;
          dq___ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq___,gen_vec(1, bit__));;
          dq____ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq____,gen_vec(1, bit_));;
          dq_____ = s->mon_state.dq;
          s->mon_state.dq = vec_concat(s,dq_____,gen_vec(1, bit));;
          return binop(s,constructor_LD,rd5,_slash_Action26);
        }; break;
        default: {
          unconsume(s, 2);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 3: /* '011' */ {
      switch (slice(tok, 13, 1)) {
        case 1: /* '1' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          int_t bit___________;
          vec_t ck;
          vec_t ck_;
          vec_t ck__;
          vec_t ck___;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t ck____;
          vec_t ck_____;
          vec_t ck______;
          vec_t ck_______;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          bit___________ = slice(tok, 11, 1);
          ck = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit___________));;
          ck_ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit__________));;
          ck__ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit_________));;
          ck___ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
          ck____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit___));;
          ck_____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit__));;
          ck______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_));;
          ck_______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit));;
          return binop(s,constructor_ANDI,rd4,ck8);
        }; break;
        case 0: /* '0' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          int_t bit___________;
          vec_t ck;
          vec_t ck_;
          vec_t ck__;
          vec_t ck___;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t ck____;
          vec_t ck_____;
          vec_t ck______;
          vec_t ck_______;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          bit___________ = slice(tok, 11, 1);
          ck = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit___________));;
          ck_ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit__________));;
          ck__ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit_________));;
          ck___ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
          ck____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit___));;
          ck_____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit__));;
          ck______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_));;
          ck_______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit));;
          return binop(s,constructor_SUB,rd4,ck8);
        }; break;
        default: {
          unconsume(s, 2);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 2: /* '010' */ {
      switch (slice(tok, 13, 1)) {
        case 1: /* '1' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          int_t bit___________;
          vec_t ck;
          vec_t ck_;
          vec_t ck__;
          vec_t ck___;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t ck____;
          vec_t ck_____;
          vec_t ck______;
          vec_t ck_______;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          bit___________ = slice(tok, 11, 1);
          ck = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit___________));;
          ck_ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit__________));;
          ck__ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit_________));;
          ck___ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
          ck____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit___));;
          ck_____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit__));;
          ck______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_));;
          ck_______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit));;
          return binop(s,constructor_ORI,rd4,ck8);
        }; break;
        case 0: /* '0' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          int_t bit___________;
          vec_t ck;
          vec_t ck_;
          vec_t ck__;
          vec_t ck___;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t ck____;
          vec_t ck_____;
          vec_t ck______;
          vec_t ck_______;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          bit___________ = slice(tok, 11, 1);
          ck = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit___________));;
          ck_ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit__________));;
          ck__ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit_________));;
          ck___ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
          ck____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit___));;
          ck_____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit__));;
          ck______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_));;
          ck_______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit));;
          return binop(s,constructor_SBCI,rd4,ck8);
        }; break;
        default: {
          unconsume(s, 2);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 1: /* '001' */ {
      switch (slice(tok, 13, 1)) {
        case 1: /* '1' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          int_t bit__________;
          int_t bit___________;
          vec_t ck;
          vec_t ck_;
          vec_t ck__;
          vec_t ck___;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t ck____;
          vec_t ck_____;
          vec_t ck______;
          vec_t ck_______;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          bit__________ = slice(tok, 10, 1);
          bit___________ = slice(tok, 11, 1);
          ck = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck,gen_vec(1, bit___________));;
          ck_ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_,gen_vec(1, bit__________));;
          ck__ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck__,gen_vec(1, bit_________));;
          ck___ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck___,gen_vec(1, bit________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
          ck____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck____,gen_vec(1, bit___));;
          ck_____ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_____,gen_vec(1, bit__));;
          ck______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck______,gen_vec(1, bit_));;
          ck_______ = s->mon_state.ck;
          s->mon_state.ck = vec_concat(s,ck_______,gen_vec(1, bit));;
          return binop(s,constructor_CPI,rd4,ck8);
        }; break;
        case 0: /* '0' */ {
          switch (slice(tok, 10, 2)) {
            case 3: /* '11' */ {
              int_t bit;
              int_t bit_;
              int_t bit__;
              int_t bit___;
              int_t bit____;
              int_t bit_____;
              int_t bit______;
              int_t bit_______;
              int_t bit________;
              int_t bit_________;
              vec_t rr;
              vec_t rd;
              vec_t rd_;
              vec_t rd__;
              vec_t rd___;
              vec_t rd____;
              vec_t rr_;
              vec_t rr__;
              vec_t rr___;
              vec_t rr____;
              bit = slice(tok, 0, 1);
              bit_ = slice(tok, 1, 1);
              bit__ = slice(tok, 2, 1);
              bit___ = slice(tok, 3, 1);
              bit____ = slice(tok, 4, 1);
              bit_____ = slice(tok, 5, 1);
              bit______ = slice(tok, 6, 1);
              bit_______ = slice(tok, 7, 1);
              bit________ = slice(tok, 8, 1);
              bit_________ = slice(tok, 9, 1);
              rr = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
              rd = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
              rd_ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
              rd__ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
              rd___ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
              rd____ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
              rr_ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
              rr__ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
              rr___ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
              rr____ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
              return binop(s,constructor_ADC,rd5,rr5);
            }; break;
            case 2: /* '10' */ {
              int_t bit;
              int_t bit_;
              int_t bit__;
              int_t bit___;
              int_t bit____;
              int_t bit_____;
              int_t bit______;
              int_t bit_______;
              int_t bit________;
              int_t bit_________;
              vec_t rr;
              vec_t rd;
              vec_t rd_;
              vec_t rd__;
              vec_t rd___;
              vec_t rd____;
              vec_t rr_;
              vec_t rr__;
              vec_t rr___;
              vec_t rr____;
              bit = slice(tok, 0, 1);
              bit_ = slice(tok, 1, 1);
              bit__ = slice(tok, 2, 1);
              bit___ = slice(tok, 3, 1);
              bit____ = slice(tok, 4, 1);
              bit_____ = slice(tok, 5, 1);
              bit______ = slice(tok, 6, 1);
              bit_______ = slice(tok, 7, 1);
              bit________ = slice(tok, 8, 1);
              bit_________ = slice(tok, 9, 1);
              rr = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
              rd = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
              rd_ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
              rd__ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
              rd___ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
              rd____ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
              rr_ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
              rr__ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
              rr___ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
              rr____ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
              return binop(s,constructor_SUB,rd5,rr5);
            }; break;
            case 1: /* '01' */ {
              int_t bit;
              int_t bit_;
              int_t bit__;
              int_t bit___;
              int_t bit____;
              int_t bit_____;
              int_t bit______;
              int_t bit_______;
              int_t bit________;
              int_t bit_________;
              vec_t rr;
              vec_t rd;
              vec_t rd_;
              vec_t rd__;
              vec_t rd___;
              vec_t rd____;
              vec_t rr_;
              vec_t rr__;
              vec_t rr___;
              vec_t rr____;
              bit = slice(tok, 0, 1);
              bit_ = slice(tok, 1, 1);
              bit__ = slice(tok, 2, 1);
              bit___ = slice(tok, 3, 1);
              bit____ = slice(tok, 4, 1);
              bit_____ = slice(tok, 5, 1);
              bit______ = slice(tok, 6, 1);
              bit_______ = slice(tok, 7, 1);
              bit________ = slice(tok, 8, 1);
              bit_________ = slice(tok, 9, 1);
              rr = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
              rd = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
              rd_ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
              rd__ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
              rd___ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
              rd____ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
              rr_ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
              rr__ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
              rr___ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
              rr____ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
              return binop(s,constructor_CP,rd5,rr5);
            }; break;
            case 0: /* '00' */ {
              int_t bit;
              int_t bit_;
              int_t bit__;
              int_t bit___;
              int_t bit____;
              int_t bit_____;
              int_t bit______;
              int_t bit_______;
              int_t bit________;
              int_t bit_________;
              vec_t rr;
              vec_t rd;
              vec_t rd_;
              vec_t rd__;
              vec_t rd___;
              vec_t rd____;
              vec_t rr_;
              vec_t rr__;
              vec_t rr___;
              vec_t rr____;
              bit = slice(tok, 0, 1);
              bit_ = slice(tok, 1, 1);
              bit__ = slice(tok, 2, 1);
              bit___ = slice(tok, 3, 1);
              bit____ = slice(tok, 4, 1);
              bit_____ = slice(tok, 5, 1);
              bit______ = slice(tok, 6, 1);
              bit_______ = slice(tok, 7, 1);
              bit________ = slice(tok, 8, 1);
              bit_________ = slice(tok, 9, 1);
              rr = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
              rd = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
              rd_ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
              rd__ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
              rd___ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
              rd____ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
              rr_ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
              rr__ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
              rr___ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
              rr____ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
              return ternop(s,constructor_CPSE,rd5,rr5,sizeof_next);
            }; break;
            default: {
              unconsume(s, 2);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        default: {
          unconsume(s, 2);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 0: /* '000' */ {
      switch (slice(vec_concat(s,gen_vec(1, slice(tok,13,1)),gen_vec(12, slice(tok,0,12))).data, 10, 3)) {
        case 7: /* '111' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          vec_t rr;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
          return binop(s,constructor_MOV,rd5,rr5);
        }; break;
        case 6: /* '110' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          vec_t rr;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
          return binop(s,constructor_OR,rd5,rr5);
        }; break;
        case 5: /* '101' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          vec_t rr;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
          return binop(s,constructor_EOR,rd5,rr5);
        }; break;
        case 4: /* '100' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          vec_t rr;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
          return binop(s,constructor_AND,rd5,rr5);
        }; break;
        case 3: /* '011' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          vec_t rr;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
          return binop(s,constructor_ADD,rd5,rr5);
        }; break;
        case 2: /* '010' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          vec_t rr;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
          return binop(s,constructor_SBC,rd5,rr5);
        }; break;
        case 1: /* '001' */ {
          int_t bit;
          int_t bit_;
          int_t bit__;
          int_t bit___;
          int_t bit____;
          int_t bit_____;
          int_t bit______;
          int_t bit_______;
          int_t bit________;
          int_t bit_________;
          vec_t rr;
          vec_t rd;
          vec_t rd_;
          vec_t rd__;
          vec_t rd___;
          vec_t rd____;
          vec_t rr_;
          vec_t rr__;
          vec_t rr___;
          vec_t rr____;
          bit = slice(tok, 0, 1);
          bit_ = slice(tok, 1, 1);
          bit__ = slice(tok, 2, 1);
          bit___ = slice(tok, 3, 1);
          bit____ = slice(tok, 4, 1);
          bit_____ = slice(tok, 5, 1);
          bit______ = slice(tok, 6, 1);
          bit_______ = slice(tok, 7, 1);
          bit________ = slice(tok, 8, 1);
          bit_________ = slice(tok, 9, 1);
          rr = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit_________));;
          rd = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit________));;
          rd_ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit_______));;
          rd__ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit______));;
          rd___ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit_____));;
          rd____ = s->mon_state.rd;
          s->mon_state.rd = vec_concat(s,rd____,gen_vec(1, bit____));;
          rr_ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit___));;
          rr__ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit__));;
          rr___ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit_));;
          rr____ = s->mon_state.rr;
          s->mon_state.rr = vec_concat(s,rr____,gen_vec(1, bit));;
          return binop(s,constructor_CPC,rd5,rr5);
        }; break;
        case 0: /* '000' */ {
          switch (slice(tok, 8, 2)) {
            case 3: /* '11' */ {
              switch (vec_concat(s,gen_vec(1, slice(tok,7,1)),gen_vec(1, slice(tok,3,1))).data) {
                case 3: /* '11' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 4, 1);
                  bit____ = slice(tok, 5, 1);
                  bit_____ = slice(tok, 6, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit____));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit___));;
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit__));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit_));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit));;
                  return binop(s,constructor_FMULSU,rd3,rr3);
                }; break;
                case 2: /* '10' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 4, 1);
                  bit____ = slice(tok, 5, 1);
                  bit_____ = slice(tok, 6, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit____));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit___));;
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit__));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit_));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit));;
                  return binop(s,constructor_FMULS,rd3,rr3);
                }; break;
                case 1: /* '01' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 4, 1);
                  bit____ = slice(tok, 5, 1);
                  bit_____ = slice(tok, 6, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit____));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit___));;
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit__));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit_));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit));;
                  return binop(s,constructor_FMUL,rd3,rr3);
                }; break;
                case 0: /* '00' */ {
                  int_t bit;
                  int_t bit_;
                  int_t bit__;
                  int_t bit___;
                  int_t bit____;
                  int_t bit_____;
                  vec_t rd;
                  vec_t rd_;
                  vec_t rd__;
                  vec_t rr;
                  vec_t rr_;
                  vec_t rr__;
                  bit = slice(tok, 0, 1);
                  bit_ = slice(tok, 1, 1);
                  bit__ = slice(tok, 2, 1);
                  bit___ = slice(tok, 4, 1);
                  bit____ = slice(tok, 5, 1);
                  bit_____ = slice(tok, 6, 1);
                  rd = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_____));;
                  rd_ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit____));;
                  rd__ = s->mon_state.rd;
                  s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit___));;
                  rr = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit__));;
                  rr_ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit_));;
                  rr__ = s->mon_state.rr;
                  s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit));;
                  return binop(s,constructor_MULSU,rd3,rr3);
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 2: /* '10' */ {
              int_t bit;
              int_t bit_;
              int_t bit__;
              int_t bit___;
              int_t bit____;
              int_t bit_____;
              int_t bit______;
              int_t bit_______;
              vec_t rd;
              vec_t rd_;
              vec_t rd__;
              vec_t rd___;
              vec_t rr;
              vec_t rr_;
              vec_t rr__;
              vec_t rr___;
              bit = slice(tok, 0, 1);
              bit_ = slice(tok, 1, 1);
              bit__ = slice(tok, 2, 1);
              bit___ = slice(tok, 3, 1);
              bit____ = slice(tok, 4, 1);
              bit_____ = slice(tok, 5, 1);
              bit______ = slice(tok, 6, 1);
              bit_______ = slice(tok, 7, 1);
              rd = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
              rd_ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
              rd__ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
              rd___ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
              rr = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit___));;
              rr_ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit__));;
              rr__ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit_));;
              rr___ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit));;
              return binop(s,constructor_MULS,rd4,rr4);
            }; break;
            case 1: /* '01' */ {
              int_t bit;
              int_t bit_;
              int_t bit__;
              int_t bit___;
              int_t bit____;
              int_t bit_____;
              int_t bit______;
              int_t bit_______;
              vec_t rd;
              vec_t rd_;
              vec_t rd__;
              vec_t rd___;
              vec_t rr;
              vec_t rr_;
              vec_t rr__;
              vec_t rr___;
              bit = slice(tok, 0, 1);
              bit_ = slice(tok, 1, 1);
              bit__ = slice(tok, 2, 1);
              bit___ = slice(tok, 3, 1);
              bit____ = slice(tok, 4, 1);
              bit_____ = slice(tok, 5, 1);
              bit______ = slice(tok, 6, 1);
              bit_______ = slice(tok, 7, 1);
              rd = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd,gen_vec(1, bit_______));;
              rd_ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd_,gen_vec(1, bit______));;
              rd__ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd__,gen_vec(1, bit_____));;
              rd___ = s->mon_state.rd;
              s->mon_state.rd = vec_concat(s,rd___,gen_vec(1, bit____));;
              rr = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr,gen_vec(1, bit___));;
              rr_ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr_,gen_vec(1, bit__));;
              rr__ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr__,gen_vec(1, bit_));;
              rr___ = s->mon_state.rr;
              s->mon_state.rr = vec_concat(s,rr___,gen_vec(1, bit));;
              return binop(s,constructor_MOVW,rd4h_rd4l,rr4h_rr4l);
            }; break;
            case 0: /* '00' */ {
              switch (slice(tok, 0, 8)) {
                case 0: /* '00000000' */ {
                  return nullop(s,alloc_int(s,CON_NOP));
                }; break;
                default: {
                  unconsume(s, 2);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            default: {
              unconsume(s, 2);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        default: {
          unconsume(s, 2);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      unconsume(s, 2);
      s->err_str = "DecodeSequenceMatchFailure";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sizeof-next */
static obj_t sizeof_next(state_t s) {
  int_t index;
  int_t new;
  index = gdsl_get_ip(s);
  _slash_(s);
  new = gdsl_get_ip(s);
  alloc_int(s,gdsl_seek(s, (size_t) (index)));
  return constructor_IMM(s,constructor_IMMi(s,((new-index))/(2)));
}
/* decode */
static insndata_t decode(state_t s,int_t config) {
  int_t idx_before;
  obj_t insn;
  int_t idx_after;
  set_endianness(s,CON_LITTLE_ENDIAN,2);
  s->mon_state.rd = gen_vec(0, 0 /* '' */);
  s->mon_state.rr = gen_vec(0, 0 /* '' */);
  s->mon_state.ck = gen_vec(0, 0 /* '' */);
  s->mon_state.cs = 0 /* '' */;
  s->mon_state.io = gen_vec(0, 0 /* '' */);
  s->mon_state.cb = gen_vec(0, 0 /* '' */);
  s->mon_state.dq = gen_vec(0, 0 /* '' */);
  s->mon_state.config = config;;
  idx_before = gdsl_get_ip(s);
  insn = _slash_(s);
  idx_after = gdsl_get_ip(s);
  return __insndata(s,insn,(idx_after-idx_before));
}
/* recordify */
static obj_t recordify(state_t s,obj_t mnemonic,obj_t ua) {
  return add_field_obj(s,75/* ua */,ua,add_field_obj(s,44/* mnemonic */,mnemonic,NULL));
}
static INLINE_ATTR obj_t constructor_UA3(state_t s,ternop_t arg_of_UA3) {
  con_ternop_t adt;
  adt.tag = 272/* UA3 */;
  adt.payload = arg_of_UA3;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_UA2(state_t s,binop_t arg_of_UA2) {
  con_binop_t adt;
  adt.tag = 271/* UA2 */;
  adt.payload = arg_of_UA2;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_UA1(state_t s,unop_t arg_of_UA1) {
  con_unop_t adt;
  adt.tag = 270/* UA1 */;
  adt.payload = arg_of_UA1;
  return (obj_t) alloc_con_unop(s,adt);
}
/* traverse */
static obj_t traverse(state_t s,obj_t (*f)(state_t,obj_t,obj_t),obj_t insn) {
  switch (((con_obj_t*) insn)->tag) {
    case 61/* ADC */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"ADC"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 62/* ADD */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"ADD"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 63/* ADIW */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"ADIW"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 64/* AND */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"AND"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 65/* ANDI */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"ANDI"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 66/* ASR */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"ASR"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 67/* BLD */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BLD"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 68/* BRCC */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRCC"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 69/* BRCS */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRCS"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case CON_BREAK: {
      return f(s,from_string_lit(s,"BREAK"),alloc_int(s,CON_UA0));
    }; break;
    case 71/* BREQ */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BREQ"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 72/* BRGE */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRGE"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 73/* BRHC */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRHC"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 74/* BRHS */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRHS"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 75/* BRID */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRID"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 76/* BRIE */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRIE"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 77/* BRLT */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRLT"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 78/* BRMI */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRMI"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 79/* BRNE */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRNE"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 80/* BRPL */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRPL"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 81/* BRTC */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRTC"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 82/* BRTS */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRTS"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 83/* BRVC */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRVC"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 84/* BRVS */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BRVS"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 85/* BST */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"BST"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 86/* CALL */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"CALL"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 87/* CBI */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"CBI"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case CON_CLC: {
      return f(s,from_string_lit(s,"CLC"),alloc_int(s,CON_UA0));
    }; break;
    case CON_CLH: {
      return f(s,from_string_lit(s,"CLH"),alloc_int(s,CON_UA0));
    }; break;
    case CON_CLI: {
      return f(s,from_string_lit(s,"CLI"),alloc_int(s,CON_UA0));
    }; break;
    case CON_CLN: {
      return f(s,from_string_lit(s,"CLN"),alloc_int(s,CON_UA0));
    }; break;
    case CON_CLS: {
      return f(s,from_string_lit(s,"CLS"),alloc_int(s,CON_UA0));
    }; break;
    case CON_CLT: {
      return f(s,from_string_lit(s,"CLT"),alloc_int(s,CON_UA0));
    }; break;
    case CON_CLV: {
      return f(s,from_string_lit(s,"CLV"),alloc_int(s,CON_UA0));
    }; break;
    case CON_CLZ: {
      return f(s,from_string_lit(s,"CLZ"),alloc_int(s,CON_UA0));
    }; break;
    case 98/* COM */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"COM"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 99/* CP */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"CP"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 100/* CPC */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"CPC"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 101/* CPI */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"CPI"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 102/* CPSE */: {
      ternop_t t;
      t = ((con_ternop_t*) insn)->payload;
      return f(s,from_string_lit(s,"CPSE"),constructor_UA3(s,__ternop(s,t.first,t.second,t.third)));
    }; break;
    case 103/* DEC */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"DEC"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 104/* DES */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"DES"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case CON_EICALL: {
      return f(s,from_string_lit(s,"EICALL"),alloc_int(s,CON_UA0));
    }; break;
    case CON_EIJMP: {
      return f(s,from_string_lit(s,"EIJMP"),alloc_int(s,CON_UA0));
    }; break;
    case 107/* ELPM */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"ELPM"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 108/* EOR */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"EOR"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 109/* FMUL */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"FMUL"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 110/* FMULS */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"FMULS"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 111/* FMULSU */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"FMULSU"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case CON_ICALL: {
      return f(s,from_string_lit(s,"ICALL"),alloc_int(s,CON_UA0));
    }; break;
    case CON_IJMP: {
      return f(s,from_string_lit(s,"IJMP"),alloc_int(s,CON_UA0));
    }; break;
    case 114/* IN */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"IN"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 115/* INC */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"INC"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 116/* JMP */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"JMP"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 117/* LAC */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"LAC"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 118/* LAS */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"LAS"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 119/* LAT */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"LAT"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 120/* LD */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"LD"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 121/* LDI */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"LDI"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 122/* LDS */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"LDS"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 123/* LPM */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"LPM"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 125/* LSR */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"LSR"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 126/* MOV */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"MOV"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 127/* MOVW */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"MOVW"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 128/* MUL */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"MUL"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 129/* MULS */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"MULS"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 130/* MULSU */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"MULSU"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 131/* NEG */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"NEG"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case CON_NOP: {
      return f(s,from_string_lit(s,"NOP"),alloc_int(s,CON_UA0));
    }; break;
    case 133/* OR */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"OR"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 134/* ORI */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"ORI"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 135/* OUT */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"OUT"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 136/* POP */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"POP"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 137/* PUSH */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"PUSH"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 138/* RCALL */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"RCALL"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case CON_RET: {
      return f(s,from_string_lit(s,"RET"),alloc_int(s,CON_UA0));
    }; break;
    case CON_RETI: {
      return f(s,from_string_lit(s,"RETI"),alloc_int(s,CON_UA0));
    }; break;
    case 141/* RJMP */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"RJMP"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 143/* ROR */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"ROR"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 144/* SBC */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SBC"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 145/* SBCI */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SBCI"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 146/* SBI */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SBI"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 147/* SBIC */: {
      ternop_t t;
      t = ((con_ternop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SBIC"),constructor_UA3(s,__ternop(s,t.first,t.second,t.third)));
    }; break;
    case 148/* SBIS */: {
      ternop_t t;
      t = ((con_ternop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SBIS"),constructor_UA3(s,__ternop(s,t.first,t.second,t.third)));
    }; break;
    case 149/* SBIW */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SBIW"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 151/* SBRC */: {
      ternop_t t;
      t = ((con_ternop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SBRC"),constructor_UA3(s,__ternop(s,t.first,t.second,t.third)));
    }; break;
    case 152/* SBRS */: {
      ternop_t t;
      t = ((con_ternop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SBRS"),constructor_UA3(s,__ternop(s,t.first,t.second,t.third)));
    }; break;
    case CON_SEC: {
      return f(s,from_string_lit(s,"SEC"),alloc_int(s,CON_UA0));
    }; break;
    case CON_SEH: {
      return f(s,from_string_lit(s,"SEH"),alloc_int(s,CON_UA0));
    }; break;
    case CON_SEI: {
      return f(s,from_string_lit(s,"SEI"),alloc_int(s,CON_UA0));
    }; break;
    case CON_SEN: {
      return f(s,from_string_lit(s,"SEN"),alloc_int(s,CON_UA0));
    }; break;
    case CON_SES: {
      return f(s,from_string_lit(s,"SES"),alloc_int(s,CON_UA0));
    }; break;
    case CON_SET: {
      return f(s,from_string_lit(s,"SET"),alloc_int(s,CON_UA0));
    }; break;
    case CON_SEV: {
      return f(s,from_string_lit(s,"SEV"),alloc_int(s,CON_UA0));
    }; break;
    case CON_SEZ: {
      return f(s,from_string_lit(s,"SEZ"),alloc_int(s,CON_UA0));
    }; break;
    case CON_SLEEP: {
      return f(s,from_string_lit(s,"SLEEP"),alloc_int(s,CON_UA0));
    }; break;
    case 162/* SPM */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SPM"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case 163/* ST */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"ST"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 164/* STS */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"STS"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 165/* SUB */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SUB"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    case 167/* SWAP */: {
      unop_t u;
      u = ((con_unop_t*) insn)->payload;
      return f(s,from_string_lit(s,"SWAP"),constructor_UA1(s,__unop(s,u.operand)));
    }; break;
    case CON_WDR: {
      return f(s,from_string_lit(s,"WDR"),alloc_int(s,CON_UA0));
    }; break;
    case 170/* XCH */: {
      binop_t b;
      b = ((con_binop_t*) insn)->payload;
      return f(s,from_string_lit(s,"XCH"),constructor_UA2(s,__binop(s,b.first,b.second)));
    }; break;
    default: {
      s->err_str = "pattern match failure in traverse at specifications/avr/avr-traverse.ml:123.8-9";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* traversed */
static obj_t traversed(state_t s,insndata_t insn) {
  return traverse(s,recordify,insn->insn);
}
/* show/register */
static obj_t show_slash_register(state_t s,obj_t r) {
  switch (*((int_t*) r)) {
    case CON_R0: {
      return from_string_lit(s,"R0");
    }; break;
    case CON_R1: {
      return from_string_lit(s,"R1");
    }; break;
    case CON_R2: {
      return from_string_lit(s,"R2");
    }; break;
    case CON_R3: {
      return from_string_lit(s,"R3");
    }; break;
    case CON_R4: {
      return from_string_lit(s,"R4");
    }; break;
    case CON_R5: {
      return from_string_lit(s,"R5");
    }; break;
    case CON_R6: {
      return from_string_lit(s,"R6");
    }; break;
    case CON_R7: {
      return from_string_lit(s,"R7");
    }; break;
    case CON_R8: {
      return from_string_lit(s,"R8");
    }; break;
    case CON_R9: {
      return from_string_lit(s,"R9");
    }; break;
    case CON_R10: {
      return from_string_lit(s,"R10");
    }; break;
    case CON_R11: {
      return from_string_lit(s,"R11");
    }; break;
    case CON_R12: {
      return from_string_lit(s,"R12");
    }; break;
    case CON_R13: {
      return from_string_lit(s,"R13");
    }; break;
    case CON_R14: {
      return from_string_lit(s,"R14");
    }; break;
    case CON_R15: {
      return from_string_lit(s,"R15");
    }; break;
    case CON_R16: {
      return from_string_lit(s,"R16");
    }; break;
    case CON_R17: {
      return from_string_lit(s,"R17");
    }; break;
    case CON_R18: {
      return from_string_lit(s,"R18");
    }; break;
    case CON_R19: {
      return from_string_lit(s,"R19");
    }; break;
    case CON_R20: {
      return from_string_lit(s,"R20");
    }; break;
    case CON_R21: {
      return from_string_lit(s,"R21");
    }; break;
    case CON_R22: {
      return from_string_lit(s,"R22");
    }; break;
    case CON_R23: {
      return from_string_lit(s,"R23");
    }; break;
    case CON_R24: {
      return from_string_lit(s,"R24");
    }; break;
    case CON_R25: {
      return from_string_lit(s,"R25");
    }; break;
    case CON_R26: {
      return from_string_lit(s,"R26");
    }; break;
    case CON_R27: {
      return from_string_lit(s,"R27");
    }; break;
    case CON_R28: {
      return from_string_lit(s,"R28");
    }; break;
    case CON_R29: {
      return from_string_lit(s,"R29");
    }; break;
    case CON_R30: {
      return from_string_lit(s,"R30");
    }; break;
    case CON_R31: {
      return from_string_lit(s,"R31");
    }; break;
    case CON_IO0: {
      return from_string_lit(s,"IO0");
    }; break;
    case CON_IO1: {
      return from_string_lit(s,"IO1");
    }; break;
    case CON_IO2: {
      return from_string_lit(s,"IO2");
    }; break;
    case CON_IO3: {
      return from_string_lit(s,"IO3");
    }; break;
    case CON_IO4: {
      return from_string_lit(s,"IO4");
    }; break;
    case CON_IO5: {
      return from_string_lit(s,"IO5");
    }; break;
    case CON_IO6: {
      return from_string_lit(s,"IO6");
    }; break;
    case CON_IO7: {
      return from_string_lit(s,"IO7");
    }; break;
    case CON_IO8: {
      return from_string_lit(s,"IO8");
    }; break;
    case CON_IO9: {
      return from_string_lit(s,"IO9");
    }; break;
    case CON_IO10: {
      return from_string_lit(s,"IO10");
    }; break;
    case CON_IO11: {
      return from_string_lit(s,"IO11");
    }; break;
    case CON_IO12: {
      return from_string_lit(s,"IO12");
    }; break;
    case CON_IO13: {
      return from_string_lit(s,"IO13");
    }; break;
    case CON_IO14: {
      return from_string_lit(s,"IO14");
    }; break;
    case CON_IO15: {
      return from_string_lit(s,"IO15");
    }; break;
    case CON_IO16: {
      return from_string_lit(s,"IO16");
    }; break;
    case CON_IO17: {
      return from_string_lit(s,"IO17");
    }; break;
    case CON_IO18: {
      return from_string_lit(s,"IO18");
    }; break;
    case CON_IO19: {
      return from_string_lit(s,"IO19");
    }; break;
    case CON_IO20: {
      return from_string_lit(s,"IO20");
    }; break;
    case CON_IO21: {
      return from_string_lit(s,"IO21");
    }; break;
    case CON_IO22: {
      return from_string_lit(s,"IO22");
    }; break;
    case CON_IO23: {
      return from_string_lit(s,"IO23");
    }; break;
    case CON_IO24: {
      return from_string_lit(s,"IO24");
    }; break;
    case CON_IO25: {
      return from_string_lit(s,"IO25");
    }; break;
    case CON_IO26: {
      return from_string_lit(s,"IO26");
    }; break;
    case CON_IO27: {
      return from_string_lit(s,"IO27");
    }; break;
    case CON_IO28: {
      return from_string_lit(s,"IO28");
    }; break;
    case CON_IO29: {
      return from_string_lit(s,"IO29");
    }; break;
    case CON_IO30: {
      return from_string_lit(s,"IO30");
    }; break;
    case CON_IO31: {
      return from_string_lit(s,"IO31");
    }; break;
    case CON_IO32: {
      return from_string_lit(s,"IO32");
    }; break;
    case CON_IO33: {
      return from_string_lit(s,"IO33");
    }; break;
    case CON_IO34: {
      return from_string_lit(s,"IO34");
    }; break;
    case CON_IO35: {
      return from_string_lit(s,"IO35");
    }; break;
    case CON_IO36: {
      return from_string_lit(s,"IO36");
    }; break;
    case CON_IO37: {
      return from_string_lit(s,"IO37");
    }; break;
    case CON_IO38: {
      return from_string_lit(s,"IO38");
    }; break;
    case CON_IO39: {
      return from_string_lit(s,"IO39");
    }; break;
    case CON_IO40: {
      return from_string_lit(s,"IO40");
    }; break;
    case CON_IO41: {
      return from_string_lit(s,"IO41");
    }; break;
    case CON_IO42: {
      return from_string_lit(s,"IO42");
    }; break;
    case CON_IO43: {
      return from_string_lit(s,"IO43");
    }; break;
    case CON_IO44: {
      return from_string_lit(s,"IO44");
    }; break;
    case CON_IO45: {
      return from_string_lit(s,"IO45");
    }; break;
    case CON_IO46: {
      return from_string_lit(s,"IO46");
    }; break;
    case CON_IO47: {
      return from_string_lit(s,"IO47");
    }; break;
    case CON_IO48: {
      return from_string_lit(s,"IO48");
    }; break;
    case CON_IO49: {
      return from_string_lit(s,"IO49");
    }; break;
    case CON_IO50: {
      return from_string_lit(s,"IO50");
    }; break;
    case CON_IO51: {
      return from_string_lit(s,"IO51");
    }; break;
    case CON_IO52: {
      return from_string_lit(s,"IO52");
    }; break;
    case CON_IO53: {
      return from_string_lit(s,"IO53");
    }; break;
    case CON_IO54: {
      return from_string_lit(s,"IO54");
    }; break;
    case CON_IO55: {
      return from_string_lit(s,"IO55");
    }; break;
    case CON_RAMPD: {
      return from_string_lit(s,"RAMPD");
    }; break;
    case CON_RAMPX: {
      return from_string_lit(s,"RAMPX");
    }; break;
    case CON_RAMPY: {
      return from_string_lit(s,"RAMPY");
    }; break;
    case CON_RAMPZ: {
      return from_string_lit(s,"RAMPZ");
    }; break;
    case CON_EIND: {
      return from_string_lit(s,"EIND");
    }; break;
    case CON_SPL: {
      return from_string_lit(s,"SPL");
    }; break;
    case CON_SPH: {
      return from_string_lit(s,"SPH");
    }; break;
    case CON_SREG: {
      return from_string_lit(s,"SREG");
    }; break;
    case CON_PC: {
      return from_string_lit(s,"PC");
    }; break;
    default: {
      s->err_str = "pattern match failure in show/register at specifications/avr/avr-pretty.ml:154.7-9";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* generalize-register */
static obj_t generalize_register(state_t s,obj_t r) {
  return asm_reg(s,string_from_rope(s,show_slash_register(s,r)));
}
/* inner */
static obj_t inner(state_t s,vec_t i,int_t sz) {
  return asm_bounded(s,asm_boundary_sz(s,sz),asm_imm(s,vec_to_unsigned(s,i)));
}
/* generalize-immediate */
static obj_t generalize_immediate(state_t s,obj_t i) {
  switch (((con_obj_t*) i)->tag) {
    case 45/* IMM3 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,3);
    }; break;
    case 46/* IMM4 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,4);
    }; break;
    case 47/* IMM6 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,6);
    }; break;
    case 48/* IMM7 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,7);
    }; break;
    case 49/* IMM8 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,8);
    }; break;
    case 50/* IMM12 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,12);
    }; break;
    case 51/* IMM16 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,16);
    }; break;
    case 52/* IMM22 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,22);
    }; break;
    case 53/* IMMi */: {
      int_t i_;
      i_ = ((con_int_t*) i)->payload;
      return asm_imm(s,i_);
    }; break;
    default: {
      s->err_str = "pattern match failure in generalize-immediate at specifications/avr/avr-asm.ml:40.9-10";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* generalize-opnd */
static obj_t generalize_opnd(state_t s,obj_t opnd__) {
  switch (((con_obj_t*) opnd__)->tag) {
    case 54/* REG */: {
      obj_t r;
      r = ((con_obj_t*) opnd__)->payload;
      return generalize_register(s,r);
    }; break;
    case 55/* REGHL */: {
      reghl_t rhl;
      rhl = ((con_reghl_t*) opnd__)->payload;
      return asm_composite(s,asm_opnds_more(s,generalize_register(s,rhl.regh),asm_opnds_one(s,generalize_register(s,rhl.regl))));
    }; break;
    case 56/* REGIHL */: {
      struct21_t rhl;
      rhl = ((con_struct21_t*) opnd__)->payload;
      return asm_composite(s,asm_opnds_more(s,generalize_register(s,rhl.regi),asm_opnds_more(s,generalize_register(s,rhl.reghl.regh),asm_opnds_one(s,generalize_register(s,rhl.reghl.regl)))));
    }; break;
    case 57/* IOREG */: {
      obj_t r;
      r = ((con_obj_t*) opnd__)->payload;
      return generalize_register(s,r);
    }; break;
    case 58/* IMM */: {
      obj_t i;
      i = ((con_obj_t*) opnd__)->payload;
      return generalize_immediate(s,i);
    }; break;
    case 59/* OPSE */: {
      struct20_t opse;
      opse = ((con_struct20_t*) opnd__)->payload;
      return generalize_opse(s,opse);
    }; break;
    case 60/* OPDI */: {
      struct18_t opdi;
      opdi = ((con_struct18_t*) opnd__)->payload;
      return asm_sum(s,generalize_opnd(s,opdi.op),generalize_immediate(s,opdi.imm));
    }; break;
    default: {
      s->err_str = "pattern match failure in generalize-opnd at specifications/avr/avr-asm.ml:26.9-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* generalize-opse */
static obj_t generalize_opse(state_t s,struct20_t opse) {
  obj_t scrutinee;
  scrutinee = opse.se;
  switch (*((int_t*) scrutinee)) {
    case CON_NONE: {
      return generalize_opnd(s,opse.op);
    }; break;
    case 43/* INCR */: {
      int_t i;
      i = ((con_int_t*) scrutinee)->payload;
      return asm_po(s,asm_sum(s,opnd_(s,opse),asm_imm(s,i)),opnd_(s,opse));
    }; break;
    case CON_DECR: {
      return asm_po(s,asm_sum(s,opnd(s,opse),asm_imm(s,1)),opnd(s,opse));
    }; break;
    default: {
      s->err_str = "pattern match failure in generalize-opse at specifications/avr/avr-asm.ml:50.4-8";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* opnd */
static obj_t opnd(state_t s,struct20_t opse) {
  return generalize_opnd(s,opse.op);
}
/* opnd */
static obj_t opnd_(state_t s,struct20_t opse) {
  return generalize_opnd(s,opse.op);
}
/* generalize-ua */
static obj_t generalize_ua(state_t s,obj_t ua) {
  switch (*((int_t*) ua)) {
    case CON_UA0: {
      return s->asm_opnds_none;
    }; break;
    case 270/* UA1 */: {
      unop_t u;
      u = ((con_unop_t*) ua)->payload;
      return asm_opnds_one(s,generalize_opnd(s,u.operand));
    }; break;
    case 271/* UA2 */: {
      binop_t u;
      u = ((con_binop_t*) ua)->payload;
      return asm_opnds_more(s,generalize_opnd(s,u.first),asm_opnds_one(s,generalize_opnd(s,u.second)));
    }; break;
    case 272/* UA3 */: {
      ternop_t u;
      u = ((con_ternop_t*) ua)->payload;
      return asm_opnds_more(s,generalize_opnd(s,u.first),asm_opnds_more(s,generalize_opnd(s,u.second),asm_opnds_one(s,generalize_opnd(s,u.third))));
    }; break;
    default: {
      s->err_str = "pattern match failure in generalize-ua at specifications/avr/avr-asm.ml:14.8-9";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* generalize */
static asm_insn_t generalize(state_t s,insndata_t insn) {
  return asm_insn(s,insn->length,string_from_rope(s,select_obj(s,44/* mnemonic */,traversed(s,insn))),generalize_ua(s,select_obj(s,75/* ua */,traversed(s,insn))));
}
/* show/operand/imm */
static obj_t show_slash_operand_slash_imm(state_t s,obj_t imm_) {
  switch (((con_obj_t*) imm_)->tag) {
    case 45/* IMM3 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 46/* IMM4 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 47/* IMM6 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 48/* IMM7 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 49/* IMM8 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 50/* IMM12 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 51/* IMM16 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 52/* IMM22 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 53/* IMMi */: {
      int_t i;
      i = ((con_int_t*) imm_)->payload;
      return show_int(s,i);
    }; break;
    default: {
      s->err_str = "pattern match failure in show/operand/imm at specifications/avr/avr-pretty.ml:42.9-10";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/side-effect */
static obj_t show_slash_side_effect(state_t s,obj_t eff) {
  switch (*((int_t*) eff)) {
    case CON_NONE: {
      return from_string_lit(s,"");
    }; break;
    case 43/* INCR */: {
      int_t a;
      a = ((con_int_t*) eff)->payload;
      switch (a) {
        case 1: {
          return from_string_lit(s,"++");
        }; break;
        default: {
          return _plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"(++ "),show_int(s,a)),from_string_lit(s,")"));
        }; break;
      };
    }; break;
    case CON_DECR: {
      return from_string_lit(s,"--");
    }; break;
    default: {
      s->err_str = "pattern match failure in show/side-effect at specifications/avr/avr-pretty.ml:19.7-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/operand */
static obj_t show_slash_operand(state_t s,obj_t opnd__) {
  switch (((con_obj_t*) opnd__)->tag) {
    case 54/* REG */: {
      obj_t r;
      r = ((con_obj_t*) opnd__)->payload;
      return show_slash_register(s,r);
    }; break;
    case 55/* REGHL */: {
      reghl_t r;
      r = ((con_reghl_t*) opnd__)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_register(s,r.regh),from_string_lit(s,"/")),show_slash_register(s,r.regl));
    }; break;
    case 56/* REGIHL */: {
      struct21_t r;
      r = ((con_struct21_t*) opnd__)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_register(s,r.regi),from_string_lit(s,"/")),show_slash_register(s,r.reghl.regh)),from_string_lit(s,"/")),show_slash_register(s,r.reghl.regl));
    }; break;
    case 57/* IOREG */: {
      obj_t ior;
      ior = ((con_obj_t*) opnd__)->payload;
      return show_slash_register(s,ior);
    }; break;
    case 58/* IMM */: {
      obj_t imm_;
      imm_ = ((con_obj_t*) opnd__)->payload;
      return show_slash_operand_slash_imm(s,imm_);
    }; break;
    case 59/* OPSE */: {
      struct20_t op;
      op = ((con_struct20_t*) opnd__)->payload;
      return _plus__plus__plus_(s,show_slash_operand(s,op.op),show_slash_side_effect(s,op.se));
    }; break;
    case 60/* OPDI */: {
      struct18_t op;
      op = ((con_struct18_t*) opnd__)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_operand(s,op.op),from_string_lit(s,"+")),show_slash_operand_slash_imm(s,op.imm));
    }; break;
    default: {
      s->err_str = "pattern match failure in show/operand at specifications/avr/avr-pretty.ml:30.12-14";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/ternop */
static obj_t show_slash_ternop(state_t s,ternop_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_operand(s,x.first),from_string_lit(s,", ")),show_slash_operand(s,x.second)),from_string_lit(s,", ")),show_slash_operand(s,x.third));
}
/* show/binop */
static obj_t show_slash_binop(state_t s,binop_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_operand(s,x.first),from_string_lit(s,", ")),show_slash_operand(s,x.second));
}
/* show/unop */
static obj_t show_slash_unop(state_t s,unop_t x) {
  return show_slash_operand(s,x.operand);
}
/* show/ua */
static obj_t show_slash_ua(state_t s,obj_t mnemonic,obj_t ua) {
  switch (*((int_t*) ua)) {
    case CON_UA0: {
      return mnemonic;
    }; break;
    case 270/* UA1 */: {
      unop_t a;
      a = ((con_unop_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_unop(s,a));
    }; break;
    case 271/* UA2 */: {
      binop_t a;
      a = ((con_binop_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_binop(s,a));
    }; break;
    case 272/* UA3 */: {
      ternop_t a;
      a = ((con_ternop_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_ternop(s,a));
    }; break;
    default: {
      s->err_str = "pattern match failure in show/ua at specifications/avr/avr-pretty.ml:50.11-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/instruction */
static obj_t show_slash_instruction(state_t s,insndata_t insn) {
  return traverse(s,show_slash_ua,insn->insn);
}
/* pretty */
static obj_t pretty(state_t s,insndata_t i) {
  return show_slash_instruction(s,i);
}
/* fmap-value-merge */
static obj_t fmap_value_merge(state_t s,obj_t x,obj_t y) {
  return add_field_obj(s,77/* fields */,fitree_union(s,select_obj(s,77/* fields */,x),select_obj(s,77/* fields */,y)),add_field_obj(s,76/* id */,select_obj(s,76/* id */,x),NULL));
}
/* fmap-add */
static obj_t fmap_add(state_t s,obj_t t,obj_t x) {
  return bbtree_add(s,gen_int__obj_obj_closure(s,&fmap_lt_q__closure),t,x);
}
/* fmap-add-with */
static obj_t fmap_add_with(state_t s,obj_t (*f)(state_t,obj_t,obj_t),obj_t t,obj_t x) {
  return bbtree_add_with(s,gen_int__obj_obj_closure(s,&fmap_lt_q__closure),f,t,x);
}
/* fmap-update */
static obj_t fmap_update(state_t s,obj_t t,obj_t x) {
  return fmap_add_with(s,fmap_value_merge,t,x);
}
/* fmap-get */
static obj_t fmap_get(state_t s,obj_t t,obj_t x) {
  return bbtree_get(s,gen_int__obj_obj_closure(s,&fmap_lt_q__closure),t,add_field_obj(s,77/* fields */,s->fitree_empty,add_field_obj(s,76/* id */,select_obj(s,76/* id */,x),NULL)));
}
/* fmap-get-orelse */
static obj_t fmap_get_orelse(state_t s,obj_t t,obj_t x) {
  return bbtree_get_orelse(s,gen_int__obj_obj_closure(s,&fmap_lt_q__closure),t,x);
}
/* fmap-union */
static obj_t fmap_union(state_t s,obj_t a,obj_t b) {
  return bbtree_union(s,gen_int__obj_obj_closure(s,&fmap_lt_q__closure),a,b);
}
/* fmap-intersection */
static obj_t fmap_intersection(state_t s,obj_t a,obj_t b) {
  return bbtree_intersection(s,gen_int__obj_obj_closure(s,&fmap_lt_q__closure),a,b);
}
/* fmap-fold */
static obj_t fmap_fold(state_t s,obj_t f,obj_t s_,obj_t t) {
  return bbtree_fold(s,f,s_,t);
}
/* to-field */
static obj_t to_field(state_t s,int_t sz,int_t offs) {
  return add_field_int(s,14/* hi */,((offs+sz)-1),add_field_int(s,13/* lo */,offs,NULL));
}
/* fmap-add-field */
static obj_t fmap_add_field(state_t s,obj_t t,obj_t x,obj_t f) {
  return fmap_update(s,t,add_field_obj(s,77/* fields */,fitree_singleton(s,f),add_field_obj(s,76/* id */,x,NULL)));
}
/* fmap-add-range */
static obj_t fmap_add_range(state_t s,obj_t t,obj_t x,int_t sz,int_t offs) {
  return fmap_add_field(s,t,x,to_field(s,sz,offs));
}
static INLINE_ATTR obj_t constructor_SEM_CONS(state_t s,struct13_t arg_of_SEM_CONS) {
  con_struct13_t adt;
  adt.tag = 322/* SEM_CONS */;
  adt.payload = arg_of_SEM_CONS;
  return (obj_t) alloc_con_struct13(s,adt);
}
/* lp */
static obj_t lp(state_t s,obj_t stmt,obj_t acc) {
  switch (*((int_t*) stmt)) {
    case CON_SEM_NIL: {
      return acc;
    }; break;
    case 322/* SEM_CONS */: {
      struct13_t x;
      x = ((con_struct13_t*) stmt)->payload;
      return lp(s,x.tl,constructor_SEM_CONS(s,__struct13(s,x.hd,acc)));
    }; break;
    default: {
      s->err_str = "pattern match failure in lp at specifications/rreil/rreil.ml:94.22-23";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-stmts-rev */
static obj_t rreil_stmts_rev(state_t s,obj_t stmts) {
  return lp(s,stmts,alloc_int(s,CON_SEM_NIL));
}
/* at-offset */
static obj_t at_offset(state_t s,obj_t v,int_t o) {
  return add_field_int(s,54/* offset */,o,
           del_fields(s,field_array_54,1,v));
}
static INLINE_ATTR obj_t constructor_SEM_LIN_VAR(state_t s,obj_t arg_of_SEM_LIN_VAR) {
  con_obj_t adt;
  adt.tag = 276/* SEM_LIN_VAR */;
  adt.payload = arg_of_SEM_LIN_VAR;
  return (obj_t) alloc_con_obj(s,adt);
}
/* var */
static obj_t var(state_t s,obj_t x) {
  return constructor_SEM_LIN_VAR(s,add_field_obj(s,76/* id */,select_obj(s,76/* id */,x),add_field_int(s,54/* offset */,select_int(s,54/* offset */,x),NULL)));
}
/* %update_size */
static obj_t update_size(state_t s,int_t size_val,obj_t recArg) {
  return add_field_int(s,9/* size */,size_val,
           del_fields(s,field_array_9,1,recArg));
}
static INLINE_ATTR obj_t constructor_SEM_LIN_ADD(state_t s,sem_arity2_t arg_of_SEM_LIN_ADD) {
  con_sem_arity2_t adt;
  adt.tag = 278/* SEM_LIN_ADD */;
  adt.payload = arg_of_SEM_LIN_ADD;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* address */
static sem_address_t address(state_t s,int_t sz,obj_t addr) {
  return __sem_address(s,addr,sz);
}
/* mktemp */
static obj_t mktemp_(state_t s) {
  int_t t;
  int_t t_tick_;
  t = s->mon_state.tmp;
  t_tick_ = (t+1);
  s->mon_state.tmp = t_tick_;;
  return add_field_obj(s,76/* id */,constructor_VIRT_T(s,t),add_field_int(s,54/* offset */,0,NULL));
}
/* with-subscope */
static INLINE_ATTR obj_t invoke_obj_closure(state_t s,obj_t closure) {
  return ((struct {obj_t (*func)(state_t,obj_t);}*) closure)->func(s,closure);
}
static obj_t with_subscope(state_t s,obj_t m) {
  int_t l;
  obj_t ret_;
  l = s->mon_state.tmp;
  ret_ = invoke_obj_closure(s,m);
  s->mon_state.tmp = l;;
  return ret_;
}
static INLINE_ATTR obj_t constructor_SEM_ASSIGN(state_t s,struct28_t arg_of_SEM_ASSIGN) {
  con_struct28_t adt;
  adt.tag = 309/* SEM_ASSIGN */;
  adt.payload = arg_of_SEM_ASSIGN;
  return (obj_t) alloc_con_struct28(s,adt);
}
/* /ASSIGN */
static obj_t _slash_ASSIGN(state_t s,int_t sz,obj_t a,obj_t b) {
  return constructor_SEM_ASSIGN(s,__struct28(s,add_field_obj(s,76/* id */,select_obj(s,76/* id */,a),add_field_int(s,54/* offset */,select_int(s,54/* offset */,a),NULL)),b,sz));
}
static INLINE_ATTR obj_t constructor_SEM_LOAD(state_t s,struct29_t arg_of_SEM_LOAD) {
  con_struct29_t adt;
  adt.tag = 310/* SEM_LOAD */;
  adt.payload = arg_of_SEM_LOAD;
  return (obj_t) alloc_con_struct29(s,adt);
}
/* /LOAD */
static obj_t _slash_LOAD(state_t s,int_t sz,obj_t a,sem_address_t b) {
  return constructor_SEM_LOAD(s,__struct29(s,__sem_address(s,b.address,b.size),add_field_obj(s,76/* id */,select_obj(s,76/* id */,a),add_field_int(s,54/* offset */,select_int(s,54/* offset */,a),NULL)),sz));
}
static INLINE_ATTR obj_t constructor_SEM_STORE(state_t s,struct30_t arg_of_SEM_STORE) {
  con_struct30_t adt;
  adt.tag = 311/* SEM_STORE */;
  adt.payload = arg_of_SEM_STORE;
  return (obj_t) alloc_con_struct30(s,adt);
}
/* /STORE */
static obj_t _slash_STORE(state_t s,int_t sz,sem_address_t a,obj_t b) {
  return constructor_SEM_STORE(s,__struct30(s,__sem_address(s,a.address,a.size),b,sz));
}
/* /ADD */
static obj_t _slash_ADD(state_t s,obj_t a,obj_t b) {
  return constructor_SEM_LIN_ADD(s,__sem_arity2(s,a,b));
}
static INLINE_ATTR obj_t constructor_SEM_LIN_SUB(state_t s,sem_arity2_t arg_of_SEM_LIN_SUB) {
  con_sem_arity2_t adt;
  adt.tag = 279/* SEM_LIN_SUB */;
  adt.payload = arg_of_SEM_LIN_SUB;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* /SUB */
static obj_t _slash_SUB(state_t s,obj_t a,obj_t b) {
  return constructor_SEM_LIN_SUB(s,__sem_arity2(s,a,b));
}
static INLINE_ATTR obj_t constructor_SEM_ITE(state_t s,struct31_t arg_of_SEM_ITE) {
  con_struct31_t adt;
  adt.tag = 312/* SEM_ITE */;
  adt.payload = arg_of_SEM_ITE;
  return (obj_t) alloc_con_struct31(s,adt);
}
/* /ITE */
static obj_t _slash_ITE(state_t s,obj_t c,obj_t t,obj_t e_) {
  return constructor_SEM_ITE(s,__struct31(s,c,e_,t));
}
static INLINE_ATTR obj_t constructor_SEM_BRANCH(state_t s,struct32_t arg_of_SEM_BRANCH) {
  con_struct32_t adt;
  adt.tag = 315/* SEM_BRANCH */;
  adt.payload = arg_of_SEM_BRANCH;
  return (obj_t) alloc_con_struct32(s,adt);
}
/* /BRANCH */
static obj_t _slash_BRANCH(state_t s,obj_t hint,sem_address_t address_) {
  return constructor_SEM_BRANCH(s,__struct32(s,hint,__sem_address(s,address_.address,address_.size)));
}
static INLINE_ATTR obj_t constructor_SEM_CBRANCH(state_t s,struct33_t arg_of_SEM_CBRANCH) {
  con_struct33_t adt;
  adt.tag = 314/* SEM_CBRANCH */;
  adt.payload = arg_of_SEM_CBRANCH;
  return (obj_t) alloc_con_struct33(s,adt);
}
/* /CBRANCH */
static obj_t _slash_CBRANCH(state_t s,obj_t cond,sem_address_t target_true,sem_address_t target_false) {
  return constructor_SEM_CBRANCH(s,__struct33(s,cond,__sem_address(s,target_false.address,target_false.size),__sem_address(s,target_true.address,target_true.size)));
}
/* push-inner */
static obj_t push_inner(state_t s,obj_t insn) {
  obj_t tl;
  tl = s->mon_state.stack;
  s->mon_state.stack = constructor_SEM_CONS(s,__struct13(s,insn,tl));;
  return 0 /* void value */;
}
/* push */
static obj_t push(state_t s,obj_t insn) {
  switch (((con_obj_t*) insn)->tag) {
    case 309/* SEM_ASSIGN */: {
      struct28_t s_;
      s_ = ((con_struct28_t*) insn)->payload;
      if (0<s_.size) {
        return push_inner(s,insn);
      } else {
        return 0 /* void value */;
      };
    }; break;
    default: {
      return push_inner(s,insn);
    }; break;
  };
}
/* pop-all */
static obj_t pop_all(state_t s) {
  obj_t head;
  head = s->mon_state.stack;
  s->mon_state.stack = alloc_int(s,CON_SEM_NIL);;
  return head;
}
/* stack-set */
static void stack_set(state_t s,obj_t stmt) {
  s->mon_state.stack = stmt;;
}
static INLINE_ATTR obj_t constructor_SEM_SEXPR(state_t s,obj_t arg_of_SEM_SEXPR) {
  con_obj_t adt;
  adt.tag = 290/* SEM_SEXPR */;
  adt.payload = arg_of_SEM_SEXPR;
  return (obj_t) alloc_con_obj(s,adt);
}
static INLINE_ATTR obj_t constructor_SEM_SEXPR_LIN(state_t s,obj_t arg_of_SEM_SEXPR_LIN) {
  con_obj_t adt;
  adt.tag = 281/* SEM_SEXPR_LIN */;
  adt.payload = arg_of_SEM_SEXPR_LIN;
  return (obj_t) alloc_con_obj(s,adt);
}
/* mov */
static obj_t mov(state_t s,int_t sz,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_LIN(s,b))));
}
/* undef */
static obj_t undef(state_t s,int_t sz,obj_t a) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SEXPR(s,alloc_int(s,CON_SEM_SEXPR_ARB))));
}
/* load */
static obj_t load(state_t s,int_t sz,obj_t a,int_t psz,obj_t b) {
  return push(s,_slash_LOAD(s,sz,a,__sem_address(s,b,psz)));
}
/* store */
static obj_t store(state_t s,int_t sz,sem_address_t a,obj_t b) {
  return push(s,_slash_STORE(s,sz,a,b));
}
/* add */
static obj_t add(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_LIN(s,_slash_ADD(s,b,c)))));
}
/* sub */
static obj_t sub(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_LIN(s,_slash_SUB(s,b,c)))));
}
static INLINE_ATTR obj_t constructor_SEM_AND(state_t s,sem_arity2_t arg_of_SEM_AND) {
  con_sem_arity2_t adt;
  adt.tag = 299/* SEM_AND */;
  adt.payload = arg_of_SEM_AND;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* andbAction1 */
static obj_t andbAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_AND(s,__sem_arity2(s,b,c))));
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  int_t arg1;
  obj_t arg2;
  obj_t arg3;
  obj_t arg4;
} closure_obj_int_obj_obj_obj__t;
static obj_t andbAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return andbAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* andb */
static INLINE_ATTR obj_t gen_obj_int_obj_obj_obj__closure(state_t s,obj_t (*func)(state_t,obj_t),int_t arg1,obj_t arg2,obj_t arg3,obj_t arg4) {
  closure_obj_int_obj_obj_obj__t content;
  content.func = func;
  content.arg1 = arg1;
  content.arg2 = arg2;
  content.arg3 = arg3;
  content.arg4 = arg4;
  closure_obj_int_obj_obj_obj__t* closure = (closure_obj_int_obj_obj_obj__t*) alloc(s, sizeof(closure_obj_int_obj_obj_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t andb(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&andbAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_OR(state_t s,sem_arity2_t arg_of_SEM_OR) {
  con_sem_arity2_t adt;
  adt.tag = 300/* SEM_OR */;
  adt.payload = arg_of_SEM_OR;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* orbAction1 */
static obj_t orbAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_OR(s,__sem_arity2(s,b,c))));
}
static obj_t orbAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return orbAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* orb */
static obj_t orb(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&orbAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_XOR(state_t s,sem_arity2_t arg_of_SEM_XOR) {
  con_sem_arity2_t adt;
  adt.tag = 301/* SEM_XOR */;
  adt.payload = arg_of_SEM_XOR;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* xorbAction1 */
static obj_t xorbAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_XOR(s,__sem_arity2(s,b,c))));
}
static obj_t xorbAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return xorbAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* xorb */
static obj_t xorb(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&xorbAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_MUL(state_t s,sem_arity2_t arg_of_SEM_MUL) {
  con_sem_arity2_t adt;
  adt.tag = 291/* SEM_MUL */;
  adt.payload = arg_of_SEM_MUL;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* mul */
static obj_t mul(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_MUL(s,__sem_arity2(s,b,c))));
}
static INLINE_ATTR obj_t constructor_SEM_SHL(state_t s,sem_arity2_t arg_of_SEM_SHL) {
  con_sem_arity2_t adt;
  adt.tag = 296/* SEM_SHL */;
  adt.payload = arg_of_SEM_SHL;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* shl */
static obj_t shl(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SHL(s,__sem_arity2(s,b,c))));
}
static INLINE_ATTR obj_t constructor_SEM_SHR(state_t s,sem_arity2_t arg_of_SEM_SHR) {
  con_sem_arity2_t adt;
  adt.tag = 297/* SEM_SHR */;
  adt.payload = arg_of_SEM_SHR;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* shr */
static obj_t shr(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SHR(s,__sem_arity2(s,b,c))));
}
static INLINE_ATTR obj_t constructor_SEM_SHRS(state_t s,sem_arity2_t arg_of_SEM_SHRS) {
  con_sem_arity2_t adt;
  adt.tag = 298/* SEM_SHRS */;
  adt.payload = arg_of_SEM_SHRS;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* shrs */
static obj_t shrs(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SHRS(s,__sem_arity2(s,b,c))));
}
static INLINE_ATTR obj_t constructor_SEM_SX(state_t s,struct34_t arg_of_SEM_SX) {
  con_struct34_t adt;
  adt.tag = 302/* SEM_SX */;
  adt.payload = arg_of_SEM_SX;
  return (obj_t) alloc_con_struct34(s,adt);
}
/* movsxAction1 */
static obj_t movsxAction1(state_t s,int_t szA,obj_t a,int_t szB,obj_t b) {
  return push(s,_slash_ASSIGN(s,szA,a,constructor_SEM_SX(s,__struct34(s,szB,b))));
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  int_t arg1;
  obj_t arg2;
  int_t arg3;
  obj_t arg4;
} closure_obj_int_obj_int_obj__t;
static obj_t movsxAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_int_obj__t* c = (closure_obj_int_obj_int_obj__t*) v;
  return movsxAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* movsx */
static INLINE_ATTR obj_t gen_obj_int_obj_int_obj__closure(state_t s,obj_t (*func)(state_t,obj_t),int_t arg1,obj_t arg2,int_t arg3,obj_t arg4) {
  closure_obj_int_obj_int_obj__t content;
  content.func = func;
  content.arg1 = arg1;
  content.arg2 = arg2;
  content.arg3 = arg3;
  content.arg4 = arg4;
  closure_obj_int_obj_int_obj__t* closure = (closure_obj_int_obj_int_obj__t*) alloc(s, sizeof(closure_obj_int_obj_int_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t movsx(state_t s,int_t szA,obj_t a,int_t szB,obj_t b) {
  return gen_obj_int_obj_int_obj__closure(s,&movsxAction1Closure,szA,a,szB,b);
}
static INLINE_ATTR obj_t constructor_SEM_ZX(state_t s,struct34_t arg_of_SEM_ZX) {
  con_struct34_t adt;
  adt.tag = 303/* SEM_ZX */;
  adt.payload = arg_of_SEM_ZX;
  return (obj_t) alloc_con_struct34(s,adt);
}
/* movzxAction1 */
static obj_t movzxAction1(state_t s,int_t szA,obj_t a,int_t szB,obj_t b) {
  return push(s,_slash_ASSIGN(s,szA,a,constructor_SEM_ZX(s,__struct34(s,szB,b))));
}
static obj_t movzxAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_int_obj__t* c = (closure_obj_int_obj_int_obj__t*) v;
  return movzxAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* movzx */
static obj_t movzx(state_t s,int_t szA,obj_t a,int_t szB,obj_t b) {
  return gen_obj_int_obj_int_obj__closure(s,&movzxAction1Closure,szA,a,szB,b);
}
static INLINE_ATTR obj_t constructor_SEM_SEXPR_CMP(state_t s,obj_t arg_of_SEM_SEXPR_CMP) {
  con_obj_t adt;
  adt.tag = 282/* SEM_SEXPR_CMP */;
  adt.payload = arg_of_SEM_SEXPR_CMP;
  return (obj_t) alloc_con_obj(s,adt);
}
static INLINE_ATTR obj_t constructor_SEM_CMPEQ(state_t s,sem_arity2_t arg_of_SEM_CMPEQ) {
  con_sem_arity2_t adt;
  adt.tag = 284/* SEM_CMPEQ */;
  adt.payload = arg_of_SEM_CMPEQ;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* cmpeq */
static obj_t cmpeq(state_t s,int_t sz,obj_t f,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,f,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_CMP(s,constructor_SEM_CMPEQ(s,__sem_arity2(s,a,b))))));
}
static INLINE_ATTR obj_t constructor_SEM_CMPLEU(state_t s,sem_arity2_t arg_of_SEM_CMPLEU) {
  con_sem_arity2_t adt;
  adt.tag = 287/* SEM_CMPLEU */;
  adt.payload = arg_of_SEM_CMPLEU;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* cmpleu */
static obj_t cmpleu(state_t s,int_t sz,obj_t f,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,f,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_CMP(s,constructor_SEM_CMPLEU(s,__sem_arity2(s,a,b))))));
}
static INLINE_ATTR obj_t constructor_SEM_CMPLTS(state_t s,sem_arity2_t arg_of_SEM_CMPLTS) {
  con_sem_arity2_t adt;
  adt.tag = 288/* SEM_CMPLTS */;
  adt.payload = arg_of_SEM_CMPLTS;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* cmplts */
static obj_t cmplts(state_t s,int_t sz,obj_t f,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,f,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_CMP(s,constructor_SEM_CMPLTS(s,__sem_arity2(s,a,b))))));
}
static INLINE_ATTR obj_t constructor_SEM_CMPLTU(state_t s,sem_arity2_t arg_of_SEM_CMPLTU) {
  con_sem_arity2_t adt;
  adt.tag = 289/* SEM_CMPLTU */;
  adt.payload = arg_of_SEM_CMPLTU;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* cmpltu */
static obj_t cmpltu(state_t s,int_t sz,obj_t f,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,f,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_CMP(s,constructor_SEM_CMPLTU(s,__sem_arity2(s,a,b))))));
}
/* ite */
static obj_t ite(state_t s,obj_t c,obj_t t,obj_t e_) {
  return push(s,_slash_ITE(s,constructor_SEM_SEXPR_LIN(s,c),t,e_));
}
/* jump */
static obj_t jump(state_t s,sem_address_t address_) {
  s->mon_state.foundJump = 1 /* '1' */;;
  return push(s,_slash_BRANCH(s,alloc_int(s,CON_HINT_JUMP),address_));
}
/* call */
static obj_t call(state_t s,sem_address_t address_) {
  s->mon_state.foundJump = 1 /* '1' */;;
  return push(s,_slash_BRANCH(s,alloc_int(s,CON_HINT_CALL),address_));
}
/* ret */
static obj_t ret(state_t s,sem_address_t address_) {
  s->mon_state.foundJump = 1 /* '1' */;;
  return push(s,_slash_BRANCH(s,alloc_int(s,CON_HINT_RET),address_));
}
/* cbranch */
static obj_t cbranch(state_t s,obj_t cond,sem_address_t target_true,sem_address_t target_false) {
  s->mon_state.foundJump = 1 /* '1' */;;
  return push(s,_slash_CBRANCH(s,constructor_SEM_SEXPR_LIN(s,cond),target_true,target_false));
}
static INLINE_ATTR obj_t constructor_SEM_LIN_IMM(state_t s,struct35_t arg_of_SEM_LIN_IMM) {
  con_struct35_t adt;
  adt.tag = 277/* SEM_LIN_IMM */;
  adt.payload = arg_of_SEM_LIN_IMM;
  return (obj_t) alloc_con_struct35(s,adt);
}
/* int-from-linear */
static obj_t int_from_linear(state_t s,obj_t lin) {
  switch (((con_obj_t*) lin)->tag) {
    case 276/* SEM_LIN_VAR */: {
      return alloc_int(s,CON_IO_NONE);
    }; break;
    case 277/* SEM_LIN_IMM */: {
      struct35_t x;
      x = ((con_struct35_t*) lin)->payload;
      return constructor_IO_SOME(s,x.const_);
    }; break;
    case 278/* SEM_LIN_ADD */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return io_binop(s,addi,int_from_linear(s,x.opnd1),int_from_linear(s,x.opnd2));
    }; break;
    case 279/* SEM_LIN_SUB */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return io_binop(s,subi,int_from_linear(s,x.opnd1),int_from_linear(s,x.opnd2));
    }; break;
    default: {
      s->err_str = "pattern match failure in int-from-linear at specifications/rreil/rreil.ml:450.20-21";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* _if_then_else */
static obj_t _if_then_else(state_t s,obj_t c,obj_t a,obj_t b) {
  obj_t c_;
  obj_t scrutinee;
  c_ = with_subscope(s,c);
  scrutinee = int_from_linear(s,c_);
  switch (*((int_t*) scrutinee)) {
    case CON_IO_NONE: {
      obj_t stack;
      obj_t t;
      obj_t t_;
      obj_t e_;
      obj_t e__;
      stack = pop_all(s);
      with_subscope(s,a);
      t = pop_all(s);
      t_ = rreil_stmts_rev(s,t);
      with_subscope(s,b);
      e_ = pop_all(s);
      e__ = rreil_stmts_rev(s,e_);
      stack_set(s,stack);
      return ite(s,c_,t_,e__);
    }; break;
    case 3/* IO_SOME */: {
      int_t i;
      i = ((con_int_t*) scrutinee)->payload;
      switch (i) {
        case 0: {
          return with_subscope(s,b);
        }; break;
        default: {
          return with_subscope(s,a);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in _if_then_else at specifications/rreil/rreil.ml:311.14-15";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* /dAction1 */
static obj_t _slash_dAction1(state_t s,obj_t cond) {
  return cond;
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  obj_t arg1;
} closure_obj_obj__t;
static obj_t _slash_dAction1Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return _slash_dAction1(s,c->arg1);
}
/* /d */
static INLINE_ATTR obj_t gen_obj_obj__closure(state_t s,obj_t (*func)(state_t,obj_t),obj_t arg1) {
  closure_obj_obj__t content;
  content.func = func;
  content.arg1 = arg1;
  closure_obj_obj__t* closure = (closure_obj_obj__t*) alloc(s, sizeof(closure_obj_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t _slash_d(state_t s,obj_t cond) {
  return gen_obj_obj__closure(s,&_slash_dAction1Closure,cond);
}
/* imm */
static obj_t imm(state_t s,int_t i) {
  return constructor_SEM_LIN_IMM(s,__struct35(s,i));
}
/* /notAction1 */
static obj_t _slash_notAction1(state_t s,obj_t a) {
  obj_t t;
  t = mktemp_(s);
  invoke_obj_closure(s,xorb(s,1,t,a,imm(s,1)));
  return var(s,t);
}
static obj_t _slash_notAction1Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return _slash_notAction1(s,c->arg1);
}
/* /not */
static obj_t _slash_not(state_t s,obj_t a) {
  return gen_obj_obj__closure(s,&_slash_notAction1Closure,a);
}
/* /eq */
static obj_t _slash_eq(state_t s,int_t sz,obj_t a,obj_t b) {
  obj_t t;
  t = mktemp_(s);
  cmpeq(s,sz,t,a,b);
  return var(s,t);
}
/* count */
static int_t count(state_t s,int_t c,obj_t stmts) {
  switch (((con_obj_t*) stmts)->tag) {
    case 322/* SEM_CONS */: {
      struct13_t x;
      obj_t scrutinee;
      int_t caseRes;
      x = ((con_struct13_t*) stmts)->payload;
      scrutinee = x.hd;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 312/* SEM_ITE */: {
          struct31_t i;
          i = ((con_struct31_t*) scrutinee)->payload;
          caseRes = (count(s,c,i.then_branch)+count(s,0,i.else_branch));
        }; break;
        default: {
          caseRes = c;
        }; break;
      };
      return count(s,(1+caseRes),x.tl);
    }; break;
    case CON_SEM_NIL: {
      return c;
    }; break;
    default: {
      s->err_str = "pattern match failure in count at specifications/rreil/rreil.ml:466.6-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-stmts-count */
static int_t rreil_stmts_count(state_t s,obj_t stmts) {
  return count(s,0,stmts);
}
/* example_aAction4 */
static obj_t example_aAction4(state_t s,obj_t t1) {
  return mov(s,64,t1,imm(s,300));
}
static obj_t example_aAction4Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return example_aAction4(s,c->arg1);
}
/* example_aAction2 */
static obj_t example_aAction2(state_t s,obj_t t1) {
  return mov(s,64,t1,imm(s,500));
}
static obj_t example_aAction2Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return example_aAction2(s,c->arg1);
}
/* example_aAction1 */
static obj_t example_aAction1(state_t s,obj_t t1) {
  return mov(s,64,t1,imm(s,200));
}
static obj_t example_aAction1Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return example_aAction1(s,c->arg1);
}
/* example_aAction3 */
static obj_t example_aAction3(state_t s,obj_t t1,obj_t t2) {
  return _if_then_else(s,_slash_d(s,var(s,t2)),gen_obj_obj__closure(s,&example_aAction1Closure,t1),gen_obj_obj__closure(s,&example_aAction2Closure,t1));
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  obj_t arg1;
  obj_t arg2;
} closure_obj_obj_obj__t;
static obj_t example_aAction3Closure(state_t s,obj_t v) {
  closure_obj_obj_obj__t* c = (closure_obj_obj_obj__t*) v;
  return example_aAction3(s,c->arg1,c->arg2);
}
/* example_a */
static INLINE_ATTR obj_t gen_obj_obj_obj__closure(state_t s,obj_t (*func)(state_t,obj_t),obj_t arg1,obj_t arg2) {
  closure_obj_obj_obj__t content;
  content.func = func;
  content.arg1 = arg1;
  content.arg2 = arg2;
  closure_obj_obj_obj__t* closure = (closure_obj_obj_obj__t*) alloc(s, sizeof(closure_obj_obj_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t example_a(state_t s) {
  obj_t t0;
  obj_t t1;
  obj_t t2;
  obj_t stack;
  s->mon_state.tmp = 0;
  s->mon_state.lab = 0;
  s->mon_state.stack = alloc_int(s,CON_SEM_NIL);
  s->mon_state.mode64 = 1 /* '1' */;;
  t0 = mktemp_(s);
  t1 = mktemp_(s);
  t2 = mktemp_(s);
  mov(s,1,t0,imm(s,0));
  mov(s,1,t2,imm(s,1));
  _if_then_else(s,_slash_not(s,var(s,t0)),gen_obj_obj_obj__closure(s,&example_aAction3Closure,t1,t2),gen_obj_obj__closure(s,&example_aAction4Closure,t1));
  jump(s,address(s,64,var(s,t1)));
  stack = s->mon_state.stack;
  return rreil_stmts_rev(s,stack);
}
/* example_b */
static obj_t example_b(state_t s) {
  obj_t ax;
  obj_t t0;
  obj_t stack;
  s->mon_state.tmp = 0;
  s->mon_state.lab = 0;
  s->mon_state.stack = alloc_int(s,CON_SEM_NIL);
  s->mon_state.mode64 = 1 /* '1' */;;
  ax = mktemp_(s);
  t0 = mktemp_(s);
  mktemp_(s);
  mov(s,64,ax,imm(s,0x776655443322));
  mov(s,6,t0,imm(s,2));
  mov(s,58,at_offset(s,t0,6),imm(s,0));
  jump(s,address(s,64,var(s,t0)));
  stack = s->mon_state.stack;
  return rreil_stmts_rev(s,stack);
}
/* arch-show-id */
static obj_t arch_show_id(state_t s,obj_t r) {
  switch (*((int_t*) r)) {
    case CON_Sem_ALL: {
      return from_string_lit(s,"memory");
    }; break;
    case CON_Sem_PC: {
      return from_string_lit(s,"PC");
    }; break;
    case CON_Sem_PM: {
      return from_string_lit(s,"PM");
    }; break;
    default: {
      s->err_str = "pattern match failure in arch-show-id at specifications/avr/avr-rreil-pretty.ml:8.5-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* pretty-arch-id */
static obj_t pretty_arch_id(state_t s,obj_t r) {
  return arch_show_id(s,r);
}
/* rreil-convert-sem-id */
static obj_t rreil_convert_sem_id(state_t s,callbacks_t cbs,obj_t id) {
  switch (*((int_t*) id)) {
    case 274/* VIRT_T */: {
      int_t t;
      t = ((con_int_t*) id)->payload;
      return cbs->sem_id->virt_t(s,(t+0));
    }; break;
    default: {
      return cbs->sem_id->arch(s,string_from_rope(s,pretty_arch_id(s,id)));
    }; break;
  };
}
/* rreil-convert-sem-var */
static obj_t rreil_convert_sem_var(state_t s,callbacks_t cbs,obj_t var_) {
  return cbs->sem_var->sem_var_(s,rreil_convert_sem_id(s,cbs,select_obj(s,76/* id */,var_)),(select_int(s,54/* offset */,var_)+0));
}
/* rreil-convert-sem-linear */
static obj_t rreil_convert_sem_linear(state_t s,callbacks_t cbs,obj_t linear) {
  switch (((con_obj_t*) linear)->tag) {
    case 276/* SEM_LIN_VAR */: {
      obj_t v;
      v = ((con_obj_t*) linear)->payload;
      return cbs->sem_linear->sem_lin_var(s,rreil_convert_sem_var(s,cbs,v));
    }; break;
    case 277/* SEM_LIN_IMM */: {
      struct35_t i;
      i = ((con_struct35_t*) linear)->payload;
      return cbs->sem_linear->sem_lin_imm(s,(i.const_+0));
    }; break;
    case 278/* SEM_LIN_ADD */: {
      sem_arity2_t a;
      a = ((con_sem_arity2_t*) linear)->payload;
      return cbs->sem_linear->sem_lin_add(s,rreil_convert_sem_linear(s,cbs,a.opnd1),rreil_convert_sem_linear(s,cbs,a.opnd2));
    }; break;
    case 279/* SEM_LIN_SUB */: {
      sem_arity2_t s_;
      s_ = ((con_sem_arity2_t*) linear)->payload;
      return cbs->sem_linear->sem_lin_sub(s,rreil_convert_sem_linear(s,cbs,s_.opnd1),rreil_convert_sem_linear(s,cbs,s_.opnd2));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-convert-sem-linear at specifications/rreil/rreil-cif.ml:135.18-19";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-convert-sem-address */
static obj_t rreil_convert_sem_address(state_t s,callbacks_t cbs,sem_address_t address_) {
  return cbs->sem_address->sem_address_(s,(address_.size+0),rreil_convert_sem_linear(s,cbs,address_.address));
}
/* rreil-convert-sem-expr-cmp */
static obj_t rreil_convert_sem_expr_cmp(state_t s,callbacks_t cbs,obj_t expr_cmp) {
  switch (((con_obj_t*) expr_cmp)->tag) {
    case 284/* SEM_CMPEQ */: {
      sem_arity2_t c;
      c = ((con_sem_arity2_t*) expr_cmp)->payload;
      return cbs->sem_expr_cmp->sem_cmpeq(s,rreil_convert_sem_linear(s,cbs,c.opnd1),rreil_convert_sem_linear(s,cbs,c.opnd2));
    }; break;
    case 287/* SEM_CMPLEU */: {
      sem_arity2_t c;
      c = ((con_sem_arity2_t*) expr_cmp)->payload;
      return cbs->sem_expr_cmp->sem_cmpleu(s,rreil_convert_sem_linear(s,cbs,c.opnd1),rreil_convert_sem_linear(s,cbs,c.opnd2));
    }; break;
    case 288/* SEM_CMPLTS */: {
      sem_arity2_t c;
      c = ((con_sem_arity2_t*) expr_cmp)->payload;
      return cbs->sem_expr_cmp->sem_cmplts(s,rreil_convert_sem_linear(s,cbs,c.opnd1),rreil_convert_sem_linear(s,cbs,c.opnd2));
    }; break;
    case 289/* SEM_CMPLTU */: {
      sem_arity2_t c;
      c = ((con_sem_arity2_t*) expr_cmp)->payload;
      return cbs->sem_expr_cmp->sem_cmpltu(s,rreil_convert_sem_linear(s,cbs,c.opnd1),rreil_convert_sem_linear(s,cbs,c.opnd2));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-convert-sem-expr-cmp at specifications/rreil/rreil-cif.ml:150.15-16";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-convert-sem-sexpr */
static obj_t rreil_convert_sem_sexpr(state_t s,callbacks_t cbs,obj_t sexpr) {
  switch (((con_obj_t*) sexpr)->tag) {
    case 281/* SEM_SEXPR_LIN */: {
      obj_t l;
      l = ((con_obj_t*) sexpr)->payload;
      return cbs->sem_sexpr->sem_sexpr_lin(s,rreil_convert_sem_linear(s,cbs,l));
    }; break;
    case 282/* SEM_SEXPR_CMP */: {
      obj_t c;
      c = ((con_obj_t*) sexpr)->payload;
      return cbs->sem_sexpr->sem_sexpr_cmp(s,rreil_convert_sem_expr_cmp(s,cbs,c));
    }; break;
    case CON_SEM_SEXPR_ARB: {
      return cbs->sem_sexpr->sem_sexpr_arb(s);
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-convert-sem-sexpr at specifications/rreil/rreil-cif.ml:141.4-17";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-convert-sem-expr */
static obj_t rreil_convert_sem_expr(state_t s,callbacks_t cbs,obj_t expr) {
  switch (((con_obj_t*) expr)->tag) {
    case 290/* SEM_SEXPR */: {
      obj_t s_;
      s_ = ((con_obj_t*) expr)->payload;
      return cbs->sem_expr->sem_sexpr(s,rreil_convert_sem_sexpr(s,cbs,s_));
    }; break;
    case 291/* SEM_MUL */: {
      sem_arity2_t m;
      m = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_mul(s,rreil_convert_sem_linear(s,cbs,m.opnd1),rreil_convert_sem_linear(s,cbs,m.opnd2));
    }; break;
    case 296/* SEM_SHL */: {
      sem_arity2_t s_;
      s_ = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_shl(s,rreil_convert_sem_linear(s,cbs,s_.opnd1),rreil_convert_sem_linear(s,cbs,s_.opnd2));
    }; break;
    case 297/* SEM_SHR */: {
      sem_arity2_t s_;
      s_ = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_shr(s,rreil_convert_sem_linear(s,cbs,s_.opnd1),rreil_convert_sem_linear(s,cbs,s_.opnd2));
    }; break;
    case 298/* SEM_SHRS */: {
      sem_arity2_t s_;
      s_ = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_shrs(s,rreil_convert_sem_linear(s,cbs,s_.opnd1),rreil_convert_sem_linear(s,cbs,s_.opnd2));
    }; break;
    case 299/* SEM_AND */: {
      sem_arity2_t a;
      a = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_and(s,rreil_convert_sem_linear(s,cbs,a.opnd1),rreil_convert_sem_linear(s,cbs,a.opnd2));
    }; break;
    case 300/* SEM_OR */: {
      sem_arity2_t o;
      o = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_or(s,rreil_convert_sem_linear(s,cbs,o.opnd1),rreil_convert_sem_linear(s,cbs,o.opnd2));
    }; break;
    case 301/* SEM_XOR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_xor(s,rreil_convert_sem_linear(s,cbs,x.opnd1),rreil_convert_sem_linear(s,cbs,x.opnd2));
    }; break;
    case 302/* SEM_SX */: {
      struct34_t s_;
      s_ = ((con_struct34_t*) expr)->payload;
      return cbs->sem_expr->sem_sx(s,(s_.fromsize+0),rreil_convert_sem_linear(s,cbs,s_.opnd1));
    }; break;
    case 303/* SEM_ZX */: {
      struct34_t s_;
      s_ = ((con_struct34_t*) expr)->payload;
      return cbs->sem_expr->sem_zx(s,(s_.fromsize+0),rreil_convert_sem_linear(s,cbs,s_.opnd1));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-convert-sem-expr at specifications/rreil/rreil-cif.ml:167.11-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* branch_hint_enum */
static int_t branch_hint_enum(state_t s,obj_t hint) {
  switch (*((int_t*) hint)) {
    case CON_HINT_JUMP: {
      return 0;
    }; break;
    case CON_HINT_CALL: {
      return 1;
    }; break;
    case CON_HINT_RET: {
      return 2;
    }; break;
    default: {
      s->err_str = "pattern match failure in branch_hint_enum at specifications/rreil/rreil-cif.ml:173.4-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-convert-branch-hint */
static obj_t rreil_convert_branch_hint(state_t s,callbacks_t cbs,obj_t hint) {
  return cbs->branch_hint->branch_hint_(s,(branch_hint_enum(s,hint)+0));
}
/* rreil-convert-sem-stmt */
static obj_t rreil_convert_sem_stmt(state_t s,callbacks_t cbs,obj_t stmt) {
  switch (((con_obj_t*) stmt)->tag) {
    case 309/* SEM_ASSIGN */: {
      struct28_t s_;
      s_ = ((con_struct28_t*) stmt)->payload;
      return cbs->sem_stmt->sem_assign(s,(s_.size+0),rreil_convert_sem_var(s,cbs,s_.lhs),rreil_convert_sem_expr(s,cbs,s_.rhs));
    }; break;
    case 310/* SEM_LOAD */: {
      struct29_t l;
      l = ((con_struct29_t*) stmt)->payload;
      return cbs->sem_stmt->sem_load(s,(l.size+0),rreil_convert_sem_var(s,cbs,l.lhs),rreil_convert_sem_address(s,cbs,l.address));
    }; break;
    case 311/* SEM_STORE */: {
      struct30_t s_;
      s_ = ((con_struct30_t*) stmt)->payload;
      return cbs->sem_stmt->sem_store(s,(s_.size+0),rreil_convert_sem_address(s,cbs,s_.address),rreil_convert_sem_linear(s,cbs,s_.rhs));
    }; break;
    case 312/* SEM_ITE */: {
      struct31_t i;
      i = ((con_struct31_t*) stmt)->payload;
      return cbs->sem_stmt->sem_ite(s,rreil_convert_sem_sexpr(s,cbs,i.cond),rreil_convert_sem_stmt_list(s,cbs,i.then_branch),rreil_convert_sem_stmt_list(s,cbs,i.else_branch));
    }; break;
    case 314/* SEM_CBRANCH */: {
      struct33_t c;
      c = ((con_struct33_t*) stmt)->payload;
      return cbs->sem_stmt->sem_cbranch(s,rreil_convert_sem_sexpr(s,cbs,c.cond),rreil_convert_sem_address(s,cbs,c.target_true),rreil_convert_sem_address(s,cbs,c.target_false));
    }; break;
    case 315/* SEM_BRANCH */: {
      struct32_t b;
      b = ((con_struct32_t*) stmt)->payload;
      return cbs->sem_stmt->sem_branch(s,rreil_convert_branch_hint(s,cbs,b.hint),rreil_convert_sem_address(s,cbs,b.target));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-convert-sem-stmt at specifications/rreil/rreil-cif.ml:229.14-15";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-convert-sem-stmt-list */
static obj_t rreil_convert_sem_stmt_list(state_t s,callbacks_t cbs,obj_t stmts) {
  return convert_inner__(s,cbs,cbs->sem_stmt_list->sem_stmt_list_init(s),stmts);
}
/* convert-inner */
static obj_t convert_inner__(state_t s,callbacks_t cbs,obj_t list,obj_t stmts) {
  switch (((con_obj_t*) stmts)->tag) {
    case 322/* SEM_CONS */: {
      struct13_t s_;
      s_ = ((con_struct13_t*) stmts)->payload;
      return convert_inner__(s,cbs,cbs->sem_stmt_list->sem_stmt_list_next(s,rreil_convert_sem_stmt(s,cbs,s_.hd),list),s_.tl);
    }; break;
    case CON_SEM_NIL: {
      return list;
    }; break;
    default: {
      s->err_str = "pattern match failure in convert-inner at specifications/rreil/rreil-cif.ml:248.6-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-id */
static obj_t rreil_show_id(state_t s,obj_t id) {
  switch (*((int_t*) id)) {
    case 274/* VIRT_T */: {
      int_t x;
      x = ((con_int_t*) id)->payload;
      return _plus__plus__plus_(s,from_string_lit(s,"T"),show_int(s,x));
    }; break;
    default: {
      return arch_show_id(s,id);
    }; break;
  };
}
/* rreil-show-var */
static obj_t rreil_show_var(state_t s,obj_t x) {
  int_t o;
  int_t scrutinee;
  scrutinee = select_int(s,54/* offset */,x);
  switch (scrutinee) {
    case 0: {
      return rreil_show_id(s,select_obj(s,76/* id */,x));
    }; break;
    default: {
      o = scrutinee;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_id(s,select_obj(s,76/* id */,x)),from_string_lit(s,".")),show_int(s,o));
    }; break;
  };
}
/* rreil-show-linear */
static obj_t rreil_show_linear(state_t s,obj_t lin) {
  switch (((con_obj_t*) lin)->tag) {
    case 276/* SEM_LIN_VAR */: {
      obj_t x;
      x = ((con_obj_t*) lin)->payload;
      return rreil_show_var(s,x);
    }; break;
    case 277/* SEM_LIN_IMM */: {
      struct35_t x;
      x = ((con_struct35_t*) lin)->payload;
      return show_int(s,x.const_);
    }; break;
    case 278/* SEM_LIN_ADD */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"("),rreil_show_linear(s,x.opnd1)),from_string_lit(s," ")),from_string_lit(s,"+")),from_string_lit(s," ")),rreil_show_linear(s,x.opnd2)),from_string_lit(s,")"));
    }; break;
    case 279/* SEM_LIN_SUB */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"("),rreil_show_linear(s,x.opnd1)),from_string_lit(s," ")),from_string_lit(s,"-")),from_string_lit(s," ")),rreil_show_linear(s,x.opnd2)),from_string_lit(s,")"));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-show-linear at specifications/rreil/rreil-pretty.ml:126.21-22";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-cmp */
static obj_t rreil_show_cmp(state_t s,sem_arity2_t x,obj_t op) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_linear(s,x.opnd1),from_string_lit(s," ")),op),from_string_lit(s," ")),rreil_show_linear(s,x.opnd2));
}
/* rreil-show-op-cmp */
static obj_t rreil_show_op_cmp(state_t s,int_t size,obj_t cmp) {
  switch (((con_obj_t*) cmp)->tag) {
    case 284/* SEM_CMPEQ */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return rreil_show_cmp(s,x,_plus__plus__plus_(s,from_string_lit(s,"==:"),show_int(s,size)));
    }; break;
    case 287/* SEM_CMPLEU */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return rreil_show_cmp(s,x,_plus__plus__plus_(s,from_string_lit(s,"<=u:"),show_int(s,size)));
    }; break;
    case 288/* SEM_CMPLTS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return rreil_show_cmp(s,x,_plus__plus__plus_(s,from_string_lit(s,"<s:"),show_int(s,size)));
    }; break;
    case 289/* SEM_CMPLTU */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return rreil_show_cmp(s,x,_plus__plus__plus_(s,from_string_lit(s,"<u:"),show_int(s,size)));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-show-op-cmp at specifications/rreil/rreil-pretty.ml:87.17-18";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-sexpr */
static obj_t rreil_show_sexpr(state_t s,int_t size,obj_t sexpr) {
  switch (((con_obj_t*) sexpr)->tag) {
    case 281/* SEM_SEXPR_LIN */: {
      obj_t l;
      l = ((con_obj_t*) sexpr)->payload;
      return rreil_show_linear(s,l);
    }; break;
    case 282/* SEM_SEXPR_CMP */: {
      obj_t c;
      c = ((con_obj_t*) sexpr)->payload;
      return rreil_show_op_cmp(s,size,c);
    }; break;
    case CON_SEM_SEXPR_ARB: {
      return from_string_lit(s,"arbitrary");
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-show-sexpr at specifications/rreil/rreil-pretty.ml:138.6-19";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-address */
static obj_t rreil_show_address(state_t s,sem_address_t addr) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"["),show_int(s,addr.size)),from_string_lit(s,"]")),rreil_show_linear(s,addr.address));
}
/* rreil-show-ptrderef */
static obj_t rreil_show_ptrderef(state_t s,int_t sz,sem_address_t addr) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"*["),show_int(s,addr.size)),from_string_lit(s,"->")),show_int(s,sz)),from_string_lit(s,"]")),rreil_show_linear(s,addr.address));
}
/* rreil-show-arity2-infix */
static obj_t rreil_show_arity2_infix(state_t s,sem_arity2_t x,obj_t op) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_linear(s,x.opnd1),from_string_lit(s," ")),op),from_string_lit(s," ")),rreil_show_linear(s,x.opnd2));
}
/* rreil-show-expr */
static obj_t rreil_show_expr(state_t s,int_t size,obj_t expr) {
  switch (((con_obj_t*) expr)->tag) {
    case 290/* SEM_SEXPR */: {
      obj_t x;
      x = ((con_obj_t*) expr)->payload;
      return rreil_show_sexpr(s,size,x);
    }; break;
    case 291/* SEM_MUL */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"*"));
    }; break;
    case 296/* SEM_SHL */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"<<"));
    }; break;
    case 297/* SEM_SHR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,">>u"));
    }; break;
    case 298/* SEM_SHRS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,">>s"));
    }; break;
    case 299/* SEM_AND */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"&"));
    }; break;
    case 300/* SEM_OR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"|"));
    }; break;
    case 301/* SEM_XOR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"^"));
    }; break;
    case 302/* SEM_SX */: {
      struct34_t x;
      x = ((con_struct34_t*) expr)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"sx["),show_int(s,x.fromsize)),from_string_lit(s,"->")),show_int(s,size)),from_string_lit(s,"]")),rreil_show_linear(s,x.opnd1));
    }; break;
    case 303/* SEM_ZX */: {
      struct34_t x;
      x = ((con_struct34_t*) expr)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"zx["),show_int(s,x.fromsize)),from_string_lit(s,"->")),show_int(s,size)),from_string_lit(s,"]")),rreil_show_linear(s,x.opnd1));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-show-expr at specifications/rreil/rreil-pretty.ml:105.14-15";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-hint */
static obj_t rreil_show_hint(state_t s,obj_t x) {
  switch (*((int_t*) x)) {
    case CON_HINT_JUMP: {
      return from_string_lit(s,"JUMP");
    }; break;
    case CON_HINT_CALL: {
      return from_string_lit(s,"CALL");
    }; break;
    case CON_HINT_RET: {
      return from_string_lit(s,"RET");
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-show-hint at specifications/rreil/rreil-pretty.ml:75.6-14";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-size-by-expr-type */
static int_t rreil_size_by_expr_type(state_t s,int_t bsz,obj_t ex) {
  switch (((con_obj_t*) ex)->tag) {
    case 290/* SEM_SEXPR */: {
      obj_t s_;
      s_ = ((con_obj_t*) ex)->payload;
      switch (((con_obj_t*) s_)->tag) {
        case 282/* SEM_SEXPR_CMP */: {
          return 1;
        }; break;
        default: {
          return bsz;
        }; break;
      };
    }; break;
    default: {
      return bsz;
    }; break;
  };
}
/* rreil-show-stmts */
static obj_t rreil_show_stmts(state_t s,obj_t ss) {
  switch (*((int_t*) ss)) {
    case CON_SEM_NIL: {
      return from_string_lit(s,"");
    }; break;
    case 322/* SEM_CONS */: {
      struct13_t x;
      x = ((con_struct13_t*) ss)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_stmt(s,x.hd),from_string_lit(s,"\n")),rreil_show_stmts(s,x.tl));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-show-stmts at specifications/rreil/rreil-pretty.ml:16.16-17";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-stmt */
static obj_t rreil_show_stmt(state_t s,obj_t s_) {
  switch (((con_obj_t*) s_)->tag) {
    case 309/* SEM_ASSIGN */: {
      struct28_t x;
      x = ((con_struct28_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_var(s,x.lhs),from_string_lit(s," =:")),show_int(s,rreil_size_by_expr_type(s,x.size,x.rhs))),from_string_lit(s," ")),rreil_show_expr(s,x.size,x.rhs));
    }; break;
    case 310/* SEM_LOAD */: {
      struct29_t x;
      x = ((con_struct29_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_var(s,x.lhs),from_string_lit(s," =:")),show_int(s,x.size)),from_string_lit(s," ")),rreil_show_ptrderef(s,x.size,x.address));
    }; break;
    case 311/* SEM_STORE */: {
      struct30_t x;
      x = ((con_struct30_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"*"),rreil_show_address(s,x.address)),from_string_lit(s," =:")),show_int(s,x.size)),from_string_lit(s," ")),rreil_show_linear(s,x.rhs));
    }; break;
    case 312/* SEM_ITE */: {
      struct31_t x;
      x = ((con_struct31_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"if ("),rreil_show_sexpr(s,1,x.cond)),from_string_lit(s,") {\n")),rreil_show_stmts(s,x.then_branch)),from_string_lit(s,"} else {\n")),rreil_show_stmts(s,x.else_branch)),from_string_lit(s,"}"));
    }; break;
    case 314/* SEM_CBRANCH */: {
      struct33_t x;
      x = ((con_struct33_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"if ("),rreil_show_sexpr(s,1,x.cond)),from_string_lit(s,") goto ")),rreil_show_address(s,x.target_true)),from_string_lit(s," else goto ")),rreil_show_address(s,x.target_false));
    }; break;
    case 315/* SEM_BRANCH */: {
      struct32_t x;
      x = ((con_struct32_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"goto ["),rreil_show_hint(s,x.hint)),from_string_lit(s,"] ")),rreil_show_address(s,x.target));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-show-stmt at specifications/rreil/rreil-pretty.ml:68.16-17";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-pretty */
static obj_t rreil_pretty(state_t s,obj_t ss) {
  return rreil_show_stmts(s,ss);
}
/* visit-semvar */
static obj_t visit_semvar(state_t s,obj_t kills,int_t sz,obj_t x) {
  return fmap_add_range(s,kills,select_obj(s,76/* id */,x),sz,select_int(s,54/* offset */,x));
}
/* size-lhs */
static int_t size_lhs(state_t s,int_t size,obj_t rhs) {
  switch (((con_obj_t*) rhs)->tag) {
    case 290/* SEM_SEXPR */: {
      obj_t s_;
      s_ = ((con_obj_t*) rhs)->payload;
      switch (((con_obj_t*) s_)->tag) {
        case 282/* SEM_SEXPR_CMP */: {
          return 1;
        }; break;
        default: {
          return size;
        }; break;
      };
    }; break;
    default: {
      return size;
    }; break;
  };
}
/* update */
static obj_t update(state_t s,obj_t a,obj_t b,obj_t m,obj_t x) {
  return fmap_add(s,m,add_field_obj(s,77/* fields */,fitree_interval_difference(s,select_obj(s,77/* fields */,fmap_get(s,a,x)),select_obj(s,77/* fields */,fmap_get(s,b,x))),add_field_obj(s,76/* id */,select_obj(s,76/* id */,x),NULL)));
}
typedef struct {
  obj_t (*func)(state_t,obj_t,obj_t,obj_t);
  obj_t arg1;
  obj_t arg2;
} closure_obj_obj_obj__obj_obj_t;
static obj_t update_closure(state_t s,obj_t v,obj_t m,obj_t x) {
  closure_obj_obj_obj__obj_obj_t* c = (closure_obj_obj_obj__obj_obj_t*) v;
  return update(s,c->arg1,c->arg2,m,x);
}
/* lv-difference */
static INLINE_ATTR obj_t gen_obj_obj_obj__obj_obj_closure(state_t s,obj_t (*func)(state_t,obj_t,obj_t,obj_t),obj_t arg1,obj_t arg2) {
  closure_obj_obj_obj__obj_obj_t content;
  content.func = func;
  content.arg1 = arg1;
  content.arg2 = arg2;
  closure_obj_obj_obj__obj_obj_t* closure = (closure_obj_obj_obj__obj_obj_t*) alloc(s, sizeof(closure_obj_obj_obj__obj_obj_t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t lv_difference(state_t s,obj_t a,obj_t b) {
  return fmap_fold(s,gen_obj_obj_obj__obj_obj_closure(s,&update_closure,a,b),a,fmap_intersection(s,a,b));
}
/* update */
static obj_t update_(state_t s,obj_t a,obj_t b,obj_t m,obj_t x) {
  return fmap_update(s,m,add_field_obj(s,77/* fields */,fitree_union(s,select_obj(s,77/* fields */,fmap_get(s,a,x)),select_obj(s,77/* fields */,fmap_get(s,b,x))),add_field_obj(s,76/* id */,select_obj(s,76/* id */,x),NULL)));
}
static obj_t update_closure_(state_t s,obj_t v,obj_t m,obj_t x) {
  closure_obj_obj_obj__obj_obj_t* c = (closure_obj_obj_obj__obj_obj_t*) v;
  return update_(s,c->arg1,c->arg2,m,x);
}
/* lv-union */
static obj_t lv_union(state_t s,obj_t a,obj_t b) {
  return fmap_fold(s,gen_obj_obj_obj__obj_obj_closure(s,&update_closure_,a,b),fmap_union(s,a,b),fmap_intersection(s,a,b));
}
/* lv-intersection */
static obj_t lv_intersection(state_t s,obj_t a,obj_t b) {
  return lv_difference(s,lv_difference(s,lv_union(s,a,b),lv_difference(s,a,b)),lv_difference(s,b,a));
}
/* visit-stmt */
static obj_t visit_stmt(state_t s,obj_t kills,obj_t stmt) {
  switch (((con_obj_t*) stmt)->tag) {
    case 309/* SEM_ASSIGN */: {
      struct28_t x;
      x = ((con_struct28_t*) stmt)->payload;
      return visit_semvar(s,kills,size_lhs(s,x.size,x.rhs),x.lhs);
    }; break;
    case 310/* SEM_LOAD */: {
      struct29_t x;
      x = ((con_struct29_t*) stmt)->payload;
      return visit_semvar(s,kills,x.size,x.lhs);
    }; break;
    case 312/* SEM_ITE */: {
      struct31_t x;
      x = ((con_struct31_t*) stmt)->payload;
      return lv_union(s,kills,lv_intersection(s,lv_kills(s,x.then_branch),lv_kills(s,x.else_branch)));
    }; break;
    default: {
      return kills;
    }; break;
  };
}
/* lv-kills */
static obj_t lv_kills(state_t s,obj_t stmts) {
  return visit(s,s->fmap_empty,stmts);
}
/* visit */
static obj_t visit(state_t s,obj_t kills,obj_t stmts) {
  switch (((con_obj_t*) stmts)->tag) {
    case 322/* SEM_CONS */: {
      struct13_t x;
      x = ((con_struct13_t*) stmts)->payload;
      return visit(s,lv_kill(s,kills,x.hd),x.tl);
    }; break;
    default: {
      return kills;
    }; break;
  };
}
/* lv-kill */
static obj_t lv_kill(state_t s,obj_t kills,obj_t stmt) {
  return visit_stmt(s,kills,stmt);
}
/* visit-semvar */
static obj_t visit_semvar_(state_t s,obj_t gens,int_t sz,obj_t x) {
  return fmap_add_range(s,gens,select_obj(s,76/* id */,x),sz,select_int(s,54/* offset */,x));
}
/* visit-lin */
static obj_t visit_lin(state_t s,obj_t gens,int_t sz,obj_t lin) {
  switch (((con_obj_t*) lin)->tag) {
    case 276/* SEM_LIN_VAR */: {
      obj_t x;
      x = ((con_obj_t*) lin)->payload;
      return visit_semvar_(s,gens,sz,x);
    }; break;
    case 277/* SEM_LIN_IMM */: {
      return gens;
    }; break;
    case 278/* SEM_LIN_ADD */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return lv_union(s,visit_lin(s,gens,sz,x.opnd1),visit_lin(s,gens,sz,x.opnd2));
    }; break;
    case 279/* SEM_LIN_SUB */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return lv_union(s,visit_lin(s,gens,sz,x.opnd1),visit_lin(s,gens,sz,x.opnd2));
    }; break;
    default: {
      s->err_str = "pattern match failure in visit-lin at specifications/rreil/rreil-liveness.ml:59.27-28";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* visit-arity2 */
static obj_t visit_arity2(state_t s,int_t size,obj_t gens,sem_arity2_t x) {
  return lv_union(s,visit_lin(s,gens,size,x.opnd1),visit_lin(s,gens,size,x.opnd2));
}
/* visit-op-cmp */
static obj_t visit_op_cmp(state_t s,int_t size,obj_t gens,obj_t cmp) {
  switch (((con_obj_t*) cmp)->tag) {
    case 284/* SEM_CMPEQ */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 287/* SEM_CMPLEU */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 288/* SEM_CMPLTS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 289/* SEM_CMPLTU */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    default: {
      s->err_str = "pattern match failure in visit-op-cmp at specifications/rreil/rreil-liveness.ml:83.23-24";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* visit-sexpr */
static obj_t visit_sexpr(state_t s,int_t size,obj_t gens,obj_t sexpr) {
  switch (((con_obj_t*) sexpr)->tag) {
    case 281/* SEM_SEXPR_LIN */: {
      obj_t l;
      l = ((con_obj_t*) sexpr)->payload;
      return visit_lin(s,gens,size,l);
    }; break;
    case 282/* SEM_SEXPR_CMP */: {
      obj_t c;
      c = ((con_obj_t*) sexpr)->payload;
      return visit_op_cmp(s,size,gens,c);
    }; break;
    case CON_SEM_SEXPR_ARB: {
      return gens;
    }; break;
    default: {
      s->err_str = "pattern match failure in visit-sexpr at specifications/rreil/rreil-liveness.ml:66.12-25";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* visit-expr */
static obj_t visit_expr(state_t s,int_t size,obj_t gens,obj_t op) {
  switch (((con_obj_t*) op)->tag) {
    case 290/* SEM_SEXPR */: {
      obj_t x;
      x = ((con_obj_t*) op)->payload;
      return visit_sexpr(s,size,gens,x);
    }; break;
    case 291/* SEM_MUL */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 296/* SEM_SHL */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 297/* SEM_SHR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 298/* SEM_SHRS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 299/* SEM_AND */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 300/* SEM_OR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 301/* SEM_XOR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 302/* SEM_SX */: {
      struct34_t x;
      x = ((con_struct34_t*) op)->payload;
      return visit_lin(s,gens,x.fromsize,x.opnd1);
    }; break;
    case 303/* SEM_ZX */: {
      struct34_t x;
      x = ((con_struct34_t*) op)->payload;
      return visit_lin(s,gens,x.fromsize,x.opnd1);
    }; break;
    default: {
      s->err_str = "pattern match failure in visit-expr at specifications/rreil/rreil-liveness.ml:102.20-21";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* visit-address */
static obj_t visit_address(state_t s,obj_t gens,sem_address_t x) {
  return visit_lin(s,gens,x.size,x.address);
}
/* visit-flow */
static obj_t visit_flow(state_t s,int_t size,obj_t gens,struct33_t x) {
  return lv_union(s,visit_sexpr(s,size,gens,x.cond),lv_union(s,visit_address(s,gens,x.target_true),visit_address(s,gens,x.target_false)));
}
/* visit-stmt */
static obj_t visit_stmt_(state_t s,obj_t gens,obj_t stmt) {
  switch (((con_obj_t*) stmt)->tag) {
    case 309/* SEM_ASSIGN */: {
      struct28_t x;
      x = ((con_struct28_t*) stmt)->payload;
      return visit_expr(s,x.size,gens,x.rhs);
    }; break;
    case 310/* SEM_LOAD */: {
      struct29_t x;
      x = ((con_struct29_t*) stmt)->payload;
      return visit_address(s,gens,x.address);
    }; break;
    case 311/* SEM_STORE */: {
      struct30_t x;
      x = ((con_struct30_t*) stmt)->payload;
      return lv_union(s,visit_address(s,gens,x.address),visit_lin(s,gens,x.size,x.rhs));
    }; break;
    case 312/* SEM_ITE */: {
      struct31_t x;
      x = ((con_struct31_t*) stmt)->payload;
      return visit_sexpr(s,1,gens,x.cond);
    }; break;
    case 315/* SEM_BRANCH */: {
      struct32_t x;
      x = ((con_struct32_t*) stmt)->payload;
      return visit_address(s,gens,x.target);
    }; break;
    case 314/* SEM_CBRANCH */: {
      struct33_t x;
      x = ((con_struct33_t*) stmt)->payload;
      return visit_flow(s,1,gens,x);
    }; break;
    default: {
      s->err_str = "pattern match failure in visit-stmt at specifications/rreil/rreil-liveness.ml:125.23-24";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* lv-gen */
static obj_t lv_gen(state_t s,obj_t gens,obj_t stmt) {
  return visit_stmt_(s,gens,stmt);
}
/* lv-gen1 */
static obj_t lv_gen1(state_t s,obj_t stmt) {
  return lv_gen(s,s->fmap_empty,stmt);
}
/* lv-kill1 */
static obj_t lv_kill1(state_t s,obj_t stmt) {
  return lv_kill(s,s->fmap_empty,stmt);
}
/* overlaps-interval? */
static obj_t overlaps_interval_q_(state_t s,obj_t state,obj_t x,obj_t l,obj_t i) {
  return alloc_vec(s,gen_vec(0, (((vec_t*) l)->data) | (((vec_t*) fitree_any_overlapping_q_(s,select_obj(s,77/* fields */,fmap_get_orelse(s,state,add_field_obj(s,77/* fields */,s->fitree_empty,add_field_obj(s,76/* id */,select_obj(s,76/* id */,x),NULL)))),i))->data)));
}
static obj_t overlaps_interval_q__closure(state_t s,obj_t v,obj_t l,obj_t i) {
  closure_obj_obj_obj__obj_obj_t* c = (closure_obj_obj_obj__obj_obj_t*) v;
  return overlaps_interval_q_(s,c->arg1,c->arg2,l,i);
}
/* overlaps? */
static obj_t overlaps_q_(state_t s,obj_t state,obj_t x) {
  return fitree_fold(s,gen_obj_obj_obj__obj_obj_closure(s,&overlaps_interval_q__closure,state,x),alloc_vec(s,gen_vec(1, 0 /* '0' */)),select_obj(s,77/* fields */,x));
}
/* live? */
static obj_t live_q_(state_t s,obj_t state,obj_t l,obj_t x) {
  return alloc_vec(s,gen_vec(0, (((vec_t*) l)->data) | (((vec_t*) overlaps_q_(s,state,x))->data)));
}
static obj_t live_q__closure(state_t s,obj_t v,obj_t l,obj_t x) {
  closure_obj_obj__obj_obj_t* c = (closure_obj_obj__obj_obj_t*) v;
  return live_q_(s,c->arg1,l,x);
}
/* lv-any-live? */
static obj_t lv_any_live_q_(state_t s,obj_t state,obj_t kill) {
  return fmap_fold(s,gen_obj_obj__obj_obj_closure(s,&live_q__closure,state),alloc_vec(s,gen_vec(1, 0 /* '0' */)),kill);
}
/* fields */
static obj_t fields(state_t s,obj_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_id(s,select_obj(s,76/* id */,x)),from_string_lit(s,":")),fitree_pretty(s,select_obj(s,77/* fields */,x)));
}
/* lv-pretty */
static obj_t lv_pretty(state_t s,obj_t t) {
  return bbtree_pretty(s,fields,t);
}
/* live-stack-backup-and-reset */
static struct51_t live_stack_backup_and_reset(state_t s) {
  obj_t live;
  obj_t maybelive;
  live = s->mon_state.live;
  maybelive = s->mon_state.live;
  s->mon_state.live = alloc_int(s,CON_SEM_NIL);
  s->mon_state.maybelive = alloc_int(s,CON_SEM_NIL);;
  return __struct51(s,live,maybelive);
}
/* select_live */
static obj_t select_live(state_t s) {
  return s->mon_state.live;
}
/* live-stack-restore */
static void live_stack_restore(state_t s,struct51_t backup) {
  s->mon_state.live = backup.live;
  s->mon_state.maybelive = backup.maybelive;;
}
/* lvstate-eval-greedy */
static obj_t lvstate_eval_greedy(state_t s,obj_t state,obj_t kill,obj_t gen) {
  if (bbtree_empty_q_(s,kill)) {
    return lv_union(s,state,gen);
  } else {
    obj_t iteRes;
    if (((vec_t*) lv_any_live_q_(s,state,kill))->data) {
      iteRes = gen;
    } else {
      iteRes = s->fmap_empty;
    };
    return lv_union(s,lv_difference(s,state,kill),iteRes);
  };
}
/* lvstate-eval-conservative */
static obj_t lvstate_eval_conservative(state_t s,obj_t state,obj_t kill,obj_t gen) {
  return lv_union(s,gen,lv_difference(s,state,kill));
}
/* eval */
static struct52_t eval(state_t s,struct52_t state,obj_t kill,obj_t gen) {
  return __struct52(s,lvstate_eval_conservative(s,state.conservative,kill,gen),lvstate_eval_greedy(s,state.greedy,kill,gen));
}
/* lvstate-eval */
static struct52_t lvstate_eval(state_t s,struct52_t state,obj_t stmt) {
  return eval(s,state,lv_kill1(s,stmt),lv_gen1(s,stmt));
}
/* lv-eval-simple */
static struct52_t lv_eval_simple(state_t s,struct52_t state,obj_t stmt) {
  return __struct52(s,lv_union(s,state.conservative,lv_gen1(s,stmt)),lv_union(s,state.greedy,lv_gen1(s,stmt)));
}
/* lvstate-union */
static struct52_t lvstate_union(state_t s,struct52_t a,struct52_t b) {
  return __struct52(s,lv_union(s,a.conservative,b.conservative),lv_union(s,a.greedy,b.greedy));
}
/* lv-push-live-only */
static void lv_push_live_only(state_t s,obj_t stmt) {
  obj_t live;
  live = s->mon_state.live;
  s->mon_state.live = constructor_SEM_CONS(s,__struct13(s,stmt,live));;
}
/* lv-push-maybelive */
static void lv_push_maybelive(state_t s,obj_t stmt) {
  obj_t live;
  live = s->mon_state.maybelive;
  s->mon_state.maybelive = constructor_SEM_CONS(s,__struct13(s,stmt,live));;
}
/* lv-push-live */
static void lv_push_live(state_t s,obj_t stmt) {
  lv_push_live_only(s,stmt);
  lv_push_maybelive(s,stmt);
}
/* cont */
static struct52_t cont(state_t s,struct52_t state,struct13_t x,obj_t kill,struct52_t cont_state) {
  if (((vec_t*) lv_any_live_q_(s,state.greedy,kill))->data) {
    lv_push_live(s,x.hd);
    return sweep(s,x.tl,cont_state);
  } else {
    if (((vec_t*) lv_any_live_q_(s,state.conservative,kill))->data) {
      lv_push_maybelive(s,x.hd);
      return sweep(s,x.tl,cont_state);
    } else {
      return sweep(s,x.tl,cont_state);
    };
  };
}
/* sweep */
static struct52_t sweep(state_t s,obj_t stack,struct52_t state) {
  switch (*((int_t*) stack)) {
    case CON_SEM_NIL: {
      return state;
    }; break;
    case 322/* SEM_CONS */: {
      struct13_t x;
      obj_t scrutinee;
      x = ((con_struct13_t*) stack)->payload;
      scrutinee = x.hd;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 310/* SEM_LOAD */: {
          lv_push_live(s,x.hd);
          return sweep(s,x.tl,lvstate_eval(s,state,x.hd));
        }; break;
        case 311/* SEM_STORE */: {
          lv_push_live(s,x.hd);
          return sweep(s,x.tl,lvstate_eval(s,state,x.hd));
        }; break;
        case 312/* SEM_ITE */: {
          struct31_t y;
          struct51_t org_backup;
          obj_t then_branch_rev;
          struct52_t then_state;
          struct51_t then_backup;
          obj_t else_branch_rev;
          struct52_t else_state;
          struct51_t else_backup;
          obj_t ite_conservative;
          obj_t ite_greedy;
          struct52_t state_new;
          y = ((con_struct31_t*) scrutinee)->payload;
          org_backup = live_stack_backup_and_reset(s);
          then_branch_rev = rreil_stmts_rev(s,y.then_branch);
          then_state = sweep(s,then_branch_rev,state);
          then_backup = live_stack_backup_and_reset(s);
          else_branch_rev = rreil_stmts_rev(s,y.else_branch);
          else_state = sweep(s,else_branch_rev,state);
          else_backup = live_stack_backup_and_reset(s);
          live_stack_restore(s,org_backup);
          ite_conservative = _slash_ITE(s,y.cond,then_backup.maybelive,else_backup.maybelive);
          ite_greedy = _slash_ITE(s,y.cond,then_backup.live,else_backup.live);
          lv_push_maybelive(s,ite_conservative);
          lv_push_live_only(s,ite_greedy);
          state_new = lvstate_union(s,then_state,else_state);
          return sweep(s,x.tl,lv_eval_simple(s,state_new,x.hd));
        }; break;
        case 314/* SEM_CBRANCH */: {
          lv_push_live(s,x.hd);
          return sweep(s,x.tl,lvstate_eval(s,state,x.hd));
        }; break;
        case 315/* SEM_BRANCH */: {
          lv_push_live(s,x.hd);
          return sweep(s,x.tl,lvstate_eval(s,state,x.hd));
        }; break;
        case 309/* SEM_ASSIGN */: {
          return cont(s,state,x,lv_kill1(s,x.hd),lvstate_eval(s,state,x.hd));
        }; break;
        default: {
          s->err_str = "pattern match failure in sweep at specifications/rreil/rreil-liveness.ml:325.28-29";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in sweep at specifications/rreil/rreil-liveness.ml:227.22-23";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* lvstate-empty */
static struct52_t lvstate_empty(state_t s,obj_t initial_live,obj_t stmts) {
  return __struct52(s,lv_union(s,lv_kills(s,stmts),s->fmap_empty),initial_live);
}
/* lv-analyze */
static struct52_t lv_analyze(state_t s,obj_t initial_live,obj_t stack) {
  s->mon_state.live = alloc_int(s,CON_SEM_NIL);
  s->mon_state.maybelive = alloc_int(s,CON_SEM_NIL);;
  return sweep(s,stack,lvstate_empty(s,initial_live,stack));
}
/* ++- */
static obj_t _plus__plus__(state_t s,obj_t map,obj_t reg_sem) {
  return fmap_add_range(s,map,select_obj(s,76/* id */,reg_sem),select_int(s,9/* size */,reg_sem),select_int(s,54/* offset */,reg_sem));
}
/* semantic-register-of */
static obj_t semantic_register_of(state_t s,obj_t r) {
  switch (*((int_t*) r)) {
    case CON_R0: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R1: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,8,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R2: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,16,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R3: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,24,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R4: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,32,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R5: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,40,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R6: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,48,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R7: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,56,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R8: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,64,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R9: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,72,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R10: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,80,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R11: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,88,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R12: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,96,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R13: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,104,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R14: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,112,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R15: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,120,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R16: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,128,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R17: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,136,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R18: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,144,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R19: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,152,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R20: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,160,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R21: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,168,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R22: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,176,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R23: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,184,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R24: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,192,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R25: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,200,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R26: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,208,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R27: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,216,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R28: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,224,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R29: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,232,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R30: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,240,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_R31: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,248,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO0: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,256,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO1: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,264,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO2: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,272,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO3: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,280,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO4: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,288,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO5: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,296,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO6: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,304,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO7: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,312,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO8: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,320,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO9: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,328,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO10: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,336,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO11: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,344,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO12: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,352,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO13: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,360,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO14: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,368,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO15: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,376,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO16: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,384,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO17: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,392,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO18: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,400,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO19: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,408,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO20: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,416,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO21: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,424,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO22: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,432,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO23: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,440,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO24: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,448,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO25: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,456,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO26: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,464,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO27: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,472,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO28: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,480,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO29: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,488,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO30: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,496,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO31: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,504,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO32: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,512,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO33: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,520,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO34: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,528,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO35: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,536,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO36: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,544,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO37: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,552,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO38: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,560,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO39: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,568,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO40: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,576,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO41: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,584,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO42: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,592,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO43: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,600,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO44: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,608,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO45: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,616,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO46: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,624,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO47: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,632,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO48: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,640,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO49: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,648,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO50: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,656,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO51: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,664,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO52: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,672,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO53: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,680,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO54: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,688,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_IO55: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,696,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_RAMPD: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,704,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_RAMPX: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,712,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_RAMPY: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,720,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_RAMPZ: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,728,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_EIND: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,736,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_SPL: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,744,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_SPH: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,752,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_SREG: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_ALL),add_field_int(s,54/* offset */,760,add_field_int(s,9/* size */,8,NULL)));
    }; break;
    case CON_PC: {
      return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_PC),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,16,NULL)));
    }; break;
    case CON_SP: {
      return update_size(s,16,semantic_register_of(s,alloc_int(s,CON_SPL)));
    }; break;
    default: {
      s->err_str = "pattern match failure in semantic-register-of at specifications/avr/avr-rreil-registermapping.ml:122.6-8";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* ++ */
static obj_t _plus__plus_(state_t s,obj_t map,obj_t r) {
  return _plus__plus__(s,map,semantic_register_of(s,r));
}
/* liveness */
static obj_t liveness(state_t s,obj_t instructions) {
  struct52_t lv_state;
  lv_state = lv_analyze(s,s->registers_live_map,rreil_stmts_rev(s,instructions));
  return lv_state.greedy;
}
static INLINE_ATTR obj_t constructor_SO_SOME(state_t s,obj_t arg_of_SO_SOME) {
  con_obj_t adt;
  adt.tag = 353/* SO_SOME */;
  adt.payload = arg_of_SO_SOME;
  return (obj_t) alloc_con_obj(s,adt);
}
/* lv-option-analyze */
static obj_t lv_option_analyze(state_t s,obj_t live_registers,obj_t option) {
  switch (((con_obj_t*) option)->tag) {
    case 353/* SO_SOME */: {
      obj_t stmts;
      struct52_t state;
      stmts = ((con_obj_t*) option)->payload;
      state = lv_analyze(s,live_registers,rreil_stmts_rev(s,stmts));
      return state.greedy;
    }; break;
    case CON_SO_NONE: {
      return s->fmap_empty;
    }; break;
    default: {
      s->err_str = "pattern match failure in lv-option-analyze at specifications/rreil/rreil-liveness.ml:464.8-15";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* lv-some-succ */
static obj_t lv_some_succ(state_t s,translate_result_t data,obj_t live_registers) {
  obj_t lv_succ_a;
  obj_t lv_succ_b;
  lv_succ_a = lv_option_analyze(s,live_registers,data->succ_a);
  lv_succ_b = lv_option_analyze(s,live_registers,data->succ_b);
  return lv_union(s,lv_succ_a,lv_succ_b);
}
/* liveness_super */
static lv_super_result_t liveness_super(state_t s,translate_result_t data) {
  obj_t live_registers;
  struct52_t lv_state;
  obj_t scrutinee;
  scrutinee = data->succ_a;
  switch (*((int_t*) scrutinee)) {
    case CON_SO_NONE: {
      obj_t scrutinee_;
      scrutinee_ = data->succ_b;
      switch (*((int_t*) scrutinee_)) {
        case CON_SO_NONE: {
          live_registers = s->registers_live_map;
        }; break;
        case 353/* SO_SOME */: {
          live_registers = lv_some_succ(s,data,s->registers_live_map);
        }; break;
        default: {
          s->err_str = "pattern match failure in liveness_super at specifications/rreil/rreil-liveness.ml:477.19-20";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 353/* SO_SOME */: {
      live_registers = lv_some_succ(s,data,s->registers_live_map);
    }; break;
    default: {
      s->err_str = "pattern match failure in liveness_super at specifications/rreil/rreil-liveness.ml:479.14-15";
      longjmp(s->err_tgt,0);
    }; break;
  };
  lv_state = lv_analyze(s,live_registers,rreil_stmts_rev(s,data->insns));
  return __lv_super_result(s,lv_state.greedy,live_registers);
}
/* stmts-concat */
static obj_t stmts_concat(state_t s,obj_t a,obj_t b) {
  switch (((con_obj_t*) a)->tag) {
    case 322/* SEM_CONS */: {
      struct13_t x;
      x = ((con_struct13_t*) a)->payload;
      return constructor_SEM_CONS(s,__struct13(s,x.hd,stmts_concat(s,x.tl,b)));
    }; break;
    case CON_SEM_NIL: {
      return b;
    }; break;
    default: {
      s->err_str = "pattern match failure in stmts-concat at specifications/rreil/rreil-cleanup.ml:11.5-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
static INLINE_ATTR obj_t constructor_STO_SOME(state_t s,obj_t arg_of_STO_SOME) {
  con_obj_t adt;
  adt.tag = 345/* STO_SOME */;
  adt.payload = arg_of_STO_SOME;
  return (obj_t) alloc_con_obj(s,adt);
}
/* def */
static obj_t def(state_t s,struct31_t i) {
  return constructor_STO_SOME(s,constructor_SEM_ITE(s,__struct31(s,i.cond,i.else_branch,i.then_branch)));
}
static INLINE_ATTR obj_t constructor_STO_MORE(state_t s,obj_t arg_of_STO_MORE) {
  con_obj_t adt;
  adt.tag = 344/* STO_MORE */;
  adt.payload = arg_of_STO_MORE;
  return (obj_t) alloc_con_obj(s,adt);
}
/* ite-cleanup-trivial */
static obj_t ite_cleanup_trivial(state_t s,struct31_t i) {
  obj_t scrutinee;
  scrutinee = i.cond;
  switch (((con_obj_t*) scrutinee)->tag) {
    case 281/* SEM_SEXPR_LIN */: {
      obj_t l;
      l = ((con_obj_t*) scrutinee)->payload;
      switch (((con_obj_t*) l)->tag) {
        case 277/* SEM_LIN_IMM */: {
          struct35_t z;
          int_t scrutinee_;
          z = ((con_struct35_t*) l)->payload;
          scrutinee_ = z.const_;
          switch (scrutinee_) {
            case 1: {
              return constructor_STO_MORE(s,i.then_branch);
            }; break;
            case 0: {
              return constructor_STO_MORE(s,i.else_branch);
            }; break;
            default: {
              return def(s,i);
            }; break;
          };
        }; break;
        default: {
          return def(s,i);
        }; break;
      };
    }; break;
    default: {
      return def(s,i);
    }; break;
  };
}
/* def */
static obj_t def_(state_t s,struct31_t i) {
  return constructor_STO_SOME(s,constructor_SEM_ITE(s,__struct31(s,i.cond,i.else_branch,i.then_branch)));
}
/* ite-cleanup-empty */
static obj_t ite_cleanup_empty(state_t s,struct31_t i) {
  obj_t scrutinee;
  scrutinee = i.then_branch;
  switch (*((int_t*) scrutinee)) {
    case CON_SEM_NIL: {
      obj_t scrutinee_;
      scrutinee_ = i.else_branch;
      switch (*((int_t*) scrutinee_)) {
        case CON_SEM_NIL: {
          return alloc_int(s,CON_STO_NONE);
        }; break;
        default: {
          return def_(s,i);
        }; break;
      };
    }; break;
    default: {
      return def_(s,i);
    }; break;
  };
}
/* ic-eval */
static obj_t ic_eval(state_t s,struct31_t i,obj_t (*fun)(state_t,struct31_t),obj_t rest) {
  switch (((con_obj_t*) rest)->tag) {
    case 344/* STO_MORE */: {
      obj_t m;
      m = ((con_obj_t*) rest)->payload;
      return constructor_STO_MORE(s,m);
    }; break;
    case 345/* STO_SOME */: {
      return fun(s,i);
    }; break;
    case CON_STO_NONE: {
      return alloc_int(s,CON_STO_NONE);
    }; break;
    default: {
      s->err_str = "pattern match failure in ic-eval at specifications/rreil/rreil-cleanup.ml:50.6-14";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* ite-cleanup */
static obj_t ite_cleanup(state_t s,struct31_t i,obj_t hd,obj_t tl) {
  obj_t scrutinee;
  scrutinee = ic_eval(s,i,ite_cleanup_trivial,ite_cleanup_empty(s,i));
  switch (((con_obj_t*) scrutinee)->tag) {
    case 344/* STO_MORE */: {
      obj_t m;
      m = ((con_obj_t*) scrutinee)->payload;
      return stmts_concat(s,m,tl);
    }; break;
    case 345/* STO_SOME */: {
      obj_t s_;
      s_ = ((con_obj_t*) scrutinee)->payload;
      return constructor_SEM_CONS(s,__struct13(s,s_,tl));
    }; break;
    case CON_STO_NONE: {
      return tl;
    }; break;
    default: {
      s->err_str = "pattern match failure in ite-cleanup at specifications/rreil/rreil-cleanup.ml:56.5-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* my-cleanup */
static obj_t my_cleanup(state_t s,obj_t stmts) {
  switch (((con_obj_t*) stmts)->tag) {
    case 322/* SEM_CONS */: {
      struct13_t x;
      obj_t scrutinee;
      x = ((con_struct13_t*) stmts)->payload;
      scrutinee = x.hd;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 312/* SEM_ITE */: {
          struct31_t i;
          i = ((con_struct31_t*) scrutinee)->payload;
          return ite_cleanup(s,i,x.hd,my_cleanup(s,x.tl));
        }; break;
        default: {
          return constructor_SEM_CONS(s,__struct13(s,x.hd,my_cleanup(s,x.tl)));
        }; break;
      };
    }; break;
    case CON_SEM_NIL: {
      return alloc_int(s,CON_SEM_NIL);
    }; break;
    default: {
      s->err_str = "pattern match failure in my-cleanup at specifications/rreil/rreil-cleanup.ml:68.6-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* cleanup */
static obj_t cleanup(state_t s,obj_t stmts) {
  return my_cleanup(s,stmts);
}
static INLINE_ATTR obj_t constructor_INSNS_CONS(state_t s,struct55_t arg_of_INSNS_CONS) {
  con_struct55_t adt;
  adt.tag = 348/* INSNS_CONS */;
  adt.payload = arg_of_INSNS_CONS;
  return (obj_t) alloc_con_struct55(s,adt);
}
/* traverse-insn-list */
static obj_t traverse_insn_list(state_t s,obj_t l,obj_t init,obj_t (*insn_append)(state_t,obj_t,insndata_t)) {
  switch (((con_obj_t*) l)->tag) {
    case 348/* INSNS_CONS */: {
      struct55_t cons;
      cons = ((con_struct55_t*) l)->payload;
      return insn_append(s,traverse_insn_list(s,cons.tl,init,insn_append),cons.insn);
    }; break;
    case CON_INSNS_NIL: {
      return init;
    }; break;
    default: {
      s->err_str = "pattern match failure in traverse-insn-list at specifications/rreil/rreil-opt.ml:20.4-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* from-vec */
static obj_t from_vec(state_t s,int_t sn,vec_t vec) {
  switch (sn) {
    case CON_Signed: {
      return constructor_SEM_LIN_IMM(s,__struct35(s,vec_to_signed(s,vec)));
    }; break;
    case CON_Unsigned: {
      return constructor_SEM_LIN_IMM(s,__struct35(s,vec_to_unsigned(s,vec)));
    }; break;
    default: {
      s->err_str = "pattern match failure in from-vec at specifications/avr/avr-rreil-translator.ml:960.7-15";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* from-imm */
static obj_t from_imm(state_t s,int_t sn,obj_t imm_) {
  switch (((con_obj_t*) imm_)->tag) {
    case 45/* IMM3 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 46/* IMM4 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 47/* IMM6 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 48/* IMM7 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 49/* IMM8 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 50/* IMM12 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 51/* IMM16 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 52/* IMM22 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 53/* IMMi */: {
      int_t i;
      i = ((con_int_t*) imm_)->payload;
      return constructor_SEM_LIN_IMM(s,__struct35(s,i));
    }; break;
    default: {
      s->err_str = "pattern match failure in from-imm at specifications/avr/avr-rreil-translator.ml:973.12-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sizeof */
static int_t sizeof_(state_t s,obj_t x) {
  switch (((con_obj_t*) x)->tag) {
    case 54/* REG */: {
      return 8;
    }; break;
    case 55/* REGHL */: {
      return 16;
    }; break;
    case 56/* REGIHL */: {
      return 24;
    }; break;
    case 57/* IOREG */: {
      return 8;
    }; break;
    case 58/* IMM */: {
      obj_t imm_;
      imm_ = ((con_obj_t*) x)->payload;
      switch (((con_obj_t*) imm_)->tag) {
        case 45/* IMM3 */: {
          return 3;
        }; break;
        case 46/* IMM4 */: {
          return 4;
        }; break;
        case 47/* IMM6 */: {
          return 6;
        }; break;
        case 48/* IMM7 */: {
          return 7;
        }; break;
        case 49/* IMM8 */: {
          return 8;
        }; break;
        case 50/* IMM12 */: {
          return 12;
        }; break;
        case 51/* IMM16 */: {
          return 16;
        }; break;
        case 52/* IMM22 */: {
          return 22;
        }; break;
        case 53/* IMMi */: {
          return 64;
        }; break;
        default: {
          s->err_str = "pattern match failure in sizeof at specifications/avr/avr-rreil-translator.ml:932.13-14";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 59/* OPSE */: {
      struct20_t o;
      o = ((con_struct20_t*) x)->payload;
      return sizeof_(s,o.op);
    }; break;
    case 60/* OPDI */: {
      struct18_t o;
      o = ((con_struct18_t*) x)->payload;
      return sizeof_(s,o.op);
    }; break;
    default: {
      s->err_str = "pattern match failure in sizeof at specifications/avr/avr-rreil-translator.ml:935.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* write */
static obj_t write(state_t s,obj_t to,obj_t from) {
  switch (((con_obj_t*) to)->tag) {
    case 54/* REG */: {
      obj_t r;
      r = ((con_obj_t*) to)->payload;
      return mov(s,sizeof_(s,to),semantic_register_of(s,r),from);
    }; break;
    case 55/* REGHL */: {
      reghl_t r;
      r = ((con_reghl_t*) to)->payload;
      return mov(s,sizeof_(s,to),update_size(s,16,semantic_register_of(s,r.regl)),from);
    }; break;
    case 56/* REGIHL */: {
      struct21_t r;
      obj_t t;
      r = ((con_struct21_t*) to)->payload;
      t = mktemp_(s);
      mov(s,sizeof_(s,to),t,from);
      mov(s,16,update_size(s,16,semantic_register_of(s,r.reghl.regl)),var(s,t));
      return mov(s,8,semantic_register_of(s,r.regi),var(s,at_offset(s,t,16)));
    }; break;
    case 57/* IOREG */: {
      obj_t i;
      i = ((con_obj_t*) to)->payload;
      return mov(s,sizeof_(s,to),semantic_register_of(s,i),from);
    }; break;
    default: {
      s->err_str = "pattern match failure in write at specifications/avr/avr-rreil-translator.ml:948.11-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rval */
static obj_t rval(state_t s,int_t sn,obj_t x) {
  switch (((con_obj_t*) x)->tag) {
    case 54/* REG */: {
      obj_t r;
      r = ((con_obj_t*) x)->payload;
      return var(s,semantic_register_of(s,r));
    }; break;
    case 55/* REGHL */: {
      reghl_t r;
      r = ((con_reghl_t*) x)->payload;
      return var(s,update_size(s,16,semantic_register_of(s,r.regl)));
    }; break;
    case 56/* REGIHL */: {
      struct21_t r;
      obj_t high;
      obj_t low;
      obj_t t;
      r = ((con_struct21_t*) x)->payload;
      high = semantic_register_of(s,r.regi);
      low = update_size(s,16,semantic_register_of(s,r.reghl.regl));
      t = mktemp_(s);
      mov(s,select_int(s,9/* size */,low),t,var(s,low));
      mov(s,select_int(s,9/* size */,high),at_offset(s,t,select_int(s,9/* size */,low)),var(s,high));
      return var(s,t);
    }; break;
    case 57/* IOREG */: {
      obj_t i;
      i = ((con_obj_t*) x)->payload;
      return var(s,semantic_register_of(s,i));
    }; break;
    case 58/* IMM */: {
      obj_t i;
      i = ((con_obj_t*) x)->payload;
      return from_imm(s,sn,i);
    }; break;
    case 59/* OPSE */: {
      struct20_t o;
      obj_t scrutinee;
      o = ((con_struct20_t*) x)->payload;
      scrutinee = o.se;
      switch (*((int_t*) scrutinee)) {
        case CON_NONE: {
          return rval(s,sn,o.op);
        }; break;
        default: {
          obj_t orval;
          int_t size;
          obj_t t;
          obj_t j;
          obj_t scrutinee_;
          orval = rval(s,sn,o.op);
          size = sizeof_(s,o.op);
          t = mktemp_(s);
          scrutinee_ = o.se;
          switch (*((int_t*) scrutinee_)) {
            case CON_DECR: {
              sub(s,size,t,orval,imm(s,1));
              j = t;
            }; break;
            case 43/* INCR */: {
              int_t a;
              obj_t j_;
              a = ((con_int_t*) scrutinee_)->payload;
              j_ = mktemp_(s);
              mov(s,size,j_,orval);
              add(s,size,t,orval,imm(s,a));
              j = j_;
            }; break;
            default: {
              j = t;
            }; break;
          };
          write(s,o.op,var(s,t));
          return var(s,j);
        }; break;
      };
    }; break;
    case 60/* OPDI */: {
      struct18_t o;
      obj_t opnd1;
      o = ((con_struct18_t*) x)->payload;
      opnd1 = rval(s,sn,o.op);
      return constructor_SEM_LIN_ADD(s,__sem_arity2(s,opnd1,from_imm(s,sn,o.imm)));
    }; break;
    default: {
      s->err_str = "pattern match failure in rval at specifications/avr/avr-rreil-translator.ml:1013.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sem-xch */
static obj_t sem_xch(state_t s,binop_t bo) {
  obj_t z;
  int_t zsz;
  obj_t rd;
  int_t size;
  obj_t t;
  z = rval(s,CON_Unsigned,bo.first);
  zsz = sizeof_(s,bo.first);
  rd = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.second);
  t = mktemp_(s);
  load(s,size,t,zsz,z);
  store(s,size,address(s,zsz,z),rd);
  return write(s,bo.second,var(s,t));
}
/* sem-wdr */
static obj_t sem_wdr(state_t s) {
  return 0 /* void value */;
}
/* sem-swap */
static obj_t sem_swap(state_t s,unop_t uo) {
  obj_t rd;
  int_t size;
  int_t csz;
  obj_t p;
  obj_t r;
  rd = rval(s,CON_Unsigned,uo.operand);
  size = sizeof_(s,uo.operand);
  csz = (size)/(2);
  p = mktemp_(s);
  mov(s,size,p,rd);
  r = mktemp_(s);
  mov(s,csz,r,var(s,at_offset(s,p,csz)));
  mov(s,csz,at_offset(s,r,csz),var(s,p));
  return write(s,uo.operand,var(s,r));
}
/* sem-reg-offset */
static obj_t sem_reg_offset(state_t s,obj_t r,int_t o) {
  return add_field_int(s,54/* offset */,(select_int(s,54/* offset */,r)+o),
           del_fields(s,field_array_54,1,r));
}
/* emit-flag-z */
static obj_t emit_flag_z(state_t s,int_t sz,obj_t r) {
  obj_t zf;
  zf = s->fZF;
  return cmpeq(s,sz,zf,r,imm(s,0));
}
/* emit-flag-n */
static obj_t emit_flag_n(state_t s,int_t sz,obj_t r) {
  obj_t nf;
  nf = s->fNF;
  return cmplts(s,sz,nf,r,imm(s,0));
}
/* emit-flag-sub-sbc-v */
static obj_t emit_flag_sub_sbc_v(state_t s,int_t sz,obj_t rd,obj_t rr) {
  obj_t ov;
  obj_t lts;
  obj_t nf;
  ov = s->fVF;
  lts = mktemp_(s);
  cmplts(s,sz,lts,rd,rr);
  nf = s->fNF;
  return invoke_obj_closure(s,xorb(s,1,ov,var(s,lts),var(s,nf)));
}
/* emit-flag-sub-h */
static obj_t emit_flag_sub_h(state_t s,int_t sz,obj_t rd,obj_t rr) {
  obj_t hf;
  hf = s->fHF;
  return cmpltu(s,_slash_m(s,sz,2),hf,rd,rr);
}
/* emit-flag-sub-c */
static obj_t emit_flag_sub_c(state_t s,int_t sz,obj_t rd,obj_t rr) {
  obj_t cf;
  cf = s->fCF;
  return cmpltu(s,sz,cf,rd,rr);
}
/* sem-sub */
static obj_t sem_sub(state_t s,int_t wb,binop_t bo) {
  obj_t rd;
  obj_t rr;
  int_t size;
  obj_t r;
  obj_t sf;
  rd = rval(s,CON_Unsigned,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.first);
  r = mktemp_(s);
  sub(s,size,r,rd,rr);
  emit_flag_sub_h(s,size,rd,rr);
  emit_flag_n(s,size,var(s,r));
  emit_flag_sub_sbc_v(s,size,rd,rr);
  emit_flag_z(s,size,var(s,r));
  emit_flag_sub_c(s,size,rd,rr);
  sf = s->fSF;
  cmplts(s,size,sf,rd,rr);
  if (wb) {
    return write(s,bo.first,var(s,r));
  } else {
    return 0 /* void value */;
  };
}
/* sem-sub-subi */
static obj_t sem_sub_subi(state_t s,binop_t bo) {
  return sem_sub(s,1 /* '1' */,bo);
}
/* sem-st-std-sts */
static obj_t sem_st_std_sts(state_t s,binop_t bo) {
  obj_t ptr;
  int_t ptrsz;
  obj_t rr;
  int_t size;
  ptr = rval(s,CON_Unsigned,bo.first);
  ptrsz = sizeof_(s,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.second);
  return store(s,size,address(s,ptrsz,ptr),rr);
}
/* pm-get */
static obj_t pm_get(state_t s) {
  return add_field_obj(s,76/* id */,alloc_int(s,CON_Sem_PM),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,0,NULL)));
}
/* sem-spm */
static obj_t sem_spm(state_t s,unop_t uo) {
  obj_t ptr;
  int_t ptrsz;
  obj_t r;
  obj_t pm;
  obj_t pmptr;
  ptr = rval(s,CON_Unsigned,uo.operand);
  ptrsz = sizeof_(s,uo.operand);
  r = update_size(s,16,semantic_register_of(s,alloc_int(s,CON_R0)));
  pm = pm_get(s);
  pmptr = mktemp_(s);
  add(s,ptrsz,pmptr,ptr,var(s,pm));
  return store(s,select_int(s,9/* size */,r),address(s,ptrsz,var(s,pmptr)),var(s,r));
}
/* sem-sleep */
static obj_t sem_sleep(state_t s) {
  return 0 /* void value */;
}
/* emit-flag-s */
static obj_t emit_flag_s(state_t s) {
  obj_t nf;
  obj_t ov;
  obj_t sf;
  nf = s->fNF;
  ov = s->fVF;
  sf = s->fSF;
  return invoke_obj_closure(s,xorb(s,1,sf,var(s,nf),var(s,ov)));
}
/* sem-sbiw */
static obj_t sem_sbiw(state_t s,binop_t bo) {
  obj_t rd;
  obj_t rr;
  int_t size;
  obj_t r;
  rd = rval(s,CON_Unsigned,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.first);
  r = mktemp_(s);
  sub(s,size,r,rd,rr);
  emit_flag_n(s,size,var(s,r));
  emit_flag_sub_sbc_v(s,size,rd,rr);
  emit_flag_z(s,size,var(s,r));
  emit_flag_sub_c(s,size,rd,rr);
  emit_flag_s(s);
  return write(s,bo.first,var(s,r));
}
/* ip-get */
static obj_t ip_get(state_t s) {
  return semantic_register_of(s,alloc_int(s,CON_PC));
}
/* cbranch-rel */
static obj_t cbranch_rel(state_t s,obj_t cond,obj_t k) {
  obj_t pc;
  obj_t tgt_t;
  obj_t tgt_f;
  pc = ip_get(s);
  tgt_t = mktemp_(s);
  add(s,select_int(s,9/* size */,pc),tgt_t,var(s,pc),k);
  add(s,select_int(s,9/* size */,pc),tgt_t,var(s,tgt_t),imm(s,1));
  tgt_f = mktemp_(s);
  add(s,select_int(s,9/* size */,pc),tgt_f,var(s,pc),imm(s,1));
  return cbranch(s,cond,address(s,select_int(s,9/* size */,pc),var(s,tgt_t)),address(s,select_int(s,9/* size */,pc),var(s,tgt_f)));
}
/* rval-uint */
static int_t rval_uint(state_t s,obj_t x) {
  switch (((con_obj_t*) x)->tag) {
    case 58/* IMM */: {
      obj_t imm_;
      imm_ = ((con_obj_t*) x)->payload;
      switch (((con_obj_t*) imm_)->tag) {
        case 45/* IMM3 */: {
          vec_t i;
          i = ((con_vec_t*) imm_)->payload;
          return vec_to_unsigned(s,i);
        }; break;
        case 46/* IMM4 */: {
          vec_t i;
          i = ((con_vec_t*) imm_)->payload;
          return vec_to_unsigned(s,i);
        }; break;
        case 47/* IMM6 */: {
          vec_t i;
          i = ((con_vec_t*) imm_)->payload;
          return vec_to_unsigned(s,i);
        }; break;
        case 48/* IMM7 */: {
          vec_t i;
          i = ((con_vec_t*) imm_)->payload;
          return vec_to_unsigned(s,i);
        }; break;
        case 49/* IMM8 */: {
          vec_t i;
          i = ((con_vec_t*) imm_)->payload;
          return vec_to_unsigned(s,i);
        }; break;
        case 50/* IMM12 */: {
          vec_t i;
          i = ((con_vec_t*) imm_)->payload;
          return vec_to_unsigned(s,i);
        }; break;
        case 51/* IMM16 */: {
          vec_t i;
          i = ((con_vec_t*) imm_)->payload;
          return vec_to_unsigned(s,i);
        }; break;
        case 52/* IMM22 */: {
          vec_t i;
          i = ((con_vec_t*) imm_)->payload;
          return vec_to_unsigned(s,i);
        }; break;
        case 53/* IMMi */: {
          int_t i;
          i = ((con_int_t*) imm_)->payload;
          return i;
        }; break;
        default: {
          s->err_str = "pattern match failure in rval-uint at specifications/avr/avr-rreil-translator.ml:1031.13-14";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in rval-uint at specifications/avr/avr-rreil-translator.ml:1022.9-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sem-sbirc-sbirs */
static obj_t sem_sbirc_sbirs(state_t s,obj_t (*sc)(state_t,obj_t),ternop_t to) {
  obj_t a;
  int_t size;
  int_t b;
  int_t n;
  obj_t t;
  obj_t cond;
  a = rval(s,CON_Unsigned,to.first);
  size = sizeof_(s,to.first);
  b = rval_uint(s,to.second);
  n = rval_uint(s,to.third);
  t = mktemp_(s);
  mov(s,size,t,a);
  cond = invoke_obj_closure(s,sc(s,var(s,at_offset(s,t,b))));
  return cbranch_rel(s,cond,imm(s,n));
}
/* sem-sbis-sbrs */
static obj_t sem_sbis_sbrs(state_t s,ternop_t to) {
  return sem_sbirc_sbirs(s,_slash_d,to);
}
/* sem-sbic-sbrc */
static obj_t sem_sbic_sbrc(state_t s,ternop_t to) {
  return sem_sbirc_sbirs(s,_slash_not,to);
}
/* sem-write-bit */
static obj_t sem_write_bit(state_t s,int_t bit,binop_t bo) {
  obj_t a;
  int_t b;
  int_t size;
  obj_t t;
  a = rval(s,CON_Unsigned,bo.first);
  b = rval_uint(s,bo.second);
  size = sizeof_(s,bo.first);
  t = mktemp_(s);
  mov(s,size,t,a);
  mov(s,1,at_offset(s,t,b),imm(s,bit));
  return write(s,bo.first,var(s,t));
}
/* sem-sbi */
static obj_t sem_sbi(state_t s,binop_t bo) {
  return sem_write_bit(s,1,bo);
}
/* emit-flag-sbc-hAction2 */
static obj_t emit_flag_sbc_hAction2(state_t s,int_t sz,obj_t rd,obj_t rr,obj_t hf) {
  return cmpltu(s,_slash_m(s,sz,2),hf,rd,rr);
}
static obj_t emit_flag_sbc_hAction2Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return emit_flag_sbc_hAction2(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* emit-flag-sbc-hAction1 */
static obj_t emit_flag_sbc_hAction1(state_t s,int_t sz,obj_t rd,obj_t rr,obj_t hf) {
  return cmpleu(s,_slash_m(s,sz,2),hf,rd,rr);
}
static obj_t emit_flag_sbc_hAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return emit_flag_sbc_hAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* emit-flag-sbc-h */
static obj_t emit_flag_sbc_h(state_t s,int_t sz,obj_t rd,obj_t rr) {
  obj_t cf;
  obj_t hf;
  cf = s->fCF;
  hf = s->fHF;
  return _if_then_else(s,_slash_d(s,var(s,cf)),gen_obj_int_obj_obj_obj__closure(s,&emit_flag_sbc_hAction1Closure,sz,rd,rr,hf),gen_obj_int_obj_obj_obj__closure(s,&emit_flag_sbc_hAction2Closure,sz,rd,rr,hf));
}
/* emit-flag-sbc-cAction2 */
static obj_t emit_flag_sbc_cAction2(state_t s,int_t sz,obj_t rd,obj_t rr,obj_t cf) {
  return cmpltu(s,sz,cf,rd,rr);
}
static obj_t emit_flag_sbc_cAction2Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return emit_flag_sbc_cAction2(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* emit-flag-sbc-cAction1 */
static obj_t emit_flag_sbc_cAction1(state_t s,int_t sz,obj_t rd,obj_t rr,obj_t cf) {
  return cmpleu(s,sz,cf,rd,rr);
}
static obj_t emit_flag_sbc_cAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return emit_flag_sbc_cAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* emit-flag-sbc-c */
static obj_t emit_flag_sbc_c(state_t s,int_t sz,obj_t rd,obj_t rr) {
  obj_t cf;
  cf = s->fCF;
  return _if_then_else(s,_slash_d(s,var(s,cf)),gen_obj_int_obj_obj_obj__closure(s,&emit_flag_sbc_cAction1Closure,sz,rd,rr,cf),gen_obj_int_obj_obj_obj__closure(s,&emit_flag_sbc_cAction2Closure,sz,rd,rr,cf));
}
/* sem-sub-carry */
static obj_t sem_sub_carry(state_t s,int_t wb,binop_t bo) {
  obj_t rd;
  obj_t rr;
  int_t size;
  obj_t r;
  obj_t cf;
  obj_t cfe;
  obj_t sf;
  rd = rval(s,CON_Unsigned,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.first);
  r = mktemp_(s);
  sub(s,size,r,rd,rr);
  cf = s->fCF;
  cfe = mktemp_(s);
  invoke_obj_closure(s,movzx(s,size,cfe,1,var(s,cf)));
  sub(s,size,r,var(s,r),var(s,cfe));
  emit_flag_sbc_h(s,size,rd,rr);
  emit_flag_n(s,size,var(s,r));
  emit_flag_sub_sbc_v(s,size,rd,rr);
  emit_flag_z(s,size,var(s,r));
  emit_flag_sbc_c(s,size,rd,rr);
  sf = s->fSF;
  cmplts(s,size,sf,rd,rr);
  if (wb) {
    return write(s,bo.first,var(s,r));
  } else {
    return 0 /* void value */;
  };
}
/* sem-sbc-sbci */
static obj_t sem_sbc_sbci(state_t s,binop_t bo) {
  return sem_sub_carry(s,1 /* '1' */,bo);
}
/* sem-ror */
static obj_t sem_ror(state_t s,unop_t uo) {
  obj_t rd;
  int_t size;
  obj_t nc;
  obj_t t;
  obj_t cf;
  obj_t ov;
  obj_t nf;
  rd = rval(s,CON_Unsigned,uo.operand);
  size = sizeof_(s,uo.operand);
  nc = mktemp_(s);
  mov(s,1,nc,rd);
  t = mktemp_(s);
  shr(s,size,t,rd,imm(s,1));
  cf = s->fCF;
  mov(s,1,at_offset(s,t,(size-1)),var(s,cf));
  mov(s,1,cf,var(s,nc));
  emit_flag_n(s,size,var(s,t));
  emit_flag_z(s,size,var(s,t));
  ov = s->fVF;
  nf = s->fNF;
  invoke_obj_closure(s,xorb(s,1,ov,var(s,nf),var(s,cf)));
  return write(s,uo.operand,var(s,t));
}
/* sem-rjmp */
static obj_t sem_rjmp(state_t s,unop_t uo) {
  obj_t k;
  obj_t pc;
  obj_t t;
  k = rval(s,CON_Signed,uo.operand);
  pc = ip_get(s);
  t = mktemp_(s);
  add(s,select_int(s,9/* size */,pc),t,var(s,pc),k);
  add(s,select_int(s,9/* size */,pc),t,var(s,t),imm(s,1));
  return jump(s,address(s,select_int(s,9/* size */,pc),var(s,t)));
}
/* ps-pop */
static obj_t ps_pop(state_t s,int_t size,obj_t x) {
  obj_t sp;
  sp = semantic_register_of(s,alloc_int(s,CON_SP));
  add(s,select_int(s,9/* size */,sp),sp,var(s,sp),imm(s,_slash_p(s,size,8)));
  return load(s,size,x,select_int(s,9/* size */,sp),var(s,sp));
}
/* sem-reti */
static obj_t sem_reti(state_t s) {
  obj_t pc;
  obj_t t;
  obj_t iv;
  pc = ip_get(s);
  t = mktemp_(s);
  ps_pop(s,select_int(s,9/* size */,pc),t);
  iv = s->fIF;
  mov(s,1,iv,imm(s,1));
  return ret(s,address(s,select_int(s,9/* size */,pc),var(s,t)));
}
/* sem-ret */
static obj_t sem_ret(state_t s) {
  obj_t pc;
  obj_t t;
  pc = ip_get(s);
  t = mktemp_(s);
  ps_pop(s,select_int(s,9/* size */,pc),t);
  return ret(s,address(s,select_int(s,9/* size */,pc),var(s,t)));
}
/* ps-push */
static obj_t ps_push(state_t s,int_t size,obj_t x) {
  obj_t sp;
  sp = semantic_register_of(s,alloc_int(s,CON_SP));
  store(s,size,address(s,select_int(s,9/* size */,sp),var(s,sp)),x);
  return sub(s,select_int(s,9/* size */,sp),sp,var(s,sp),imm(s,_slash_p(s,size,8)));
}
/* sem-rcall */
static obj_t sem_rcall(state_t s,unop_t uo) {
  obj_t k;
  obj_t pc;
  obj_t t;
  k = rval(s,CON_Signed,uo.operand);
  pc = ip_get(s);
  t = mktemp_(s);
  add(s,select_int(s,9/* size */,pc),t,var(s,pc),k);
  add(s,select_int(s,9/* size */,pc),t,var(s,t),imm(s,1));
  ps_push(s,select_int(s,9/* size */,pc),var(s,pc));
  return call(s,address(s,select_int(s,9/* size */,pc),var(s,t)));
}
/* sem-push */
static obj_t sem_push(state_t s,unop_t uo) {
  obj_t rr;
  int_t size;
  rr = rval(s,CON_Unsigned,uo.operand);
  size = sizeof_(s,uo.operand);
  return ps_push(s,size,rr);
}
/* sem-pop */
static obj_t sem_pop(state_t s,unop_t uo) {
  int_t size;
  obj_t t;
  size = sizeof_(s,uo.operand);
  t = mktemp_(s);
  ps_pop(s,size,t);
  return write(s,uo.operand,var(s,t));
}
/* sem-out */
static obj_t sem_out(state_t s,binop_t bo) {
  obj_t rr;
  rr = rval(s,CON_Unsigned,bo.second);
  return write(s,bo.first,rr);
}
/* sem-mul-muls-mulsu */
static obj_t sem_mul_muls_mulsu(state_t s,obj_t (*exa)(state_t,int_t,obj_t,int_t,obj_t),obj_t (*exb)(state_t,int_t,obj_t,int_t,obj_t),binop_t bo) {
  obj_t rd;
  obj_t rr;
  int_t size;
  obj_t rde;
  obj_t rre;
  obj_t r;
  obj_t cf;
  rd = rval(s,CON_Unsigned,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.first);
  rde = mktemp_(s);
  invoke_obj_closure(s,exa(s,2*size,rde,size,rd));
  rre = mktemp_(s);
  invoke_obj_closure(s,exb(s,2*size,rre,size,rr));
  r = update_size(s,16,semantic_register_of(s,alloc_int(s,CON_R0)));
  mul(s,2*size,r,var(s,rde),var(s,rre));
  cf = s->fCF;
  cmplts(s,2*size,cf,var(s,r),imm(s,0));
  return emit_flag_z(s,2*size,var(s,r));
}
/* sem-mulsu */
static obj_t sem_mulsu(state_t s,binop_t bo) {
  return sem_mul_muls_mulsu(s,movsx,movzx,bo);
}
/* sem-muls */
static obj_t sem_muls(state_t s,binop_t bo) {
  return sem_mul_muls_mulsu(s,movsx,movsx,bo);
}
/* sem-mul */
static obj_t sem_mul(state_t s,binop_t bo) {
  return sem_mul_muls_mulsu(s,movzx,movzx,bo);
}
/* sem-nop */
static obj_t sem_nop(state_t s) {
  return 0 /* void value */;
}
/* sem-neg */
static obj_t sem_neg(state_t s,unop_t uo) {
  obj_t rd;
  int_t size;
  obj_t mu;
  obj_t r;
  rd = rval(s,CON_Unsigned,uo.operand);
  size = sizeof_(s,uo.operand);
  mu = imm(s,0);
  r = mktemp_(s);
  sub(s,size,r,mu,rd);
  emit_flag_sub_h(s,size,rd,mu);
  emit_flag_n(s,size,var(s,r));
  emit_flag_sub_sbc_v(s,size,rd,mu);
  emit_flag_z(s,size,var(s,r));
  emit_flag_sub_c(s,size,rd,mu);
  emit_flag_s(s);
  return write(s,uo.operand,var(s,r));
}
/* sem-mov-movw */
static obj_t sem_mov_movw(state_t s,binop_t bo) {
  obj_t rr;
  rr = rval(s,CON_Unsigned,bo.second);
  return write(s,bo.first,rr);
}
/* sem-lsr */
static obj_t sem_lsr(state_t s,unop_t uo) {
  obj_t rd;
  int_t size;
  obj_t r;
  obj_t nf;
  obj_t cf;
  obj_t ov;
  rd = rval(s,CON_Unsigned,uo.operand);
  size = sizeof_(s,uo.operand);
  r = mktemp_(s);
  shr(s,size,r,rd,imm(s,1));
  nf = s->fNF;
  mov(s,1,nf,imm(s,0));
  emit_flag_z(s,size,var(s,r));
  cf = s->fCF;
  mov(s,1,cf,rd);
  ov = s->fVF;
  mov(s,1,ov,var(s,cf));
  emit_flag_s(s);
  return write(s,uo.operand,var(s,r));
}
/* sem-lpm */
static obj_t sem_lpm(state_t s,binop_t bo) {
  int_t size;
  obj_t ptr;
  int_t ptrsz;
  obj_t pm;
  obj_t pmptr;
  obj_t t;
  size = sizeof_(s,bo.first);
  ptr = rval(s,CON_Unsigned,bo.second);
  ptrsz = sizeof_(s,bo.second);
  pm = pm_get(s);
  pmptr = mktemp_(s);
  add(s,ptrsz,pmptr,ptr,var(s,pm));
  t = mktemp_(s);
  load(s,size,t,ptrsz,var(s,pmptr));
  return write(s,bo.first,var(s,t));
}
/* sem-ldi */
static obj_t sem_ldi(state_t s,binop_t bo) {
  obj_t k;
  k = rval(s,CON_Unsigned,bo.second);
  sizeof_(s,bo.first);
  return write(s,bo.first,k);
}
/* sem-ld-ldd-lds */
static obj_t sem_ld_ldd_lds(state_t s,binop_t bo) {
  int_t size;
  obj_t ptr;
  int_t ptrsz;
  obj_t t;
  size = sizeof_(s,bo.first);
  ptr = rval(s,CON_Unsigned,bo.second);
  ptrsz = sizeof_(s,bo.second);
  t = mktemp_(s);
  load(s,size,t,ptrsz,ptr);
  return write(s,bo.first,var(s,t));
}
/* sem-las-lat */
static obj_t sem_las_lat(state_t s,obj_t (*bw)(state_t,int_t,obj_t,obj_t,obj_t),binop_t bo) {
  obj_t z;
  int_t ptrsz;
  obj_t rd;
  int_t size;
  obj_t zv;
  obj_t r;
  z = rval(s,CON_Unsigned,bo.first);
  ptrsz = sizeof_(s,bo.first);
  rd = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.second);
  zv = mktemp_(s);
  load(s,size,zv,ptrsz,z);
  r = mktemp_(s);
  invoke_obj_closure(s,bw(s,size,r,var(s,zv),rd));
  store(s,size,address(s,ptrsz,z),var(s,r));
  return write(s,bo.second,var(s,zv));
}
/* sem-lat */
static obj_t sem_lat(state_t s,binop_t bo) {
  return sem_las_lat(s,xorb,bo);
}
/* sem-las */
static obj_t sem_las(state_t s,binop_t bo) {
  return sem_las_lat(s,orb,bo);
}
/* sem-lac */
static obj_t sem_lac(state_t s,binop_t bo) {
  obj_t z;
  int_t ptrsz;
  obj_t rd;
  int_t size;
  obj_t t;
  obj_t zv;
  z = rval(s,CON_Unsigned,bo.first);
  ptrsz = sizeof_(s,bo.first);
  rd = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.second);
  t = mktemp_(s);
  invoke_obj_closure(s,xorb(s,size,t,rd,imm(s,(0-1))));
  zv = mktemp_(s);
  load(s,size,zv,ptrsz,z);
  invoke_obj_closure(s,andb(s,size,t,var(s,t),var(s,zv)));
  return store(s,size,address(s,ptrsz,z),var(s,t));
}
/* sem-jmp */
static obj_t sem_jmp(state_t s,unop_t uo) {
  obj_t k;
  obj_t pc;
  k = rval(s,CON_Unsigned,uo.operand);
  pc = semantic_register_of(s,alloc_int(s,CON_PC));
  return jump(s,address(s,select_int(s,9/* size */,pc),k));
}
/* sem-inc */
static obj_t sem_inc(state_t s,unop_t uo) {
  obj_t rd;
  obj_t sb;
  int_t size;
  obj_t r;
  obj_t ov;
  rd = rval(s,CON_Unsigned,uo.operand);
  sb = imm(s,1);
  size = sizeof_(s,uo.operand);
  r = mktemp_(s);
  add(s,size,r,rd,sb);
  emit_flag_n(s,size,var(s,r));
  ov = s->fVF;
  cmpeq(s,size,ov,rd,imm(s,127));
  emit_flag_z(s,size,var(s,r));
  emit_flag_s(s);
  return write(s,uo.operand,var(s,r));
}
/* sem-in */
static obj_t sem_in(state_t s,binop_t bo) {
  obj_t io_;
  io_ = rval(s,CON_Unsigned,bo.second);
  return write(s,bo.first,io_);
}
/* rs */
static obj_t rs(state_t s,reghl_t x) {
  return semantic_register_of(s,x.regl);
}
/* semantic-comp-register-of */
static obj_t semantic_comp_register_of(state_t s,obj_t r) {
  switch (((con_obj_t*) r)->tag) {
    case 55/* REGHL */: {
      reghl_t x;
      x = ((con_reghl_t*) r)->payload;
      return update_size(s,(select_int(s,9/* size */,rs(s,x))+select_int(s,9/* size */,rs(s,x))),rs(s,x));
    }; break;
    default: {
      s->err_str = "pattern match failure in semantic-comp-register-of at specifications/avr/avr-rreil-registermapping.ml:129.12-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sem-ijmp */
static obj_t sem_ijmp(state_t s) {
  obj_t z;
  obj_t pc;
  obj_t t;
  z = semantic_comp_register_of(s,s->rZ);
  pc = semantic_register_of(s,alloc_int(s,CON_PC));
  t = mktemp_(s);
  mov(s,select_int(s,9/* size */,z),t,var(s,z));
  if (select_int(s,9/* size */,z)<select_int(s,9/* size */,pc)) {
    mov(s,(select_int(s,9/* size */,pc)-select_int(s,9/* size */,z)),at_offset(s,t,select_int(s,9/* size */,z)),imm(s,0));
  };
  return jump(s,address(s,select_int(s,9/* size */,pc),var(s,t)));
}
/* sem-icall */
static obj_t sem_icall(state_t s) {
  obj_t z;
  obj_t pc;
  obj_t t;
  obj_t q;
  z = semantic_comp_register_of(s,s->rZ);
  pc = semantic_register_of(s,alloc_int(s,CON_PC));
  t = mktemp_(s);
  mov(s,select_int(s,9/* size */,z),t,var(s,z));
  if (select_int(s,9/* size */,z)<select_int(s,9/* size */,pc)) {
    mov(s,(select_int(s,9/* size */,pc)-select_int(s,9/* size */,z)),at_offset(s,t,select_int(s,9/* size */,z)),imm(s,0));
  };
  q = mktemp_(s);
  add(s,select_int(s,9/* size */,pc),q,var(s,pc),imm(s,1));
  ps_push(s,select_int(s,9/* size */,pc),var(s,q));
  return call(s,address(s,select_int(s,9/* size */,pc),var(s,t)));
}
/* sem-fmul-fmuls-fmulsu */
static obj_t sem_fmul_fmuls_fmulsu(state_t s,obj_t (*exa)(state_t,int_t,obj_t,int_t,obj_t),obj_t (*exb)(state_t,int_t,obj_t,int_t,obj_t),binop_t bo) {
  obj_t rd;
  obj_t rr;
  int_t size;
  obj_t rde;
  obj_t rre;
  obj_t r;
  obj_t cf;
  rd = rval(s,CON_Unsigned,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.first);
  rde = mktemp_(s);
  invoke_obj_closure(s,exa(s,2*size,rde,size,rd));
  rre = mktemp_(s);
  invoke_obj_closure(s,exb(s,2*size,rre,size,rr));
  r = update_size(s,16,semantic_register_of(s,alloc_int(s,CON_R0)));
  mul(s,2*size,r,var(s,rde),var(s,rre));
  cf = s->fCF;
  cmplts(s,2*size,cf,var(s,r),imm(s,0));
  emit_flag_z(s,2*size,var(s,r));
  return shl(s,2*size,r,var(s,r),imm(s,1));
}
/* sem-fmulsu */
static obj_t sem_fmulsu(state_t s,binop_t bo) {
  return sem_fmul_fmuls_fmulsu(s,movsx,movzx,bo);
}
/* sem-fmuls */
static obj_t sem_fmuls(state_t s,binop_t bo) {
  return sem_fmul_fmuls_fmulsu(s,movsx,movsx,bo);
}
/* sem-fmul */
static obj_t sem_fmul(state_t s,binop_t bo) {
  return sem_fmul_fmuls_fmulsu(s,movzx,movzx,bo);
}
/* sem-elpm */
static obj_t sem_elpm(state_t s,binop_t bo) {
  int_t size;
  obj_t addr;
  int_t addr_sz;
  obj_t pm;
  obj_t pmptr;
  obj_t t;
  size = sizeof_(s,bo.first);
  addr = rval(s,CON_Unsigned,bo.second);
  addr_sz = sizeof_(s,bo.second);
  pm = pm_get(s);
  pmptr = mktemp_(s);
  add(s,addr_sz,pmptr,addr,var(s,pm));
  t = mktemp_(s);
  load(s,size,t,addr_sz,var(s,pmptr));
  return write(s,bo.first,var(s,t));
}
/* sem-eijmp */
static obj_t sem_eijmp(state_t s) {
  obj_t z;
  obj_t eind;
  obj_t t;
  int_t addr_sz;
  z = semantic_comp_register_of(s,s->rZ);
  eind = semantic_register_of(s,alloc_int(s,CON_EIND));
  t = mktemp_(s);
  mov(s,select_int(s,9/* size */,z),t,var(s,z));
  mov(s,select_int(s,9/* size */,eind),at_offset(s,t,select_int(s,9/* size */,z)),var(s,eind));
  addr_sz = select_int(s,9/* size */,semantic_register_of(s,alloc_int(s,CON_PC)));
  return jump(s,address(s,addr_sz,var(s,t)));
}
/* sem-eicall */
static obj_t sem_eicall(state_t s) {
  obj_t z;
  obj_t eind;
  obj_t t;
  obj_t pc;
  int_t addr_sz;
  obj_t npc;
  z = semantic_comp_register_of(s,s->rZ);
  eind = semantic_register_of(s,alloc_int(s,CON_EIND));
  t = mktemp_(s);
  mov(s,select_int(s,9/* size */,z),t,var(s,z));
  mov(s,select_int(s,9/* size */,eind),at_offset(s,t,select_int(s,9/* size */,z)),var(s,eind));
  pc = ip_get(s);
  addr_sz = select_int(s,9/* size */,pc);
  npc = mktemp_(s);
  add(s,select_int(s,9/* size */,pc),npc,var(s,pc),imm(s,1));
  ps_push(s,addr_sz,var(s,npc));
  return call(s,address(s,addr_sz,var(s,t)));
}
/* sem-des */
static obj_t sem_des(state_t s,unop_t uo) {
  obj_t r0_;
  obj_t r1;
  obj_t r2;
  obj_t r3;
  obj_t r4;
  obj_t r5;
  obj_t r6;
  obj_t r7;
  obj_t r8;
  obj_t r9;
  obj_t r10;
  obj_t r11;
  obj_t r12;
  obj_t r13;
  obj_t r14;
  obj_t r15;
  r0_ = semantic_register_of(s,alloc_int(s,CON_R0));
  undef(s,select_int(s,9/* size */,r0_),r0_);
  r1 = semantic_register_of(s,alloc_int(s,CON_R1));
  undef(s,select_int(s,9/* size */,r1),r1);
  r2 = semantic_register_of(s,alloc_int(s,CON_R2));
  undef(s,select_int(s,9/* size */,r2),r2);
  r3 = semantic_register_of(s,alloc_int(s,CON_R3));
  undef(s,select_int(s,9/* size */,r3),r3);
  r4 = semantic_register_of(s,alloc_int(s,CON_R4));
  undef(s,select_int(s,9/* size */,r4),r4);
  r5 = semantic_register_of(s,alloc_int(s,CON_R5));
  undef(s,select_int(s,9/* size */,r5),r5);
  r6 = semantic_register_of(s,alloc_int(s,CON_R6));
  undef(s,select_int(s,9/* size */,r6),r6);
  r7 = semantic_register_of(s,alloc_int(s,CON_R7));
  undef(s,select_int(s,9/* size */,r7),r7);
  r8 = semantic_register_of(s,alloc_int(s,CON_R8));
  undef(s,select_int(s,9/* size */,r8),r8);
  r9 = semantic_register_of(s,alloc_int(s,CON_R9));
  undef(s,select_int(s,9/* size */,r9),r9);
  r10 = semantic_register_of(s,alloc_int(s,CON_R10));
  undef(s,select_int(s,9/* size */,r10),r10);
  r11 = semantic_register_of(s,alloc_int(s,CON_R11));
  undef(s,select_int(s,9/* size */,r11),r11);
  r12 = semantic_register_of(s,alloc_int(s,CON_R12));
  undef(s,select_int(s,9/* size */,r12),r12);
  r13 = semantic_register_of(s,alloc_int(s,CON_R13));
  undef(s,select_int(s,9/* size */,r13),r13);
  r14 = semantic_register_of(s,alloc_int(s,CON_R14));
  undef(s,select_int(s,9/* size */,r14),r14);
  r15 = semantic_register_of(s,alloc_int(s,CON_R15));
  return undef(s,select_int(s,9/* size */,r15),r15);
}
/* sem-dec */
static obj_t sem_dec(state_t s,unop_t uo) {
  obj_t rd;
  obj_t sb;
  int_t size;
  obj_t r;
  obj_t ov;
  rd = rval(s,CON_Unsigned,uo.operand);
  sb = imm(s,1);
  size = sizeof_(s,uo.operand);
  r = mktemp_(s);
  sub(s,size,r,rd,sb);
  emit_flag_n(s,size,var(s,r));
  ov = s->fVF;
  cmpeq(s,size,ov,rd,imm(s,128));
  emit_flag_z(s,size,var(s,r));
  emit_flag_s(s);
  return write(s,uo.operand,var(s,r));
}
/* sem-cpse */
static obj_t sem_cpse(state_t s,ternop_t to) {
  obj_t rd;
  obj_t rr;
  int_t size;
  int_t n;
  obj_t cond;
  rd = rval(s,CON_Unsigned,to.first);
  rr = rval(s,CON_Unsigned,to.second);
  size = sizeof_(s,to.first);
  n = rval_uint(s,to.third);
  cond = _slash_eq(s,size,rd,rr);
  return cbranch_rel(s,cond,imm(s,n));
}
/* sem-cpc */
static obj_t sem_cpc(state_t s,binop_t bo) {
  return sem_sub_carry(s,0 /* '0' */,bo);
}
/* sem-cp-cpi */
static obj_t sem_cp_cpi(state_t s,binop_t bo) {
  return sem_sub(s,0 /* '0' */,bo);
}
/* sem-com */
static obj_t sem_com(state_t s,unop_t uo) {
  obj_t rd;
  int_t size;
  obj_t t;
  obj_t ov;
  obj_t cf;
  rd = rval(s,CON_Unsigned,uo.operand);
  size = sizeof_(s,uo.operand);
  t = mktemp_(s);
  invoke_obj_closure(s,xorb(s,size,t,rd,imm(s,(0-1))));
  ov = s->fVF;
  mov(s,1,ov,imm(s,0));
  emit_flag_n(s,size,var(s,t));
  emit_flag_z(s,size,var(s,t));
  cf = s->fCF;
  mov(s,1,cf,imm(s,1));
  emit_flag_s(s);
  return write(s,uo.operand,var(s,t));
}
/* sem-cbi */
static obj_t sem_cbi(state_t s,binop_t bo) {
  return sem_write_bit(s,0,bo);
}
/* sem-call */
static obj_t sem_call(state_t s,unop_t uo) {
  obj_t k;
  obj_t pc;
  obj_t t;
  k = rval(s,CON_Unsigned,uo.operand);
  pc = ip_get(s);
  t = mktemp_(s);
  add(s,select_int(s,9/* size */,pc),t,var(s,pc),imm(s,2));
  ps_push(s,select_int(s,9/* size */,pc),var(s,t));
  return call(s,address(s,select_int(s,9/* size */,pc),k));
}
/* sem-bst */
static obj_t sem_bst(state_t s,binop_t bo) {
  obj_t rd;
  int_t b;
  int_t size;
  obj_t t;
  obj_t tf;
  rd = rval(s,CON_Unsigned,bo.first);
  b = rval_uint(s,bo.second);
  size = sizeof_(s,bo.first);
  t = mktemp_(s);
  mov(s,size,t,rd);
  tf = s->fTF;
  return mov(s,1,tf,var(s,at_offset(s,t,b)));
}
/* sem-bset */
static obj_t sem_bset(state_t s,int_t flag) {
  obj_t sreg;
  sreg = semantic_register_of(s,alloc_int(s,CON_SREG));
  return mov(s,1,sem_reg_offset(s,sreg,flag),imm(s,1));
}
/* sem-break */
static obj_t sem_break(state_t s) {
  return 0 /* void value */;
}
/* f-at */
static obj_t f_at(state_t s,int_t offset) {
  return sem_reg_offset(s,semantic_register_of(s,alloc_int(s,CON_SREG)),offset);
}
/* sem-br */
static obj_t sem_br(state_t s,unop_t uo,obj_t (*sc)(state_t,obj_t),int_t flag) {
  obj_t k;
  obj_t cond;
  k = rval(s,CON_Signed,uo.operand);
  cond = invoke_obj_closure(s,sc(s,var(s,f_at(s,flag))));
  return cbranch_rel(s,cond,k);
}
/* sem-brbs */
static obj_t sem_brbs(state_t s,unop_t uo,int_t flag) {
  return sem_br(s,uo,_slash_d,flag);
}
/* sem-brbc */
static obj_t sem_brbc(state_t s,unop_t uo,int_t flag) {
  return sem_br(s,uo,_slash_not,flag);
}
/* sem-bld */
static obj_t sem_bld(state_t s,binop_t bo) {
  obj_t rd;
  int_t b;
  int_t size;
  obj_t tf;
  obj_t t;
  rd = rval(s,CON_Unsigned,bo.first);
  b = rval_uint(s,bo.second);
  size = sizeof_(s,bo.first);
  tf = s->fTF;
  t = mktemp_(s);
  mov(s,size,t,rd);
  mov(s,1,at_offset(s,t,b),var(s,tf));
  return write(s,bo.first,var(s,t));
}
/* sem-bclr */
static obj_t sem_bclr(state_t s,int_t flag) {
  return mov(s,1,f_at(s,flag),imm(s,0));
}
/* sem-asr */
static obj_t sem_asr(state_t s,unop_t uo) {
  obj_t rd;
  int_t size;
  obj_t r;
  obj_t cf;
  obj_t ov;
  obj_t nf;
  rd = rval(s,CON_Unsigned,uo.operand);
  size = sizeof_(s,uo.operand);
  r = mktemp_(s);
  shrs(s,size,r,rd,imm(s,1));
  emit_flag_n(s,size,var(s,r));
  emit_flag_z(s,size,var(s,r));
  cf = s->fCF;
  mov(s,1,cf,rd);
  ov = s->fVF;
  nf = s->fNF;
  invoke_obj_closure(s,xorb(s,1,ov,var(s,nf),var(s,cf)));
  emit_flag_s(s);
  return write(s,uo.operand,var(s,r));
}
/* sem-bitwise */
static obj_t sem_bitwise(state_t s,obj_t (*bw)(state_t,int_t,obj_t,obj_t,obj_t),binop_t bo) {
  obj_t rd;
  obj_t rr;
  int_t size;
  obj_t r;
  obj_t ov;
  rd = rval(s,CON_Unsigned,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.first);
  r = mktemp_(s);
  invoke_obj_closure(s,bw(s,size,r,rd,rr));
  ov = s->fVF;
  mov(s,1,ov,imm(s,0));
  emit_flag_n(s,size,var(s,r));
  emit_flag_z(s,size,var(s,r));
  emit_flag_s(s);
  return write(s,bo.first,var(s,r));
}
/* sem-or-ori */
static obj_t sem_or_ori(state_t s,binop_t bo) {
  return sem_bitwise(s,orb,bo);
}
/* sem-eor */
static obj_t sem_eor(state_t s,binop_t bo) {
  return sem_bitwise(s,xorb,bo);
}
/* sem-and-andi */
static obj_t sem_and_andi(state_t s,binop_t bo) {
  return sem_bitwise(s,andb,bo);
}
/* emit-flag-add-adc-v */
static obj_t emit_flag_add_adc_v(state_t s,int_t sz,obj_t rd,obj_t rr,obj_t r) {
  obj_t ov;
  obj_t t1;
  obj_t t2;
  obj_t t3;
  ov = s->fVF;
  t1 = mktemp_(s);
  t2 = mktemp_(s);
  t3 = mktemp_(s);
  invoke_obj_closure(s,xorb(s,sz,t1,r,rd));
  invoke_obj_closure(s,xorb(s,sz,t2,r,rr));
  invoke_obj_closure(s,andb(s,sz,t3,var(s,t1),var(s,t2)));
  return cmplts(s,sz,ov,var(s,t3),imm(s,0));
}
/* emit-flag-add-c */
static obj_t emit_flag_add_c(state_t s,int_t sz,obj_t rd,obj_t r) {
  obj_t cf;
  cf = s->fCF;
  return cmpltu(s,sz,cf,r,rd);
}
/* sem-adiw */
static obj_t sem_adiw(state_t s,binop_t bo) {
  obj_t rd;
  obj_t rr;
  int_t size;
  obj_t r;
  rd = rval(s,CON_Unsigned,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.first);
  r = mktemp_(s);
  add(s,size,r,rd,rr);
  emit_flag_add_adc_v(s,size,rd,rr,var(s,r));
  emit_flag_n(s,size,var(s,r));
  emit_flag_z(s,size,var(s,r));
  emit_flag_add_c(s,size,rd,var(s,r));
  emit_flag_s(s);
  return write(s,bo.first,var(s,r));
}
/* emit-flag-add-h */
static obj_t emit_flag_add_h(state_t s,int_t sz,obj_t rd,obj_t r) {
  obj_t hf;
  hf = s->fHF;
  return cmpltu(s,_slash_m(s,sz,2),hf,r,rd);
}
/* sem-add */
static obj_t sem_add(state_t s,binop_t bo) {
  obj_t rd;
  obj_t rr;
  int_t size;
  obj_t r;
  rd = rval(s,CON_Unsigned,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.first);
  r = mktemp_(s);
  add(s,size,r,rd,rr);
  emit_flag_add_h(s,size,rd,var(s,r));
  emit_flag_add_adc_v(s,size,rd,rr,var(s,r));
  emit_flag_n(s,size,var(s,r));
  emit_flag_z(s,size,var(s,r));
  emit_flag_add_c(s,size,rd,var(s,r));
  emit_flag_s(s);
  return write(s,bo.first,var(s,r));
}
/* emit-flag-adc-hAction2 */
static obj_t emit_flag_adc_hAction2(state_t s,int_t sz,obj_t rd,obj_t r,obj_t hf) {
  return cmpltu(s,_slash_m(s,sz,2),hf,r,rd);
}
static obj_t emit_flag_adc_hAction2Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return emit_flag_adc_hAction2(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* emit-flag-adc-hAction1 */
static obj_t emit_flag_adc_hAction1(state_t s,int_t sz,obj_t rd,obj_t r,obj_t hf) {
  return cmpleu(s,_slash_m(s,sz,2),hf,r,rd);
}
static obj_t emit_flag_adc_hAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return emit_flag_adc_hAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* emit-flag-adc-h */
static obj_t emit_flag_adc_h(state_t s,int_t sz,obj_t rd,obj_t r) {
  obj_t cf;
  obj_t hf;
  cf = s->fCF;
  hf = s->fHF;
  return _if_then_else(s,_slash_d(s,var(s,cf)),gen_obj_int_obj_obj_obj__closure(s,&emit_flag_adc_hAction1Closure,sz,rd,r,hf),gen_obj_int_obj_obj_obj__closure(s,&emit_flag_adc_hAction2Closure,sz,rd,r,hf));
}
/* emit-flag-adc-cAction2 */
static obj_t emit_flag_adc_cAction2(state_t s,int_t sz,obj_t rd,obj_t r,obj_t cf) {
  return cmpltu(s,sz,cf,r,rd);
}
static obj_t emit_flag_adc_cAction2Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return emit_flag_adc_cAction2(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* emit-flag-adc-cAction1 */
static obj_t emit_flag_adc_cAction1(state_t s,int_t sz,obj_t rd,obj_t r,obj_t cf) {
  return cmpleu(s,sz,cf,r,rd);
}
static obj_t emit_flag_adc_cAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return emit_flag_adc_cAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* emit-flag-adc-c */
static obj_t emit_flag_adc_c(state_t s,int_t sz,obj_t rd,obj_t r) {
  obj_t cf;
  cf = s->fCF;
  return _if_then_else(s,_slash_d(s,var(s,cf)),gen_obj_int_obj_obj_obj__closure(s,&emit_flag_adc_cAction1Closure,sz,rd,r,cf),gen_obj_int_obj_obj_obj__closure(s,&emit_flag_adc_cAction2Closure,sz,rd,r,cf));
}
/* sem-adc */
static obj_t sem_adc(state_t s,binop_t bo) {
  obj_t rd;
  obj_t rr;
  int_t size;
  obj_t r;
  obj_t cf;
  obj_t t;
  rd = rval(s,CON_Unsigned,bo.first);
  rr = rval(s,CON_Unsigned,bo.second);
  size = sizeof_(s,bo.first);
  r = mktemp_(s);
  add(s,size,r,rd,rr);
  cf = s->fCF;
  t = mktemp_(s);
  invoke_obj_closure(s,movzx(s,size,t,1,var(s,cf)));
  add(s,size,r,var(s,r),var(s,t));
  emit_flag_adc_h(s,size,rd,var(s,r));
  emit_flag_add_adc_v(s,size,rd,rr,var(s,r));
  emit_flag_n(s,size,var(s,r));
  emit_flag_z(s,size,var(s,r));
  emit_flag_adc_c(s,size,rd,var(s,r));
  emit_flag_s(s);
  return write(s,bo.first,var(s,r));
}
/* semantics */
static obj_t semantics(state_t s,obj_t insn) {
  switch (((con_obj_t*) insn)->tag) {
    case 61/* ADC */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_adc(s,x);
    }; break;
    case 62/* ADD */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_add(s,x);
    }; break;
    case 63/* ADIW */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_adiw(s,x);
    }; break;
    case 64/* AND */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_and_andi(s,x);
    }; break;
    case 65/* ANDI */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_and_andi(s,x);
    }; break;
    case 66/* ASR */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_asr(s,x);
    }; break;
    case 67/* BLD */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_bld(s,x);
    }; break;
    case 68/* BRCC */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbc(s,x,0);
    }; break;
    case 69/* BRCS */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbs(s,x,0);
    }; break;
    case CON_BREAK: {
      return sem_break(s);
    }; break;
    case 71/* BREQ */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbs(s,x,1);
    }; break;
    case 72/* BRGE */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbc(s,x,4);
    }; break;
    case 73/* BRHC */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbc(s,x,5);
    }; break;
    case 74/* BRHS */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbs(s,x,5);
    }; break;
    case 75/* BRID */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbc(s,x,7);
    }; break;
    case 76/* BRIE */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbs(s,x,7);
    }; break;
    case 77/* BRLT */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbs(s,x,4);
    }; break;
    case 78/* BRMI */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbs(s,x,2);
    }; break;
    case 79/* BRNE */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbc(s,x,1);
    }; break;
    case 80/* BRPL */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbc(s,x,2);
    }; break;
    case 81/* BRTC */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbc(s,x,6);
    }; break;
    case 82/* BRTS */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbs(s,x,6);
    }; break;
    case 83/* BRVC */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbc(s,x,3);
    }; break;
    case 84/* BRVS */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_brbs(s,x,3);
    }; break;
    case 85/* BST */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_bst(s,x);
    }; break;
    case 86/* CALL */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_call(s,x);
    }; break;
    case 87/* CBI */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_cbi(s,x);
    }; break;
    case CON_CLC: {
      return sem_bclr(s,0);
    }; break;
    case CON_CLH: {
      return sem_bclr(s,5);
    }; break;
    case CON_CLI: {
      return sem_bclr(s,7);
    }; break;
    case CON_CLN: {
      return sem_bclr(s,2);
    }; break;
    case CON_CLS: {
      return sem_bclr(s,4);
    }; break;
    case CON_CLT: {
      return sem_bclr(s,6);
    }; break;
    case CON_CLV: {
      return sem_bclr(s,3);
    }; break;
    case CON_CLZ: {
      return sem_bclr(s,1);
    }; break;
    case 98/* COM */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_com(s,x);
    }; break;
    case 99/* CP */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_cp_cpi(s,x);
    }; break;
    case 100/* CPC */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_cpc(s,x);
    }; break;
    case 101/* CPI */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_cp_cpi(s,x);
    }; break;
    case 102/* CPSE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return sem_cpse(s,x);
    }; break;
    case 103/* DEC */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_dec(s,x);
    }; break;
    case 104/* DES */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_des(s,x);
    }; break;
    case CON_EICALL: {
      return sem_eicall(s);
    }; break;
    case CON_EIJMP: {
      return sem_eijmp(s);
    }; break;
    case 107/* ELPM */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_elpm(s,x);
    }; break;
    case 108/* EOR */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_eor(s,x);
    }; break;
    case 109/* FMUL */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_fmul(s,x);
    }; break;
    case 110/* FMULS */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_fmuls(s,x);
    }; break;
    case 111/* FMULSU */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_fmulsu(s,x);
    }; break;
    case CON_ICALL: {
      return sem_icall(s);
    }; break;
    case CON_IJMP: {
      return sem_ijmp(s);
    }; break;
    case 114/* IN */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_in(s,x);
    }; break;
    case 115/* INC */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_inc(s,x);
    }; break;
    case 116/* JMP */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_jmp(s,x);
    }; break;
    case 117/* LAC */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_lac(s,x);
    }; break;
    case 118/* LAS */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_las(s,x);
    }; break;
    case 119/* LAT */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_lat(s,x);
    }; break;
    case 120/* LD */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_ld_ldd_lds(s,x);
    }; break;
    case 121/* LDI */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_ldi(s,x);
    }; break;
    case 122/* LDS */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_ld_ldd_lds(s,x);
    }; break;
    case 123/* LPM */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_lpm(s,x);
    }; break;
    case 125/* LSR */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_lsr(s,x);
    }; break;
    case 126/* MOV */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_mov_movw(s,x);
    }; break;
    case 127/* MOVW */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_mov_movw(s,x);
    }; break;
    case 128/* MUL */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_mul(s,x);
    }; break;
    case 129/* MULS */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_muls(s,x);
    }; break;
    case 130/* MULSU */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_mulsu(s,x);
    }; break;
    case 131/* NEG */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_neg(s,x);
    }; break;
    case CON_NOP: {
      return sem_nop(s);
    }; break;
    case 133/* OR */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_or_ori(s,x);
    }; break;
    case 134/* ORI */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_or_ori(s,x);
    }; break;
    case 135/* OUT */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_out(s,x);
    }; break;
    case 136/* POP */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_pop(s,x);
    }; break;
    case 137/* PUSH */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_push(s,x);
    }; break;
    case 138/* RCALL */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_rcall(s,x);
    }; break;
    case CON_RET: {
      return sem_ret(s);
    }; break;
    case CON_RETI: {
      return sem_reti(s);
    }; break;
    case 141/* RJMP */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_rjmp(s,x);
    }; break;
    case 143/* ROR */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_ror(s,x);
    }; break;
    case 144/* SBC */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_sbc_sbci(s,x);
    }; break;
    case 145/* SBCI */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_sbc_sbci(s,x);
    }; break;
    case 146/* SBI */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_sbi(s,x);
    }; break;
    case 147/* SBIC */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return sem_sbic_sbrc(s,x);
    }; break;
    case 148/* SBIS */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return sem_sbis_sbrs(s,x);
    }; break;
    case 149/* SBIW */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_sbiw(s,x);
    }; break;
    case 151/* SBRC */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return sem_sbic_sbrc(s,x);
    }; break;
    case 152/* SBRS */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return sem_sbis_sbrs(s,x);
    }; break;
    case CON_SEC: {
      return sem_bset(s,0);
    }; break;
    case CON_SEH: {
      return sem_bset(s,5);
    }; break;
    case CON_SEI: {
      return sem_bset(s,7);
    }; break;
    case CON_SEN: {
      return sem_bset(s,2);
    }; break;
    case CON_SES: {
      return sem_bset(s,4);
    }; break;
    case CON_SET: {
      return sem_bset(s,6);
    }; break;
    case CON_SEV: {
      return sem_bset(s,3);
    }; break;
    case CON_SEZ: {
      return sem_bset(s,1);
    }; break;
    case CON_SLEEP: {
      return sem_sleep(s);
    }; break;
    case 162/* SPM */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_spm(s,x);
    }; break;
    case 163/* ST */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_st_std_sts(s,x);
    }; break;
    case 164/* STS */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_st_std_sts(s,x);
    }; break;
    case 165/* SUB */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_sub_subi(s,x);
    }; break;
    case 167/* SWAP */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return sem_swap(s,x);
    }; break;
    case CON_WDR: {
      return sem_wdr(s);
    }; break;
    case 170/* XCH */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return sem_xch(s,x);
    }; break;
    default: {
      s->err_str = "pattern match failure in semantics at specifications/avr/avr-rreil-translator.ml:1160.9-10";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* translate-avr */
static obj_t translate_avr(state_t s,insndata_t insn) {
  return semantics(s,insn->insn);
}
/* translate-block-single */
static obj_t translate_block_single(state_t s,insndata_t insn) {
  int_t ic;
  ic = s->mon_state.ins_count;
  s->mon_state.tmp = 0;
  s->mon_state.ins_count = (ic+1);;
  return translate_avr(s,insn);
}
/* decode-translate-block-headless */
static obj_t decode_translate_block_headless(state_t s,int_t config,int_t limit) {
  insndata_t insn;
  obj_t insns;
  int_t jmp;
  int_t idx;
  insn = decode(s,config);
  insns = s->mon_state.insns;
  s->mon_state.insns = constructor_INSNS_CONS(s,__struct55(s,__insndata(s,insn->insn,insn->length),insns));;
  translate_block_single(s,insn);
  jmp = s->mon_state.foundJump;
  idx = gdsl_get_ip(s);
  if ((jmp) | (limit<=idx)) {
    return s->mon_state.stack;
  } else {
    return decode_translate_block_headless(s,config,limit);
  };
}
/* decode-translate-block */
static obj_t decode_translate_block(state_t s,int_t config,int_t limit) {
  obj_t stmts;
  s->mon_state.stack = alloc_int(s,CON_SEM_NIL);
  s->mon_state.foundJump = 0 /* '0' */;
  s->mon_state.ins_count = 0;;
  stmts = decode_translate_block_headless(s,config,limit);
  return rreil_stmts_rev(s,stmts);
}
/* translate-block-at */
static obj_t translate_block_at(state_t s,int_t config,int_t idx) {
  int_t current;
  int_t error;
  obj_t result;
  current = gdsl_get_ip(s);
  error = gdsl_seek(s, (size_t) ((current+idx)));
  if (error==0) {
    obj_t stmts;
    stmts = decode_translate_block(s,config,s->int_max);
    alloc_int(s,gdsl_seek(s, (size_t) (current)));
    result = constructor_SO_SOME(s,stmts);
  } else {
    result = alloc_int(s,CON_SO_NONE);
  };
  return result;
}
/* seek-translate-block-at */
static obj_t seek_translate_block_at(state_t s,int_t config,obj_t idx_opt) {
  switch (((con_obj_t*) idx_opt)->tag) {
    case 3/* IO_SOME */: {
      int_t i;
      i = ((con_int_t*) idx_opt)->payload;
      return translate_block_at(s,config,i);
    }; break;
    case CON_IO_NONE: {
      return alloc_int(s,CON_SO_NONE);
    }; break;
    default: {
      s->err_str = "pattern match failure in seek-translate-block-at at specifications/rreil/rreil-translator.ml:105.8-15";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* is_sem_ip */
static int_t is_sem_ip(state_t s,obj_t x) {
  switch (*((int_t*) x)) {
    case CON_Sem_PC: {
      return 1 /* '1' */;
    }; break;
    default: {
      return 0 /* '0' */;
    }; break;
  };
}
/* raddress */
static obj_t raddress(state_t s,int_t (*is_sem_ip_)(state_t,obj_t),sem_address_t addr) {
  obj_t scrutinee;
  scrutinee = addr.address;
  switch (((con_obj_t*) scrutinee)->tag) {
    case 278/* SEM_LIN_ADD */: {
      sem_arity2_t s_;
      obj_t scrutinee_;
      s_ = ((con_sem_arity2_t*) scrutinee)->payload;
      scrutinee_ = s_.opnd1;
      switch (((con_obj_t*) scrutinee_)->tag) {
        case 276/* SEM_LIN_VAR */: {
          obj_t v;
          v = ((con_obj_t*) scrutinee_)->payload;
          if (is_sem_ip_(s,select_obj(s,76/* id */,v))) {
            obj_t scrutinee__;
            scrutinee__ = s_.opnd2;
            switch (((con_obj_t*) scrutinee__)->tag) {
              case 277/* SEM_LIN_IMM */: {
                struct35_t i;
                i = ((con_struct35_t*) scrutinee__)->payload;
                return constructor_IO_SOME(s,i.const_);
              }; break;
              default: {
                return alloc_int(s,CON_IO_NONE);
              }; break;
            };
          } else {
            return alloc_int(s,CON_IO_NONE);
          };
        }; break;
        case 277/* SEM_LIN_IMM */: {
          struct35_t i;
          obj_t scrutinee__;
          i = ((con_struct35_t*) scrutinee_)->payload;
          scrutinee__ = s_.opnd2;
          switch (((con_obj_t*) scrutinee__)->tag) {
            case 276/* SEM_LIN_VAR */: {
              obj_t v;
              v = ((con_obj_t*) scrutinee__)->payload;
              if (is_sem_ip_(s,select_obj(s,76/* id */,v))) {
                return constructor_IO_SOME(s,i.const_);
              } else {
                return alloc_int(s,CON_IO_NONE);
              };
            }; break;
            default: {
              return alloc_int(s,CON_IO_NONE);
            }; break;
          };
        }; break;
        default: {
          s->err_str = "pattern match failure in raddress at specifications/rreil/rreil-translator.ml:48.25-26";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 276/* SEM_LIN_VAR */: {
      obj_t v;
      v = ((con_obj_t*) scrutinee)->payload;
      if (is_sem_ip_(s,select_obj(s,76/* id */,v))) {
        return constructor_IO_SOME(s,0);
      } else {
        return alloc_int(s,CON_IO_NONE);
      };
    }; break;
    default: {
      return alloc_int(s,CON_IO_NONE);
    }; break;
  };
}
/* io-tw */
static struct56_t io_tw(state_t s,obj_t a) {
  return __struct56(s,a,a);
}
/* io-to */
static struct56_t io_to(state_t s,obj_t a) {
  return __struct56(s,a,alloc_int(s,CON_IO_NONE));
}
/* io */
static struct56_t io(state_t s,obj_t a,obj_t b) {
  return __struct56(s,a,b);
}
/* relative-next */
static struct56_t relative_next(state_t s,obj_t stmts) {
  return relative_next_generic(s,is_sem_ip,stmts);
}
/* relative-next-generic */
static struct56_t relative_next_generic(state_t s,int_t (*is_sem_ip_)(state_t,obj_t),obj_t stmts) {
  switch (((con_obj_t*) stmts)->tag) {
    case 322/* SEM_CONS */: {
      struct13_t x;
      obj_t scrutinee;
      x = ((con_struct13_t*) stmts)->payload;
      scrutinee = x.hd;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 314/* SEM_CBRANCH */: {
          struct33_t b;
          b = ((con_struct33_t*) scrutinee)->payload;
          return io(s,raddress(s,is_sem_ip_,b.target_true),raddress(s,is_sem_ip_,b.target_false));
        }; break;
        case 315/* SEM_BRANCH */: {
          struct32_t b;
          b = ((con_struct32_t*) scrutinee)->payload;
          return io_to(s,raddress(s,is_sem_ip_,b.target));
        }; break;
        case 312/* SEM_ITE */: {
          struct31_t c;
          c = ((con_struct31_t*) scrutinee)->payload;
          return io(s,relative_next(s,rreil_stmts_rev(s,c.then_branch)).a,relative_next(s,rreil_stmts_rev(s,c.else_branch)).a);
        }; break;
        default: {
          return io_tw(s,alloc_int(s,CON_IO_NONE));
        }; break;
      };
    }; break;
    case CON_SEM_NIL: {
      return io_tw(s,alloc_int(s,CON_IO_NONE));
    }; break;
    default: {
      s->err_str = "pattern match failure in relative-next-generic at specifications/rreil/rreil-translator.ml:74.6-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* decode-translate-super-block */
static translate_result_t decode_translate_super_block(state_t s,int_t config,int_t limit) {
  obj_t stmts;
  int_t ic;
  struct56_t succs;
  obj_t succ_a;
  obj_t succ_b;
  s->mon_state.stack = alloc_int(s,CON_SEM_NIL);
  s->mon_state.foundJump = 0 /* '0' */;
  s->mon_state.ins_count = 0;;
  stmts = decode_translate_block_headless(s,config,limit);
  ic = s->mon_state.ins_count;
  succs = relative_next(s,stmts);
  succ_a = seek_translate_block_at(s,config,succs.a);
  succ_b = seek_translate_block_at(s,config,succs.b);
  s->mon_state.ins_count = ic;;
  return __translate_result(s,rreil_stmts_rev(s,stmts),succ_a,succ_b);
}
/* decode-translate-block-optimized-inner */
static obj_t decode_translate_block_optimized_inner(state_t s,int_t config,int_t limit,int_t pres) {
  switch (pres) {
    case CON_SEM_PRESERVATION_EVERYWHERE: {
      obj_t translated;
      obj_t clean;
      translated = decode_translate_block(s,config,limit);
      clean = cleanup(s,translated);
      return clean;
    }; break;
    case CON_SEM_PRESERVATION_BLOCK: {
      obj_t translated;
      obj_t live;
      obj_t clean;
      translated = decode_translate_block(s,config,limit);
      liveness(s,translated);
      live = s->mon_state.live;
      clean = cleanup(s,live);
      return clean;
    }; break;
    case CON_SEM_PRESERVATION_CONTEXT: {
      translate_result_t translated;
      obj_t live;
      obj_t clean;
      translated = decode_translate_super_block(s,config,limit);
      liveness_super(s,translated);
      live = s->mon_state.live;
      clean = cleanup(s,live);
      return clean;
    }; break;
    default: {
      s->err_str = "pattern match failure in decode-translate-block-optimized-inner at specifications/rreil/rreil-opt.ml:41.4-28";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* decode-translate-block-optimized */
static opt_result_t decode_translate_block_optimized(state_t s,int_t config,int_t limit,int_t opt_config) {
  obj_t rreil;
  obj_t insns;
  s->mon_state.insns = alloc_int(s,CON_INSNS_NIL);;
  switch (slice(opt_config, 0, 2)) {
    case 0: /* '00' */ {
      rreil = decode_translate_block_optimized_inner(s,config,limit,CON_SEM_PRESERVATION_EVERYWHERE);
    }; break;
    case 1: /* '01' */ {
      rreil = decode_translate_block_optimized_inner(s,config,limit,CON_SEM_PRESERVATION_BLOCK);
    }; break;
    case 2: /* '10' */ {
      rreil = decode_translate_block_optimized_inner(s,config,limit,CON_SEM_PRESERVATION_CONTEXT);
    }; break;
    default: {
      s->err_str = "pattern match failure in decode-translate-block-optimized at specifications/rreil/rreil-opt.ml:61.6-10";
      longjmp(s->err_tgt,0);
    }; break;
  };
  insns = s->mon_state.insns;
  return __opt_result(s,insns,rreil);
}
/* select_ins_count */
static int_t select_ins_count(state_t s) {
  return s->mon_state.ins_count;
}
/* decode-translate-single */
static obj_t decode_translate_single(state_t s,int_t config) {
  return decode_translate_block(s,config,0);
}
/* succ-pretty */
static obj_t succ_pretty(state_t s,obj_t succ,string_t name) {
  switch (((con_obj_t*) succ)->tag) {
    case 353/* SO_SOME */: {
      obj_t i;
      i = ((con_obj_t*) succ)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"Succ "),from_string_lit(s,name)),from_string_lit(s,":\n")),rreil_pretty(s,i));
    }; break;
    case CON_SO_NONE: {
      return _plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"Succ "),from_string_lit(s,name)),from_string_lit(s,": NONE :-("));
    }; break;
    default: {
      s->err_str = "pattern match failure in succ-pretty at specifications/rreil/rreil-translator.ml:126.6-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* translate */
static obj_t translate(state_t s,insndata_t insn) {
  obj_t stack;
  s->mon_state.tmp = 0;
  s->mon_state.lab = 0;
  s->mon_state.stack = alloc_int(s,CON_SEM_NIL);;
  translate_avr(s,insn);
  stack = s->mon_state.stack;
  return rreil_stmts_rev(s,stack);
}
/* pretty-arch-exception */
static obj_t pretty_arch_exception(state_t s,obj_t exception) {
  int_t scrutinee;
  scrutinee = 0;
  switch (scrutinee) {
    case 1: {
      return from_string_lit(s,"");
    }; break;
    default: {
      s->err_str = "pattern match failure in pretty-arch-exception at specifications/avr/avr-rreil-pretty.ml:13.49-50";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* pretty-arch-exception */
obj_t gdsl_avr_rreil_pretty_arch_exception(state_t s,obj_t exception) {
  return pretty_arch_exception(s,exception);
}
/* pretty-arch-id */
obj_t gdsl_avr_rreil_pretty_arch_id(state_t s,obj_t r) {
  return pretty_arch_id(s,r);
}
/* translate */
obj_t gdsl_avr_rreil_translate(state_t s,insndata_t insn) {
  return translate(s,__insndata(s,insn->insn,insn->length));
}
/* succ-pretty */
obj_t gdsl_avr_rreil_succ_pretty(state_t s,obj_t succ,string_t name) {
  return succ_pretty(s,succ,name);
}
/* decode-translate-super-block */
translate_result_t gdsl_avr_rreil_decode_translate_super_block(state_t s,int_t config,int_t limit) {
  translate_result_t con_payload;
  con_payload = decode_translate_super_block(s,config,limit);
  return __translate_result(s,con_payload->insns,con_payload->succ_a,con_payload->succ_b);
}
/* decode-translate-single */
obj_t gdsl_avr_rreil_decode_translate_single(state_t s,int_t config) {
  return decode_translate_single(s,config);
}
/* select_ins_count */
int_t gdsl_avr_rreil_select_ins_count(state_t s) {
  return select_ins_count(s);
}
/* decode-translate-block */
obj_t gdsl_avr_rreil_decode_translate_block(state_t s,int_t config,int_t limit) {
  return decode_translate_block(s,config,limit);
}
/* decode-translate-block-optimized */
opt_result_t gdsl_avr_rreil_decode_translate_block_optimized(state_t s,int_t config,int_t limit,int_t opt_config) {
  opt_result_t con_payload;
  con_payload = decode_translate_block_optimized(s,config,limit,opt_config);
  return __opt_result(s,con_payload->insns,con_payload->rreil);
}
/* traverse-insn-list */
obj_t gdsl_avr_rreil_traverse_insn_list(state_t s,obj_t l,obj_t init,obj_t (*insn_append)(state_t,obj_t,insndata_t)) {
  return traverse_insn_list(s,l,init,insn_append);
}
/* optimization-config */
obj_t gdsl_avr_rreil_optimization_config(state_t s) {
  return s->gdsl_avr_rreil_optimization_config;
}
/* cleanup */
obj_t gdsl_avr_rreil_cleanup(state_t s,obj_t stmts) {
  return cleanup(s,stmts);
}
/* liveness_super */
lv_super_result_t gdsl_avr_rreil_liveness_super(state_t s,translate_result_t data) {
  lv_super_result_t con_payload;
  con_payload = liveness_super(s,__translate_result(s,data->insns,data->succ_a,data->succ_b));
  return __lv_super_result(s,con_payload->after,con_payload->initial);
}
/* liveness */
obj_t gdsl_avr_rreil_liveness(state_t s,obj_t instructions) {
  return liveness(s,instructions);
}
/* select_live */
obj_t gdsl_avr_rreil_select_live(state_t s) {
  return select_live(s);
}
/* lv-pretty */
obj_t gdsl_avr_rreil_lv_pretty(state_t s,obj_t t) {
  return lv_pretty(s,t);
}
/* rreil-pretty */
obj_t gdsl_avr_rreil_rreil_pretty(state_t s,obj_t ss) {
  return rreil_pretty(s,ss);
}
/* rreil-convert-sem-stmt-list */
obj_t gdsl_avr_rreil_rreil_convert_sem_stmt_list(state_t s,callbacks_t cbs,obj_t stmts) {
  sem_stmt_list_callbacks_t con_payload;
  sem_exception_callbacks_t con_payload_;
  branch_hint_callbacks_t con_payload__;
  sem_stmt_callbacks_t con_payload___;
  sem_flop_callbacks_t con_payload____;
  sem_varl_list_callbacks_t con_payload_____;
  sem_varl_callbacks_t con_payload______;
  sem_expr_callbacks_t con_payload_______;
  sem_expr_cmp_callbacks_t con_payload________;
  sem_sexpr_callbacks_t con_payload_________;
  sem_linear_callbacks_t con_payload__________;
  sem_var_callbacks_t con_payload___________;
  sem_address_callbacks_t con_payload____________;
  sem_id_callbacks_t con_payload_____________;
  con_payload = cbs->sem_stmt_list;
  con_payload_ = cbs->sem_exception;
  con_payload__ = cbs->branch_hint;
  con_payload___ = cbs->sem_stmt;
  con_payload____ = cbs->sem_flop;
  con_payload_____ = cbs->sem_varl_list;
  con_payload______ = cbs->sem_varl;
  con_payload_______ = cbs->sem_expr;
  con_payload________ = cbs->sem_expr_cmp;
  con_payload_________ = cbs->sem_sexpr;
  con_payload__________ = cbs->sem_linear;
  con_payload___________ = cbs->sem_var;
  con_payload____________ = cbs->sem_address;
  con_payload_____________ = cbs->sem_id;
  return rreil_convert_sem_stmt_list(s,__callbacks(s,__branch_hint_callbacks(s,con_payload__->branch_hint_),__sem_address_callbacks(s,con_payload____________->sem_address_),__sem_exception_callbacks(s,con_payload_->arch,con_payload_->shared),__sem_expr_callbacks(s,con_payload_______->sem_and,con_payload_______->sem_div,con_payload_______->sem_divs,con_payload_______->sem_mod,con_payload_______->sem_mods,con_payload_______->sem_mul,con_payload_______->sem_or,con_payload_______->sem_sexpr,con_payload_______->sem_shl,con_payload_______->sem_shr,con_payload_______->sem_shrs,con_payload_______->sem_sx,con_payload_______->sem_xor,con_payload_______->sem_zx),__sem_expr_cmp_callbacks(s,con_payload________->sem_cmpeq,con_payload________->sem_cmples,con_payload________->sem_cmpleu,con_payload________->sem_cmplts,con_payload________->sem_cmpltu,con_payload________->sem_cmpneq),__sem_flop_callbacks(s,con_payload____->sem_flop_),__sem_id_callbacks(s,con_payload_____________->arch,con_payload_____________->shared,con_payload_____________->virt_t),__sem_linear_callbacks(s,con_payload__________->sem_lin_add,con_payload__________->sem_lin_imm,con_payload__________->sem_lin_scale,con_payload__________->sem_lin_sub,con_payload__________->sem_lin_var),__sem_sexpr_callbacks(s,con_payload_________->sem_sexpr_arb,con_payload_________->sem_sexpr_cmp,con_payload_________->sem_sexpr_lin),__sem_stmt_callbacks(s,con_payload___->sem_assign,con_payload___->sem_branch,con_payload___->sem_cbranch,con_payload___->sem_flop,con_payload___->sem_ite,con_payload___->sem_load,con_payload___->sem_prim,con_payload___->sem_store,con_payload___->sem_throw,con_payload___->sem_while),__sem_stmt_list_callbacks(s,con_payload->sem_stmt_list_init,con_payload->sem_stmt_list_next),__sem_var_callbacks(s,con_payload___________->sem_var_),__sem_varl_callbacks(s,con_payload______->sem_varl_),__sem_varl_list_callbacks(s,con_payload_____->sem_varl_list_init,con_payload_____->sem_varl_list_next)),stmts);
}
/* example_b */
obj_t gdsl_avr_rreil_example_b(state_t s) {
  return example_b(s);
}
/* example_a */
obj_t gdsl_avr_rreil_example_a(state_t s) {
  return example_a(s);
}
/* rreil-stmts-count */
int_t gdsl_avr_rreil_rreil_stmts_count(state_t s,obj_t stmts) {
  return rreil_stmts_count(s,stmts);
}
/* pretty */
obj_t gdsl_avr_rreil_pretty(state_t s,insndata_t i) {
  return pretty(s,__insndata(s,i->insn,i->length));
}
/* generalize */
asm_insn_t gdsl_avr_rreil_generalize(state_t s,insndata_t insn) {
  asm_insn_t con_payload;
  con_payload = generalize(s,__insndata(s,insn->insn,insn->length));
  return __asm_insn(s,con_payload->annotations,con_payload->length,con_payload->mnemonic,con_payload->opnds);
}
/* decode */
insndata_t gdsl_avr_rreil_decode(state_t s,int_t config) {
  insndata_t con_payload;
  con_payload = decode(s,config);
  return __insndata(s,con_payload->insn,con_payload->length);
}
/* config-default */
int_t gdsl_avr_rreil_config_default(state_t s) {
  return s->gdsl_avr_rreil_config_default;
}
/* decoder-config */
obj_t gdsl_avr_rreil_decoder_config(state_t s) {
  return s->gdsl_avr_rreil_decoder_config;
}
/* asm-pretty */
obj_t gdsl_avr_rreil_asm_pretty(state_t s,asm_insn_t ai) {
  return asm_pretty(s,__asm_insn(s,ai->annotations,ai->length,ai->mnemonic,ai->opnds));
}
/* asm-convert-insn */
obj_t gdsl_avr_rreil_asm_convert_insn(state_t s,asm_callbacks_t cbs,asm_insn_t insn) {
  asm_annotation_callbacks_t con_payload;
  asm_annotation_list_callbacks_t con_payload_;
  asm_boundary_callbacks_t con_payload__;
  asm_signedness_callbacks_t con_payload___;
  asm_opnd_callbacks_t con_payload____;
  asm_opnd_list_callbacks_t con_payload_____;
  con_payload = cbs->annotation;
  con_payload_ = cbs->annotation_list;
  con_payload__ = cbs->boundary;
  con_payload___ = cbs->signedness;
  con_payload____ = cbs->opnd;
  con_payload_____ = cbs->opnd_list;
  return asm_convert_insn(s,__asm_callbacks(s,__asm_annotation_callbacks(s,con_payload->ann_string,con_payload->function,con_payload->opnd),__asm_annotation_list_callbacks(s,con_payload_->annotation_list_next,con_payload_->init),__asm_boundary_callbacks(s,con_payload__->sz,con_payload__->sz_o),cbs->insn,__asm_opnd_callbacks(s,con_payload____->annotated,con_payload____->bounded,con_payload____->composite,con_payload____->imm,con_payload____->memory,con_payload____->opnd_register,con_payload____->post_op,con_payload____->pre_op,con_payload____->rel,con_payload____->scale,con_payload____->sign,con_payload____->sum),__asm_opnd_list_callbacks(s,con_payload_____->init,con_payload_____->opnd_list_next),__asm_signedness_callbacks(s,con_payload___->asm_signed,con_payload___->asm_unsigned)),__asm_insn(s,insn->annotations,insn->length,insn->mnemonic,insn->opnds));
}
/* conf-next */
obj_t gdsl_avr_rreil_conf_next(state_t s,obj_t co) {
  return conf_next(s,co);
}
/* conf-data */
int_t gdsl_avr_rreil_conf_data(state_t s,obj_t co) {
  return conf_data(s,co);
}
/* conf-long */
string_t gdsl_avr_rreil_conf_long(state_t s,obj_t co) {
  return conf_long(s,co);
}
/* conf-short */
string_t gdsl_avr_rreil_conf_short(state_t s,obj_t co) {
  return conf_short(s,co);
}
/* has-conf */
int_t gdsl_avr_rreil_has_conf(state_t s,obj_t co) {
  return has_conf(s,co);
}
/* int-max */
int_t gdsl_avr_rreil_int_max(state_t s) {
  return s->gdsl_avr_rreil_int_max;
}
/* rope-to-string */
string_t gdsl_avr_rreil_rope_to_string(state_t s,obj_t r,string_t buf) {
  return rope_to_string(s,r,buf);
}
/* rope-print */
void gdsl_avr_rreil_rope_print(state_t s,obj_t r) {
  rope_print(s,r);
}
/* rope-length */
int_t gdsl_avr_rreil_rope_length(state_t s,obj_t r) {
  return rope_length(s,r);
}

state_t
gdsl_avr_rreil_init(void) {
  state_t s = calloc(1,sizeof(struct state));
  s->handle = stdout;
  /* compute all constant expressions */
  s->bbtree_empty = alloc_int(s,CON_Lf);
  s->fitree_empty = s->bbtree_empty;
  s->int_max = 0x7FFFFFFFFFFFFFFF;
  s->asm_anns_none = alloc_int(s,CON_ASM_ANNS_NIL);
  s->asm_opnds_none = alloc_int(s,CON_ASM_OPNDS_NIL);
  s->decoder_config = conf(s,gen_vec(1, 1 /* '1' */),from_string_lit(s,"reduced"),from_string_lit(s,"decode for ATtiny4/5/9/10 controller"));
  s->config_default = 0 /* '0' */;
  s->rZ = constructor_REGHL(s,__reghl(s,alloc_int(s,CON_R31),alloc_int(s,CON_R30)));
  s->rY = constructor_REGHL(s,__reghl(s,alloc_int(s,CON_R29),alloc_int(s,CON_R28)));
  reghl_t caseRes;
  switch (((con_obj_t*) s->rZ)->tag) {
    case 55/* REGHL */: {
      reghl_t x;
      x = ((con_reghl_t*) s->rZ)->payload;
      caseRes = x;
    }; break;
    default: {
      s->err_str = "pattern match failure in rampz-z at specifications/avr/avr.ml:904.57-58";
      longjmp(s->err_tgt,0);
    }; break;
  };
  s->rampz_z = constructor_REGIHL(s,__struct21(s,__reghl(s,caseRes.regh,caseRes.regl),alloc_int(s,CON_RAMPZ)));
  s->rX = constructor_REGHL(s,__reghl(s,alloc_int(s,CON_R27),alloc_int(s,CON_R26)));
  s->fmap_empty = s->bbtree_empty;
  s->registers_live_map = _plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,_plus__plus_(s,s->fmap_empty,alloc_int(s,CON_R0)),alloc_int(s,CON_R1)),alloc_int(s,CON_R2)),alloc_int(s,CON_R3)),alloc_int(s,CON_R4)),alloc_int(s,CON_R5)),alloc_int(s,CON_R6)),alloc_int(s,CON_R7)),alloc_int(s,CON_R8)),alloc_int(s,CON_R9)),alloc_int(s,CON_R10)),alloc_int(s,CON_R11)),alloc_int(s,CON_R12)),alloc_int(s,CON_R13)),alloc_int(s,CON_R14)),alloc_int(s,CON_R15)),alloc_int(s,CON_R16)),alloc_int(s,CON_R17)),alloc_int(s,CON_R18)),alloc_int(s,CON_R19)),alloc_int(s,CON_R20)),alloc_int(s,CON_R21)),alloc_int(s,CON_R22)),alloc_int(s,CON_R23)),alloc_int(s,CON_R24)),alloc_int(s,CON_R25)),alloc_int(s,CON_R26)),alloc_int(s,CON_R27)),alloc_int(s,CON_R28)),alloc_int(s,CON_R29)),alloc_int(s,CON_R30)),alloc_int(s,CON_R31)),alloc_int(s,CON_IO0)),alloc_int(s,CON_IO1)),alloc_int(s,CON_IO2)),alloc_int(s,CON_IO3)),alloc_int(s,CON_IO4)),alloc_int(s,CON_IO5)),alloc_int(s,CON_IO6)),alloc_int(s,CON_IO7)),alloc_int(s,CON_IO8)),alloc_int(s,CON_IO9)),alloc_int(s,CON_IO10)),alloc_int(s,CON_IO11)),alloc_int(s,CON_IO12)),alloc_int(s,CON_IO13)),alloc_int(s,CON_IO14)),alloc_int(s,CON_IO15)),alloc_int(s,CON_IO16)),alloc_int(s,CON_IO17)),alloc_int(s,CON_IO18)),alloc_int(s,CON_IO19)),alloc_int(s,CON_IO20)),alloc_int(s,CON_IO21)),alloc_int(s,CON_IO22)),alloc_int(s,CON_IO23)),alloc_int(s,CON_IO24)),alloc_int(s,CON_IO25)),alloc_int(s,CON_IO26)),alloc_int(s,CON_IO27)),alloc_int(s,CON_IO28)),alloc_int(s,CON_IO29)),alloc_int(s,CON_IO30)),alloc_int(s,CON_IO31)),alloc_int(s,CON_IO32)),alloc_int(s,CON_IO33)),alloc_int(s,CON_IO34)),alloc_int(s,CON_IO35)),alloc_int(s,CON_IO36)),alloc_int(s,CON_IO37)),alloc_int(s,CON_IO38)),alloc_int(s,CON_IO39)),alloc_int(s,CON_IO40)),alloc_int(s,CON_IO41)),alloc_int(s,CON_IO42)),alloc_int(s,CON_IO43)),alloc_int(s,CON_IO44)),alloc_int(s,CON_IO45)),alloc_int(s,CON_IO46)),alloc_int(s,CON_IO47)),alloc_int(s,CON_IO48)),alloc_int(s,CON_IO49)),alloc_int(s,CON_IO50)),alloc_int(s,CON_IO51)),alloc_int(s,CON_IO52)),alloc_int(s,CON_IO53)),alloc_int(s,CON_IO54)),alloc_int(s,CON_IO55)),alloc_int(s,CON_RAMPD)),alloc_int(s,CON_RAMPX)),alloc_int(s,CON_RAMPY)),alloc_int(s,CON_RAMPZ)),alloc_int(s,CON_EIND)),alloc_int(s,CON_SPL)),alloc_int(s,CON_SPH)),alloc_int(s,CON_SREG)),alloc_int(s,CON_PC)),alloc_int(s,CON_SP));
  s->optimization_config = _amp__star_(s,_amp__star_(s,conf(s,gen_vec(2, 0 /* '00' */),from_string_lit(s,"block"),from_string_lit(s,"translate a basic block at a time")),conf(s,gen_vec(2, 1 /* '01' */),from_string_lit(s,"liveness"),from_string_lit(s,"remove dead assignments"))),conf(s,gen_vec(2, 2 /* '10' */),from_string_lit(s,"inter-bb"),from_string_lit(s,"perform inter-basic block liveness analysis")));
  s->fSF = sem_reg_offset(s,semantic_register_of(s,alloc_int(s,CON_SREG)),4);
  s->fZF = sem_reg_offset(s,semantic_register_of(s,alloc_int(s,CON_SREG)),1);
  s->fNF = sem_reg_offset(s,semantic_register_of(s,alloc_int(s,CON_SREG)),2);
  s->fVF = sem_reg_offset(s,semantic_register_of(s,alloc_int(s,CON_SREG)),3);
  s->fHF = sem_reg_offset(s,semantic_register_of(s,alloc_int(s,CON_SREG)),5);
  s->fCF = sem_reg_offset(s,semantic_register_of(s,alloc_int(s,CON_SREG)),0);
  s->fIF = sem_reg_offset(s,semantic_register_of(s,alloc_int(s,CON_SREG)),7);
  s->fTF = sem_reg_offset(s,semantic_register_of(s,alloc_int(s,CON_SREG)),6);
  s->gdsl_avr_rreil_optimization_config = s->optimization_config;
  s->gdsl_avr_rreil_config_default = s->config_default;
  s->gdsl_avr_rreil_decoder_config = s->decoder_config;
  s->gdsl_avr_rreil_int_max = s->int_max;
  /* keep the heap of constant expressions separate */
  s->const_heap_base = s->heap_base;
  s->heap_base = NULL;
  s->heap_limit = NULL;
  s->heap = NULL;

gdsl_avr_rreil_endianness  (s, 0, 1);

  return s;
}


#ifdef WITHMAIN

#if defined(gdsl_decode_translate_block_optimized) && defined(gdsl_rreil_pretty)
  #define HAVE_TRANS
#endif
#if defined(gdsl_decode) && defined(gdsl_pretty)
  #define HAVE_DECODE
#endif

#define BUF_SIZE 32*1024*1024
static unsigned char blob[BUF_SIZE];

int readNum(char* str, size_t* res) {
  size_t mult = 10;
  *res = 0;
  while (*str) {
    char c = *str;
    if (c=='x') mult=16; else
      if ((c>='0') && (c<='9')) *res=*res*mult+(size_t) (c-'0'); else
        if ((c>='a') && (c<='f')) *res=*res*mult+10+(size_t) (c-'a'); else
          if ((c>='A') && (c<='F')) *res=*res*mult+10+(size_t) (c-'A'); else
            return 1;
    str++;
  }
  return 0;
}

int main (int argc, char** argv) {
  size_t buf_size = BUF_SIZE;
  FILE* file = NULL;
  int_t decode_options =
#if defined(gdsl_default_config)
    gdsl_default_config;
#else
    0;
#endif
  int_t optimization_options = 0;
  int_t run_translate = 0;
  int_t translate_options = 0;
  size_t base_address = 0;
  size_t start_address = 0;
  int print_addr = 0;
  obj_t config;
  state_t s = gdsl_init();
  long long alloc_size,alloc_no,alloc_max;
  
  /* read command line parameters */
  int i;
  for(i=1; i<argc; i++) {
    char* arg = argv[i];
    if (strncmp(arg,"--",2)) {
#ifdef _MSC_VER
      fopen_s(&file,arg,"r");
#else
      file = fopen(arg,"r");
#endif
      if (file==NULL) {
        printf("file '%s' not found, please run %s --help for usage\n", arg, argv[0]);
        return 1;
      }
    } else {
      arg+=2;
#if defined(gdsl_decoder_config)
      for (config = gdsl_decoder_config(s); gdsl_has_conf(s,config);
        config = gdsl_conf_next(s,config))
        if (strcmp(arg,gdsl_conf_short(s,config))==0) {
          decode_options |= gdsl_conf_data(s,config);
          break;
        }
      if (gdsl_has_conf(s,config)) continue;
#endif
#if defined(gdsl_optimization_config)
      for (config = gdsl_optimization_config(s); gdsl_has_conf(s,config);
        config = gdsl_conf_next(s,config))
        if (strcmp(arg,gdsl_conf_short(s,config))==0) {
          optimization_options |= gdsl_conf_data(s,config);
          break;
        }
      if (gdsl_has_conf(s,config)) continue;
#endif
      if (strncmp(arg,"base=",5)==0) {
        int res=readNum(arg+5,&base_address);
        print_addr=1;
        if (res==0) continue;
      }
      if (strncmp(arg,"start=",6)==0) {
        int res=readNum(arg+6,&start_address);
        if (res==0) continue;
      }
      if (strcmp(arg,"trans")==0) {
        run_translate = 1;
        continue;
      }
      fprintf(stderr,
        "Command line argument `%s' not recognized. Usage:\n"
        "\t%s [options] filename\nwhere\n"
        "  --trans               translate to semantics\n"
        "  --base=addr           print addresses relative to addr\n"
        "  --start=addr          decode starting from addr\n", argv[i], argv[0]);
#if defined(gdsl_decoder_config)
      for (config = gdsl_decoder_config(s); gdsl_has_conf(s,config);
        config = gdsl_conf_next(s,config))
        fprintf(stderr,"  --%s\t\t%s\n",
          gdsl_conf_short(s,config), gdsl_conf_long(s,config));
#endif
#if defined(gdsl_optimization_config)
      for (config = gdsl_optimization_config(s); gdsl_has_conf(s,config);
        config = gdsl_conf_next(s,config))
        fprintf(stderr,"  --%s\t\t%s\n",
          gdsl_conf_short(s,config), gdsl_conf_long(s,config));
#endif
      return 1;
    }
  }
  /* fill the buffer, either in binary from file or as sequence
     of hex bytes separated by space or newlines */
  if (file) {
    size_t bytes_read = fread(blob, 1, BUF_SIZE, file);
    if (bytes_read == 0) return 1;
    buf_size = bytes_read;
  } else {
    size_t i=0;
    int num=0;
    int digit=0;
    while (i<buf_size) {
      int x = getchar();
      if (x==EOF) buf_size = i; else
      if ((x>='0') && (x<='9')) { num=num*16+(x-'0'); digit++; } else
      if ((x>='a') && (x<='f')) { num=num*16+(10+x-'a'); digit++; } else
      if ((x>='A') && (x<='F')) { num=num*16+(10+x-'A'); digit++; } else
      if (x>' ') {
        fprintf(stderr, "invalid input; should be in hex form: '0f 0b ..'.\n");
        return 1;
      }
      if (digit==2) { blob[i] = num & 0xff; i+=1; digit=0; };
    }
  }  
  /* initialize the GDSL program */
  gdsl_set_code(s, blob, buf_size, base_address);
  gdsl_seek(s, start_address);

  alloc_size = 0;
  alloc_no = 0;
  alloc_max = 0;

  while (gdsl_get_ip(s)-base_address<buf_size) {
    size_t size;
    size_t address=0;
    if (setjmp(*gdsl_err_tgt(s))==0) {
      if (run_translate) {
#ifdef HAVE_TRANS
        address = gdsl_get_ip(s);
        opt_result_t block = gdsl_decode_translate_block_optimized(s,
          decode_options,
          gdsl_int_max(s),
          optimization_options);
        obj_t res = gdsl_rreil_pretty(s,block->rreil);
        string_t str = gdsl_merge_rope(s,res);
        if (print_addr) printf("0x%016lx:\n",address);
        fputs(str,stdout);
#else
        fputs("GDSL modules contain no semantic translation\n",stdout);
        return 1;
#endif
      } else {
#ifdef HAVE_DECODE
        address = gdsl_get_ip(s);
        obj_t instr = gdsl_decode(s, decode_options);
        obj_t res = gdsl_pretty(s,instr);
        string_t str = gdsl_merge_rope(s,res);
        if (print_addr) printf("%016lx ",address);
        fputs(str,stdout);
#else
        fputs("GDSL modules contain no decoder function\n",stdout);
        return 1;
#endif
      }
    } else {
      fprintf(stdout,"exception at address 0x%lx: %s", address, gdsl_get_error_message(s));
      size_t step = (s->token_addr_inv>0 ? (size_t) s->token_addr_inv+1 : 1u);
      gdsl_seek(s,address+step);
    }
    fputs("\n",stdout);
    size = gdsl_heap_residency(s);
    alloc_size += size;
    alloc_no++;
    if (size>alloc_max) alloc_max = size;
    gdsl_reset_heap(s);
  }
  fprintf(stderr, "heap: no: %lli mem: %lli max: %lli\n", alloc_no, alloc_size, alloc_max);
  gdsl_destroy(s);
  return 0;
}

#endif


