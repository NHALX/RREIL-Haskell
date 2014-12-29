/* vim:set ts=2:set sw=2:set expandtab: */
/* Auto-generated file. DO NOT EDIT. */

#include "gdsl-mips-rreil.h"
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
  int_t cc;
  int_t code10;
  int_t code19;
  int_t code20;
  int_t cofun;
  int_t cond;
  int_t fd;
  int_t fmt;
  int_t foundJump;
  int_t fr;
  int_t fs;
  int_t ft;
  int_t hint;
  int_t immediate;
  int_t impl;
  int_t ins_count;
  obj_t insns;
  int_t instr_index;
  int_t lab;
  obj_t live;
  int_t lsb;
  obj_t maybelive;
  int_t mode64;
  int_t msb;
  int_t msbd;
  int_t offset16;
  int_t offset9;
  int_t op;
  int_t rd;
  int_t rs;
  int_t rt;
  int_t sa;
  int_t sel;
  obj_t stack;
  int_t stype;
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
} struct6_t;
typedef struct {
  obj_t boundary;
  obj_t opnd;
} struct14_t;
typedef struct {
  obj_t destination;
  obj_t source1;
  obj_t source2;
} ternop_t;
typedef struct {
  obj_t destination;
  obj_t source;
} binop_t;
typedef struct {
  obj_t source;
} unop_src_t;
typedef struct {
  obj_t destination;
  obj_t fmt;
  obj_t source;
  obj_t source1;
  obj_t source2;
  obj_t source3;
  obj_t source4;
} struct19_t;
typedef struct {
  obj_t source1;
  obj_t source2;
  obj_t source3;
} ternop_src_t;
typedef struct {
  obj_t destination;
} unop_t;
typedef struct {
  obj_t destination;
  obj_t source1;
  obj_t source2;
  obj_t source3;
} quadop_t;
typedef struct {
  obj_t fmt;
  obj_t source1;
  obj_t source2;
  obj_t source3;
  obj_t source4;
} quadop_fmt_src_t;
typedef struct {
  obj_t destination;
  obj_t fmt;
  obj_t source1;
  obj_t source2;
  obj_t source3;
} quadop_fmt_t;
typedef struct {
  obj_t destination;
  obj_t fmt;
  obj_t source1;
  obj_t source2;
} ternop_fmt_t;
typedef struct {
  obj_t destination;
  obj_t fmt;
  obj_t source;
} binop_fmt_t;
typedef struct {
  obj_t source1;
  obj_t source2;
} binop_src_t;
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
} struct31_t;
typedef struct {
  sem_address_t address;
  obj_t lhs;
  int_t size;
} struct32_t;
typedef struct {
  sem_address_t address;
  obj_t rhs;
  int_t size;
} struct33_t;
typedef struct {
  obj_t cond;
  obj_t else_branch;
  obj_t then_branch;
} struct34_t;
typedef struct {
  obj_t body;
  obj_t cond;
} struct35_t;
typedef struct {
  obj_t hint;
  sem_address_t target;
} struct36_t;
typedef struct {
  obj_t cond;
  sem_address_t target_false;
  sem_address_t target_true;
} struct37_t;
typedef struct {
  obj_t lhs;
  string_t op;
  obj_t rhs;
} struct38_t;
typedef struct {
  int_t fromsize;
  obj_t opnd1;
} struct39_t;
typedef struct {
  int_t const_;
  obj_t opnd;
} struct40_t;
typedef struct {
  int_t const_;
} struct41_t;
typedef struct {
  obj_t live;
  obj_t maybelive;
} struct57_t;
typedef struct {
  obj_t conservative;
  obj_t greedy;
} struct58_t;
typedef struct {
  insndata_t insn;
  obj_t tl;
} struct61_t;
typedef struct {
  obj_t a;
  obj_t b;
} struct62_t;

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
  obj_t asm_opnds_none;
  obj_t asm_anns_none;
  obj_t decoder_config;
  int_t config_default;
  obj_t fmap_empty;
  obj_t varls_none;
  obj_t registers_live_map;
  obj_t optimization_config;
  int_t exceptions_on;
  obj_t fDM;
  obj_t fRE;
  obj_t fKSU;
  obj_t fERL;
  obj_t fEXL;
  int_t bigendian_mem;
  obj_t fCA;
  obj_t fPSS;
  obj_t fCSS;
  obj_t fHSS;
  obj_t fBEV;
  int_t architectureRevision;
  obj_t fISA;
  int_t isMIPS16Implemented;
  obj_t fIE;
  obj_t fIEXI;
  obj_t gdsl_mips_rreil_optimization_config;
  int_t gdsl_mips_rreil_config_default;
  obj_t gdsl_mips_rreil_decoder_config;
  int_t gdsl_mips_rreil_int_max;
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
gdsl_mips_rreil_reset_heap(state_t s) {
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
gdsl_mips_rreil_heap_residency(state_t s) {
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
GEN_CON_STRUCT(struct6);
GEN_ALLOC(con_struct6);
GEN_CON_STRUCT(string);
GEN_ALLOC(con_string);
GEN_CON_STRUCT(struct14);
GEN_ALLOC(con_struct14);
GEN_ALLOC(con_obj);
GEN_CON_STRUCT(ternop);
GEN_ALLOC(con_ternop);
GEN_CON_STRUCT(binop);
GEN_ALLOC(con_binop);
GEN_CON_STRUCT(unop_src);
GEN_ALLOC(con_unop_src);
GEN_CON_STRUCT(struct19);
GEN_ALLOC(con_struct19);
GEN_CON_STRUCT(ternop_src);
GEN_ALLOC(con_ternop_src);
GEN_CON_STRUCT(unop);
GEN_ALLOC(con_unop);
GEN_CON_STRUCT(quadop);
GEN_ALLOC(con_quadop);
GEN_CON_STRUCT(vec);
GEN_ALLOC(con_vec);
GEN_ADD_FIELD(obj);
GEN_CON_STRUCT(quadop_fmt_src);
GEN_ALLOC(con_quadop_fmt_src);
GEN_CON_STRUCT(quadop_fmt);
GEN_ALLOC(con_quadop_fmt);
GEN_CON_STRUCT(ternop_fmt);
GEN_ALLOC(con_ternop_fmt);
GEN_CON_STRUCT(binop_fmt);
GEN_ALLOC(con_binop_fmt);
GEN_CON_STRUCT(binop_src);
GEN_ALLOC(con_binop_src);
GEN_CON_STRUCT(sem_arity2);
GEN_ALLOC(con_sem_arity2);
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
GEN_CON_STRUCT(struct36);
GEN_ALLOC(con_struct36);
GEN_CON_STRUCT(struct37);
GEN_ALLOC(con_struct37);
GEN_CON_STRUCT(struct38);
GEN_ALLOC(con_struct38);
GEN_CON_STRUCT(struct39);
GEN_ALLOC(con_struct39);
GEN_CON_STRUCT(struct40);
GEN_ALLOC(con_struct40);
GEN_CON_STRUCT(struct41);
GEN_ALLOC(con_struct41);
GEN_CON_STRUCT(struct61);
GEN_ALLOC(con_struct61);
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
static INLINE_ATTR struct6_t __struct6(state_t s, obj_t hd, obj_t tl) {
  struct6_t res;
  res.hd = hd;
  res.tl = tl;
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
static INLINE_ATTR struct14_t __struct14(state_t s, obj_t boundary, obj_t opnd) {
  struct14_t res;
  res.boundary = boundary;
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
static INLINE_ATTR ternop_t __ternop(state_t s, obj_t destination, obj_t source1, obj_t source2) {
  ternop_t res;
  res.destination = destination;
  res.source1 = source1;
  res.source2 = source2;
  return res;
}
static INLINE_ATTR binop_t __binop(state_t s, obj_t destination, obj_t source) {
  binop_t res;
  res.destination = destination;
  res.source = source;
  return res;
}
static INLINE_ATTR unop_src_t __unop_src(state_t s, obj_t source) {
  unop_src_t res;
  res.source = source;
  return res;
}
static INLINE_ATTR struct19_t __struct19(state_t s, obj_t destination, obj_t fmt, obj_t source, obj_t source1, obj_t source2, obj_t source3, obj_t source4) {
  struct19_t res;
  res.destination = destination;
  res.fmt = fmt;
  res.source = source;
  res.source1 = source1;
  res.source2 = source2;
  res.source3 = source3;
  res.source4 = source4;
  return res;
}
static INLINE_ATTR ternop_src_t __ternop_src(state_t s, obj_t source1, obj_t source2, obj_t source3) {
  ternop_src_t res;
  res.source1 = source1;
  res.source2 = source2;
  res.source3 = source3;
  return res;
}
static INLINE_ATTR unop_t __unop(state_t s, obj_t destination) {
  unop_t res;
  res.destination = destination;
  return res;
}
static INLINE_ATTR quadop_t __quadop(state_t s, obj_t destination, obj_t source1, obj_t source2, obj_t source3) {
  quadop_t res;
  res.destination = destination;
  res.source1 = source1;
  res.source2 = source2;
  res.source3 = source3;
  return res;
}
static INLINE_ATTR insndata_t __insndata(state_t s, obj_t insn, int_t length) {
  unboxed_insndata_t res;
  res.insn = insn;
  res.length = length;
  return (insndata_t) alloc_unboxed_insndata(s,res);
}
static INLINE_ATTR quadop_fmt_src_t __quadop_fmt_src(state_t s, obj_t fmt, obj_t source1, obj_t source2, obj_t source3, obj_t source4) {
  quadop_fmt_src_t res;
  res.fmt = fmt;
  res.source1 = source1;
  res.source2 = source2;
  res.source3 = source3;
  res.source4 = source4;
  return res;
}
static INLINE_ATTR quadop_fmt_t __quadop_fmt(state_t s, obj_t destination, obj_t fmt, obj_t source1, obj_t source2, obj_t source3) {
  quadop_fmt_t res;
  res.destination = destination;
  res.fmt = fmt;
  res.source1 = source1;
  res.source2 = source2;
  res.source3 = source3;
  return res;
}
static INLINE_ATTR ternop_fmt_t __ternop_fmt(state_t s, obj_t destination, obj_t fmt, obj_t source1, obj_t source2) {
  ternop_fmt_t res;
  res.destination = destination;
  res.fmt = fmt;
  res.source1 = source1;
  res.source2 = source2;
  return res;
}
static INLINE_ATTR binop_fmt_t __binop_fmt(state_t s, obj_t destination, obj_t fmt, obj_t source) {
  binop_fmt_t res;
  res.destination = destination;
  res.fmt = fmt;
  res.source = source;
  return res;
}
static INLINE_ATTR binop_src_t __binop_src(state_t s, obj_t source1, obj_t source2) {
  binop_src_t res;
  res.source1 = source1;
  res.source2 = source2;
  return res;
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
static INLINE_ATTR struct31_t __struct31(state_t s, obj_t lhs, obj_t rhs, int_t size) {
  struct31_t res;
  res.lhs = lhs;
  res.rhs = rhs;
  res.size = size;
  return res;
}
static INLINE_ATTR struct32_t __struct32(state_t s, sem_address_t address, obj_t lhs, int_t size) {
  struct32_t res;
  res.address = address;
  res.lhs = lhs;
  res.size = size;
  return res;
}
static INLINE_ATTR struct33_t __struct33(state_t s, sem_address_t address, obj_t rhs, int_t size) {
  struct33_t res;
  res.address = address;
  res.rhs = rhs;
  res.size = size;
  return res;
}
static INLINE_ATTR struct34_t __struct34(state_t s, obj_t cond, obj_t else_branch, obj_t then_branch) {
  struct34_t res;
  res.cond = cond;
  res.else_branch = else_branch;
  res.then_branch = then_branch;
  return res;
}
static INLINE_ATTR struct35_t __struct35(state_t s, obj_t body, obj_t cond) {
  struct35_t res;
  res.body = body;
  res.cond = cond;
  return res;
}
static INLINE_ATTR struct36_t __struct36(state_t s, obj_t hint, sem_address_t target) {
  struct36_t res;
  res.hint = hint;
  res.target = target;
  return res;
}
static INLINE_ATTR struct37_t __struct37(state_t s, obj_t cond, sem_address_t target_false, sem_address_t target_true) {
  struct37_t res;
  res.cond = cond;
  res.target_false = target_false;
  res.target_true = target_true;
  return res;
}
static INLINE_ATTR struct38_t __struct38(state_t s, obj_t lhs, string_t op, obj_t rhs) {
  struct38_t res;
  res.lhs = lhs;
  res.op = op;
  res.rhs = rhs;
  return res;
}
static INLINE_ATTR struct39_t __struct39(state_t s, int_t fromsize, obj_t opnd1) {
  struct39_t res;
  res.fromsize = fromsize;
  res.opnd1 = opnd1;
  return res;
}
static INLINE_ATTR struct40_t __struct40(state_t s, int_t const_, obj_t opnd) {
  struct40_t res;
  res.const_ = const_;
  res.opnd = opnd;
  return res;
}
static INLINE_ATTR struct41_t __struct41(state_t s, int_t const_) {
  struct41_t res;
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
static INLINE_ATTR struct57_t __struct57(state_t s, obj_t live, obj_t maybelive) {
  struct57_t res;
  res.live = live;
  res.maybelive = maybelive;
  return res;
}
static INLINE_ATTR struct58_t __struct58(state_t s, obj_t conservative, obj_t greedy) {
  struct58_t res;
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
static INLINE_ATTR struct61_t __struct61(state_t s, insndata_t insn, obj_t tl) {
  struct61_t res;
  res.insn = insn;
  res.tl = tl;
  return res;
}
static INLINE_ATTR struct62_t __struct62(state_t s, obj_t a, obj_t b) {
  struct62_t res;
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
gdsl_mips_rreil_err_tgt(state_t s) {
  return &(s->err_tgt);
};

char*
gdsl_mips_rreil_get_error_message(state_t s) {
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
gdsl_mips_rreil_endianness(state_t s, int_t le, int_t size) {
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
gdsl_mips_rreil_set_code(state_t s, unsigned char* buf, size_t buf_len, size_t base) {
  s->ip = buf;
  s->ip_limit = buf+buf_len;
  s->ip_start = buf;
  s->ip_base = base;
}

size_t
gdsl_mips_rreil_get_ip(state_t s) {
  return s->ip_base + (s->ip - s->ip_start);
}

int_t
gdsl_mips_rreil_seek(state_t s, size_t i) {
  size_t size = (size_t)(s->ip_limit - s->ip_start);
  size_t start_offset = i - s->ip_base;
  if(start_offset >= size)
    return 1;
  s->ip = s->ip_start + start_offset;
  return 0;
}

string_t
gdsl_mips_rreil_merge_rope(state_t s, obj_t rope) {
  string_t buf,end;
  int_t len =
gdsl_mips_rreil_rope_length(s,rope);
  if (len<0) return ""; /* make MSVC happy */
  buf = (string_t) alloc(s,(size_t) len);
  end =
gdsl_mips_rreil_rope_to_string(s,rope,buf);
  *end = 0;
  return buf;
}

void
gdsl_mips_rreil_destroy(state_t s) {
gdsl_mips_rreil_reset_heap(s);
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
static obj_t maybe_search_left_(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it);
static obj_t search_(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it);
static obj_t maybe_search_right_(state_t s,int_t (*p_q_)(state_t,obj_t,obj_t),obj_t x,obj_t it);
static obj_t rreil_convert_sem_stmt(state_t s,callbacks_t cbs,obj_t stmt);
static obj_t rreil_convert_sem_stmt_list(state_t s,callbacks_t cbs,obj_t stmts);
static obj_t convert_inner___(state_t s,callbacks_t cbs,obj_t list,obj_t stmts);
static obj_t rreil_show_stmts(state_t s,obj_t ss);
static obj_t rreil_show_stmt(state_t s,obj_t s_);
static obj_t visit_stmt(state_t s,obj_t kills,obj_t stmt);
static obj_t lv_kills(state_t s,obj_t stmts);
static obj_t visit(state_t s,obj_t kills,obj_t stmts);
static obj_t lv_kill(state_t s,obj_t kills,obj_t stmt);
static struct58_t cont(state_t s,struct58_t state,struct6_t x,obj_t kill,struct58_t cont_state);
static struct58_t sweep(state_t s,obj_t stack,struct58_t state);
static struct62_t relative_next(state_t s,obj_t stmts);
static struct62_t relative_next_generic(state_t s,int_t (*is_sem_ip_)(state_t,obj_t),obj_t stmts);

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
static obj_t mkT(state_t s,obj_t v,obj_t lt,obj_t rt_) {
  switch (*((int_t*) lt)) {
    case CON_Lf: {
      switch (*((int_t*) rt_)) {
        case CON_Lf: {
          return mkBr(s,v,1,lt,rt_);
        }; break;
        case 11/* Br */: {
          struct1_t r;
          obj_t scrutinee;
          r = ((con_struct1_t*) rt_)->payload;
          scrutinee = r.left;
          switch (*((int_t*) scrutinee)) {
            case CON_Lf: {
              obj_t scrutinee_;
              scrutinee_ = r.right;
              switch (*((int_t*) scrutinee_)) {
                case CON_Lf: {
                  return mkBr(s,v,2,lt,rt_);
                }; break;
                default: {
                  return bbtree_rotateSingleLeft(s,v,lt,rt_);
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
                  return bbtree_rotateDoubleLeft(s,v,lt,rt_);
                }; break;
                case 11/* Br */: {
                  struct1_t rr;
                  rr = ((con_struct1_t*) scrutinee_)->payload;
                  if (rl.size<rr.size) {
                    return bbtree_rotateSingleLeft(s,v,lt,rt_);
                  } else {
                    return bbtree_rotateDoubleLeft(s,v,lt,rt_);
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
      switch (*((int_t*) rt_)) {
        case CON_Lf: {
          obj_t scrutinee;
          scrutinee = l.left;
          switch (*((int_t*) scrutinee)) {
            case CON_Lf: {
              obj_t scrutinee_;
              scrutinee_ = l.right;
              switch (*((int_t*) scrutinee_)) {
                case CON_Lf: {
                  return mkBr(s,v,2,lt,rt_);
                }; break;
                default: {
                  return bbtree_rotateDoubleRight(s,v,lt,rt_);
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
                  return bbtree_rotateSingleRight(s,v,lt,rt_);
                }; break;
                case 11/* Br */: {
                  struct1_t lr;
                  lr = ((con_struct1_t*) scrutinee_)->payload;
                  if (lr.size<ll.size) {
                    return bbtree_rotateSingleRight(s,v,lt,rt_);
                  } else {
                    return bbtree_rotateDoubleRight(s,v,lt,rt_);
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
          r = ((con_struct1_t*) rt_)->payload;
          if (3*l.size<=r.size) {
            if (bbtree_size(s,r.left)<bbtree_size(s,r.right)) {
              return bbtree_rotateSingleLeft(s,v,lt,rt_);
            } else {
              return bbtree_rotateDoubleLeft(s,v,lt,rt_);
            };
          } else {
            if (3*r.size<=l.size) {
              if (bbtree_size(s,l.right)<bbtree_size(s,l.left)) {
                return bbtree_rotateSingleRight(s,v,lt,rt_);
              } else {
                return bbtree_rotateDoubleRight(s,v,lt,rt_);
              };
            } else {
              return mkBr(s,v,((l.size+r.size)+1),lt,rt_);
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
static obj_t bbtree_fold(state_t s,obj_t f_,obj_t s_,obj_t bt) {
  switch (*((int_t*) bt)) {
    case CON_Lf: {
      return s_;
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      return bbtree_fold(s,f_,invoke_obj_obj_obj_closure(s,f_,bbtree_fold(s,f_,s_,t.right),t.payload),t.left);
    }; break;
    default: {
      s->err_str = "pattern match failure in bbtree-fold at specifications/basis/bbtree.ml:416.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* fitree-fold */
static obj_t fitree_fold(state_t s,obj_t f_,obj_t s_,obj_t t) {
  return bbtree_fold(s,f_,s_,t);
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
  adt.tag = 370/* VIRT_T */;
  adt.payload = arg_of_VIRT_T;
  return (obj_t) alloc_con_int(s,adt);
}
/* ltf? */
static int_t ltf_q_(state_t s,obj_t a,obj_t b) {
  switch (((con_obj_t*) b)->tag) {
    case 370/* VIRT_T */: {
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
    case 370/* VIRT_T */: {
      int_t x;
      x = ((con_int_t*) a)->payload;
      switch (((con_obj_t*) b)->tag) {
        case 370/* VIRT_T */: {
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
  return rreil_ltid_q_(s,select_obj(s,91/* id */,a),select_obj(s,91/* id */,b));
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
      return gdsl_mips_rreil_merge_rope(s,r);
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
/* addi */
static int_t addi(state_t s,int_t a,int_t b) {
  return (a+b);
}
/* subi */
static int_t subi(state_t s,int_t a,int_t b) {
  return (a-b);
}
/* muli */
static int_t muli(state_t s,int_t a,int_t b) {
  return a*b;
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
    case CON_BIG_ENDIAN: {
      return 0;
    }; break;
    default: {
      s->err_str = "pattern match failure in e at specifications/basis/prelude.ml:210.7-21";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* set-endianness */
static void set_endianness(state_t s,int_t kind,int_t size) {
  gdsl_mips_rreil_endianness(s,e(s,kind),size);
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
static obj_t bbtree_add_with(state_t s,obj_t lt_q_,obj_t (*f_)(state_t,obj_t,obj_t),obj_t bt,obj_t x) {
  switch (*((int_t*) bt)) {
    case CON_Lf: {
      return mkBr(s,x,1,bt,bt);
    }; break;
    case 11/* Br */: {
      struct1_t t;
      t = ((con_struct1_t*) bt)->payload;
      if (invoke_int_obj_obj_closure(s,lt_q_,x,t.payload)) {
        return mkT(s,t.payload,bbtree_add_with(s,lt_q_,f_,t.left,x),t.right);
      } else {
        if (invoke_int_obj_obj_closure(s,lt_q_,t.payload,x)) {
          return mkT(s,t.payload,t.left,bbtree_add_with(s,lt_q_,f_,t.right,x));
        } else {
          return mkBr(s,f_(s,t.payload,x),t.size,t.left,t.right);
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
static obj_t prettyKey(state_t s,obj_t (*f_)(state_t,obj_t),obj_t s_,obj_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,s_,f_(s,x)),from_string_lit(s,","));
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
static obj_t bbtree_pretty(state_t s,obj_t (*f_)(state_t,obj_t),obj_t bt) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"{"),bbtree_fold(s,gen_obj__obj_obj_fun__obj_obj_closure(s,&prettyKey_closure,f_),from_string_lit(s,""),bt)),from_string_lit(s,"}"));
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
static INLINE_ATTR obj_t constructor_ASM_ANNS_CONS(state_t s,struct6_t arg_of_ASM_ANNS_CONS) {
  con_struct6_t adt;
  adt.tag = 38/* ASM_ANNS_CONS */;
  adt.payload = arg_of_ASM_ANNS_CONS;
  return (obj_t) alloc_con_struct6(s,adt);
}
static INLINE_ATTR obj_t constructor_ASM_ANN_STRING(state_t s,string_t arg_of_ASM_ANN_STRING) {
  con_string_t adt;
  adt.tag = 39/* ASM_ANN_STRING */;
  adt.payload = arg_of_ASM_ANN_STRING;
  return (obj_t) alloc_con_string(s,adt);
}
/* asm-convert-annotation */
static obj_t asm_convert_annotation(state_t s,asm_callbacks_t cbs,obj_t ann) {
  switch (((con_obj_t*) ann)->tag) {
    case 39/* ASM_ANN_STRING */: {
      string_t s_;
      s_ = ((con_string_t*) ann)->payload;
      return cbs->annotation->ann_string(s,s_);
    }; break;
    default: {
      s->err_str = "pattern match failure in asm-convert-annotation at specifications/asm/asm-cif.ml:105.17-18";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* convert-inner */
static obj_t convert_inner(state_t s,asm_callbacks_t cbs,obj_t list,obj_t anns) {
  switch (*((int_t*) anns)) {
    case CON_ASM_ANNS_NIL: {
      return list;
    }; break;
    case 38/* ASM_ANNS_CONS */: {
      struct6_t next;
      next = ((con_struct6_t*) anns)->payload;
      return convert_inner(s,cbs,cbs->annotation_list->annotation_list_next(s,asm_convert_annotation(s,cbs,next.hd),list),next.tl);
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
static INLINE_ATTR obj_t constructor_ASM_OPNDS_CONS(state_t s,struct6_t arg_of_ASM_OPNDS_CONS) {
  con_struct6_t adt;
  adt.tag = 20/* ASM_OPNDS_CONS */;
  adt.payload = arg_of_ASM_OPNDS_CONS;
  return (obj_t) alloc_con_struct6(s,adt);
}
static INLINE_ATTR obj_t constructor_ASM_BOUNDED(state_t s,struct14_t arg_of_ASM_BOUNDED) {
  con_struct14_t adt;
  adt.tag = 30/* ASM_BOUNDED */;
  adt.payload = arg_of_ASM_BOUNDED;
  return (obj_t) alloc_con_struct14(s,adt);
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
/* asm-convert-opnd */
static obj_t asm_convert_opnd(state_t s,asm_callbacks_t cbs,obj_t opnd) {
  switch (((con_obj_t*) opnd)->tag) {
    case 21/* ASM_REGISTER */: {
      string_t r;
      r = ((con_string_t*) opnd)->payload;
      return cbs->opnd->opnd_register(s,r);
    }; break;
    case 23/* ASM_IMM */: {
      int_t i;
      i = ((con_int_t*) opnd)->payload;
      return cbs->opnd->imm(s,(i+0));
    }; break;
    case 30/* ASM_BOUNDED */: {
      struct14_t b;
      b = ((con_struct14_t*) opnd)->payload;
      return cbs->opnd->bounded(s,asm_convert_boundary(s,cbs,b.boundary),asm_convert_opnd(s,cbs,b.opnd));
    }; break;
    default: {
      s->err_str = "pattern match failure in asm-convert-opnd at specifications/asm/asm-cif.ml:80.18-19";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* convert-inner */
static obj_t convert_inner_(state_t s,asm_callbacks_t cbs,obj_t list,obj_t opnds) {
  switch (*((int_t*) opnds)) {
    case CON_ASM_OPNDS_NIL: {
      return list;
    }; break;
    case 20/* ASM_OPNDS_CONS */: {
      struct6_t next;
      next = ((con_struct6_t*) opnds)->payload;
      return convert_inner_(s,cbs,cbs->opnd_list->opnd_list_next(s,asm_convert_opnd(s,cbs,next.hd),list),next.tl);
    }; break;
    default: {
      s->err_str = "pattern match failure in convert-inner at specifications/asm/asm-cif.ml:62.21-25";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* asm-convert-opnds */
static obj_t asm_convert_opnds(state_t s,asm_callbacks_t cbs,obj_t opnds) {
  return convert_inner_(s,cbs,cbs->opnd_list->init(s),opnds);
}
/* asm-convert-insn */
static obj_t asm_convert_insn(state_t s,asm_callbacks_t cbs,asm_insn_t insn) {
  return cbs->insn(s,(insn->length+0),insn->mnemonic,asm_convert_annotations(s,cbs,insn->annotations),asm_convert_opnds(s,cbs,insn->opnds));
}
/* asm-insn-flags */
static asm_insn_t asm_insn_flags(state_t s,int_t l,string_t m,obj_t a,obj_t o) {
  return __asm_insn(s,a,l,m,o);
}
/* asm-opnds-one */
static obj_t asm_opnds_one(state_t s,obj_t hd) {
  return constructor_ASM_OPNDS_CONS(s,__struct6(s,hd,alloc_int(s,CON_ASM_OPNDS_NIL)));
}
/* asm-opnds-more */
static obj_t asm_opnds_more(state_t s,obj_t hd,obj_t tl) {
  return constructor_ASM_OPNDS_CONS(s,__struct6(s,hd,tl));
}
/* asm-reg */
static obj_t asm_reg(state_t s,string_t r) {
  return constructor_ASM_REGISTER(s,r);
}
/* asm-imm */
static obj_t asm_imm(state_t s,int_t simm) {
  return constructor_ASM_IMM(s,simm);
}
/* asm-bounded */
static obj_t asm_bounded(state_t s,obj_t b,obj_t o) {
  return constructor_ASM_BOUNDED(s,__struct14(s,b,o));
}
/* asm-boundary-sz */
static obj_t asm_boundary_sz(state_t s,int_t sz) {
  return constructor_ASM_BOUNDARY_SZ(s,sz);
}
/* asm-anns-one */
static obj_t asm_anns_one(state_t s,obj_t hd) {
  return constructor_ASM_ANNS_CONS(s,__struct6(s,hd,alloc_int(s,CON_ASM_ANNS_NIL)));
}
/* asm-ann-string */
static obj_t asm_ann_string(state_t s,string_t s_) {
  return constructor_ASM_ANN_STRING(s,s_);
}
/* -++ */
static obj_t __plus__plus_(state_t s,obj_t a,obj_t b) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,a,from_string_lit(s," ")),b);
}
/* show/asm-annotation */
static obj_t show_slash_asm_annotation(state_t s,obj_t a) {
  switch (((con_obj_t*) a)->tag) {
    case 39/* ASM_ANN_STRING */: {
      string_t s_;
      s_ = ((con_string_t*) a)->payload;
      return from_string_lit(s,s_);
    }; break;
    default: {
      s->err_str = "pattern match failure in show/asm-annotation at specifications/asm/asm-pretty.ml:47.17-18";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/asm-annotations */
static obj_t show_slash_asm_annotations(state_t s,obj_t anns) {
  switch (*((int_t*) anns)) {
    case CON_ASM_ANNS_NIL: {
      return from_string_lit(s,"");
    }; break;
    case 38/* ASM_ANNS_CONS */: {
      struct6_t c;
      obj_t scrutinee;
      obj_t caseRes;
      c = ((con_struct6_t*) anns)->payload;
      scrutinee = c.tl;
      switch (*((int_t*) scrutinee)) {
        case CON_ASM_ANNS_NIL: {
          caseRes = from_string_lit(s,"");
        }; break;
        default: {
          caseRes = _plus__plus__plus_(s,from_string_lit(s,", "),show_slash_asm_annotations(s,c.tl));
        }; break;
      };
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"{"),show_slash_asm_annotation(s,c.hd)),caseRes),from_string_lit(s,"}"));
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
/* show/asm-opnd */
static obj_t show_slash_asm_opnd(state_t s,obj_t opnd) {
  switch (((con_obj_t*) opnd)->tag) {
    case 21/* ASM_REGISTER */: {
      string_t r;
      r = ((con_string_t*) opnd)->payload;
      return from_string_lit(s,r);
    }; break;
    case 23/* ASM_IMM */: {
      int_t i;
      i = ((con_int_t*) opnd)->payload;
      return show_int(s,i);
    }; break;
    case 30/* ASM_BOUNDED */: {
      struct14_t b;
      b = ((con_struct14_t*) opnd)->payload;
      return _plus__plus__plus_(s,show_slash_asm_opnd(s,b.opnd),show_slash_asm_boundary(s,b.boundary));
    }; break;
    default: {
      s->err_str = "pattern match failure in show/asm-opnd at specifications/asm/asm-pretty.ml:22.18-19";
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
      struct6_t c;
      obj_t scrutinee;
      obj_t caseRes;
      c = ((con_struct6_t*) opnds)->payload;
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
/* asm-pretty */
static obj_t asm_pretty(state_t s,asm_insn_t ai) {
  return __plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,ai->mnemonic),show_slash_asm_annotations(s,ai->annotations)),show_slash_asm_opnds(s,from_string_lit(s," "),ai->opnds));
}
static INLINE_ATTR obj_t constructor_LVALUE(state_t s,obj_t arg_of_LVALUE) {
  con_obj_t adt;
  adt.tag = 63/* LVALUE */;
  adt.payload = arg_of_LVALUE;
  return (obj_t) alloc_con_obj(s,adt);
}
/* right */
static obj_t right(state_t s,obj_t (*lvalue)(state_t)) {
  obj_t lvalue_;
  lvalue_ = lvalue(s);
  return constructor_LVALUE(s,lvalue_);
}
/* pause? */
static int_t pause_q_(state_t s,monad_t s_) {
  return ((vec_eq(s,s_.rt,0 /* '00000' */)) & (vec_eq(s,s_.rd,0 /* '00000' */))) & (vec_eq(s,s_.sa,5 /* '00101' */));
}
static INLINE_ATTR obj_t constructor_GPR(state_t s,obj_t arg_of_GPR) {
  con_obj_t adt;
  adt.tag = 61/* GPR */;
  adt.payload = arg_of_GPR;
  return (obj_t) alloc_con_obj(s,adt);
}
/* gpr-from-bits */
static obj_t gpr_from_bits(state_t s,int_t bits) {
  switch (slice(bits, 0, 5)) {
    case 0: /* '00000' */ {
      return alloc_int(s,CON_ZERO);
    }; break;
    case 1: /* '00001' */ {
      return alloc_int(s,CON_AT);
    }; break;
    case 2: /* '00010' */ {
      return alloc_int(s,CON_V0);
    }; break;
    case 3: /* '00011' */ {
      return alloc_int(s,CON_V1);
    }; break;
    case 4: /* '00100' */ {
      return alloc_int(s,CON_A0);
    }; break;
    case 5: /* '00101' */ {
      return alloc_int(s,CON_A1);
    }; break;
    case 6: /* '00110' */ {
      return alloc_int(s,CON_A2);
    }; break;
    case 7: /* '00111' */ {
      return alloc_int(s,CON_A3);
    }; break;
    case 8: /* '01000' */ {
      return alloc_int(s,CON_T0);
    }; break;
    case 9: /* '01001' */ {
      return alloc_int(s,CON_T1);
    }; break;
    case 10: /* '01010' */ {
      return alloc_int(s,CON_T2);
    }; break;
    case 11: /* '01011' */ {
      return alloc_int(s,CON_T3);
    }; break;
    case 12: /* '01100' */ {
      return alloc_int(s,CON_T4);
    }; break;
    case 13: /* '01101' */ {
      return alloc_int(s,CON_T5);
    }; break;
    case 14: /* '01110' */ {
      return alloc_int(s,CON_T6);
    }; break;
    case 15: /* '01111' */ {
      return alloc_int(s,CON_T7);
    }; break;
    case 16: /* '10000' */ {
      return alloc_int(s,CON_S0);
    }; break;
    case 17: /* '10001' */ {
      return alloc_int(s,CON_S1);
    }; break;
    case 18: /* '10010' */ {
      return alloc_int(s,CON_S2);
    }; break;
    case 19: /* '10011' */ {
      return alloc_int(s,CON_S3);
    }; break;
    case 20: /* '10100' */ {
      return alloc_int(s,CON_S4);
    }; break;
    case 21: /* '10101' */ {
      return alloc_int(s,CON_S5);
    }; break;
    case 22: /* '10110' */ {
      return alloc_int(s,CON_S6);
    }; break;
    case 23: /* '10111' */ {
      return alloc_int(s,CON_S7);
    }; break;
    case 24: /* '11000' */ {
      return alloc_int(s,CON_T8);
    }; break;
    case 25: /* '11001' */ {
      return alloc_int(s,CON_T9);
    }; break;
    case 26: /* '11010' */ {
      return alloc_int(s,CON_K0);
    }; break;
    case 27: /* '11011' */ {
      return alloc_int(s,CON_K1);
    }; break;
    case 28: /* '11100' */ {
      return alloc_int(s,CON_GP);
    }; break;
    case 29: /* '11101' */ {
      return alloc_int(s,CON_SP);
    }; break;
    case 30: /* '11110' */ {
      return alloc_int(s,CON_S8);
    }; break;
    case 31: /* '11111' */ {
      return alloc_int(s,CON_RA);
    }; break;
    default: {
      s->err_str = "pattern match failure in gpr-from-bits at specifications/mips/mips.ml:1606.5-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rt */
static obj_t rt(state_t s) {
  int_t rt_;
  rt_ = s->mon_state.rt;
  s->mon_state.rt = 0 /* '00000' */;;
  return constructor_GPR(s,gpr_from_bits(s,rt_));
}
/* /Action335 */
static obj_t _slash_Action335(state_t s) {
  return right(s,rt);
}
/* rs */
static obj_t rs(state_t s) {
  int_t rs_;
  rs_ = s->mon_state.rs;
  s->mon_state.rs = 0 /* '00000' */;;
  return constructor_GPR(s,gpr_from_bits(s,rs_));
}
/* /Action334 */
static obj_t _slash_Action334(state_t s) {
  return right(s,rs);
}
/* /Action333 */
static obj_t _slash_Action333(state_t s) {
  return right(s,rt);
}
/* /Action332 */
static obj_t _slash_Action332(state_t s) {
  return right(s,rs);
}
/* /Action331 */
static obj_t _slash_Action331(state_t s) {
  return right(s,rt);
}
/* /Action330 */
static obj_t _slash_Action330(state_t s) {
  return right(s,rs);
}
/* /Action329 */
static obj_t _slash_Action329(state_t s) {
  return right(s,rt);
}
/* /Action328 */
static obj_t _slash_Action328(state_t s) {
  return right(s,rs);
}
/* /Action327 */
static obj_t _slash_Action327(state_t s) {
  return right(s,rt);
}
/* /Action326 */
static obj_t _slash_Action326(state_t s) {
  return right(s,rs);
}
/* /Action325 */
static obj_t _slash_Action325(state_t s) {
  return right(s,rt);
}
/* /Action324 */
static obj_t _slash_Action324(state_t s) {
  return right(s,rs);
}
/* /Action323 */
static obj_t _slash_Action323(state_t s) {
  return right(s,rt);
}
/* /Action322 */
static obj_t _slash_Action322(state_t s) {
  return right(s,rs);
}
/* /Action321 */
static obj_t _slash_Action321(state_t s) {
  return right(s,rt);
}
/* /Action320 */
static obj_t _slash_Action320(state_t s) {
  return right(s,rs);
}
/* /Action319 */
static obj_t _slash_Action319(state_t s) {
  return right(s,rt);
}
/* /Action318 */
static obj_t _slash_Action318(state_t s) {
  return right(s,rs);
}
/* /Action317 */
static obj_t _slash_Action317(state_t s) {
  return right(s,rt);
}
/* /Action316 */
static obj_t _slash_Action316(state_t s) {
  return right(s,rs);
}
/* /Action315 */
static obj_t _slash_Action315(state_t s) {
  return right(s,rt);
}
/* /Action314 */
static obj_t _slash_Action314(state_t s) {
  return right(s,rs);
}
/* /Action313 */
static obj_t _slash_Action313(state_t s) {
  return right(s,rt);
}
/* /Action312 */
static obj_t _slash_Action312(state_t s) {
  return right(s,rs);
}
/* /Action311 */
static obj_t _slash_Action311(state_t s) {
  return right(s,rt);
}
/* /Action310 */
static obj_t _slash_Action310(state_t s) {
  return right(s,rs);
}
/* /Action309 */
static obj_t _slash_Action309(state_t s) {
  return right(s,rt);
}
/* /Action308 */
static obj_t _slash_Action308(state_t s) {
  return right(s,rs);
}
/* /Action307 */
static obj_t _slash_Action307(state_t s) {
  return right(s,rt);
}
/* /Action306 */
static obj_t _slash_Action306(state_t s) {
  return right(s,rs);
}
/* /Action305 */
static obj_t _slash_Action305(state_t s) {
  return right(s,rt);
}
/* /Action304 */
static obj_t _slash_Action304(state_t s) {
  return right(s,rs);
}
/* /Action303 */
static obj_t _slash_Action303(state_t s) {
  return right(s,rt);
}
/* /Action302 */
static obj_t _slash_Action302(state_t s) {
  return right(s,rs);
}
/* /Action301 */
static obj_t _slash_Action301(state_t s) {
  return right(s,rt);
}
/* /Action300 */
static obj_t _slash_Action300(state_t s) {
  return right(s,rs);
}
/* /Action299 */
static obj_t _slash_Action299(state_t s) {
  return right(s,rt);
}
/* /Action298 */
static obj_t _slash_Action298(state_t s) {
  return right(s,rs);
}
/* /Action297 */
static obj_t _slash_Action297(state_t s) {
  return right(s,rt);
}
/* /Action296 */
static obj_t _slash_Action296(state_t s) {
  return right(s,rs);
}
/* /Action295 */
static obj_t _slash_Action295(state_t s) {
  return right(s,rt);
}
/* /Action294 */
static obj_t _slash_Action294(state_t s) {
  return right(s,rs);
}
/* /Action293 */
static obj_t _slash_Action293(state_t s) {
  return right(s,rt);
}
/* /Action292 */
static obj_t _slash_Action292(state_t s) {
  return right(s,rs);
}
/* /Action291 */
static obj_t _slash_Action291(state_t s) {
  return right(s,rt);
}
/* /Action290 */
static obj_t _slash_Action290(state_t s) {
  return right(s,rs);
}
/* /Action289 */
static obj_t _slash_Action289(state_t s) {
  return right(s,rt);
}
/* /Action288 */
static obj_t _slash_Action288(state_t s) {
  return right(s,rs);
}
/* /Action287 */
static obj_t _slash_Action287(state_t s) {
  return right(s,rt);
}
/* /Action286 */
static obj_t _slash_Action286(state_t s) {
  return right(s,rs);
}
/* /Action285 */
static obj_t _slash_Action285(state_t s) {
  return right(s,rt);
}
/* /Action284 */
static obj_t _slash_Action284(state_t s) {
  return right(s,rs);
}
/* /Action283 */
static obj_t _slash_Action283(state_t s) {
  return right(s,rs);
}
/* /Action282 */
static obj_t _slash_Action282(state_t s) {
  return right(s,rs);
}
/* /Action281 */
static obj_t _slash_Action281(state_t s) {
  return right(s,rs);
}
/* /Action280 */
static obj_t _slash_Action280(state_t s) {
  return right(s,rs);
}
/* /Action279 */
static obj_t _slash_Action279(state_t s) {
  return right(s,rs);
}
/* /Action278 */
static obj_t _slash_Action278(state_t s) {
  return right(s,rs);
}
/* /Action277 */
static obj_t _slash_Action277(state_t s) {
  return right(s,rs);
}
/* /Action276 */
static obj_t _slash_Action276(state_t s) {
  return right(s,rs);
}
/* /Action275 */
static obj_t _slash_Action275(state_t s) {
  return right(s,rt);
}
/* /Action274 */
static obj_t _slash_Action274(state_t s) {
  return right(s,rt);
}
/* /Action273 */
static obj_t _slash_Action273(state_t s) {
  return right(s,rt);
}
/* /Action272 */
static obj_t _slash_Action272(state_t s) {
  return right(s,rt);
}
/* /Action271 */
static obj_t _slash_Action271(state_t s) {
  return right(s,rs);
}
/* /Action270 */
static obj_t _slash_Action270(state_t s) {
  return right(s,rs);
}
/* /Action269 */
static obj_t _slash_Action269(state_t s) {
  return right(s,rs);
}
/* /Action268 */
static obj_t _slash_Action268(state_t s) {
  return right(s,rs);
}
/* /Action267 */
static obj_t _slash_Action267(state_t s) {
  return right(s,rs);
}
/* /Action266 */
static obj_t _slash_Action266(state_t s) {
  return right(s,rs);
}
/* /Action265 */
static obj_t _slash_Action265(state_t s) {
  return right(s,rs);
}
/* /Action264 */
static obj_t _slash_Action264(state_t s) {
  return right(s,rs);
}
/* /Action263 */
static obj_t _slash_Action263(state_t s) {
  return right(s,rs);
}
/* /Action262 */
static obj_t _slash_Action262(state_t s) {
  return right(s,rs);
}
/* /Action261 */
static obj_t _slash_Action261(state_t s) {
  return right(s,rs);
}
/* /Action260 */
static obj_t _slash_Action260(state_t s) {
  return right(s,rs);
}
/* /Action259 */
static obj_t _slash_Action259(state_t s) {
  return right(s,rs);
}
/* /Action258 */
static obj_t _slash_Action258(state_t s) {
  return right(s,rs);
}
/* /Action257 */
static obj_t _slash_Action257(state_t s) {
  return right(s,rs);
}
/* /Action256 */
static obj_t _slash_Action256(state_t s) {
  return right(s,rt);
}
/* /Action255 */
static obj_t _slash_Action255(state_t s) {
  return right(s,rs);
}
/* /Action254 */
static obj_t _slash_Action254(state_t s) {
  return right(s,rt);
}
/* /Action253 */
static obj_t _slash_Action253(state_t s) {
  return right(s,rs);
}
/* /Action252 */
static obj_t _slash_Action252(state_t s) {
  return right(s,rs);
}
/* /Action251 */
static obj_t _slash_Action251(state_t s) {
  return right(s,rs);
}
/* /Action250 */
static obj_t _slash_Action250(state_t s) {
  return right(s,rs);
}
/* /Action249 */
static obj_t _slash_Action249(state_t s) {
  return right(s,rs);
}
/* /Action248 */
static obj_t _slash_Action248(state_t s) {
  return right(s,rs);
}
/* /Action247 */
static obj_t _slash_Action247(state_t s) {
  return right(s,rs);
}
/* /Action246 */
static obj_t _slash_Action246(state_t s) {
  return right(s,rs);
}
/* /Action245 */
static obj_t _slash_Action245(state_t s) {
  return right(s,rs);
}
/* /Action244 */
static obj_t _slash_Action244(state_t s) {
  return right(s,rs);
}
/* /Action243 */
static obj_t _slash_Action243(state_t s) {
  return right(s,rt);
}
/* /Action242 */
static obj_t _slash_Action242(state_t s) {
  return right(s,rt);
}
static INLINE_ATTR obj_t constructor_FPR(state_t s,obj_t arg_of_FPR) {
  con_obj_t adt;
  adt.tag = 62/* FPR */;
  adt.payload = arg_of_FPR;
  return (obj_t) alloc_con_obj(s,adt);
}
/* fpr-from-bits */
static obj_t fpr_from_bits(state_t s,int_t bits) {
  switch (slice(bits, 0, 5)) {
    case 0: /* '00000' */ {
      return alloc_int(s,CON_F0);
    }; break;
    case 1: /* '00001' */ {
      return alloc_int(s,CON_F1);
    }; break;
    case 2: /* '00010' */ {
      return alloc_int(s,CON_F2);
    }; break;
    case 3: /* '00011' */ {
      return alloc_int(s,CON_F3);
    }; break;
    case 4: /* '00100' */ {
      return alloc_int(s,CON_F4);
    }; break;
    case 5: /* '00101' */ {
      return alloc_int(s,CON_F5);
    }; break;
    case 6: /* '00110' */ {
      return alloc_int(s,CON_F6);
    }; break;
    case 7: /* '00111' */ {
      return alloc_int(s,CON_F7);
    }; break;
    case 8: /* '01000' */ {
      return alloc_int(s,CON_F8);
    }; break;
    case 9: /* '01001' */ {
      return alloc_int(s,CON_F9);
    }; break;
    case 10: /* '01010' */ {
      return alloc_int(s,CON_F10);
    }; break;
    case 11: /* '01011' */ {
      return alloc_int(s,CON_F11);
    }; break;
    case 12: /* '01100' */ {
      return alloc_int(s,CON_F12);
    }; break;
    case 13: /* '01101' */ {
      return alloc_int(s,CON_F13);
    }; break;
    case 14: /* '01110' */ {
      return alloc_int(s,CON_F14);
    }; break;
    case 15: /* '01111' */ {
      return alloc_int(s,CON_F15);
    }; break;
    case 16: /* '10000' */ {
      return alloc_int(s,CON_F16);
    }; break;
    case 17: /* '10001' */ {
      return alloc_int(s,CON_F17);
    }; break;
    case 18: /* '10010' */ {
      return alloc_int(s,CON_F18);
    }; break;
    case 19: /* '10011' */ {
      return alloc_int(s,CON_F19);
    }; break;
    case 20: /* '10100' */ {
      return alloc_int(s,CON_F20);
    }; break;
    case 21: /* '10101' */ {
      return alloc_int(s,CON_F21);
    }; break;
    case 22: /* '10110' */ {
      return alloc_int(s,CON_F22);
    }; break;
    case 23: /* '10111' */ {
      return alloc_int(s,CON_F23);
    }; break;
    case 24: /* '11000' */ {
      return alloc_int(s,CON_F24);
    }; break;
    case 25: /* '11001' */ {
      return alloc_int(s,CON_F25);
    }; break;
    case 26: /* '11010' */ {
      return alloc_int(s,CON_F26);
    }; break;
    case 27: /* '11011' */ {
      return alloc_int(s,CON_F27);
    }; break;
    case 28: /* '11100' */ {
      return alloc_int(s,CON_F28);
    }; break;
    case 29: /* '11101' */ {
      return alloc_int(s,CON_F29);
    }; break;
    case 30: /* '11110' */ {
      return alloc_int(s,CON_F30);
    }; break;
    case 31: /* '11111' */ {
      return alloc_int(s,CON_F31);
    }; break;
    default: {
      s->err_str = "pattern match failure in fpr-from-bits at specifications/mips/mips.ml:1642.5-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* fs */
static obj_t fs(state_t s) {
  int_t fs_;
  fs_ = s->mon_state.fs;
  s->mon_state.fs = 0 /* '00000' */;;
  return constructor_FPR(s,fpr_from_bits(s,fs_));
}
/* /Action241 */
static obj_t _slash_Action241(state_t s) {
  return right(s,fs);
}
/* /Action240 */
static obj_t _slash_Action240(state_t s) {
  return right(s,fs);
}
/* /Action239 */
static obj_t _slash_Action239(state_t s) {
  return right(s,fs);
}
/* /Action238 */
static obj_t _slash_Action238(state_t s) {
  return right(s,rt);
}
/* /Action237 */
static obj_t _slash_Action237(state_t s) {
  return right(s,rt);
}
/* /Action236 */
static obj_t _slash_Action236(state_t s) {
  return right(s,rt);
}
/* /Action235 */
static obj_t _slash_Action235(state_t s) {
  return right(s,fs);
}
/* ft */
static obj_t ft(state_t s) {
  int_t ft_;
  ft_ = s->mon_state.ft;
  s->mon_state.ft = 0 /* '00000' */;;
  return constructor_FPR(s,fpr_from_bits(s,ft_));
}
/* /Action234 */
static obj_t _slash_Action234(state_t s) {
  return right(s,ft);
}
/* /Action233 */
static obj_t _slash_Action233(state_t s) {
  return right(s,fs);
}
/* /Action232 */
static obj_t _slash_Action232(state_t s) {
  return right(s,ft);
}
/* /Action231 */
static obj_t _slash_Action231(state_t s) {
  return right(s,fs);
}
/* /Action230 */
static obj_t _slash_Action230(state_t s) {
  return right(s,ft);
}
/* /Action229 */
static obj_t _slash_Action229(state_t s) {
  return right(s,fs);
}
/* /Action228 */
static obj_t _slash_Action228(state_t s) {
  return right(s,ft);
}
/* /Action227 */
static obj_t _slash_Action227(state_t s) {
  return right(s,fs);
}
/* /Action226 */
static obj_t _slash_Action226(state_t s) {
  return right(s,rt);
}
/* /Action225 */
static obj_t _slash_Action225(state_t s) {
  return right(s,fs);
}
/* /Action224 */
static obj_t _slash_Action224(state_t s) {
  return right(s,rt);
}
/* /Action223 */
static obj_t _slash_Action223(state_t s) {
  return right(s,fs);
}
/* /Action222 */
static obj_t _slash_Action222(state_t s) {
  return right(s,ft);
}
/* /Action221 */
static obj_t _slash_Action221(state_t s) {
  return right(s,fs);
}
/* /Action220 */
static obj_t _slash_Action220(state_t s) {
  return right(s,ft);
}
/* /Action219 */
static obj_t _slash_Action219(state_t s) {
  return right(s,fs);
}
/* /Action218 */
static obj_t _slash_Action218(state_t s) {
  return right(s,fs);
}
/* /Action217 */
static obj_t _slash_Action217(state_t s) {
  return right(s,fs);
}
/* /Action216 */
static obj_t _slash_Action216(state_t s) {
  return right(s,fs);
}
/* /Action215 */
static obj_t _slash_Action215(state_t s) {
  return right(s,fs);
}
/* /Action214 */
static obj_t _slash_Action214(state_t s) {
  return right(s,fs);
}
/* /Action213 */
static obj_t _slash_Action213(state_t s) {
  return right(s,fs);
}
/* /Action212 */
static obj_t _slash_Action212(state_t s) {
  return right(s,fs);
}
/* /Action211 */
static obj_t _slash_Action211(state_t s) {
  return right(s,fs);
}
/* /Action210 */
static obj_t _slash_Action210(state_t s) {
  return right(s,fs);
}
/* /Action209 */
static obj_t _slash_Action209(state_t s) {
  return right(s,fs);
}
/* /Action208 */
static obj_t _slash_Action208(state_t s) {
  return right(s,fs);
}
/* /Action207 */
static obj_t _slash_Action207(state_t s) {
  return right(s,fs);
}
/* /Action206 */
static obj_t _slash_Action206(state_t s) {
  return right(s,fs);
}
/* /Action205 */
static obj_t _slash_Action205(state_t s) {
  return right(s,fs);
}
/* /Action204 */
static obj_t _slash_Action204(state_t s) {
  return right(s,fs);
}
/* /Action203 */
static obj_t _slash_Action203(state_t s) {
  return right(s,fs);
}
/* /Action202 */
static obj_t _slash_Action202(state_t s) {
  return right(s,fs);
}
/* /Action201 */
static obj_t _slash_Action201(state_t s) {
  return right(s,fs);
}
/* /Action200 */
static obj_t _slash_Action200(state_t s) {
  return right(s,fs);
}
/* /Action199 */
static obj_t _slash_Action199(state_t s) {
  return right(s,ft);
}
/* /Action198 */
static obj_t _slash_Action198(state_t s) {
  return right(s,fs);
}
/* /Action197 */
static obj_t _slash_Action197(state_t s) {
  return right(s,ft);
}
/* /Action196 */
static obj_t _slash_Action196(state_t s) {
  return right(s,fs);
}
/* /Action195 */
static obj_t _slash_Action195(state_t s) {
  return right(s,ft);
}
/* /Action194 */
static obj_t _slash_Action194(state_t s) {
  return right(s,fs);
}
/* /Action193 */
static obj_t _slash_Action193(state_t s) {
  return right(s,ft);
}
/* /Action192 */
static obj_t _slash_Action192(state_t s) {
  return right(s,fs);
}
/* /Action191 */
static obj_t _slash_Action191(state_t s) {
  return right(s,rt);
}
/* /Action190 */
static obj_t _slash_Action190(state_t s) {
  return right(s,fs);
}
/* /Action189 */
static obj_t _slash_Action189(state_t s) {
  return right(s,rt);
}
/* /Action188 */
static obj_t _slash_Action188(state_t s) {
  return right(s,fs);
}
/* /Action187 */
static obj_t _slash_Action187(state_t s) {
  return right(s,ft);
}
/* /Action186 */
static obj_t _slash_Action186(state_t s) {
  return right(s,fs);
}
/* /Action185 */
static obj_t _slash_Action185(state_t s) {
  return right(s,fs);
}
/* /Action184 */
static obj_t _slash_Action184(state_t s) {
  return right(s,fs);
}
/* /Action183 */
static obj_t _slash_Action183(state_t s) {
  return right(s,fs);
}
/* /Action182 */
static obj_t _slash_Action182(state_t s) {
  return right(s,fs);
}
/* /Action181 */
static obj_t _slash_Action181(state_t s) {
  return right(s,fs);
}
/* /Action180 */
static obj_t _slash_Action180(state_t s) {
  return right(s,fs);
}
/* /Action179 */
static obj_t _slash_Action179(state_t s) {
  return right(s,fs);
}
/* /Action178 */
static obj_t _slash_Action178(state_t s) {
  return right(s,fs);
}
/* /Action177 */
static obj_t _slash_Action177(state_t s) {
  return right(s,fs);
}
/* /Action176 */
static obj_t _slash_Action176(state_t s) {
  return right(s,fs);
}
/* /Action175 */
static obj_t _slash_Action175(state_t s) {
  return right(s,fs);
}
/* /Action174 */
static obj_t _slash_Action174(state_t s) {
  return right(s,fs);
}
/* /Action173 */
static obj_t _slash_Action173(state_t s) {
  return right(s,fs);
}
/* /Action172 */
static obj_t _slash_Action172(state_t s) {
  return right(s,fs);
}
/* /Action171 */
static obj_t _slash_Action171(state_t s) {
  return right(s,fs);
}
/* /Action170 */
static obj_t _slash_Action170(state_t s) {
  return right(s,fs);
}
/* /Action169 */
static obj_t _slash_Action169(state_t s) {
  return right(s,fs);
}
/* /Action168 */
static obj_t _slash_Action168(state_t s) {
  return right(s,fs);
}
/* /Action167 */
static obj_t _slash_Action167(state_t s) {
  return right(s,fs);
}
/* /Action166 */
static obj_t _slash_Action166(state_t s) {
  return right(s,fs);
}
/* /Action165 */
static obj_t _slash_Action165(state_t s) {
  return right(s,fs);
}
/* /Action164 */
static obj_t _slash_Action164(state_t s) {
  return right(s,fs);
}
/* /Action163 */
static obj_t _slash_Action163(state_t s) {
  return right(s,fs);
}
/* /Action162 */
static obj_t _slash_Action162(state_t s) {
  return right(s,ft);
}
/* /Action161 */
static obj_t _slash_Action161(state_t s) {
  return right(s,fs);
}
/* /Action160 */
static obj_t _slash_Action160(state_t s) {
  return right(s,ft);
}
/* /Action159 */
static obj_t _slash_Action159(state_t s) {
  return right(s,fs);
}
/* /Action158 */
static obj_t _slash_Action158(state_t s) {
  return right(s,ft);
}
/* /Action157 */
static obj_t _slash_Action157(state_t s) {
  return right(s,fs);
}
/* /Action156 */
static obj_t _slash_Action156(state_t s) {
  return right(s,rt);
}
/* /Action155 */
static obj_t _slash_Action155(state_t s) {
  return right(s,fs);
}
/* /Action154 */
static obj_t _slash_Action154(state_t s) {
  return right(s,rt);
}
/* /Action153 */
static obj_t _slash_Action153(state_t s) {
  return right(s,fs);
}
/* /Action152 */
static obj_t _slash_Action152(state_t s) {
  return right(s,ft);
}
/* /Action151 */
static obj_t _slash_Action151(state_t s) {
  return right(s,fs);
}
/* /Action150 */
static obj_t _slash_Action150(state_t s) {
  return right(s,ft);
}
/* /Action149 */
static obj_t _slash_Action149(state_t s) {
  return right(s,fs);
}
/* /Action148 */
static obj_t _slash_Action148(state_t s) {
  return right(s,ft);
}
/* /Action147 */
static obj_t _slash_Action147(state_t s) {
  return right(s,fs);
}
/* /Action146 */
static obj_t _slash_Action146(state_t s) {
  return right(s,ft);
}
/* /Action145 */
static obj_t _slash_Action145(state_t s) {
  return right(s,fs);
}
/* /Action144 */
static obj_t _slash_Action144(state_t s) {
  return right(s,ft);
}
/* /Action143 */
static obj_t _slash_Action143(state_t s) {
  return right(s,fs);
}
/* /Action142 */
static obj_t _slash_Action142(state_t s) {
  return right(s,fs);
}
/* /Action141 */
static obj_t _slash_Action141(state_t s) {
  return right(s,fs);
}
/* /Action140 */
static obj_t _slash_Action140(state_t s) {
  return right(s,fs);
}
/* /Action139 */
static obj_t _slash_Action139(state_t s) {
  return right(s,fs);
}
/* /Action138 */
static obj_t _slash_Action138(state_t s) {
  return right(s,fs);
}
/* /Action137 */
static obj_t _slash_Action137(state_t s) {
  return right(s,fs);
}
/* /Action136 */
static obj_t _slash_Action136(state_t s) {
  return right(s,rt);
}
/* /Action135 */
static obj_t _slash_Action135(state_t s) {
  return right(s,rt);
}
/* /Action134 */
static obj_t _slash_Action134(state_t s) {
  return right(s,rt);
}
/* /Action133 */
static obj_t _slash_Action133(state_t s) {
  return right(s,fs);
}
/* /Action132 */
static obj_t _slash_Action132(state_t s) {
  return right(s,ft);
}
/* /Action131 */
static obj_t _slash_Action131(state_t s) {
  return right(s,rs);
}
/* /Action130 */
static obj_t _slash_Action130(state_t s) {
  return right(s,fs);
}
/* /Action129 */
static obj_t _slash_Action129(state_t s) {
  return right(s,ft);
}
/* fr */
static obj_t fr(state_t s) {
  int_t fr_;
  fr_ = s->mon_state.fr;
  s->mon_state.fr = 0 /* '00000' */;;
  return constructor_FPR(s,fpr_from_bits(s,fr_));
}
/* /Action128 */
static obj_t _slash_Action128(state_t s) {
  return right(s,fr);
}
/* /Action127 */
static obj_t _slash_Action127(state_t s) {
  return right(s,fs);
}
/* /Action126 */
static obj_t _slash_Action126(state_t s) {
  return right(s,ft);
}
/* /Action125 */
static obj_t _slash_Action125(state_t s) {
  return right(s,fr);
}
/* /Action124 */
static obj_t _slash_Action124(state_t s) {
  return right(s,fs);
}
/* /Action123 */
static obj_t _slash_Action123(state_t s) {
  return right(s,ft);
}
/* /Action122 */
static obj_t _slash_Action122(state_t s) {
  return right(s,fr);
}
/* /Action121 */
static obj_t _slash_Action121(state_t s) {
  return right(s,fs);
}
/* /Action120 */
static obj_t _slash_Action120(state_t s) {
  return right(s,ft);
}
/* /Action119 */
static obj_t _slash_Action119(state_t s) {
  return right(s,fr);
}
/* /Action118 */
static obj_t _slash_Action118(state_t s) {
  return right(s,fs);
}
/* /Action117 */
static obj_t _slash_Action117(state_t s) {
  return right(s,ft);
}
/* /Action116 */
static obj_t _slash_Action116(state_t s) {
  return right(s,fr);
}
/* /Action115 */
static obj_t _slash_Action115(state_t s) {
  return right(s,fs);
}
/* /Action114 */
static obj_t _slash_Action114(state_t s) {
  return right(s,ft);
}
/* /Action113 */
static obj_t _slash_Action113(state_t s) {
  return right(s,fr);
}
/* /Action112 */
static obj_t _slash_Action112(state_t s) {
  return right(s,fs);
}
/* /Action111 */
static obj_t _slash_Action111(state_t s) {
  return right(s,ft);
}
/* /Action110 */
static obj_t _slash_Action110(state_t s) {
  return right(s,fr);
}
/* /Action109 */
static obj_t _slash_Action109(state_t s) {
  return right(s,fs);
}
/* /Action108 */
static obj_t _slash_Action108(state_t s) {
  return right(s,ft);
}
/* /Action107 */
static obj_t _slash_Action107(state_t s) {
  return right(s,fr);
}
/* /Action106 */
static obj_t _slash_Action106(state_t s) {
  return right(s,fs);
}
/* /Action105 */
static obj_t _slash_Action105(state_t s) {
  return right(s,ft);
}
/* /Action104 */
static obj_t _slash_Action104(state_t s) {
  return right(s,fr);
}
/* /Action103 */
static obj_t _slash_Action103(state_t s) {
  return right(s,fs);
}
/* /Action102 */
static obj_t _slash_Action102(state_t s) {
  return right(s,ft);
}
/* /Action101 */
static obj_t _slash_Action101(state_t s) {
  return right(s,fr);
}
/* /Action100 */
static obj_t _slash_Action100(state_t s) {
  return right(s,fs);
}
/* /Action99 */
static obj_t _slash_Action99(state_t s) {
  return right(s,ft);
}
/* /Action98 */
static obj_t _slash_Action98(state_t s) {
  return right(s,fr);
}
/* /Action97 */
static obj_t _slash_Action97(state_t s) {
  return right(s,fs);
}
/* /Action96 */
static obj_t _slash_Action96(state_t s) {
  return right(s,ft);
}
/* /Action95 */
static obj_t _slash_Action95(state_t s) {
  return right(s,fr);
}
/* /Action94 */
static obj_t _slash_Action94(state_t s) {
  return right(s,fs);
}
/* /Action93 */
static obj_t _slash_Action93(state_t s) {
  return right(s,rt);
}
/* /Action92 */
static obj_t _slash_Action92(state_t s) {
  return right(s,rs);
}
/* /Action91 */
static obj_t _slash_Action91(state_t s) {
  return right(s,fs);
}
/* /Action90 */
static obj_t _slash_Action90(state_t s) {
  return right(s,rt);
}
/* /Action89 */
static obj_t _slash_Action89(state_t s) {
  return right(s,rs);
}
/* /Action88 */
static obj_t _slash_Action88(state_t s) {
  return right(s,fs);
}
/* /Action87 */
static obj_t _slash_Action87(state_t s) {
  return right(s,rt);
}
/* /Action86 */
static obj_t _slash_Action86(state_t s) {
  return right(s,rs);
}
/* /Action85 */
static obj_t _slash_Action85(state_t s) {
  return right(s,rt);
}
/* /Action84 */
static obj_t _slash_Action84(state_t s) {
  return right(s,rs);
}
/* /Action83 */
static obj_t _slash_Action83(state_t s) {
  return right(s,rt);
}
/* /Action82 */
static obj_t _slash_Action82(state_t s) {
  return right(s,rs);
}
/* /Action81 */
static obj_t _slash_Action81(state_t s) {
  return right(s,rt);
}
/* /Action80 */
static obj_t _slash_Action80(state_t s) {
  return right(s,rs);
}
/* /Action79 */
static obj_t _slash_Action79(state_t s) {
  return right(s,rt);
}
/* /Action78 */
static obj_t _slash_Action78(state_t s) {
  return right(s,rs);
}
/* /Action77 */
static obj_t _slash_Action77(state_t s) {
  return right(s,rt);
}
/* /Action76 */
static obj_t _slash_Action76(state_t s) {
  return right(s,rs);
}
/* /Action75 */
static obj_t _slash_Action75(state_t s) {
  return right(s,rt);
}
/* /Action74 */
static obj_t _slash_Action74(state_t s) {
  return right(s,rs);
}
/* /Action73 */
static obj_t _slash_Action73(state_t s) {
  return right(s,rs);
}
/* /Action72 */
static obj_t _slash_Action72(state_t s) {
  return right(s,rs);
}
/* /Action71 */
static obj_t _slash_Action71(state_t s) {
  return right(s,rt);
}
/* /Action70 */
static obj_t _slash_Action70(state_t s) {
  return right(s,rs);
}
/* /Action69 */
static obj_t _slash_Action69(state_t s) {
  return right(s,rt);
}
/* /Action68 */
static obj_t _slash_Action68(state_t s) {
  return right(s,rs);
}
/* /Action67 */
static obj_t _slash_Action67(state_t s) {
  return right(s,rt);
}
/* /Action66 */
static obj_t _slash_Action66(state_t s) {
  return right(s,rs);
}
/* /Action65 */
static obj_t _slash_Action65(state_t s) {
  return right(s,rt);
}
/* /Action64 */
static obj_t _slash_Action64(state_t s) {
  return right(s,rs);
}
/* /Action63 */
static obj_t _slash_Action63(state_t s) {
  return right(s,rt);
}
/* /Action62 */
static obj_t _slash_Action62(state_t s) {
  return right(s,rs);
}
/* /Action61 */
static obj_t _slash_Action61(state_t s) {
  return right(s,rt);
}
/* /Action60 */
static obj_t _slash_Action60(state_t s) {
  return right(s,rs);
}
/* /Action59 */
static obj_t _slash_Action59(state_t s) {
  return right(s,rt);
}
/* /Action58 */
static obj_t _slash_Action58(state_t s) {
  return right(s,rs);
}
/* /Action57 */
static obj_t _slash_Action57(state_t s) {
  return right(s,rs);
}
/* /Action56 */
static obj_t _slash_Action56(state_t s) {
  return right(s,rs);
}
/* /Action55 */
static obj_t _slash_Action55(state_t s) {
  return right(s,rs);
}
/* /Action54 */
static obj_t _slash_Action54(state_t s) {
  return right(s,rs);
}
/* /Action53 */
static obj_t _slash_Action53(state_t s) {
  return right(s,rs);
}
/* /Action52 */
static obj_t _slash_Action52(state_t s) {
  return right(s,rt);
}
/* /Action51 */
static obj_t _slash_Action51(state_t s) {
  return right(s,rs);
}
/* /Action50 */
static obj_t _slash_Action50(state_t s) {
  return right(s,rt);
}
/* /Action49 */
static obj_t _slash_Action49(state_t s) {
  return right(s,rs);
}
/* /Action48 */
static obj_t _slash_Action48(state_t s) {
  return right(s,rs);
}
/* /Action47 */
static obj_t _slash_Action47(state_t s) {
  return right(s,rt);
}
/* /Action46 */
static obj_t _slash_Action46(state_t s) {
  return right(s,rs);
}
/* /Action45 */
static obj_t _slash_Action45(state_t s) {
  return right(s,rt);
}
/* /Action44 */
static obj_t _slash_Action44(state_t s) {
  return right(s,rs);
}
/* /Action43 */
static obj_t _slash_Action43(state_t s) {
  return right(s,rt);
}
/* /Action42 */
static obj_t _slash_Action42(state_t s) {
  return right(s,rs);
}
/* /Action41 */
static obj_t _slash_Action41(state_t s) {
  return right(s,rs);
}
/* /Action40 */
static obj_t _slash_Action40(state_t s) {
  return right(s,rs);
}
/* /Action39 */
static obj_t _slash_Action39(state_t s) {
  return right(s,rs);
}
/* /Action38 */
static obj_t _slash_Action38(state_t s) {
  return right(s,rs);
}
/* /Action37 */
static obj_t _slash_Action37(state_t s) {
  return right(s,rs);
}
/* /Action36 */
static obj_t _slash_Action36(state_t s) {
  return right(s,rs);
}
/* /Action35 */
static obj_t _slash_Action35(state_t s) {
  return right(s,rs);
}
/* /Action34 */
static obj_t _slash_Action34(state_t s) {
  return right(s,rt);
}
/* /Action33 */
static obj_t _slash_Action33(state_t s) {
  return right(s,rt);
}
/* /Action32 */
static obj_t _slash_Action32(state_t s) {
  return right(s,rt);
}
/* /Action31 */
static obj_t _slash_Action31(state_t s) {
  return right(s,rs);
}
/* /Action30 */
static obj_t _slash_Action30(state_t s) {
  return right(s,rs);
}
/* /Action29 */
static obj_t _slash_Action29(state_t s) {
  return right(s,rs);
}
/* /Action28 */
static obj_t _slash_Action28(state_t s) {
  return right(s,rs);
}
/* /Action27 */
static obj_t _slash_Action27(state_t s) {
  return right(s,rs);
}
/* /Action26 */
static obj_t _slash_Action26(state_t s) {
  return right(s,rs);
}
/* /Action25 */
static obj_t _slash_Action25(state_t s) {
  return right(s,rs);
}
/* /Action24 */
static obj_t _slash_Action24(state_t s) {
  return right(s,rt);
}
/* /Action23 */
static obj_t _slash_Action23(state_t s) {
  return right(s,rs);
}
/* /Action22 */
static obj_t _slash_Action22(state_t s) {
  return right(s,rt);
}
/* /Action21 */
static obj_t _slash_Action21(state_t s) {
  return right(s,rs);
}
/* /Action20 */
static obj_t _slash_Action20(state_t s) {
  return right(s,rt);
}
/* /Action19 */
static obj_t _slash_Action19(state_t s) {
  return right(s,rs);
}
/* /Action18 */
static obj_t _slash_Action18(state_t s) {
  return right(s,rt);
}
/* /Action17 */
static obj_t _slash_Action17(state_t s) {
  return right(s,rs);
}
/* /Action16 */
static obj_t _slash_Action16(state_t s) {
  return right(s,rt);
}
/* /Action15 */
static obj_t _slash_Action15(state_t s) {
  return right(s,rs);
}
/* /Action14 */
static obj_t _slash_Action14(state_t s) {
  return right(s,rs);
}
/* /Action13 */
static obj_t _slash_Action13(state_t s) {
  return right(s,rs);
}
/* /Action12 */
static obj_t _slash_Action12(state_t s) {
  return right(s,rs);
}
/* /Action11 */
static obj_t _slash_Action11(state_t s) {
  return right(s,rs);
}
/* /Action10 */
static obj_t _slash_Action10(state_t s) {
  return right(s,rs);
}
/* /Action9 */
static obj_t _slash_Action9(state_t s) {
  return right(s,rs);
}
/* /Action8 */
static obj_t _slash_Action8(state_t s) {
  return right(s,rs);
}
/* /Action7 */
static obj_t _slash_Action7(state_t s) {
  return right(s,rs);
}
/* /Action6 */
static obj_t _slash_Action6(state_t s) {
  return right(s,ft);
}
/* /Action5 */
static obj_t _slash_Action5(state_t s) {
  return right(s,rs);
}
/* /Action4 */
static obj_t _slash_Action4(state_t s) {
  return right(s,rs);
}
/* /Action3 */
static obj_t _slash_Action3(state_t s) {
  return right(s,ft);
}
/* /Action2 */
static obj_t _slash_Action2(state_t s) {
  return right(s,rs);
}
/* /Action1 */
static obj_t _slash_Action1(state_t s) {
  return right(s,rs);
}
static INLINE_ATTR obj_t constructor_XORI(state_t s,ternop_t arg_of_XORI) {
  con_ternop_t adt;
  adt.tag = 282/* XORI */;
  adt.payload = arg_of_XORI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_XOR(state_t s,ternop_t arg_of_XOR) {
  con_ternop_t adt;
  adt.tag = 281/* XOR */;
  adt.payload = arg_of_XOR;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_WSBH(state_t s,binop_t arg_of_WSBH) {
  con_binop_t adt;
  adt.tag = 280/* WSBH */;
  adt.payload = arg_of_WSBH;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_WRPGPR(state_t s,ternop_t arg_of_WRPGPR) {
  con_ternop_t adt;
  adt.tag = 279/* WRPGPR */;
  adt.payload = arg_of_WRPGPR;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_WAIT(state_t s,unop_src_t arg_of_WAIT) {
  con_unop_src_t adt;
  adt.tag = 278/* WAIT */;
  adt.payload = arg_of_WAIT;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_TRUNC_W_fmt(state_t s,struct19_t arg_of_TRUNC_W_fmt) {
  con_struct19_t adt;
  adt.tag = 277/* TRUNC-W-fmt */;
  adt.payload = arg_of_TRUNC_W_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_TRUNC_L_fmt(state_t s,struct19_t arg_of_TRUNC_L_fmt) {
  con_struct19_t adt;
  adt.tag = 276/* TRUNC-L-fmt */;
  adt.payload = arg_of_TRUNC_L_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_TNEI(state_t s,ternop_t arg_of_TNEI) {
  con_ternop_t adt;
  adt.tag = 275/* TNEI */;
  adt.payload = arg_of_TNEI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_TNE(state_t s,ternop_src_t arg_of_TNE) {
  con_ternop_src_t adt;
  adt.tag = 274/* TNE */;
  adt.payload = arg_of_TNE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_TLTU(state_t s,ternop_src_t arg_of_TLTU) {
  con_ternop_src_t adt;
  adt.tag = 273/* TLTU */;
  adt.payload = arg_of_TLTU;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_TLTIU(state_t s,ternop_t arg_of_TLTIU) {
  con_ternop_t adt;
  adt.tag = 272/* TLTIU */;
  adt.payload = arg_of_TLTIU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_TLTI(state_t s,ternop_t arg_of_TLTI) {
  con_ternop_t adt;
  adt.tag = 271/* TLTI */;
  adt.payload = arg_of_TLTI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_TLT(state_t s,ternop_src_t arg_of_TLT) {
  con_ternop_src_t adt;
  adt.tag = 270/* TLT */;
  adt.payload = arg_of_TLT;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_TGEU(state_t s,ternop_src_t arg_of_TGEU) {
  con_ternop_src_t adt;
  adt.tag = 263/* TGEU */;
  adt.payload = arg_of_TGEU;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_TGEIU(state_t s,ternop_t arg_of_TGEIU) {
  con_ternop_t adt;
  adt.tag = 262/* TGEIU */;
  adt.payload = arg_of_TGEIU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_TGEI(state_t s,ternop_t arg_of_TGEI) {
  con_ternop_t adt;
  adt.tag = 261/* TGEI */;
  adt.payload = arg_of_TGEI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_TGE(state_t s,ternop_src_t arg_of_TGE) {
  con_ternop_src_t adt;
  adt.tag = 260/* TGE */;
  adt.payload = arg_of_TGE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_TEQI(state_t s,ternop_t arg_of_TEQI) {
  con_ternop_t adt;
  adt.tag = 259/* TEQI */;
  adt.payload = arg_of_TEQI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_TEQ(state_t s,ternop_src_t arg_of_TEQ) {
  con_ternop_src_t adt;
  adt.tag = 258/* TEQ */;
  adt.payload = arg_of_TEQ;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SYSCALL(state_t s,unop_src_t arg_of_SYSCALL) {
  con_unop_src_t adt;
  adt.tag = 257/* SYSCALL */;
  adt.payload = arg_of_SYSCALL;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SYNCI(state_t s,ternop_t arg_of_SYNCI) {
  con_ternop_t adt;
  adt.tag = 256/* SYNCI */;
  adt.payload = arg_of_SYNCI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SYNC(state_t s,unop_src_t arg_of_SYNC) {
  con_unop_src_t adt;
  adt.tag = 255/* SYNC */;
  adt.payload = arg_of_SYNC;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SWXC1(state_t s,ternop_src_t arg_of_SWXC1) {
  con_ternop_src_t adt;
  adt.tag = 254/* SWXC1 */;
  adt.payload = arg_of_SWXC1;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SWRE(state_t s,ternop_src_t arg_of_SWRE) {
  con_ternop_src_t adt;
  adt.tag = 253/* SWRE */;
  adt.payload = arg_of_SWRE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SWR(state_t s,ternop_src_t arg_of_SWR) {
  con_ternop_src_t adt;
  adt.tag = 252/* SWR */;
  adt.payload = arg_of_SWR;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SWLE(state_t s,ternop_src_t arg_of_SWLE) {
  con_ternop_src_t adt;
  adt.tag = 251/* SWLE */;
  adt.payload = arg_of_SWLE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SWL(state_t s,ternop_src_t arg_of_SWL) {
  con_ternop_src_t adt;
  adt.tag = 250/* SWL */;
  adt.payload = arg_of_SWL;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SWE(state_t s,ternop_src_t arg_of_SWE) {
  con_ternop_src_t adt;
  adt.tag = 249/* SWE */;
  adt.payload = arg_of_SWE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SWC2(state_t s,ternop_src_t arg_of_SWC2) {
  con_ternop_src_t adt;
  adt.tag = 248/* SWC2 */;
  adt.payload = arg_of_SWC2;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SWC1(state_t s,ternop_src_t arg_of_SWC1) {
  con_ternop_src_t adt;
  adt.tag = 247/* SWC1 */;
  adt.payload = arg_of_SWC1;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SW(state_t s,ternop_src_t arg_of_SW) {
  con_ternop_src_t adt;
  adt.tag = 246/* SW */;
  adt.payload = arg_of_SW;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SUXC1(state_t s,ternop_src_t arg_of_SUXC1) {
  con_ternop_src_t adt;
  adt.tag = 245/* SUXC1 */;
  adt.payload = arg_of_SUXC1;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SUBU(state_t s,ternop_t arg_of_SUBU) {
  con_ternop_t adt;
  adt.tag = 244/* SUBU */;
  adt.payload = arg_of_SUBU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SUB_fmt(state_t s,struct19_t arg_of_SUB_fmt) {
  con_struct19_t adt;
  adt.tag = 243/* SUB-fmt */;
  adt.payload = arg_of_SUB_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_SUB(state_t s,ternop_t arg_of_SUB) {
  con_ternop_t adt;
  adt.tag = 242/* SUB */;
  adt.payload = arg_of_SUB;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SRLV(state_t s,ternop_t arg_of_SRLV) {
  con_ternop_t adt;
  adt.tag = 241/* SRLV */;
  adt.payload = arg_of_SRLV;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SRL(state_t s,ternop_t arg_of_SRL) {
  con_ternop_t adt;
  adt.tag = 240/* SRL */;
  adt.payload = arg_of_SRL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SRAV(state_t s,ternop_t arg_of_SRAV) {
  con_ternop_t adt;
  adt.tag = 239/* SRAV */;
  adt.payload = arg_of_SRAV;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SRA(state_t s,ternop_t arg_of_SRA) {
  con_ternop_t adt;
  adt.tag = 238/* SRA */;
  adt.payload = arg_of_SRA;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SQRT_fmt(state_t s,struct19_t arg_of_SQRT_fmt) {
  con_struct19_t adt;
  adt.tag = 237/* SQRT-fmt */;
  adt.payload = arg_of_SQRT_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_SLTU(state_t s,ternop_t arg_of_SLTU) {
  con_ternop_t adt;
  adt.tag = 236/* SLTU */;
  adt.payload = arg_of_SLTU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SLTIU(state_t s,ternop_t arg_of_SLTIU) {
  con_ternop_t adt;
  adt.tag = 235/* SLTIU */;
  adt.payload = arg_of_SLTIU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SLTI(state_t s,ternop_t arg_of_SLTI) {
  con_ternop_t adt;
  adt.tag = 234/* SLTI */;
  adt.payload = arg_of_SLTI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SLT(state_t s,ternop_t arg_of_SLT) {
  con_ternop_t adt;
  adt.tag = 233/* SLT */;
  adt.payload = arg_of_SLT;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SLLV(state_t s,ternop_t arg_of_SLLV) {
  con_ternop_t adt;
  adt.tag = 232/* SLLV */;
  adt.payload = arg_of_SLLV;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SLL(state_t s,ternop_t arg_of_SLL) {
  con_ternop_t adt;
  adt.tag = 231/* SLL */;
  adt.payload = arg_of_SLL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SHE(state_t s,ternop_src_t arg_of_SHE) {
  con_ternop_src_t adt;
  adt.tag = 230/* SHE */;
  adt.payload = arg_of_SHE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SH(state_t s,ternop_src_t arg_of_SH) {
  con_ternop_src_t adt;
  adt.tag = 229/* SH */;
  adt.payload = arg_of_SH;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SEH(state_t s,binop_t arg_of_SEH) {
  con_binop_t adt;
  adt.tag = 228/* SEH */;
  adt.payload = arg_of_SEH;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_SEB(state_t s,binop_t arg_of_SEB) {
  con_binop_t adt;
  adt.tag = 227/* SEB */;
  adt.payload = arg_of_SEB;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_SDXC1(state_t s,ternop_src_t arg_of_SDXC1) {
  con_ternop_src_t adt;
  adt.tag = 226/* SDXC1 */;
  adt.payload = arg_of_SDXC1;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SDC2(state_t s,ternop_src_t arg_of_SDC2) {
  con_ternop_src_t adt;
  adt.tag = 225/* SDC2 */;
  adt.payload = arg_of_SDC2;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SDC1(state_t s,ternop_src_t arg_of_SDC1) {
  con_ternop_src_t adt;
  adt.tag = 224/* SDC1 */;
  adt.payload = arg_of_SDC1;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SDBBP(state_t s,unop_src_t arg_of_SDBBP) {
  con_unop_src_t adt;
  adt.tag = 223/* SDBBP */;
  adt.payload = arg_of_SDBBP;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SCE(state_t s,ternop_t arg_of_SCE) {
  con_ternop_t adt;
  adt.tag = 222/* SCE */;
  adt.payload = arg_of_SCE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SC(state_t s,ternop_t arg_of_SC) {
  con_ternop_t adt;
  adt.tag = 221/* SC */;
  adt.payload = arg_of_SC;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_SBE(state_t s,ternop_src_t arg_of_SBE) {
  con_ternop_src_t adt;
  adt.tag = 220/* SBE */;
  adt.payload = arg_of_SBE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_SB(state_t s,ternop_src_t arg_of_SB) {
  con_ternop_src_t adt;
  adt.tag = 219/* SB */;
  adt.payload = arg_of_SB;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_RSQRT_fmt(state_t s,struct19_t arg_of_RSQRT_fmt) {
  con_struct19_t adt;
  adt.tag = 218/* RSQRT-fmt */;
  adt.payload = arg_of_RSQRT_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_ROUND_W_fmt(state_t s,struct19_t arg_of_ROUND_W_fmt) {
  con_struct19_t adt;
  adt.tag = 217/* ROUND-W-fmt */;
  adt.payload = arg_of_ROUND_W_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_ROUND_L_fmt(state_t s,struct19_t arg_of_ROUND_L_fmt) {
  con_struct19_t adt;
  adt.tag = 216/* ROUND-L-fmt */;
  adt.payload = arg_of_ROUND_L_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_ROTRV(state_t s,ternop_t arg_of_ROTRV) {
  con_ternop_t adt;
  adt.tag = 215/* ROTRV */;
  adt.payload = arg_of_ROTRV;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_ROTR(state_t s,ternop_t arg_of_ROTR) {
  con_ternop_t adt;
  adt.tag = 214/* ROTR */;
  adt.payload = arg_of_ROTR;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_RECIP_fmt(state_t s,struct19_t arg_of_RECIP_fmt) {
  con_struct19_t adt;
  adt.tag = 213/* RECIP-fmt */;
  adt.payload = arg_of_RECIP_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_RDPGPR(state_t s,binop_t arg_of_RDPGPR) {
  con_binop_t adt;
  adt.tag = 212/* RDPGPR */;
  adt.payload = arg_of_RDPGPR;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_RDHWR(state_t s,binop_t arg_of_RDHWR) {
  con_binop_t adt;
  adt.tag = 211/* RDHWR */;
  adt.payload = arg_of_RDHWR;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_PUU_PS(state_t s,ternop_t arg_of_PUU_PS) {
  con_ternop_t adt;
  adt.tag = 210/* PUU-PS */;
  adt.payload = arg_of_PUU_PS;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_PUL_PS(state_t s,ternop_t arg_of_PUL_PS) {
  con_ternop_t adt;
  adt.tag = 209/* PUL-PS */;
  adt.payload = arg_of_PUL_PS;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_PREFX(state_t s,ternop_src_t arg_of_PREFX) {
  con_ternop_src_t adt;
  adt.tag = 208/* PREFX */;
  adt.payload = arg_of_PREFX;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_PREFE(state_t s,ternop_src_t arg_of_PREFE) {
  con_ternop_src_t adt;
  adt.tag = 207/* PREFE */;
  adt.payload = arg_of_PREFE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_PREF(state_t s,ternop_src_t arg_of_PREF) {
  con_ternop_src_t adt;
  adt.tag = 206/* PREF */;
  adt.payload = arg_of_PREF;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_PLU_PS(state_t s,ternop_t arg_of_PLU_PS) {
  con_ternop_t adt;
  adt.tag = 205/* PLU-PS */;
  adt.payload = arg_of_PLU_PS;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_PLL_PS(state_t s,ternop_t arg_of_PLL_PS) {
  con_ternop_t adt;
  adt.tag = 204/* PLL-PS */;
  adt.payload = arg_of_PLL_PS;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_ORI(state_t s,ternop_t arg_of_ORI) {
  con_ternop_t adt;
  adt.tag = 203/* ORI */;
  adt.payload = arg_of_ORI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_OR(state_t s,ternop_t arg_of_OR) {
  con_ternop_t adt;
  adt.tag = 202/* OR */;
  adt.payload = arg_of_OR;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_NOR(state_t s,ternop_t arg_of_NOR) {
  con_ternop_t adt;
  adt.tag = 201/* NOR */;
  adt.payload = arg_of_NOR;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_NMSUB_fmt(state_t s,struct19_t arg_of_NMSUB_fmt) {
  con_struct19_t adt;
  adt.tag = 200/* NMSUB-fmt */;
  adt.payload = arg_of_NMSUB_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_NMADD_fmt(state_t s,struct19_t arg_of_NMADD_fmt) {
  con_struct19_t adt;
  adt.tag = 199/* NMADD-fmt */;
  adt.payload = arg_of_NMADD_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_NEG_fmt(state_t s,struct19_t arg_of_NEG_fmt) {
  con_struct19_t adt;
  adt.tag = 198/* NEG-fmt */;
  adt.payload = arg_of_NEG_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_MULTU(state_t s,ternop_t arg_of_MULTU) {
  con_ternop_t adt;
  adt.tag = 197/* MULTU */;
  adt.payload = arg_of_MULTU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MULT(state_t s,ternop_t arg_of_MULT) {
  con_ternop_t adt;
  adt.tag = 196/* MULT */;
  adt.payload = arg_of_MULT;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MUL_fmt(state_t s,struct19_t arg_of_MUL_fmt) {
  con_struct19_t adt;
  adt.tag = 195/* MUL-fmt */;
  adt.payload = arg_of_MUL_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_MUL(state_t s,ternop_t arg_of_MUL) {
  con_ternop_t adt;
  adt.tag = 194/* MUL */;
  adt.payload = arg_of_MUL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MTLO(state_t s,unop_src_t arg_of_MTLO) {
  con_unop_src_t adt;
  adt.tag = 193/* MTLO */;
  adt.payload = arg_of_MTLO;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_MTHI(state_t s,unop_src_t arg_of_MTHI) {
  con_unop_src_t adt;
  adt.tag = 192/* MTHI */;
  adt.payload = arg_of_MTHI;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_MTHC2(state_t s,ternop_t arg_of_MTHC2) {
  con_ternop_t adt;
  adt.tag = 191/* MTHC2 */;
  adt.payload = arg_of_MTHC2;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MTHC1(state_t s,binop_t arg_of_MTHC1) {
  con_binop_t adt;
  adt.tag = 190/* MTHC1 */;
  adt.payload = arg_of_MTHC1;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MTC2(state_t s,ternop_t arg_of_MTC2) {
  con_ternop_t adt;
  adt.tag = 189/* MTC2 */;
  adt.payload = arg_of_MTC2;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MTC1(state_t s,binop_t arg_of_MTC1) {
  con_binop_t adt;
  adt.tag = 188/* MTC1 */;
  adt.payload = arg_of_MTC1;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MTC0(state_t s,ternop_src_t arg_of_MTC0) {
  con_ternop_src_t adt;
  adt.tag = 187/* MTC0 */;
  adt.payload = arg_of_MTC0;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_MSUBU(state_t s,ternop_t arg_of_MSUBU) {
  con_ternop_t adt;
  adt.tag = 186/* MSUBU */;
  adt.payload = arg_of_MSUBU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MSUB_fmt(state_t s,struct19_t arg_of_MSUB_fmt) {
  con_struct19_t adt;
  adt.tag = 185/* MSUB-fmt */;
  adt.payload = arg_of_MSUB_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_MSUB(state_t s,ternop_t arg_of_MSUB) {
  con_ternop_t adt;
  adt.tag = 184/* MSUB */;
  adt.payload = arg_of_MSUB;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MOVZ_fmt(state_t s,struct19_t arg_of_MOVZ_fmt) {
  con_struct19_t adt;
  adt.tag = 183/* MOVZ-fmt */;
  adt.payload = arg_of_MOVZ_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_MOVZ(state_t s,ternop_t arg_of_MOVZ) {
  con_ternop_t adt;
  adt.tag = 182/* MOVZ */;
  adt.payload = arg_of_MOVZ;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MOVT_fmt(state_t s,struct19_t arg_of_MOVT_fmt) {
  con_struct19_t adt;
  adt.tag = 181/* MOVT-fmt */;
  adt.payload = arg_of_MOVT_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_MOVT(state_t s,ternop_t arg_of_MOVT) {
  con_ternop_t adt;
  adt.tag = 180/* MOVT */;
  adt.payload = arg_of_MOVT;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MOVN_fmt(state_t s,struct19_t arg_of_MOVN_fmt) {
  con_struct19_t adt;
  adt.tag = 179/* MOVN-fmt */;
  adt.payload = arg_of_MOVN_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_MOVN(state_t s,ternop_t arg_of_MOVN) {
  con_ternop_t adt;
  adt.tag = 178/* MOVN */;
  adt.payload = arg_of_MOVN;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MOVF_fmt(state_t s,struct19_t arg_of_MOVF_fmt) {
  con_struct19_t adt;
  adt.tag = 177/* MOVF-fmt */;
  adt.payload = arg_of_MOVF_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_MOVF(state_t s,ternop_t arg_of_MOVF) {
  con_ternop_t adt;
  adt.tag = 176/* MOVF */;
  adt.payload = arg_of_MOVF;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MOV_fmt(state_t s,struct19_t arg_of_MOV_fmt) {
  con_struct19_t adt;
  adt.tag = 175/* MOV-fmt */;
  adt.payload = arg_of_MOV_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_MFLO(state_t s,unop_t arg_of_MFLO) {
  con_unop_t adt;
  adt.tag = 174/* MFLO */;
  adt.payload = arg_of_MFLO;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_MFHI(state_t s,unop_t arg_of_MFHI) {
  con_unop_t adt;
  adt.tag = 173/* MFHI */;
  adt.payload = arg_of_MFHI;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_MFHC2(state_t s,binop_t arg_of_MFHC2) {
  con_binop_t adt;
  adt.tag = 172/* MFHC2 */;
  adt.payload = arg_of_MFHC2;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MFHC1(state_t s,binop_t arg_of_MFHC1) {
  con_binop_t adt;
  adt.tag = 171/* MFHC1 */;
  adt.payload = arg_of_MFHC1;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MFC2(state_t s,binop_t arg_of_MFC2) {
  con_binop_t adt;
  adt.tag = 170/* MFC2 */;
  adt.payload = arg_of_MFC2;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MFC1(state_t s,binop_t arg_of_MFC1) {
  con_binop_t adt;
  adt.tag = 169/* MFC1 */;
  adt.payload = arg_of_MFC1;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_MFC0(state_t s,ternop_t arg_of_MFC0) {
  con_ternop_t adt;
  adt.tag = 168/* MFC0 */;
  adt.payload = arg_of_MFC0;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MADDU(state_t s,ternop_t arg_of_MADDU) {
  con_ternop_t adt;
  adt.tag = 167/* MADDU */;
  adt.payload = arg_of_MADDU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_MADD_fmt(state_t s,struct19_t arg_of_MADD_fmt) {
  con_struct19_t adt;
  adt.tag = 166/* MADD-fmt */;
  adt.payload = arg_of_MADD_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_MADD(state_t s,ternop_t arg_of_MADD) {
  con_ternop_t adt;
  adt.tag = 165/* MADD */;
  adt.payload = arg_of_MADD;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LWXC1(state_t s,ternop_t arg_of_LWXC1) {
  con_ternop_t adt;
  adt.tag = 164/* LWXC1 */;
  adt.payload = arg_of_LWXC1;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LWRE(state_t s,ternop_t arg_of_LWRE) {
  con_ternop_t adt;
  adt.tag = 163/* LWRE */;
  adt.payload = arg_of_LWRE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LWR(state_t s,ternop_t arg_of_LWR) {
  con_ternop_t adt;
  adt.tag = 162/* LWR */;
  adt.payload = arg_of_LWR;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LWLE(state_t s,ternop_t arg_of_LWLE) {
  con_ternop_t adt;
  adt.tag = 161/* LWLE */;
  adt.payload = arg_of_LWLE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LWL(state_t s,ternop_t arg_of_LWL) {
  con_ternop_t adt;
  adt.tag = 160/* LWL */;
  adt.payload = arg_of_LWL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LWE(state_t s,ternop_t arg_of_LWE) {
  con_ternop_t adt;
  adt.tag = 159/* LWE */;
  adt.payload = arg_of_LWE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LWC2(state_t s,ternop_src_t arg_of_LWC2) {
  con_ternop_src_t adt;
  adt.tag = 158/* LWC2 */;
  adt.payload = arg_of_LWC2;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_LWC1(state_t s,ternop_t arg_of_LWC1) {
  con_ternop_t adt;
  adt.tag = 157/* LWC1 */;
  adt.payload = arg_of_LWC1;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LW(state_t s,ternop_t arg_of_LW) {
  con_ternop_t adt;
  adt.tag = 156/* LW */;
  adt.payload = arg_of_LW;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LUXC1(state_t s,ternop_t arg_of_LUXC1) {
  con_ternop_t adt;
  adt.tag = 155/* LUXC1 */;
  adt.payload = arg_of_LUXC1;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LUI(state_t s,binop_t arg_of_LUI) {
  con_binop_t adt;
  adt.tag = 154/* LUI */;
  adt.payload = arg_of_LUI;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_LLE(state_t s,ternop_t arg_of_LLE) {
  con_ternop_t adt;
  adt.tag = 153/* LLE */;
  adt.payload = arg_of_LLE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LL(state_t s,ternop_t arg_of_LL) {
  con_ternop_t adt;
  adt.tag = 152/* LL */;
  adt.payload = arg_of_LL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LHUE(state_t s,ternop_t arg_of_LHUE) {
  con_ternop_t adt;
  adt.tag = 151/* LHUE */;
  adt.payload = arg_of_LHUE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LHU(state_t s,ternop_t arg_of_LHU) {
  con_ternop_t adt;
  adt.tag = 150/* LHU */;
  adt.payload = arg_of_LHU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LHE(state_t s,ternop_t arg_of_LHE) {
  con_ternop_t adt;
  adt.tag = 149/* LHE */;
  adt.payload = arg_of_LHE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LH(state_t s,ternop_t arg_of_LH) {
  con_ternop_t adt;
  adt.tag = 148/* LH */;
  adt.payload = arg_of_LH;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LDXC1(state_t s,ternop_t arg_of_LDXC1) {
  con_ternop_t adt;
  adt.tag = 147/* LDXC1 */;
  adt.payload = arg_of_LDXC1;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LDC2(state_t s,ternop_src_t arg_of_LDC2) {
  con_ternop_src_t adt;
  adt.tag = 146/* LDC2 */;
  adt.payload = arg_of_LDC2;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_LDC1(state_t s,ternop_t arg_of_LDC1) {
  con_ternop_t adt;
  adt.tag = 145/* LDC1 */;
  adt.payload = arg_of_LDC1;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LBUE(state_t s,ternop_t arg_of_LBUE) {
  con_ternop_t adt;
  adt.tag = 144/* LBUE */;
  adt.payload = arg_of_LBUE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LBU(state_t s,ternop_t arg_of_LBU) {
  con_ternop_t adt;
  adt.tag = 143/* LBU */;
  adt.payload = arg_of_LBU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LBE(state_t s,ternop_t arg_of_LBE) {
  con_ternop_t adt;
  adt.tag = 142/* LBE */;
  adt.payload = arg_of_LBE;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_LB(state_t s,ternop_t arg_of_LB) {
  con_ternop_t adt;
  adt.tag = 141/* LB */;
  adt.payload = arg_of_LB;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_JR_HB(state_t s,ternop_t arg_of_JR_HB) {
  con_ternop_t adt;
  adt.tag = 140/* JR-HB */;
  adt.payload = arg_of_JR_HB;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_JR(state_t s,ternop_t arg_of_JR) {
  con_ternop_t adt;
  adt.tag = 139/* JR */;
  adt.payload = arg_of_JR;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_JALX(state_t s,unop_src_t arg_of_JALX) {
  con_unop_src_t adt;
  adt.tag = 138/* JALX */;
  adt.payload = arg_of_JALX;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_JALR_HB(state_t s,ternop_t arg_of_JALR_HB) {
  con_ternop_t adt;
  adt.tag = 137/* JALR-HB */;
  adt.payload = arg_of_JALR_HB;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_JALR(state_t s,ternop_t arg_of_JALR) {
  con_ternop_t adt;
  adt.tag = 136/* JALR */;
  adt.payload = arg_of_JALR;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_JAL(state_t s,unop_src_t arg_of_JAL) {
  con_unop_src_t adt;
  adt.tag = 135/* JAL */;
  adt.payload = arg_of_JAL;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_J(state_t s,unop_src_t arg_of_J) {
  con_unop_src_t adt;
  adt.tag = 134/* J */;
  adt.payload = arg_of_J;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_INS(state_t s,quadop_t arg_of_INS) {
  con_quadop_t adt;
  adt.tag = 133/* INS */;
  adt.payload = arg_of_INS;
  return (obj_t) alloc_con_quadop(s,adt);
}
static INLINE_ATTR obj_t constructor_FLOOR_W_fmt(state_t s,struct19_t arg_of_FLOOR_W_fmt) {
  con_struct19_t adt;
  adt.tag = 132/* FLOOR-W-fmt */;
  adt.payload = arg_of_FLOOR_W_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_FLOOR_L_fmt(state_t s,struct19_t arg_of_FLOOR_L_fmt) {
  con_struct19_t adt;
  adt.tag = 131/* FLOOR-L-fmt */;
  adt.payload = arg_of_FLOOR_L_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_EXT(state_t s,quadop_t arg_of_EXT) {
  con_quadop_t adt;
  adt.tag = 130/* EXT */;
  adt.payload = arg_of_EXT;
  return (obj_t) alloc_con_quadop(s,adt);
}
static INLINE_ATTR obj_t constructor_EI(state_t s,unop_t arg_of_EI) {
  con_unop_t adt;
  adt.tag = 128/* EI */;
  adt.payload = arg_of_EI;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_DIVU(state_t s,ternop_t arg_of_DIVU) {
  con_ternop_t adt;
  adt.tag = 127/* DIVU */;
  adt.payload = arg_of_DIVU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_DIV_fmt(state_t s,struct19_t arg_of_DIV_fmt) {
  con_struct19_t adt;
  adt.tag = 126/* DIV-fmt */;
  adt.payload = arg_of_DIV_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_DIV(state_t s,ternop_t arg_of_DIV) {
  con_ternop_t adt;
  adt.tag = 125/* DIV */;
  adt.payload = arg_of_DIV;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_DI(state_t s,unop_t arg_of_DI) {
  con_unop_t adt;
  adt.tag = 124/* DI */;
  adt.payload = arg_of_DI;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_CVT_W_fmt(state_t s,struct19_t arg_of_CVT_W_fmt) {
  con_struct19_t adt;
  adt.tag = 122/* CVT-W-fmt */;
  adt.payload = arg_of_CVT_W_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_CVT_S_PU(state_t s,binop_t arg_of_CVT_S_PU) {
  con_binop_t adt;
  adt.tag = 121/* CVT-S-PU */;
  adt.payload = arg_of_CVT_S_PU;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_CVT_S_PL(state_t s,binop_t arg_of_CVT_S_PL) {
  con_binop_t adt;
  adt.tag = 120/* CVT-S-PL */;
  adt.payload = arg_of_CVT_S_PL;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_CVT_S_fmt(state_t s,struct19_t arg_of_CVT_S_fmt) {
  con_struct19_t adt;
  adt.tag = 119/* CVT-S-fmt */;
  adt.payload = arg_of_CVT_S_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_CVT_PS_S(state_t s,ternop_t arg_of_CVT_PS_S) {
  con_ternop_t adt;
  adt.tag = 118/* CVT-PS-S */;
  adt.payload = arg_of_CVT_PS_S;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_CVT_L_fmt(state_t s,struct19_t arg_of_CVT_L_fmt) {
  con_struct19_t adt;
  adt.tag = 117/* CVT-L-fmt */;
  adt.payload = arg_of_CVT_L_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_CVT_D_fmt(state_t s,struct19_t arg_of_CVT_D_fmt) {
  con_struct19_t adt;
  adt.tag = 116/* CVT-D-fmt */;
  adt.payload = arg_of_CVT_D_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_CTC2(state_t s,ternop_t arg_of_CTC2) {
  con_ternop_t adt;
  adt.tag = 115/* CTC2 */;
  adt.payload = arg_of_CTC2;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_CTC1(state_t s,ternop_t arg_of_CTC1) {
  con_ternop_t adt;
  adt.tag = 114/* CTC1 */;
  adt.payload = arg_of_CTC1;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_COP2(state_t s,unop_src_t arg_of_COP2) {
  con_unop_src_t adt;
  adt.tag = 113/* COP2 */;
  adt.payload = arg_of_COP2;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_CLZ(state_t s,ternop_t arg_of_CLZ) {
  con_ternop_t adt;
  adt.tag = 112/* CLZ */;
  adt.payload = arg_of_CLZ;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_CLO(state_t s,ternop_t arg_of_CLO) {
  con_ternop_t adt;
  adt.tag = 111/* CLO */;
  adt.payload = arg_of_CLO;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_CFC2(state_t s,binop_t arg_of_CFC2) {
  con_binop_t adt;
  adt.tag = 110/* CFC2 */;
  adt.payload = arg_of_CFC2;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_CFC1(state_t s,binop_t arg_of_CFC1) {
  con_binop_t adt;
  adt.tag = 109/* CFC1 */;
  adt.payload = arg_of_CFC1;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_CEIL_W_fmt(state_t s,struct19_t arg_of_CEIL_W_fmt) {
  con_struct19_t adt;
  adt.tag = 108/* CEIL-W-fmt */;
  adt.payload = arg_of_CEIL_W_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_CEIL_L_fmt(state_t s,struct19_t arg_of_CEIL_L_fmt) {
  con_struct19_t adt;
  adt.tag = 107/* CEIL-L-fmt */;
  adt.payload = arg_of_CEIL_L_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_CACHEE(state_t s,ternop_src_t arg_of_CACHEE) {
  con_ternop_src_t adt;
  adt.tag = 106/* CACHEE */;
  adt.payload = arg_of_CACHEE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_CACHE(state_t s,ternop_src_t arg_of_CACHE) {
  con_ternop_src_t adt;
  adt.tag = 105/* CACHE */;
  adt.payload = arg_of_CACHE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_C_cond_fmt(state_t s,struct19_t arg_of_C_cond_fmt) {
  con_struct19_t adt;
  adt.tag = 104/* C-cond-fmt */;
  adt.payload = arg_of_C_cond_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_BREAK(state_t s,unop_src_t arg_of_BREAK) {
  con_unop_src_t adt;
  adt.tag = 103/* BREAK */;
  adt.payload = arg_of_BREAK;
  return (obj_t) alloc_con_unop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_BNEL(state_t s,ternop_src_t arg_of_BNEL) {
  con_ternop_src_t adt;
  adt.tag = 102/* BNEL */;
  adt.payload = arg_of_BNEL;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_BNE(state_t s,ternop_src_t arg_of_BNE) {
  con_ternop_src_t adt;
  adt.tag = 101/* BNE */;
  adt.payload = arg_of_BNE;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_BLTZL(state_t s,ternop_t arg_of_BLTZL) {
  con_ternop_t adt;
  adt.tag = 100/* BLTZL */;
  adt.payload = arg_of_BLTZL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BLTZALL(state_t s,ternop_t arg_of_BLTZALL) {
  con_ternop_t adt;
  adt.tag = 99/* BLTZALL */;
  adt.payload = arg_of_BLTZALL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BLTZAL(state_t s,ternop_t arg_of_BLTZAL) {
  con_ternop_t adt;
  adt.tag = 98/* BLTZAL */;
  adt.payload = arg_of_BLTZAL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BLTZ(state_t s,ternop_t arg_of_BLTZ) {
  con_ternop_t adt;
  adt.tag = 97/* BLTZ */;
  adt.payload = arg_of_BLTZ;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BLEZL(state_t s,ternop_t arg_of_BLEZL) {
  con_ternop_t adt;
  adt.tag = 96/* BLEZL */;
  adt.payload = arg_of_BLEZL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BLEZ(state_t s,ternop_t arg_of_BLEZ) {
  con_ternop_t adt;
  adt.tag = 95/* BLEZ */;
  adt.payload = arg_of_BLEZ;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BGTZL(state_t s,ternop_t arg_of_BGTZL) {
  con_ternop_t adt;
  adt.tag = 94/* BGTZL */;
  adt.payload = arg_of_BGTZL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BGTZ(state_t s,ternop_t arg_of_BGTZ) {
  con_ternop_t adt;
  adt.tag = 93/* BGTZ */;
  adt.payload = arg_of_BGTZ;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BGEZL(state_t s,ternop_t arg_of_BGEZL) {
  con_ternop_t adt;
  adt.tag = 92/* BGEZL */;
  adt.payload = arg_of_BGEZL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BGEZALL(state_t s,ternop_t arg_of_BGEZALL) {
  con_ternop_t adt;
  adt.tag = 91/* BGEZALL */;
  adt.payload = arg_of_BGEZALL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BGEZAL(state_t s,ternop_t arg_of_BGEZAL) {
  con_ternop_t adt;
  adt.tag = 90/* BGEZAL */;
  adt.payload = arg_of_BGEZAL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BGEZ(state_t s,ternop_t arg_of_BGEZ) {
  con_ternop_t adt;
  adt.tag = 89/* BGEZ */;
  adt.payload = arg_of_BGEZ;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BEQL(state_t s,ternop_src_t arg_of_BEQL) {
  con_ternop_src_t adt;
  adt.tag = 88/* BEQL */;
  adt.payload = arg_of_BEQL;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_BEQ(state_t s,ternop_src_t arg_of_BEQ) {
  con_ternop_src_t adt;
  adt.tag = 87/* BEQ */;
  adt.payload = arg_of_BEQ;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_BC2TL(state_t s,ternop_t arg_of_BC2TL) {
  con_ternop_t adt;
  adt.tag = 86/* BC2TL */;
  adt.payload = arg_of_BC2TL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BC2T(state_t s,ternop_t arg_of_BC2T) {
  con_ternop_t adt;
  adt.tag = 85/* BC2T */;
  adt.payload = arg_of_BC2T;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BC2FL(state_t s,ternop_t arg_of_BC2FL) {
  con_ternop_t adt;
  adt.tag = 84/* BC2FL */;
  adt.payload = arg_of_BC2FL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BC2F(state_t s,ternop_t arg_of_BC2F) {
  con_ternop_t adt;
  adt.tag = 83/* BC2F */;
  adt.payload = arg_of_BC2F;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BC1TL(state_t s,ternop_t arg_of_BC1TL) {
  con_ternop_t adt;
  adt.tag = 82/* BC1TL */;
  adt.payload = arg_of_BC1TL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BC1T(state_t s,ternop_t arg_of_BC1T) {
  con_ternop_t adt;
  adt.tag = 81/* BC1T */;
  adt.payload = arg_of_BC1T;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BC1FL(state_t s,ternop_t arg_of_BC1FL) {
  con_ternop_t adt;
  adt.tag = 80/* BC1FL */;
  adt.payload = arg_of_BC1FL;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_BC1F(state_t s,ternop_t arg_of_BC1F) {
  con_ternop_t adt;
  adt.tag = 79/* BC1F */;
  adt.payload = arg_of_BC1F;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_ANDI(state_t s,ternop_t arg_of_ANDI) {
  con_ternop_t adt;
  adt.tag = 78/* ANDI */;
  adt.payload = arg_of_ANDI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_AND(state_t s,ternop_t arg_of_AND) {
  con_ternop_t adt;
  adt.tag = 77/* AND */;
  adt.payload = arg_of_AND;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_ALNV_PS(state_t s,quadop_t arg_of_ALNV_PS) {
  con_quadop_t adt;
  adt.tag = 76/* ALNV-PS */;
  adt.payload = arg_of_ALNV_PS;
  return (obj_t) alloc_con_quadop(s,adt);
}
static INLINE_ATTR obj_t constructor_ADDU(state_t s,ternop_t arg_of_ADDU) {
  con_ternop_t adt;
  adt.tag = 75/* ADDU */;
  adt.payload = arg_of_ADDU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_ADDIU(state_t s,ternop_t arg_of_ADDIU) {
  con_ternop_t adt;
  adt.tag = 74/* ADDIU */;
  adt.payload = arg_of_ADDIU;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_ADDI(state_t s,ternop_t arg_of_ADDI) {
  con_ternop_t adt;
  adt.tag = 73/* ADDI */;
  adt.payload = arg_of_ADDI;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_ADD_fmt(state_t s,struct19_t arg_of_ADD_fmt) {
  con_struct19_t adt;
  adt.tag = 72/* ADD-fmt */;
  adt.payload = arg_of_ADD_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
static INLINE_ATTR obj_t constructor_ADD(state_t s,ternop_t arg_of_ADD) {
  con_ternop_t adt;
  adt.tag = 71/* ADD */;
  adt.payload = arg_of_ADD;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_ABS_fmt(state_t s,struct19_t arg_of_ABS_fmt) {
  con_struct19_t adt;
  adt.tag = 70/* ABS-fmt */;
  adt.payload = arg_of_ABS_fmt;
  return (obj_t) alloc_con_struct19(s,adt);
}
/* quadop-fmt-src */
static obj_t quadop_fmt_src(state_t s,obj_t (*cons)(state_t,struct19_t),obj_t (*fmt_)(state_t),obj_t (*source1)(state_t),obj_t (*source2)(state_t),obj_t (*source3)(state_t),obj_t (*source4)(state_t)) {
  obj_t fmt__;
  obj_t source1_;
  obj_t source2_;
  obj_t source3_;
  obj_t source4_;
  fmt__ = fmt_(s);
  source1_ = source1(s);
  source2_ = source2(s);
  source3_ = source3(s);
  source4_ = source4(s);
  return cons(s,__struct19(s,0 /* void value */,fmt__,0 /* void value */,source1_,source2_,source3_,source4_));
}
/* quadop-fmt */
static obj_t quadop_fmt(state_t s,obj_t (*cons)(state_t,struct19_t),obj_t (*fmt_)(state_t),obj_t (*destination)(state_t),obj_t (*source1)(state_t),obj_t (*source2)(state_t),obj_t (*source3)(state_t)) {
  obj_t fmt__;
  obj_t destination_;
  obj_t source1_;
  obj_t source2_;
  obj_t source3_;
  fmt__ = fmt_(s);
  destination_ = destination(s);
  source1_ = source1(s);
  source2_ = source2(s);
  source3_ = source3(s);
  return cons(s,__struct19(s,destination_,fmt__,0 /* void value */,source1_,source2_,source3_,0 /* void value */));
}
/* quadop */
static obj_t quadop(state_t s,obj_t (*cons)(state_t,quadop_t),obj_t (*destination)(state_t),obj_t (*source1)(state_t),obj_t (*source2)(state_t),obj_t (*source3)(state_t)) {
  obj_t destination_;
  obj_t source1_;
  obj_t source2_;
  obj_t source3_;
  destination_ = destination(s);
  source1_ = source1(s);
  source2_ = source2(s);
  source3_ = source3(s);
  return cons(s,__quadop(s,destination_,source1_,source2_,source3_));
}
/* ternop-fmt */
static obj_t ternop_fmt(state_t s,obj_t (*cons)(state_t,struct19_t),obj_t (*fmt_)(state_t),obj_t (*destination)(state_t),obj_t (*source1)(state_t),obj_t (*source2)(state_t)) {
  obj_t fmt__;
  obj_t destination_;
  obj_t source1_;
  obj_t source2_;
  fmt__ = fmt_(s);
  destination_ = destination(s);
  source1_ = source1(s);
  source2_ = source2(s);
  return cons(s,__struct19(s,destination_,fmt__,0 /* void value */,source1_,source2_,0 /* void value */,0 /* void value */));
}
/* ternop */
static obj_t ternop(state_t s,obj_t (*cons)(state_t,ternop_t),obj_t (*destination)(state_t),obj_t (*source1)(state_t),obj_t (*source2)(state_t)) {
  obj_t destination_;
  obj_t source1_;
  obj_t source2_;
  destination_ = destination(s);
  source1_ = source1(s);
  source2_ = source2(s);
  return cons(s,__ternop(s,destination_,source1_,source2_));
}
/* ternop-src */
static obj_t ternop_src(state_t s,obj_t (*cons)(state_t,ternop_src_t),obj_t (*source1)(state_t),obj_t (*source2)(state_t),obj_t (*source3)(state_t)) {
  obj_t source1_;
  obj_t source2_;
  obj_t source3_;
  source1_ = source1(s);
  source2_ = source2(s);
  source3_ = source3(s);
  return cons(s,__ternop_src(s,source1_,source2_,source3_));
}
/* binop */
static obj_t binop(state_t s,obj_t (*cons)(state_t,binop_t),obj_t (*destination)(state_t),obj_t (*source)(state_t)) {
  obj_t destination_;
  obj_t source_;
  destination_ = destination(s);
  source_ = source(s);
  return cons(s,__binop(s,destination_,source_));
}
/* binop-fmt */
static obj_t binop_fmt(state_t s,obj_t (*cons)(state_t,struct19_t),obj_t (*fmt_)(state_t),obj_t (*destination)(state_t),obj_t (*source)(state_t)) {
  obj_t fmt__;
  obj_t destination_;
  obj_t source_;
  fmt__ = fmt_(s);
  destination_ = destination(s);
  source_ = source(s);
  return cons(s,__struct19(s,destination_,fmt__,source_,0 /* void value */,0 /* void value */,0 /* void value */,0 /* void value */));
}
/* binop-src */
static obj_t binop_src(state_t s,obj_t (*cons)(state_t,ternop_t),obj_t (*source1)(state_t),obj_t (*source2)(state_t)) {
  obj_t source1_;
  obj_t source2_;
  source1_ = source1(s);
  source2_ = source2(s);
  return cons(s,__ternop(s,0 /* void value */,source1_,source2_));
}
/* unop */
static obj_t unop(state_t s,obj_t (*cons)(state_t,unop_t),obj_t (*destination)(state_t)) {
  obj_t destination_;
  destination_ = destination(s);
  return cons(s,__unop(s,destination_));
}
/* unop-src */
static obj_t unop_src(state_t s,obj_t (*cons)(state_t,unop_src_t),obj_t (*source)(state_t)) {
  obj_t source_;
  source_ = source(s);
  return cons(s,__unop_src(s,source_));
}
/* nullop */
static obj_t nullop(state_t s,obj_t cons) {
  return cons;
}
/* format-from-bits */
static obj_t format_from_bits(state_t s,int_t bits) {
  switch (slice(bits, 0, 5)) {
    case 16: /* '10000' */ {
      return alloc_int(s,CON_S);
    }; break;
    case 17: /* '10001' */ {
      return alloc_int(s,CON_D);
    }; break;
    case 20: /* '10100' */ {
      return alloc_int(s,CON_W);
    }; break;
    case 21: /* '10101' */ {
      return alloc_int(s,CON_L);
    }; break;
    case 22: /* '10110' */ {
      return alloc_int(s,CON_PS);
    }; break;
    default: {
      s->err_str = "pattern match failure in format-from-bits at specifications/mips/mips.ml:1651.5-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* fmt */
static obj_t fmt(state_t s) {
  int_t fmt_;
  fmt_ = s->mon_state.fmt;
  s->mon_state.fmt = 0 /* '00000' */;;
  return format_from_bits(s,fmt_);
}
static INLINE_ATTR obj_t constructor_HINT(state_t s,vec_t arg_of_HINT) {
  con_vec_t adt;
  adt.tag = 55/* HINT */;
  adt.payload = arg_of_HINT;
  return (obj_t) alloc_con_vec(s,adt);
}
static INLINE_ATTR obj_t constructor_IMM(state_t s,obj_t arg_of_IMM) {
  con_obj_t adt;
  adt.tag = 64/* IMM */;
  adt.payload = arg_of_IMM;
  return (obj_t) alloc_con_obj(s,adt);
}
/* hint5 */
static obj_t hint5(state_t s) {
  int_t hint;
  hint = s->mon_state.hint;
  s->mon_state.hint = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_HINT(s,gen_vec(5, hint)));
}
static INLINE_ATTR obj_t constructor_OP(state_t s,vec_t arg_of_OP) {
  con_vec_t adt;
  adt.tag = 60/* OP */;
  adt.payload = arg_of_OP;
  return (obj_t) alloc_con_vec(s,adt);
}
/* op */
static obj_t op(state_t s) {
  int_t op_;
  op_ = s->mon_state.op;
  s->mon_state.op = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_OP(s,gen_vec(5, op_)));
}
static INLINE_ATTR obj_t constructor_COND(state_t s,vec_t arg_of_COND) {
  con_vec_t adt;
  adt.tag = 59/* COND */;
  adt.payload = arg_of_COND;
  return (obj_t) alloc_con_vec(s,adt);
}
/* cond */
static obj_t cond(state_t s) {
  int_t cond_;
  cond_ = s->mon_state.cond;
  s->mon_state.cond = 0 /* '0000' */;;
  return constructor_IMM(s,constructor_COND(s,gen_vec(4, cond_)));
}
static INLINE_ATTR obj_t constructor_CC(state_t s,vec_t arg_of_CC) {
  con_vec_t adt;
  adt.tag = 58/* CC */;
  adt.payload = arg_of_CC;
  return (obj_t) alloc_con_vec(s,adt);
}
/* cc */
static obj_t cc(state_t s) {
  int_t cc_;
  cc_ = s->mon_state.cc;
  s->mon_state.cc = 0 /* '000' */;;
  return constructor_IMM(s,constructor_CC(s,gen_vec(3, cc_)));
}
static INLINE_ATTR obj_t constructor_COFUN(state_t s,vec_t arg_of_COFUN) {
  con_vec_t adt;
  adt.tag = 57/* COFUN */;
  adt.payload = arg_of_COFUN;
  return (obj_t) alloc_con_vec(s,adt);
}
/* cofun */
static obj_t cofun(state_t s) {
  int_t cofun_;
  cofun_ = s->mon_state.cofun;
  s->mon_state.cofun = 0 /* '0000000000000000000000000' */;;
  return constructor_IMM(s,constructor_COFUN(s,gen_vec(25, cofun_)));
}
static INLINE_ATTR obj_t constructor_INSTRINDEX(state_t s,vec_t arg_of_INSTRINDEX) {
  con_vec_t adt;
  adt.tag = 56/* INSTRINDEX */;
  adt.payload = arg_of_INSTRINDEX;
  return (obj_t) alloc_con_vec(s,adt);
}
/* instr_index */
static obj_t instr_index(state_t s) {
  int_t instr_index_;
  instr_index_ = s->mon_state.instr_index;
  s->mon_state.instr_index = 0 /* '00000000000000000000000000' */;;
  return constructor_IMM(s,constructor_INSTRINDEX(s,gen_vec(26, instr_index_)));
}
static INLINE_ATTR obj_t constructor_IMM5(state_t s,vec_t arg_of_IMM5) {
  con_vec_t adt;
  adt.tag = 42/* IMM5 */;
  adt.payload = arg_of_IMM5;
  return (obj_t) alloc_con_vec(s,adt);
}
/* sa */
static obj_t sa(state_t s) {
  int_t sa_;
  sa_ = s->mon_state.sa;
  s->mon_state.sa = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_IMM5(s,gen_vec(5, sa_)));
}
static INLINE_ATTR obj_t constructor_POS(state_t s,vec_t arg_of_POS) {
  con_vec_t adt;
  adt.tag = 54/* POS */;
  adt.payload = arg_of_POS;
  return (obj_t) alloc_con_vec(s,adt);
}
/* lsb */
static obj_t lsb(state_t s) {
  int_t lsb_;
  lsb_ = s->mon_state.lsb;
  s->mon_state.lsb = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_POS(s,gen_vec(5, lsb_)));
}
static INLINE_ATTR obj_t constructor_SIZE(state_t s,vec_t arg_of_SIZE) {
  con_vec_t adt;
  adt.tag = 53/* SIZE */;
  adt.payload = arg_of_SIZE;
  return (obj_t) alloc_con_vec(s,adt);
}
/* msbd */
static obj_t msbd(state_t s) {
  int_t msbd_;
  msbd_ = s->mon_state.msbd;
  s->mon_state.msbd = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_SIZE(s,gen_vec(5, msbd_)));
}
static INLINE_ATTR obj_t constructor_POSSIZE(state_t s,vec_t arg_of_POSSIZE) {
  con_vec_t adt;
  adt.tag = 52/* POSSIZE */;
  adt.payload = arg_of_POSSIZE;
  return (obj_t) alloc_con_vec(s,adt);
}
/* msb */
static obj_t msb(state_t s) {
  int_t msb_;
  msb_ = s->mon_state.msb;
  s->mon_state.msb = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_POSSIZE(s,gen_vec(5, msb_)));
}
static INLINE_ATTR obj_t constructor_STYPE(state_t s,vec_t arg_of_STYPE) {
  con_vec_t adt;
  adt.tag = 51/* STYPE */;
  adt.payload = arg_of_STYPE;
  return (obj_t) alloc_con_vec(s,adt);
}
/* stype */
static obj_t stype(state_t s) {
  int_t stype_;
  stype_ = s->mon_state.stype;
  s->mon_state.stype = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_STYPE(s,gen_vec(5, stype_)));
}
static INLINE_ATTR obj_t constructor_CODE20(state_t s,vec_t arg_of_CODE20) {
  con_vec_t adt;
  adt.tag = 50/* CODE20 */;
  adt.payload = arg_of_CODE20;
  return (obj_t) alloc_con_vec(s,adt);
}
/* code20 */
static obj_t code20(state_t s) {
  int_t code20_;
  code20_ = s->mon_state.code20;
  s->mon_state.code20 = 0 /* '00000000000000000000' */;;
  return constructor_IMM(s,constructor_CODE20(s,gen_vec(20, code20_)));
}
static INLINE_ATTR obj_t constructor_CODE19(state_t s,vec_t arg_of_CODE19) {
  con_vec_t adt;
  adt.tag = 49/* CODE19 */;
  adt.payload = arg_of_CODE19;
  return (obj_t) alloc_con_vec(s,adt);
}
/* code19 */
static obj_t code19(state_t s) {
  int_t code19_;
  code19_ = s->mon_state.code19;
  s->mon_state.code19 = 0 /* '0000000000000000000' */;;
  return constructor_IMM(s,constructor_CODE19(s,gen_vec(19, code19_)));
}
static INLINE_ATTR obj_t constructor_CODE10(state_t s,vec_t arg_of_CODE10) {
  con_vec_t adt;
  adt.tag = 48/* CODE10 */;
  adt.payload = arg_of_CODE10;
  return (obj_t) alloc_con_vec(s,adt);
}
/* code10 */
static obj_t code10(state_t s) {
  int_t code10_;
  code10_ = s->mon_state.code10;
  s->mon_state.code10 = 0 /* '0000000000' */;;
  return constructor_IMM(s,constructor_CODE10(s,gen_vec(10, code10_)));
}
static INLINE_ATTR obj_t constructor_IMPL(state_t s,vec_t arg_of_IMPL) {
  con_vec_t adt;
  adt.tag = 47/* IMPL */;
  adt.payload = arg_of_IMPL;
  return (obj_t) alloc_con_vec(s,adt);
}
/* impl */
static obj_t impl(state_t s) {
  int_t impl_;
  impl_ = s->mon_state.impl;
  s->mon_state.impl = 0 /* '0000000000000000' */;;
  return constructor_IMM(s,constructor_IMPL(s,gen_vec(16, impl_)));
}
static INLINE_ATTR obj_t constructor_SEL(state_t s,vec_t arg_of_SEL) {
  con_vec_t adt;
  adt.tag = 46/* SEL */;
  adt.payload = arg_of_SEL;
  return (obj_t) alloc_con_vec(s,adt);
}
/* sel */
static obj_t sel(state_t s) {
  int_t sel_;
  sel_ = s->mon_state.sel;
  s->mon_state.sel = 0 /* '000' */;;
  return constructor_IMM(s,constructor_SEL(s,gen_vec(3, sel_)));
}
static INLINE_ATTR obj_t constructor_OFFSET9(state_t s,vec_t arg_of_OFFSET9) {
  con_vec_t adt;
  adt.tag = 44/* OFFSET9 */;
  adt.payload = arg_of_OFFSET9;
  return (obj_t) alloc_con_vec(s,adt);
}
/* offset9 */
static obj_t offset9(state_t s) {
  int_t offset9_;
  offset9_ = s->mon_state.offset9;
  s->mon_state.offset9 = 0 /* '000000000' */;;
  return constructor_IMM(s,constructor_OFFSET9(s,gen_vec(9, offset9_)));
}
static INLINE_ATTR obj_t constructor_OFFSET16(state_t s,vec_t arg_of_OFFSET16) {
  con_vec_t adt;
  adt.tag = 45/* OFFSET16 */;
  adt.payload = arg_of_OFFSET16;
  return (obj_t) alloc_con_vec(s,adt);
}
/* offset16 */
static obj_t offset16(state_t s) {
  int_t offset16_;
  offset16_ = s->mon_state.offset16;
  s->mon_state.offset16 = 0 /* '0000000000000000' */;;
  return constructor_IMM(s,constructor_OFFSET16(s,gen_vec(16, offset16_)));
}
static INLINE_ATTR obj_t constructor_IMM16(state_t s,vec_t arg_of_IMM16) {
  con_vec_t adt;
  adt.tag = 43/* IMM16 */;
  adt.payload = arg_of_IMM16;
  return (obj_t) alloc_con_vec(s,adt);
}
/* immediate */
static obj_t immediate(state_t s) {
  int_t immediate_;
  immediate_ = s->mon_state.immediate;
  s->mon_state.immediate = 0 /* '0000000000000000' */;;
  return constructor_IMM(s,constructor_IMM16(s,gen_vec(16, immediate_)));
}
/* fs/ctrl */
static obj_t fs_slash_ctrl(state_t s) {
  int_t fs_;
  fs_ = s->mon_state.fs;
  s->mon_state.fs = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_IMM5(s,gen_vec(5, fs_)));
}
/* fd */
static obj_t fd(state_t s) {
  int_t fd_;
  fd_ = s->mon_state.fd;
  s->mon_state.fd = 0 /* '00000' */;;
  return constructor_FPR(s,fpr_from_bits(s,fd_));
}
/* rt/imm */
static obj_t rt_slash_imm(state_t s) {
  int_t rt_;
  rt_ = s->mon_state.rt;
  s->mon_state.rt = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_IMM5(s,gen_vec(5, rt_)));
}
/* rd/imm */
static obj_t rd_slash_imm(state_t s) {
  int_t rd_;
  rd_ = s->mon_state.rd;
  s->mon_state.rd = 0 /* '00000' */;;
  return constructor_IMM(s,constructor_IMM5(s,gen_vec(5, rd_)));
}
/* rd */
static obj_t rd(state_t s) {
  int_t rd_;
  rd_ = s->mon_state.rd;
  s->mon_state.rd = 0 /* '00000' */;;
  return constructor_GPR(s,gpr_from_bits(s,rd_));
}
/* / */
static obj_t _slash_(state_t s) {
  int_t tok;
  tok = consume(s, 4);
  switch (slice(tok, 26, 6)) {
    case 62: /* '111110' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_SDC2,_slash_Action1,rt_slash_imm,offset16);
    }; break;
    case 61: /* '111101' */ {
      int_t offset16_;
      int_t ft_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      ft_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.ft = ft_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_SDC1,_slash_Action2,_slash_Action3,offset16);
    }; break;
    case 58: /* '111010' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_SWC2,_slash_Action4,rt_slash_imm,offset16);
    }; break;
    case 57: /* '111001' */ {
      int_t offset16_;
      int_t ft_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      ft_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.ft = ft_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_SWC1,_slash_Action5,_slash_Action6,offset16);
    }; break;
    case 56: /* '111000' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_SC,rt,_slash_Action7,offset16);
    }; break;
    case 54: /* '110110' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_LDC2,_slash_Action8,rt_slash_imm,offset16);
    }; break;
    case 53: /* '110101' */ {
      int_t offset16_;
      int_t ft_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      ft_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.ft = ft_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LDC1,ft,_slash_Action9,offset16);
    }; break;
    case 51: /* '110011' */ {
      int_t offset16_;
      int_t hint;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      hint = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.hint = hint;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_PREF,_slash_Action10,hint5,offset16);
    }; break;
    case 50: /* '110010' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_LWC2,_slash_Action11,rt_slash_imm,offset16);
    }; break;
    case 49: /* '110001' */ {
      int_t offset16_;
      int_t ft_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      ft_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.ft = ft_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LWC1,ft,_slash_Action12,offset16);
    }; break;
    case 48: /* '110000' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LL,rt,_slash_Action13,offset16);
    }; break;
    case 47: /* '101111' */ {
      int_t offset16_;
      int_t op_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      op_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.op = op_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_CACHE,_slash_Action14,op,offset16);
    }; break;
    case 46: /* '101110' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_SWR,_slash_Action15,_slash_Action16,offset16);
    }; break;
    case 43: /* '101011' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_SW,_slash_Action17,_slash_Action18,offset16);
    }; break;
    case 42: /* '101010' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_SWL,_slash_Action19,_slash_Action20,offset16);
    }; break;
    case 41: /* '101001' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_SH,_slash_Action21,_slash_Action22,offset16);
    }; break;
    case 40: /* '101000' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_SB,_slash_Action23,_slash_Action24,offset16);
    }; break;
    case 38: /* '100110' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LWR,rt,_slash_Action25,offset16);
    }; break;
    case 37: /* '100101' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LHU,rt,_slash_Action26,offset16);
    }; break;
    case 36: /* '100100' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LBU,rt,_slash_Action27,offset16);
    }; break;
    case 35: /* '100011' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LW,rt,_slash_Action28,offset16);
    }; break;
    case 34: /* '100010' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LWL,rt,_slash_Action29,offset16);
    }; break;
    case 33: /* '100001' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LH,rt,_slash_Action30,offset16);
    }; break;
    case 32: /* '100000' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop(s,constructor_LB,rt,_slash_Action31,offset16);
    }; break;
    case 31: /* '011111' */ {
      switch (slice(tok, 0, 6)) {
        case 32: /* '100000' */ {
          switch (slice(vec_concat(s,gen_vec(5, slice(tok,21,5)),gen_vec(5, slice(tok,6,5))).data, 0, 10)) {
            case 24: /* '0000011000' */ {
              int_t rd_;
              int_t rt_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return binop(s,constructor_SEH,rd,_slash_Action32);
            }; break;
            case 16: /* '0000010000' */ {
              int_t rd_;
              int_t rt_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return binop(s,constructor_SEB,rd,_slash_Action33);
            }; break;
            case 2: /* '0000000010' */ {
              int_t rd_;
              int_t rt_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return binop(s,constructor_WSBH,rd,_slash_Action34);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 59: /* '111011' */ {
          switch (slice(vec_concat(s,gen_vec(5, slice(tok,21,5)),gen_vec(5, slice(tok,6,5))).data, 0, 10)) {
            case 0: /* '0000000000' */ {
              int_t rd_;
              int_t rt_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return binop(s,constructor_RDHWR,rt,rd_slash_imm);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 47: /* '101111' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop(s,constructor_LWE,rt,_slash_Action35,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 46: /* '101110' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop(s,constructor_LLE,rt,_slash_Action36,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 45: /* '101101' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop(s,constructor_LHE,rt,_slash_Action37,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 44: /* '101100' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop(s,constructor_LBE,rt,_slash_Action38,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 41: /* '101001' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop(s,constructor_LHUE,rt,_slash_Action39,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 40: /* '101000' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop(s,constructor_LBUE,rt,_slash_Action40,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 35: /* '100011' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t hint;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              hint = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.hint = hint;;
              s->mon_state.offset9 = offset9_;;
              return ternop_src(s,constructor_PREFE,_slash_Action41,hint5,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 34: /* '100010' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop_src(s,constructor_SWRE,_slash_Action42,_slash_Action43,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 33: /* '100001' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop_src(s,constructor_SWLE,_slash_Action44,_slash_Action45,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 31: /* '011111' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop_src(s,constructor_SWE,_slash_Action46,_slash_Action47,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 30: /* '011110' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop(s,constructor_SCE,rt,_slash_Action48,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 29: /* '011101' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop_src(s,constructor_SHE,_slash_Action49,_slash_Action50,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 28: /* '011100' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop_src(s,constructor_SBE,_slash_Action51,_slash_Action52,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 27: /* '011011' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t op_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              op_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.op = op_;;
              s->mon_state.offset9 = offset9_;;
              return ternop_src(s,constructor_CACHEE,_slash_Action53,op,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 26: /* '011010' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop(s,constructor_LWRE,rt,_slash_Action54,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 25: /* '011001' */ {
          switch (slice(tok, 6, 1)) {
            case 0: /* '0' */ {
              int_t offset9_;
              int_t rt_;
              int_t rs_;
              offset9_ = slice(tok, 7, 9);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.offset9 = offset9_;;
              return ternop(s,constructor_LWLE,rt,_slash_Action55,offset9);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 4: /* '000100' */ {
          int_t lsb_;
          int_t msb_;
          int_t rt_;
          int_t rs_;
          lsb_ = slice(tok, 6, 5);
          msb_ = slice(tok, 11, 5);
          rt_ = slice(tok, 16, 5);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.rt = rt_;;
          s->mon_state.msb = msb_;;
          s->mon_state.lsb = lsb_;;
          return quadop(s,constructor_INS,rt,_slash_Action56,msb,lsb);
        }; break;
        case 0: /* '000000' */ {
          int_t lsb_;
          int_t msbd_;
          int_t rt_;
          int_t rs_;
          lsb_ = slice(tok, 6, 5);
          msbd_ = slice(tok, 11, 5);
          rt_ = slice(tok, 16, 5);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.rt = rt_;;
          s->mon_state.msbd = msbd_;;
          s->mon_state.lsb = lsb_;;
          return quadop(s,constructor_EXT,rt,_slash_Action57,msbd,lsb);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 29: /* '011101' */ {
      int_t instr_index_;
      instr_index_ = slice(tok, 0, 26);
      s->mon_state.instr_index = instr_index_;;
      return unop_src(s,constructor_JALX,instr_index);
    }; break;
    case 28: /* '011100' */ {
      switch (slice(tok, 0, 6)) {
        case 5: /* '000101' */ {
          switch (slice(tok, 6, 10)) {
            case 0: /* '0000000000' */ {
              int_t rt_;
              int_t rs_;
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              return binop_src(s,constructor_MSUBU,_slash_Action58,_slash_Action59);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 4: /* '000100' */ {
          switch (slice(tok, 6, 10)) {
            case 0: /* '0000000000' */ {
              int_t rt_;
              int_t rs_;
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              return binop_src(s,constructor_MSUB,_slash_Action60,_slash_Action61);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 1: /* '000001' */ {
          switch (slice(tok, 6, 10)) {
            case 0: /* '0000000000' */ {
              int_t rt_;
              int_t rs_;
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              return binop_src(s,constructor_MADDU,_slash_Action62,_slash_Action63);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 0: /* '000000' */ {
          switch (slice(tok, 6, 10)) {
            case 0: /* '0000000000' */ {
              int_t rt_;
              int_t rs_;
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              return binop_src(s,constructor_MADD,_slash_Action64,_slash_Action65);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 33: /* '100001' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_CLO,rd,_slash_Action66,_slash_Action67);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 32: /* '100000' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_CLZ,rd,_slash_Action68,_slash_Action69);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 2: /* '000010' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_MUL,rd,_slash_Action70,_slash_Action71);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 63: /* '111111' */ {
          int_t code20_;
          code20_ = slice(tok, 6, 20);
          s->mon_state.code20 = code20_;;
          return unop_src(s,constructor_SDBBP,code20);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 23: /* '010111' */ {
      switch (slice(tok, 16, 5)) {
        case 0: /* '00000' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BGTZL,_slash_Action72,offset16);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 22: /* '010110' */ {
      switch (slice(tok, 16, 5)) {
        case 0: /* '00000' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BLEZL,_slash_Action73,offset16);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 21: /* '010101' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_BNEL,_slash_Action74,_slash_Action75,offset16);
    }; break;
    case 20: /* '010100' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_BEQL,_slash_Action76,_slash_Action77,offset16);
    }; break;
    case 19: /* '010011' */ {
      switch (slice(tok, 0, 6)) {
        case 5: /* '000101' */ {
          switch (slice(tok, 11, 5)) {
            case 0: /* '00000' */ {
              int_t fd_;
              int_t rt_;
              int_t rs_;
              fd_ = slice(tok, 6, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.fd = fd_;;
              return ternop(s,constructor_LUXC1,fd,_slash_Action78,_slash_Action79);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 1: /* '000001' */ {
          switch (slice(tok, 11, 5)) {
            case 0: /* '00000' */ {
              int_t fd_;
              int_t rt_;
              int_t rs_;
              fd_ = slice(tok, 6, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.fd = fd_;;
              return ternop(s,constructor_LDXC1,fd,_slash_Action80,_slash_Action81);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 0: /* '000000' */ {
          switch (slice(tok, 11, 5)) {
            case 0: /* '00000' */ {
              int_t fd_;
              int_t rt_;
              int_t rs_;
              fd_ = slice(tok, 6, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.fd = fd_;;
              return ternop(s,constructor_LWXC1,fd,_slash_Action82,_slash_Action83);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 15: /* '001111' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t hint;
              int_t rt_;
              int_t rs_;
              hint = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.hint = hint;;
              return ternop_src(s,constructor_PREFX,_slash_Action84,_slash_Action85,hint5);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 13: /* '001101' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t fs_;
              int_t rt_;
              int_t rs_;
              fs_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.fs = fs_;;
              return ternop_src(s,constructor_SUXC1,_slash_Action86,_slash_Action87,_slash_Action88);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 9: /* '001001' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t fs_;
              int_t rt_;
              int_t rs_;
              fs_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.fs = fs_;;
              return ternop_src(s,constructor_SDXC1,_slash_Action89,_slash_Action90,_slash_Action91);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 8: /* '001000' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t fs_;
              int_t rt_;
              int_t rs_;
              fs_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.fs = fs_;;
              return ternop_src(s,constructor_SWXC1,_slash_Action92,_slash_Action93,_slash_Action94);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 62: /* '111110' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 22 /* '10110' */;;
          return quadop_fmt(s,constructor_NMSUB_fmt,fmt,fd,_slash_Action95,_slash_Action96,_slash_Action97);
        }; break;
        case 57: /* '111001' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 17 /* '10001' */;;
          return quadop_fmt(s,constructor_NMSUB_fmt,fmt,fd,_slash_Action98,_slash_Action99,_slash_Action100);
        }; break;
        case 56: /* '111000' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 16 /* '10000' */;;
          return quadop_fmt(s,constructor_NMSUB_fmt,fmt,fd,_slash_Action101,_slash_Action102,_slash_Action103);
        }; break;
        case 54: /* '110110' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 22 /* '10110' */;;
          return quadop_fmt(s,constructor_NMADD_fmt,fmt,fd,_slash_Action104,_slash_Action105,_slash_Action106);
        }; break;
        case 49: /* '110001' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 17 /* '10001' */;;
          return quadop_fmt(s,constructor_NMADD_fmt,fmt,fd,_slash_Action107,_slash_Action108,_slash_Action109);
        }; break;
        case 48: /* '110000' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 16 /* '10000' */;;
          return quadop_fmt(s,constructor_NMADD_fmt,fmt,fd,_slash_Action110,_slash_Action111,_slash_Action112);
        }; break;
        case 46: /* '101110' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 22 /* '10110' */;;
          return quadop_fmt(s,constructor_MSUB_fmt,fmt,fd,_slash_Action113,_slash_Action114,_slash_Action115);
        }; break;
        case 41: /* '101001' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 17 /* '10001' */;;
          return quadop_fmt(s,constructor_MSUB_fmt,fmt,fd,_slash_Action116,_slash_Action117,_slash_Action118);
        }; break;
        case 40: /* '101000' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 16 /* '10000' */;;
          return quadop_fmt(s,constructor_MSUB_fmt,fmt,fd,_slash_Action119,_slash_Action120,_slash_Action121);
        }; break;
        case 38: /* '100110' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 22 /* '10110' */;;
          return quadop_fmt(s,constructor_MADD_fmt,fmt,fd,_slash_Action122,_slash_Action123,_slash_Action124);
        }; break;
        case 33: /* '100001' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 17 /* '10001' */;;
          return quadop_fmt(s,constructor_MADD_fmt,fmt,fd,_slash_Action125,_slash_Action126,_slash_Action127);
        }; break;
        case 32: /* '100000' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t fr_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          fr_ = slice(tok, 21, 5);
          s->mon_state.fr = fr_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          s->mon_state.fmt = 16 /* '10000' */;;
          return quadop_fmt(s,constructor_MADD_fmt,fmt,fd,_slash_Action128,_slash_Action129,_slash_Action130);
        }; break;
        case 30: /* '011110' */ {
          int_t fd_;
          int_t fs_;
          int_t ft_;
          int_t rs_;
          fd_ = slice(tok, 6, 5);
          fs_ = slice(tok, 11, 5);
          ft_ = slice(tok, 16, 5);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.ft = ft_;;
          s->mon_state.fs = fs_;;
          s->mon_state.fd = fd_;;
          return quadop(s,constructor_ALNV_PS,fd,_slash_Action131,_slash_Action132,_slash_Action133);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 18: /* '010010' */ {
      switch (slice(tok, 25, 1)) {
        case 1: /* '1' */ {
          int_t cofun_;
          cofun_ = slice(tok, 0, 25);
          s->mon_state.cofun = cofun_;;
          return unop_src(s,constructor_COP2,cofun);
        }; break;
        case 0: /* '0' */ {
          switch (slice(tok, 21, 4)) {
            case 8: /* '1000' */ {
              switch (slice(tok, 16, 2)) {
                case 3: /* '11' */ {
                  int_t offset16_;
                  int_t cc_;
                  offset16_ = slice(tok, 0, 16);
                  cc_ = slice(tok, 18, 3);
                  s->mon_state.cc = cc_;;
                  s->mon_state.offset16 = offset16_;;
                  return binop_src(s,constructor_BC2TL,cc,offset16);
                }; break;
                case 2: /* '10' */ {
                  int_t offset16_;
                  int_t cc_;
                  offset16_ = slice(tok, 0, 16);
                  cc_ = slice(tok, 18, 3);
                  s->mon_state.cc = cc_;;
                  s->mon_state.offset16 = offset16_;;
                  return binop_src(s,constructor_BC2FL,cc,offset16);
                }; break;
                case 1: /* '01' */ {
                  int_t offset16_;
                  int_t cc_;
                  offset16_ = slice(tok, 0, 16);
                  cc_ = slice(tok, 18, 3);
                  s->mon_state.cc = cc_;;
                  s->mon_state.offset16 = offset16_;;
                  return binop_src(s,constructor_BC2T,cc,offset16);
                }; break;
                case 0: /* '00' */ {
                  int_t offset16_;
                  int_t cc_;
                  offset16_ = slice(tok, 0, 16);
                  cc_ = slice(tok, 18, 3);
                  s->mon_state.cc = cc_;;
                  s->mon_state.offset16 = offset16_;;
                  return binop_src(s,constructor_BC2F,cc,offset16);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 7: /* '0111' */ {
              int_t impl_;
              int_t rt_;
              impl_ = slice(tok, 0, 16);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.impl = impl_;;
              return binop_src(s,constructor_MTHC2,_slash_Action134,impl);
            }; break;
            case 6: /* '0110' */ {
              int_t impl_;
              int_t rt_;
              impl_ = slice(tok, 0, 16);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.impl = impl_;;
              return binop_src(s,constructor_CTC2,_slash_Action135,impl);
            }; break;
            case 4: /* '0100' */ {
              int_t impl_;
              int_t rt_;
              impl_ = slice(tok, 0, 16);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.impl = impl_;;
              return binop_src(s,constructor_MTC2,_slash_Action136,impl);
            }; break;
            case 3: /* '0011' */ {
              int_t impl_;
              int_t rt_;
              impl_ = slice(tok, 0, 16);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.impl = impl_;;
              return binop(s,constructor_MFHC2,rt,impl);
            }; break;
            case 2: /* '0010' */ {
              int_t impl_;
              int_t rt_;
              impl_ = slice(tok, 0, 16);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.impl = impl_;;
              return binop(s,constructor_CFC2,rt,impl);
            }; break;
            case 0: /* '0000' */ {
              int_t impl_;
              int_t rt_;
              impl_ = slice(tok, 0, 16);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.impl = impl_;;
              return binop(s,constructor_MFC2,rt,impl);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 17: /* '010001' */ {
      switch (slice(tok, 21, 5)) {
        case 22: /* '10110' */ {
          switch (slice(tok, 4, 2)) {
            case 2: /* '10' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 0, 4)) {
                case 8: /* '1000' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop(s,constructor_CVT_S_PL,fd,_slash_Action137);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 0: /* '0000' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop(s,constructor_CVT_S_PU,fd,_slash_Action138);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 15: /* '1111' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop(s,constructor_PUU_PS,fd,_slash_Action146,_slash_Action147);
                }; break;
                case 14: /* '1110' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop(s,constructor_PUL_PS,fd,_slash_Action148,_slash_Action149);
                }; break;
                case 13: /* '1101' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop(s,constructor_PLU_PS,fd,_slash_Action150,_slash_Action151);
                }; break;
                case 12: /* '1100' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop(s,constructor_PLL_PS,fd,_slash_Action152,_slash_Action153);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 0: /* '00' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 0, 4)) {
                case 7: /* '0111' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 22 /* '10110' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_NEG_fmt,fmt,fd,_slash_Action139);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 6: /* '0110' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 22 /* '10110' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_MOV_fmt,fmt,fd,_slash_Action140);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 5: /* '0101' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 22 /* '10110' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_ABS_fmt,fmt,fd,_slash_Action141);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 2: /* '0010' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 22 /* '10110' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_MUL_fmt,fmt,fd,_slash_Action158,_slash_Action159);
                }; break;
                case 1: /* '0001' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 22 /* '10110' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_SUB_fmt,fmt,fd,_slash_Action160,_slash_Action161);
                }; break;
                case 0: /* '0000' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 22 /* '10110' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_ADD_fmt,fmt,fd,_slash_Action162,_slash_Action163);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 1: /* '01' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 0, 4)) {
                case 1: /* '0001' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 2)) {
                    case 1: /* '01' */ {
                      int_t fd_;
                      int_t fs_;
                      int_t cc_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      cc_ = slice(tok, 18, 3);
                      s->mon_state.fmt = 22 /* '10110' */;;
                      s->mon_state.cc = cc_;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return ternop_fmt(s,constructor_MOVT_fmt,fmt,fd,cc,_slash_Action142);
                    }; break;
                    case 0: /* '00' */ {
                      int_t fd_;
                      int_t fs_;
                      int_t cc_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      cc_ = slice(tok, 18, 3);
                      s->mon_state.fmt = 22 /* '10110' */;;
                      s->mon_state.cc = cc_;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return ternop_fmt(s,constructor_MOVF_fmt,fmt,fd,cc,_slash_Action143);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 3: /* '0011' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t rt_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  rt_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 22 /* '10110' */;;
                  s->mon_state.rt = rt_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_MOVN_fmt,fmt,fd,_slash_Action154,_slash_Action155);
                }; break;
                case 2: /* '0010' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t rt_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  rt_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 22 /* '10110' */;;
                  s->mon_state.rt = rt_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_MOVZ_fmt,fmt,fd,_slash_Action156,_slash_Action157);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 3: /* '11' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 4, 2)) {
                case 0: /* '00' */ {
                  int_t cond_;
                  int_t cc_;
                  int_t fs_;
                  int_t ft_;
                  cond_ = slice(tok, 0, 4);
                  cc_ = slice(tok, 8, 3);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 22 /* '10110' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.cc = cc_;;
                  s->mon_state.cond = cond_;;
                  return quadop_fmt_src(s,constructor_C_cond_fmt,fmt,_slash_Action144,_slash_Action145,cc,cond);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 21: /* '10101' */ {
          switch (vec_concat(s,gen_vec(5, slice(tok,16,5)),gen_vec(6, slice(tok,0,6))).data) {
            case 33: /* '00000100001' */ {
              int_t fd_;
              int_t fs_;
              fd_ = slice(tok, 6, 5);
              fs_ = slice(tok, 11, 5);
              s->mon_state.fmt = 21 /* '10101' */;;
              s->mon_state.fs = fs_;;
              s->mon_state.fd = fd_;;
              return binop_fmt(s,constructor_CVT_D_fmt,fmt,fd,_slash_Action164);
            }; break;
            case 32: /* '00000100000' */ {
              int_t fd_;
              int_t fs_;
              fd_ = slice(tok, 6, 5);
              fs_ = slice(tok, 11, 5);
              s->mon_state.fmt = 21 /* '10101' */;;
              s->mon_state.fs = fs_;;
              s->mon_state.fd = fd_;;
              return binop_fmt(s,constructor_CVT_S_fmt,fmt,fd,_slash_Action165);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 20: /* '10100' */ {
          switch (vec_concat(s,gen_vec(5, slice(tok,16,5)),gen_vec(6, slice(tok,0,6))).data) {
            case 33: /* '00000100001' */ {
              int_t fd_;
              int_t fs_;
              fd_ = slice(tok, 6, 5);
              fs_ = slice(tok, 11, 5);
              s->mon_state.fmt = 20 /* '10100' */;;
              s->mon_state.fs = fs_;;
              s->mon_state.fd = fd_;;
              return binop_fmt(s,constructor_CVT_D_fmt,fmt,fd,_slash_Action166);
            }; break;
            case 32: /* '00000100000' */ {
              int_t fd_;
              int_t fs_;
              fd_ = slice(tok, 6, 5);
              fs_ = slice(tok, 11, 5);
              s->mon_state.fmt = 20 /* '10100' */;;
              s->mon_state.fs = fs_;;
              s->mon_state.fd = fd_;;
              return binop_fmt(s,constructor_CVT_S_fmt,fmt,fd,_slash_Action167);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 17: /* '10001' */ {
          switch (slice(tok, 4, 2)) {
            case 2: /* '10' */ {
              switch (vec_concat(s,gen_vec(5, slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data,6,5)),gen_vec(4, slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data,0,4))).data) {
                case 5: /* '000000101' */ {
                  int_t fd_;
                  int_t fs_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return binop_fmt(s,constructor_CVT_L_fmt,fmt,fd,_slash_Action168);
                }; break;
                case 4: /* '000000100' */ {
                  int_t fd_;
                  int_t fs_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return binop_fmt(s,constructor_CVT_W_fmt,fmt,fd,_slash_Action169);
                }; break;
                case 0: /* '000000000' */ {
                  int_t fd_;
                  int_t fs_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return binop_fmt(s,constructor_CVT_S_fmt,fmt,fd,_slash_Action170);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 1: /* '01' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 0, 4)) {
                case 6: /* '0110' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_RSQRT_fmt,fmt,fd,_slash_Action171);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 5: /* '0101' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_RECIP_fmt,fmt,fd,_slash_Action172);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 1: /* '0001' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 2)) {
                    case 1: /* '01' */ {
                      int_t fd_;
                      int_t fs_;
                      int_t cc_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      cc_ = slice(tok, 18, 3);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.cc = cc_;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return ternop_fmt(s,constructor_MOVT_fmt,fmt,fd,cc,_slash_Action185);
                    }; break;
                    case 0: /* '00' */ {
                      int_t fd_;
                      int_t fs_;
                      int_t cc_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      cc_ = slice(tok, 18, 3);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.cc = cc_;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return ternop_fmt(s,constructor_MOVF_fmt,fmt,fd,cc,_slash_Action186);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 3: /* '0011' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t rt_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  rt_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.rt = rt_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_MOVN_fmt,fmt,fd,_slash_Action189,_slash_Action190);
                }; break;
                case 2: /* '0010' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t rt_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  rt_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.rt = rt_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_MOVZ_fmt,fmt,fd,_slash_Action191,_slash_Action192);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 0: /* '00' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 0, 4)) {
                case 15: /* '1111' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_FLOOR_W_fmt,fmt,fd,_slash_Action173);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 14: /* '1110' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_CEIL_W_fmt,fmt,fd,_slash_Action174);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 13: /* '1101' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_TRUNC_W_fmt,fmt,fd,_slash_Action175);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 12: /* '1100' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_ROUND_W_fmt,fmt,fd,_slash_Action176);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 11: /* '1011' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_FLOOR_L_fmt,fmt,fd,_slash_Action177);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 10: /* '1010' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_CEIL_L_fmt,fmt,fd,_slash_Action178);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 9: /* '1001' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_TRUNC_L_fmt,fmt,fd,_slash_Action179);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 8: /* '1000' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_ROUND_L_fmt,fmt,fd,_slash_Action180);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 7: /* '0111' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_NEG_fmt,fmt,fd,_slash_Action181);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 6: /* '0110' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_MOV_fmt,fmt,fd,_slash_Action182);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 5: /* '0101' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_ABS_fmt,fmt,fd,_slash_Action183);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 4: /* '0100' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 17 /* '10001' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_SQRT_fmt,fmt,fd,_slash_Action184);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 3: /* '0011' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_DIV_fmt,fmt,fd,_slash_Action193,_slash_Action194);
                }; break;
                case 2: /* '0010' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_MUL_fmt,fmt,fd,_slash_Action195,_slash_Action196);
                }; break;
                case 1: /* '0001' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_SUB_fmt,fmt,fd,_slash_Action197,_slash_Action198);
                }; break;
                case 0: /* '0000' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_ADD_fmt,fmt,fd,_slash_Action199,_slash_Action200);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 3: /* '11' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 4, 2)) {
                case 0: /* '00' */ {
                  int_t cond_;
                  int_t cc_;
                  int_t fs_;
                  int_t ft_;
                  cond_ = slice(tok, 0, 4);
                  cc_ = slice(tok, 8, 3);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 17 /* '10001' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.cc = cc_;;
                  s->mon_state.cond = cond_;;
                  return quadop_fmt_src(s,constructor_C_cond_fmt,fmt,_slash_Action187,_slash_Action188,cc,cond);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 16: /* '10000' */ {
          switch (slice(tok, 4, 2)) {
            case 2: /* '10' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 0, 4)) {
                case 5: /* '0101' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_CVT_L_fmt,fmt,fd,_slash_Action201);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 4: /* '0100' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_CVT_W_fmt,fmt,fd,_slash_Action202);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 1: /* '0001' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_CVT_D_fmt,fmt,fd,_slash_Action203);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 6: /* '0110' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop(s,constructor_CVT_PS_S,fd,_slash_Action222,_slash_Action223);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 1: /* '01' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 0, 4)) {
                case 6: /* '0110' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_RSQRT_fmt,fmt,fd,_slash_Action204);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 5: /* '0101' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_RECIP_fmt,fmt,fd,_slash_Action205);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 1: /* '0001' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 2)) {
                    case 1: /* '01' */ {
                      int_t fd_;
                      int_t fs_;
                      int_t cc_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      cc_ = slice(tok, 18, 3);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.cc = cc_;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return ternop_fmt(s,constructor_MOVT_fmt,fmt,fd,cc,_slash_Action218);
                    }; break;
                    case 0: /* '00' */ {
                      int_t fd_;
                      int_t fs_;
                      int_t cc_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      cc_ = slice(tok, 18, 3);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.cc = cc_;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return ternop_fmt(s,constructor_MOVF_fmt,fmt,fd,cc,_slash_Action219);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 3: /* '0011' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t rt_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  rt_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 16 /* '10000' */;;
                  s->mon_state.rt = rt_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_MOVN_fmt,fmt,fd,_slash_Action224,_slash_Action225);
                }; break;
                case 2: /* '0010' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t rt_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  rt_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 16 /* '10000' */;;
                  s->mon_state.rt = rt_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_MOVZ_fmt,fmt,fd,_slash_Action226,_slash_Action227);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 0: /* '00' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 0, 4)) {
                case 15: /* '1111' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_FLOOR_W_fmt,fmt,fd,_slash_Action206);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 14: /* '1110' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_CEIL_W_fmt,fmt,fd,_slash_Action207);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 13: /* '1101' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_TRUNC_W_fmt,fmt,fd,_slash_Action208);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 12: /* '1100' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_ROUND_W_fmt,fmt,fd,_slash_Action209);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 11: /* '1011' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_FLOOR_L_fmt,fmt,fd,_slash_Action210);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 10: /* '1010' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_CEIL_L_fmt,fmt,fd,_slash_Action211);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 9: /* '1001' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_TRUNC_L_fmt,fmt,fd,_slash_Action212);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 8: /* '1000' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_ROUND_L_fmt,fmt,fd,_slash_Action213);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 7: /* '0111' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_NEG_fmt,fmt,fd,_slash_Action214);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 6: /* '0110' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_MOV_fmt,fmt,fd,_slash_Action215);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 5: /* '0101' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_ABS_fmt,fmt,fd,_slash_Action216);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 4: /* '0100' */ {
                  switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 6, 5)) {
                    case 0: /* '00000' */ {
                      int_t fd_;
                      int_t fs_;
                      fd_ = slice(tok, 6, 5);
                      fs_ = slice(tok, 11, 5);
                      s->mon_state.fmt = 16 /* '10000' */;;
                      s->mon_state.fs = fs_;;
                      s->mon_state.fd = fd_;;
                      return binop_fmt(s,constructor_SQRT_fmt,fmt,fd,_slash_Action217);
                    }; break;
                    default: {
                      unconsume(s, 4);
                      s->err_str = "DecodeSequenceMatchFailure";
                      longjmp(s->err_tgt,0);
                    }; break;
                  };
                }; break;
                case 3: /* '0011' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 16 /* '10000' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_DIV_fmt,fmt,fd,_slash_Action228,_slash_Action229);
                }; break;
                case 2: /* '0010' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 16 /* '10000' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_MUL_fmt,fmt,fd,_slash_Action230,_slash_Action231);
                }; break;
                case 1: /* '0001' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 16 /* '10000' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_SUB_fmt,fmt,fd,_slash_Action232,_slash_Action233);
                }; break;
                case 0: /* '0000' */ {
                  int_t fd_;
                  int_t fs_;
                  int_t ft_;
                  fd_ = slice(tok, 6, 5);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 16 /* '10000' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.fd = fd_;;
                  return ternop_fmt(s,constructor_ADD_fmt,fmt,fd,_slash_Action234,_slash_Action235);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 3: /* '11' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,16,5)),vec_concat(s,gen_vec(2, slice(tok,6,2)),gen_vec(4, slice(tok,0,4)))).data, 4, 2)) {
                case 0: /* '00' */ {
                  int_t cond_;
                  int_t cc_;
                  int_t fs_;
                  int_t ft_;
                  cond_ = slice(tok, 0, 4);
                  cc_ = slice(tok, 8, 3);
                  fs_ = slice(tok, 11, 5);
                  ft_ = slice(tok, 16, 5);
                  s->mon_state.fmt = 16 /* '10000' */;;
                  s->mon_state.ft = ft_;;
                  s->mon_state.fs = fs_;;
                  s->mon_state.cc = cc_;;
                  s->mon_state.cond = cond_;;
                  return quadop_fmt_src(s,constructor_C_cond_fmt,fmt,_slash_Action220,_slash_Action221,cc,cond);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 8: /* '01000' */ {
          switch (slice(tok, 16, 2)) {
            case 3: /* '11' */ {
              int_t offset16_;
              int_t cc_;
              offset16_ = slice(tok, 0, 16);
              cc_ = slice(tok, 18, 3);
              s->mon_state.cc = cc_;;
              s->mon_state.offset16 = offset16_;;
              return binop_src(s,constructor_BC1TL,cc,offset16);
            }; break;
            case 2: /* '10' */ {
              int_t offset16_;
              int_t cc_;
              offset16_ = slice(tok, 0, 16);
              cc_ = slice(tok, 18, 3);
              s->mon_state.cc = cc_;;
              s->mon_state.offset16 = offset16_;;
              return binop_src(s,constructor_BC1FL,cc,offset16);
            }; break;
            case 1: /* '01' */ {
              int_t offset16_;
              int_t cc_;
              offset16_ = slice(tok, 0, 16);
              cc_ = slice(tok, 18, 3);
              s->mon_state.cc = cc_;;
              s->mon_state.offset16 = offset16_;;
              return binop_src(s,constructor_BC1T,cc,offset16);
            }; break;
            case 0: /* '00' */ {
              int_t offset16_;
              int_t cc_;
              offset16_ = slice(tok, 0, 16);
              cc_ = slice(tok, 18, 3);
              s->mon_state.cc = cc_;;
              s->mon_state.offset16 = offset16_;;
              return binop_src(s,constructor_BC1F,cc,offset16);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 7: /* '00111' */ {
          switch (slice(tok, 0, 11)) {
            case 0: /* '00000000000' */ {
              int_t fs_;
              int_t rt_;
              fs_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.fs = fs_;;
              return binop(s,constructor_MTHC1,fs,_slash_Action236);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 6: /* '00110' */ {
          switch (slice(tok, 0, 11)) {
            case 0: /* '00000000000' */ {
              int_t fs_;
              int_t rt_;
              fs_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.fs = fs_;;
              return binop_src(s,constructor_CTC1,_slash_Action237,fs_slash_ctrl);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 4: /* '00100' */ {
          switch (slice(tok, 0, 11)) {
            case 0: /* '00000000000' */ {
              int_t fs_;
              int_t rt_;
              fs_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.fs = fs_;;
              return binop(s,constructor_MTC1,fs,_slash_Action238);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 3: /* '00011' */ {
          switch (slice(tok, 0, 11)) {
            case 0: /* '00000000000' */ {
              int_t fs_;
              int_t rt_;
              fs_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.fs = fs_;;
              return binop(s,constructor_MFHC1,rt,_slash_Action239);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 2: /* '00010' */ {
          switch (slice(tok, 0, 11)) {
            case 0: /* '00000000000' */ {
              int_t fs_;
              int_t rt_;
              fs_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.fs = fs_;;
              return binop(s,constructor_CFC1,rt,_slash_Action240);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 0: /* '00000' */ {
          switch (slice(tok, 0, 11)) {
            case 0: /* '00000000000' */ {
              int_t fs_;
              int_t rt_;
              fs_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.fs = fs_;;
              return binop(s,constructor_MFC1,rt,_slash_Action241);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 16: /* '010000' */ {
      switch (vec_concat(s,gen_vec(1, slice(tok,25,1)),gen_vec(3, slice(tok,3,3))).data) {
        case 11: /* '1011' */ {
          switch (slice(vec_concat(s,gen_vec(19, slice(tok,6,19)),gen_vec(3, slice(tok,0,3))).data, 0, 22)) {
            case 7: /* '0000000000000000000111' */ {
              return nullop(s,alloc_int(s,CON_DERET));
            }; break;
            case 0: /* '0000000000000000000000' */ {
              return nullop(s,alloc_int(s,CON_ERET));
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 9: /* '1001' */ {
          switch (slice(vec_concat(s,gen_vec(19, slice(tok,6,19)),gen_vec(3, slice(tok,0,3))).data, 0, 22)) {
            case 0: /* '0000000000000000000000' */ {
              return nullop(s,alloc_int(s,CON_TLBP));
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 8: /* '1000' */ {
          switch (slice(vec_concat(s,gen_vec(19, slice(tok,6,19)),gen_vec(3, slice(tok,0,3))).data, 0, 22)) {
            case 6: /* '0000000000000000000110' */ {
              return nullop(s,alloc_int(s,CON_TLBWR));
            }; break;
            case 4: /* '0000000000000000000100' */ {
              return nullop(s,alloc_int(s,CON_TLBINVF));
            }; break;
            case 3: /* '0000000000000000000011' */ {
              return nullop(s,alloc_int(s,CON_TLBINV));
            }; break;
            case 2: /* '0000000000000000000010' */ {
              return nullop(s,alloc_int(s,CON_TLBWI));
            }; break;
            case 1: /* '0000000000000000000001' */ {
              return nullop(s,alloc_int(s,CON_TLBR));
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 12: /* '1100' */ {
          switch (slice(tok, 0, 3)) {
            case 0: /* '000' */ {
              int_t code19_;
              code19_ = slice(tok, 6, 19);
              s->mon_state.code19 = code19_;;
              return unop_src(s,constructor_WAIT,code19);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 0: /* '0000' */ {
          switch (vec_concat(s,gen_vec(4, slice(tok,21,4)),gen_vec(5, slice(tok,6,5))).data) {
            case 448: /* '111000000' */ {
              switch (slice(tok, 0, 3)) {
                case 0: /* '000' */ {
                  int_t rd_;
                  int_t rt_;
                  rd_ = slice(tok, 11, 5);
                  rt_ = slice(tok, 16, 5);
                  s->mon_state.rt = rt_;;
                  s->mon_state.rd = rd_;;
                  return binop_src(s,constructor_WRPGPR,_slash_Action242,rd_slash_imm);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 352: /* '101100000' */ {
              switch (slice(vec_concat(s,gen_vec(5, slice(tok,11,5)),gen_vec(3, slice(tok,0,3))).data, 0, 8)) {
                case 96: /* '01100000' */ {
                  int_t rt_;
                  rt_ = slice(tok, 16, 5);
                  s->mon_state.rt = rt_;;
                  return unop(s,constructor_DI,rt);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 320: /* '101000000' */ {
              switch (slice(tok, 0, 3)) {
                case 0: /* '000' */ {
                  int_t rd_;
                  int_t rt_;
                  rd_ = slice(tok, 11, 5);
                  rt_ = slice(tok, 16, 5);
                  s->mon_state.rt = rt_;;
                  s->mon_state.rd = rd_;;
                  return binop(s,constructor_RDPGPR,rd,rt_slash_imm);
                }; break;
                default: {
                  unconsume(s, 4);
                  s->err_str = "DecodeSequenceMatchFailure";
                  longjmp(s->err_tgt,0);
                }; break;
              };
            }; break;
            case 128: /* '010000000' */ {
              int_t sel_;
              int_t rd_;
              int_t rt_;
              sel_ = slice(tok, 0, 3);
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              s->mon_state.sel = sel_;;
              return ternop_src(s,constructor_MTC0,_slash_Action243,rd_slash_imm,sel);
            }; break;
            case 0: /* '000000000' */ {
              int_t sel_;
              int_t rd_;
              int_t rt_;
              sel_ = slice(tok, 0, 3);
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              s->mon_state.sel = sel_;;
              return ternop(s,constructor_MFC0,rt,rd_slash_imm,sel);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 4: /* '0100' */ {
          switch (vec_concat(s,gen_vec(4, slice(tok,21,4)),gen_vec(13, slice(vec_concat(s,gen_vec(19, slice(tok,6,19)),gen_vec(3, slice(tok,0,3))).data,0,13))).data) {
            case 93184: /* '10110110000000000' */ {
              int_t rt_;
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              return unop(s,constructor_EI,rt);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 15: /* '001111' */ {
      switch (slice(tok, 21, 5)) {
        case 0: /* '00000' */ {
          int_t immediate_;
          int_t rt_;
          immediate_ = slice(tok, 0, 16);
          rt_ = slice(tok, 16, 5);
          s->mon_state.rt = rt_;;
          s->mon_state.immediate = immediate_;;
          return binop(s,constructor_LUI,rt,immediate);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 14: /* '001110' */ {
      int_t immediate_;
      int_t rt_;
      int_t rs_;
      immediate_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.immediate = immediate_;;
      return ternop(s,constructor_XORI,rt,_slash_Action244,immediate);
    }; break;
    case 13: /* '001101' */ {
      int_t immediate_;
      int_t rt_;
      int_t rs_;
      immediate_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.immediate = immediate_;;
      return ternop(s,constructor_ORI,rt,_slash_Action245,immediate);
    }; break;
    case 12: /* '001100' */ {
      int_t immediate_;
      int_t rt_;
      int_t rs_;
      immediate_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.immediate = immediate_;;
      return ternop(s,constructor_ANDI,rt,_slash_Action246,immediate);
    }; break;
    case 11: /* '001011' */ {
      int_t immediate_;
      int_t rt_;
      int_t rs_;
      immediate_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.immediate = immediate_;;
      return ternop(s,constructor_SLTIU,rt,_slash_Action247,immediate);
    }; break;
    case 10: /* '001010' */ {
      int_t immediate_;
      int_t rt_;
      int_t rs_;
      immediate_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.immediate = immediate_;;
      return ternop(s,constructor_SLTI,rt,_slash_Action248,immediate);
    }; break;
    case 9: /* '001001' */ {
      int_t immediate_;
      int_t rt_;
      int_t rs_;
      immediate_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.immediate = immediate_;;
      return ternop(s,constructor_ADDIU,rt,_slash_Action249,immediate);
    }; break;
    case 8: /* '001000' */ {
      int_t immediate_;
      int_t rt_;
      int_t rs_;
      immediate_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.immediate = immediate_;;
      return ternop(s,constructor_ADDI,rt,_slash_Action250,immediate);
    }; break;
    case 7: /* '000111' */ {
      switch (slice(tok, 16, 5)) {
        case 0: /* '00000' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BGTZ,_slash_Action251,offset16);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 6: /* '000110' */ {
      switch (slice(tok, 16, 5)) {
        case 0: /* '00000' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BLEZ,_slash_Action252,offset16);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 5: /* '000101' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_BNE,_slash_Action253,_slash_Action254,offset16);
    }; break;
    case 4: /* '000100' */ {
      int_t offset16_;
      int_t rt_;
      int_t rs_;
      offset16_ = slice(tok, 0, 16);
      rt_ = slice(tok, 16, 5);
      rs_ = slice(tok, 21, 5);
      s->mon_state.rs = rs_;;
      s->mon_state.rt = rt_;;
      s->mon_state.offset16 = offset16_;;
      return ternop_src(s,constructor_BEQ,_slash_Action255,_slash_Action256,offset16);
    }; break;
    case 3: /* '000011' */ {
      int_t instr_index_;
      instr_index_ = slice(tok, 0, 26);
      s->mon_state.instr_index = instr_index_;;
      return unop_src(s,constructor_JAL,instr_index);
    }; break;
    case 2: /* '000010' */ {
      int_t instr_index_;
      instr_index_ = slice(tok, 0, 26);
      s->mon_state.instr_index = instr_index_;;
      return unop_src(s,constructor_J,instr_index);
    }; break;
    case 1: /* '000001' */ {
      switch (slice(tok, 16, 5)) {
        case 31: /* '11111' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_SYNCI,_slash_Action257,offset16);
        }; break;
        case 19: /* '10011' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BGEZALL,_slash_Action258,offset16);
        }; break;
        case 18: /* '10010' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BLTZALL,_slash_Action259,offset16);
        }; break;
        case 17: /* '10001' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BGEZAL,_slash_Action260,offset16);
        }; break;
        case 16: /* '10000' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BLTZAL,_slash_Action261,offset16);
        }; break;
        case 14: /* '01110' */ {
          int_t immediate_;
          int_t rs_;
          immediate_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.immediate = immediate_;;
          return binop_src(s,constructor_TNEI,_slash_Action262,immediate);
        }; break;
        case 12: /* '01100' */ {
          int_t immediate_;
          int_t rs_;
          immediate_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.immediate = immediate_;;
          return binop_src(s,constructor_TEQI,_slash_Action263,immediate);
        }; break;
        case 11: /* '01011' */ {
          int_t immediate_;
          int_t rs_;
          immediate_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.immediate = immediate_;;
          return binop_src(s,constructor_TLTIU,_slash_Action264,immediate);
        }; break;
        case 10: /* '01010' */ {
          int_t immediate_;
          int_t rs_;
          immediate_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.immediate = immediate_;;
          return binop_src(s,constructor_TLTI,_slash_Action265,immediate);
        }; break;
        case 9: /* '01001' */ {
          int_t immediate_;
          int_t rs_;
          immediate_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.immediate = immediate_;;
          return binop_src(s,constructor_TGEIU,_slash_Action266,immediate);
        }; break;
        case 8: /* '01000' */ {
          int_t immediate_;
          int_t rs_;
          immediate_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.immediate = immediate_;;
          return binop_src(s,constructor_TGEI,_slash_Action267,immediate);
        }; break;
        case 3: /* '00011' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BGEZL,_slash_Action268,offset16);
        }; break;
        case 2: /* '00010' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BLTZL,_slash_Action269,offset16);
        }; break;
        case 1: /* '00001' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BGEZ,_slash_Action270,offset16);
        }; break;
        case 0: /* '00000' */ {
          int_t offset16_;
          int_t rs_;
          offset16_ = slice(tok, 0, 16);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.offset16 = offset16_;;
          return binop_src(s,constructor_BLTZ,_slash_Action271,offset16);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 0: /* '000000' */ {
      switch (slice(tok, 0, 6)) {
        case 2: /* '000010' */ {
          switch (slice(tok, 21, 5)) {
            case 1: /* '00001' */ {
              int_t sa_;
              int_t rd_;
              int_t rt_;
              sa_ = slice(tok, 6, 5);
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              s->mon_state.sa = sa_;;
              return ternop(s,constructor_ROTR,rd,_slash_Action272,sa);
            }; break;
            case 0: /* '00000' */ {
              int_t sa_;
              int_t rd_;
              int_t rt_;
              sa_ = slice(tok, 6, 5);
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              s->mon_state.sa = sa_;;
              return ternop(s,constructor_SRL,rd,_slash_Action274,sa);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 15: /* '001111' */ {
          switch (slice(tok, 11, 15)) {
            case 0: /* '000000000000000' */ {
              int_t stype_;
              stype_ = slice(tok, 6, 5);
              s->mon_state.stype = stype_;;
              return unop_src(s,constructor_SYNC,stype);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 18: /* '010010' */ {
          switch (vec_concat(s,gen_vec(10, slice(tok,16,10)),gen_vec(5, slice(tok,6,5))).data) {
            case 0: /* '000000000000000' */ {
              int_t rd_;
              rd_ = slice(tok, 11, 5);
              s->mon_state.rd = rd_;;
              return unop(s,constructor_MFLO,rd);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 16: /* '010000' */ {
          switch (vec_concat(s,gen_vec(10, slice(tok,16,10)),gen_vec(5, slice(tok,6,5))).data) {
            case 0: /* '000000000000000' */ {
              int_t rd_;
              rd_ = slice(tok, 11, 5);
              s->mon_state.rd = rd_;;
              return unop(s,constructor_MFHI,rd);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 3: /* '000011' */ {
          switch (slice(tok, 21, 5)) {
            case 0: /* '00000' */ {
              int_t sa_;
              int_t rd_;
              int_t rt_;
              sa_ = slice(tok, 6, 5);
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              s->mon_state.sa = sa_;;
              return ternop(s,constructor_SRA,rd,_slash_Action273,sa);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 0: /* '000000' */ {
          switch (slice(tok, 21, 5)) {
            case 0: /* '00000' */ {
              int_t sa_;
              int_t rd_;
              int_t rt_;
              int_t g;
              sa_ = slice(tok, 6, 5);
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              s->mon_state.sa = sa_;;
              g = pause_q_(s,s->mon_state);
              if (g) {
                return nullop(s,alloc_int(s,CON_PAUSE));
              } else {
                int_t g_;
                g_ = otherwise(s,s->mon_state);
                if (g_) {
                  return ternop(s,constructor_SLL,rd,_slash_Action275,sa);
                } else {
                  s->err_str = "unsatisfiable guards at specifications/mips/mips.ml:743.4-14";
                  longjmp(s->err_tgt,0);
                };
              };
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 8: /* '001000' */ {
          switch (slice(tok, 6, 15)) {
            case 16: /* '000000000010000' */ {
              int_t rs_;
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.hint = 0 /* '00000' */;;
              return binop_src(s,constructor_JR_HB,_slash_Action276,hint5);
            }; break;
            case 0: /* '000000000000000' */ {
              int_t rs_;
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.hint = 0 /* '00000' */;;
              return binop_src(s,constructor_JR,_slash_Action279,hint5);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 19: /* '010011' */ {
          switch (slice(tok, 6, 15)) {
            case 0: /* '000000000000000' */ {
              int_t rs_;
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              return unop_src(s,constructor_MTLO,_slash_Action277);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 17: /* '010001' */ {
          switch (slice(tok, 6, 15)) {
            case 0: /* '000000000000000' */ {
              int_t rs_;
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              return unop_src(s,constructor_MTHI,_slash_Action278);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 9: /* '001001' */ {
          switch (vec_concat(s,gen_vec(5, slice(tok,16,5)),gen_vec(5, slice(tok,6,5))).data) {
            case 16: /* '0000010000' */ {
              int_t rd_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rd = rd_;;
              s->mon_state.hint = 0 /* '00000' */;;
              return ternop(s,constructor_JALR_HB,rd,_slash_Action280,hint5);
            }; break;
            case 0: /* '0000000000' */ {
              int_t rd_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rd = rd_;;
              s->mon_state.hint = 0 /* '00000' */;;
              return ternop(s,constructor_JALR,rd,_slash_Action281,hint5);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 1: /* '000001' */ {
          switch (vec_concat(s,gen_vec(2, slice(tok,16,2)),gen_vec(5, slice(tok,6,5))).data) {
            case 32: /* '0100000' */ {
              int_t rd_;
              int_t cc_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              cc_ = slice(tok, 18, 3);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.cc = cc_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_MOVT,rd,_slash_Action282,cc);
            }; break;
            case 0: /* '0000000' */ {
              int_t rd_;
              int_t cc_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              cc_ = slice(tok, 18, 3);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.cc = cc_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_MOVF,rd,_slash_Action283,cc);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 27: /* '011011' */ {
          switch (slice(tok, 6, 10)) {
            case 0: /* '0000000000' */ {
              int_t rt_;
              int_t rs_;
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              return binop_src(s,constructor_DIVU,_slash_Action284,_slash_Action285);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 26: /* '011010' */ {
          switch (slice(tok, 6, 10)) {
            case 0: /* '0000000000' */ {
              int_t rt_;
              int_t rs_;
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              return binop_src(s,constructor_DIV,_slash_Action286,_slash_Action287);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 25: /* '011001' */ {
          switch (slice(tok, 6, 10)) {
            case 0: /* '0000000000' */ {
              int_t rt_;
              int_t rs_;
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              return binop_src(s,constructor_MULTU,_slash_Action288,_slash_Action289);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 24: /* '011000' */ {
          switch (slice(tok, 6, 10)) {
            case 0: /* '0000000000' */ {
              int_t rt_;
              int_t rs_;
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              return binop_src(s,constructor_MULT,_slash_Action290,_slash_Action291);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 6: /* '000110' */ {
          switch (slice(tok, 6, 5)) {
            case 1: /* '00001' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_ROTRV,rd,_slash_Action292,_slash_Action293);
            }; break;
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_SRLV,rd,_slash_Action320,_slash_Action321);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 43: /* '101011' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_SLTU,rd,_slash_Action294,_slash_Action295);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 42: /* '101010' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_SLT,rd,_slash_Action296,_slash_Action297);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 39: /* '100111' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_NOR,rd,_slash_Action298,_slash_Action299);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 38: /* '100110' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_XOR,rd,_slash_Action300,_slash_Action301);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 37: /* '100101' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_OR,rd,_slash_Action302,_slash_Action303);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 36: /* '100100' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_AND,rd,_slash_Action304,_slash_Action305);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 35: /* '100011' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_SUBU,rd,_slash_Action306,_slash_Action307);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 34: /* '100010' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_SUB,rd,_slash_Action308,_slash_Action309);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 33: /* '100001' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_ADDU,rd,_slash_Action310,_slash_Action311);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 32: /* '100000' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_ADD,rd,_slash_Action312,_slash_Action313);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 11: /* '001011' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_MOVN,rd,_slash_Action314,_slash_Action315);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 10: /* '001010' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_MOVZ,rd,_slash_Action316,_slash_Action317);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 7: /* '000111' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_SRAV,rd,_slash_Action318,_slash_Action319);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 4: /* '000100' */ {
          switch (slice(tok, 6, 5)) {
            case 0: /* '00000' */ {
              int_t rd_;
              int_t rt_;
              int_t rs_;
              rd_ = slice(tok, 11, 5);
              rt_ = slice(tok, 16, 5);
              rs_ = slice(tok, 21, 5);
              s->mon_state.rs = rs_;;
              s->mon_state.rt = rt_;;
              s->mon_state.rd = rd_;;
              return ternop(s,constructor_SLLV,rd,_slash_Action322,_slash_Action323);
            }; break;
            default: {
              unconsume(s, 4);
              s->err_str = "DecodeSequenceMatchFailure";
              longjmp(s->err_tgt,0);
            }; break;
          };
        }; break;
        case 54: /* '110110' */ {
          int_t code10_;
          int_t rt_;
          int_t rs_;
          code10_ = slice(tok, 6, 10);
          rt_ = slice(tok, 16, 5);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.rt = rt_;;
          s->mon_state.code10 = code10_;;
          return ternop_src(s,constructor_TNE,_slash_Action324,_slash_Action325,code10);
        }; break;
        case 52: /* '110100' */ {
          int_t code10_;
          int_t rt_;
          int_t rs_;
          code10_ = slice(tok, 6, 10);
          rt_ = slice(tok, 16, 5);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.rt = rt_;;
          s->mon_state.code10 = code10_;;
          return ternop_src(s,constructor_TEQ,_slash_Action326,_slash_Action327,code10);
        }; break;
        case 51: /* '110011' */ {
          int_t code10_;
          int_t rt_;
          int_t rs_;
          code10_ = slice(tok, 6, 10);
          rt_ = slice(tok, 16, 5);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.rt = rt_;;
          s->mon_state.code10 = code10_;;
          return ternop_src(s,constructor_TLTU,_slash_Action328,_slash_Action329,code10);
        }; break;
        case 50: /* '110010' */ {
          int_t code10_;
          int_t rt_;
          int_t rs_;
          code10_ = slice(tok, 6, 10);
          rt_ = slice(tok, 16, 5);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.rt = rt_;;
          s->mon_state.code10 = code10_;;
          return ternop_src(s,constructor_TLT,_slash_Action330,_slash_Action331,code10);
        }; break;
        case 49: /* '110001' */ {
          int_t code10_;
          int_t rt_;
          int_t rs_;
          code10_ = slice(tok, 6, 10);
          rt_ = slice(tok, 16, 5);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.rt = rt_;;
          s->mon_state.code10 = code10_;;
          return ternop_src(s,constructor_TGEU,_slash_Action332,_slash_Action333,code10);
        }; break;
        case 48: /* '110000' */ {
          int_t code10_;
          int_t rt_;
          int_t rs_;
          code10_ = slice(tok, 6, 10);
          rt_ = slice(tok, 16, 5);
          rs_ = slice(tok, 21, 5);
          s->mon_state.rs = rs_;;
          s->mon_state.rt = rt_;;
          s->mon_state.code10 = code10_;;
          return ternop_src(s,constructor_TGE,_slash_Action334,_slash_Action335,code10);
        }; break;
        case 13: /* '001101' */ {
          int_t code20_;
          code20_ = slice(tok, 6, 20);
          s->mon_state.code20 = code20_;;
          return unop_src(s,constructor_BREAK,code20);
        }; break;
        case 12: /* '001100' */ {
          int_t code20_;
          code20_ = slice(tok, 6, 20);
          s->mon_state.code20 = code20_;;
          return unop_src(s,constructor_SYSCALL,code20);
        }; break;
        default: {
          unconsume(s, 4);
          s->err_str = "DecodeSequenceMatchFailure";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      unconsume(s, 4);
      s->err_str = "DecodeSequenceMatchFailure";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* decode */
static insndata_t decode(state_t s,vec_t config) {
  int_t idx_before;
  obj_t insn;
  int_t idx_after;
  set_endianness(s,CON_BIG_ENDIAN,4);
  s->mon_state.rt = 0 /* '00000' */;
  s->mon_state.rd = 0 /* '00000' */;
  s->mon_state.sa = 0 /* '00000' */;
  s->mon_state.rs = 0 /* '00000' */;
  s->mon_state.fr = 0 /* '00000' */;
  s->mon_state.fs = 0 /* '00000' */;
  s->mon_state.ft = 0 /* '00000' */;
  s->mon_state.fd = 0 /* '00000' */;
  s->mon_state.immediate = 0 /* '0000000000000000' */;
  s->mon_state.offset16 = 0 /* '0000000000000000' */;
  s->mon_state.offset9 = 0 /* '000000000' */;
  s->mon_state.sel = 0 /* '000' */;
  s->mon_state.impl = 0 /* '0000000000000000' */;
  s->mon_state.code10 = 0 /* '0000000000' */;
  s->mon_state.code19 = 0 /* '0000000000000000000' */;
  s->mon_state.code20 = 0 /* '00000000000000000000' */;
  s->mon_state.stype = 0 /* '00000' */;
  s->mon_state.msb = 0 /* '00000' */;
  s->mon_state.msbd = 0 /* '00000' */;
  s->mon_state.lsb = 0 /* '00000' */;
  s->mon_state.instr_index = 0 /* '00000000000000000000000000' */;
  s->mon_state.cofun = 0 /* '0000000000000000000000000' */;
  s->mon_state.cc = 0 /* '000' */;
  s->mon_state.cond = 0 /* '0000' */;
  s->mon_state.op = 0 /* '00000' */;
  s->mon_state.hint = 0 /* '00000' */;
  s->mon_state.fmt = 0 /* '00000' */;;
  idx_before = gdsl_get_ip(s);
  insn = _slash_(s);
  idx_after = gdsl_get_ip(s);
  return __insndata(s,insn,(idx_after-idx_before));
}
/* recordify */
static obj_t recordify(state_t s,obj_t mnemonic,obj_t ua) {
  return add_field_obj(s,90/* ua */,ua,add_field_obj(s,44/* mnemonic */,mnemonic,NULL));
}
static INLINE_ATTR obj_t constructor_QUADOP_FMT_SRC(state_t s,quadop_fmt_src_t arg_of_QUADOP_FMT_SRC) {
  con_quadop_fmt_src_t adt;
  adt.tag = 368/* QUADOP_FMT_SRC */;
  adt.payload = arg_of_QUADOP_FMT_SRC;
  return (obj_t) alloc_con_quadop_fmt_src(s,adt);
}
static INLINE_ATTR obj_t constructor_QUADOP_FMT(state_t s,quadop_fmt_t arg_of_QUADOP_FMT) {
  con_quadop_fmt_t adt;
  adt.tag = 367/* QUADOP_FMT */;
  adt.payload = arg_of_QUADOP_FMT;
  return (obj_t) alloc_con_quadop_fmt(s,adt);
}
static INLINE_ATTR obj_t constructor_QUADOP(state_t s,quadop_t arg_of_QUADOP) {
  con_quadop_t adt;
  adt.tag = 366/* QUADOP */;
  adt.payload = arg_of_QUADOP;
  return (obj_t) alloc_con_quadop(s,adt);
}
static INLINE_ATTR obj_t constructor_TERNOP_FMT(state_t s,ternop_fmt_t arg_of_TERNOP_FMT) {
  con_ternop_fmt_t adt;
  adt.tag = 365/* TERNOP_FMT */;
  adt.payload = arg_of_TERNOP_FMT;
  return (obj_t) alloc_con_ternop_fmt(s,adt);
}
static INLINE_ATTR obj_t constructor_TERNOP(state_t s,ternop_t arg_of_TERNOP) {
  con_ternop_t adt;
  adt.tag = 364/* TERNOP */;
  adt.payload = arg_of_TERNOP;
  return (obj_t) alloc_con_ternop(s,adt);
}
static INLINE_ATTR obj_t constructor_TERNOP_SRC(state_t s,ternop_src_t arg_of_TERNOP_SRC) {
  con_ternop_src_t adt;
  adt.tag = 363/* TERNOP_SRC */;
  adt.payload = arg_of_TERNOP_SRC;
  return (obj_t) alloc_con_ternop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_BINOP(state_t s,binop_t arg_of_BINOP) {
  con_binop_t adt;
  adt.tag = 362/* BINOP */;
  adt.payload = arg_of_BINOP;
  return (obj_t) alloc_con_binop(s,adt);
}
static INLINE_ATTR obj_t constructor_BINOP_FMT(state_t s,binop_fmt_t arg_of_BINOP_FMT) {
  con_binop_fmt_t adt;
  adt.tag = 361/* BINOP_FMT */;
  adt.payload = arg_of_BINOP_FMT;
  return (obj_t) alloc_con_binop_fmt(s,adt);
}
static INLINE_ATTR obj_t constructor_BINOP_SRC(state_t s,binop_src_t arg_of_BINOP_SRC) {
  con_binop_src_t adt;
  adt.tag = 360/* BINOP_SRC */;
  adt.payload = arg_of_BINOP_SRC;
  return (obj_t) alloc_con_binop_src(s,adt);
}
static INLINE_ATTR obj_t constructor_UNOP(state_t s,unop_t arg_of_UNOP) {
  con_unop_t adt;
  adt.tag = 359/* UNOP */;
  adt.payload = arg_of_UNOP;
  return (obj_t) alloc_con_unop(s,adt);
}
static INLINE_ATTR obj_t constructor_UNOP_SRC(state_t s,unop_src_t arg_of_UNOP_SRC) {
  con_unop_src_t adt;
  adt.tag = 358/* UNOP_SRC */;
  adt.payload = arg_of_UNOP_SRC;
  return (obj_t) alloc_con_unop_src(s,adt);
}
/* traverse-others */
static obj_t traverse_others(state_t s,obj_t (*f_)(state_t,obj_t,obj_t),obj_t insn) {
  switch (*((int_t*) insn)) {
    case CON_PAUSE: {
      return f_(s,from_string_lit(s,"PAUSE"),alloc_int(s,CON_NULLOP));
    }; break;
    default: {
      s->err_str = "pattern match failure in traverse-others at specifications/mips/mips-traverse.ml:15.7-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* traverse */
static obj_t traverse(state_t s,obj_t (*f_)(state_t,obj_t,obj_t),obj_t insn) {
  switch (((con_obj_t*) insn)->tag) {
    case 70/* ABS-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ABS.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 71/* ADD */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ADD"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 72/* ADD-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ADD.fmt"),constructor_TERNOP_FMT(s,__ternop_fmt(s,x.destination,x.fmt,x.source1,x.source2)));
    }; break;
    case 73/* ADDI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ADDI"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 74/* ADDIU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ADDIU"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 75/* ADDU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ADDU"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 76/* ALNV-PS */: {
      quadop_t x;
      x = ((con_quadop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ALNV.PS"),constructor_QUADOP(s,__quadop(s,x.destination,x.source1,x.source2,x.source3)));
    }; break;
    case 77/* AND */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"AND"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 78/* ANDI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ANDI"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 79/* BC1F */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BC1F"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 80/* BC1FL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BC1FL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 81/* BC1T */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BC1T"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 82/* BC1TL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BC1TL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 83/* BC2F */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BC2F"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 84/* BC2FL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BC2FL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 85/* BC2T */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BC2T"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 86/* BC2TL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BC2TL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 87/* BEQ */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BEQ"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 88/* BEQL */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BEQL"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 89/* BGEZ */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BGEZ"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 90/* BGEZAL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BGEZAL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 91/* BGEZALL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BGEZALL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 92/* BGEZL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BGEZL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 93/* BGTZ */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BGTZ"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 94/* BGTZL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BGTZL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 95/* BLEZ */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BLEZ"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 96/* BLEZL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BLEZL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 97/* BLTZ */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BLTZ"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 98/* BLTZAL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BLTZAL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 99/* BLTZALL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BLTZALL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 100/* BLTZL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BLTZL"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 101/* BNE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BNE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 102/* BNEL */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BNEL"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 103/* BREAK */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"BREAK"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 104/* C-cond-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"C.cond.fmt"),constructor_QUADOP_FMT_SRC(s,__quadop_fmt_src(s,x.fmt,x.source1,x.source2,x.source3,x.source4)));
    }; break;
    case 105/* CACHE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CACHE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 106/* CACHEE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CACHEE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 107/* CEIL-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CEIL.L.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 108/* CEIL-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CEIL.W.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 109/* CFC1 */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CFC1"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 110/* CFC2 */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CFC2"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 111/* CLO */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CLO"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 112/* CLZ */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CLZ"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 113/* COP2 */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"COP2"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 114/* CTC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CTC1"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 115/* CTC2 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CTC2"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 116/* CVT-D-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CVT.D.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 117/* CVT-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CVT.L.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 118/* CVT-PS-S */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CVT.PS.S"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 119/* CVT-S-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CVT.S.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 120/* CVT-S-PL */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CVT.S.PL"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 121/* CVT-S-PU */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CVT.S.PU"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 122/* CVT-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"CVT.W.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case CON_DERET: {
      return f_(s,from_string_lit(s,"DERET"),alloc_int(s,CON_NULLOP));
    }; break;
    case 124/* DI */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"DI"),constructor_UNOP(s,__unop(s,x.destination)));
    }; break;
    case 125/* DIV */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"DIV"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 126/* DIV-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"DIV.fmt"),constructor_TERNOP_FMT(s,__ternop_fmt(s,x.destination,x.fmt,x.source1,x.source2)));
    }; break;
    case 127/* DIVU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"DIVU"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 128/* EI */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"EI"),constructor_UNOP(s,__unop(s,x.destination)));
    }; break;
    case CON_ERET: {
      return f_(s,from_string_lit(s,"ERET"),alloc_int(s,CON_NULLOP));
    }; break;
    case 130/* EXT */: {
      quadop_t x;
      x = ((con_quadop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"EXT"),constructor_QUADOP(s,__quadop(s,x.destination,x.source1,x.source2,x.source3)));
    }; break;
    case 131/* FLOOR-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"FLOOR.L.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 132/* FLOOR-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"FLOOR.W.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 133/* INS */: {
      quadop_t x;
      x = ((con_quadop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"INS"),constructor_QUADOP(s,__quadop(s,x.destination,x.source1,x.source2,x.source3)));
    }; break;
    case 134/* J */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"J"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 135/* JAL */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"JAL"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 136/* JALR */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"JALR"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 137/* JALR-HB */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"JALR.HB"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 138/* JALX */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"JALX"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 139/* JR */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"JR"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 140/* JR-HB */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"JR.HB"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 141/* LB */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LB"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 142/* LBE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LBE"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 143/* LBU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LBU"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 144/* LBUE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LBUE"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 145/* LDC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LDC1"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 146/* LDC2 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LDC2"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 147/* LDXC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LDXC1"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 148/* LH */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LH"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 149/* LHE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LHE"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 150/* LHU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LHU"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 151/* LHUE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LHUE"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 152/* LL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LL"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 153/* LLE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LLE"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 154/* LUI */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LUI"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 155/* LUXC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LUXC1"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 156/* LW */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LW"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 157/* LWC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LWC1"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 158/* LWC2 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LWC2"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 159/* LWE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LWE"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 160/* LWL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LWL"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 161/* LWLE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LWLE"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 162/* LWR */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LWR"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 163/* LWRE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LWRE"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 164/* LWXC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"LWXC1"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 165/* MADD */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MADD"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 166/* MADD-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MADD.fmt"),constructor_QUADOP_FMT(s,__quadop_fmt(s,x.destination,x.fmt,x.source1,x.source2,x.source3)));
    }; break;
    case 167/* MADDU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MADDU"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 168/* MFC0 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MFC0"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 169/* MFC1 */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MFC1"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 170/* MFC2 */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MFC2"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 171/* MFHC1 */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MFHC1"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 172/* MFHC2 */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MFHC2"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 173/* MFHI */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MFHI"),constructor_UNOP(s,__unop(s,x.destination)));
    }; break;
    case 174/* MFLO */: {
      unop_t x;
      x = ((con_unop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MFLO"),constructor_UNOP(s,__unop(s,x.destination)));
    }; break;
    case 175/* MOV-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MOV.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 176/* MOVF */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MOVF"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 177/* MOVF-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MOVF.fmt"),constructor_TERNOP_FMT(s,__ternop_fmt(s,x.destination,x.fmt,x.source1,x.source2)));
    }; break;
    case 178/* MOVN */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MOVN"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 179/* MOVN-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MOVN.fmt"),constructor_TERNOP_FMT(s,__ternop_fmt(s,x.destination,x.fmt,x.source1,x.source2)));
    }; break;
    case 180/* MOVT */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MOVT"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 181/* MOVT-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MOVT.fmt"),constructor_TERNOP_FMT(s,__ternop_fmt(s,x.destination,x.fmt,x.source1,x.source2)));
    }; break;
    case 182/* MOVZ */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MOVZ"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 183/* MOVZ-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MOVZ.fmt"),constructor_TERNOP_FMT(s,__ternop_fmt(s,x.destination,x.fmt,x.source1,x.source2)));
    }; break;
    case 184/* MSUB */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MSUB"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 185/* MSUB-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MSUB.fmt"),constructor_QUADOP_FMT(s,__quadop_fmt(s,x.destination,x.fmt,x.source1,x.source2,x.source3)));
    }; break;
    case 186/* MSUBU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MSUBU"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 187/* MTC0 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MTC0"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 188/* MTC1 */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MTC1"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 189/* MTC2 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MTC2"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 190/* MTHC1 */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MTHC1"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 191/* MTHC2 */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MTHC2"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 192/* MTHI */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MTHI"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 193/* MTLO */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MTLO"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 194/* MUL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MUL"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 195/* MUL-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MUL.fmt"),constructor_TERNOP_FMT(s,__ternop_fmt(s,x.destination,x.fmt,x.source1,x.source2)));
    }; break;
    case 196/* MULT */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MULT"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 197/* MULTU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"MULTU"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 198/* NEG-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"NEG.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 199/* NMADD-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"NMADD.fmt"),constructor_QUADOP_FMT(s,__quadop_fmt(s,x.destination,x.fmt,x.source1,x.source2,x.source3)));
    }; break;
    case 200/* NMSUB-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"NMSUB.fmt"),constructor_QUADOP_FMT(s,__quadop_fmt(s,x.destination,x.fmt,x.source1,x.source2,x.source3)));
    }; break;
    case 201/* NOR */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"NOR"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 202/* OR */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"OR"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 203/* ORI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ORI"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 204/* PLL-PS */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"PLL.PS"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 205/* PLU-PS */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"PLU.PS"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 206/* PREF */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"PREF"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 207/* PREFE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"PREFE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 208/* PREFX */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"PREFX"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 209/* PUL-PS */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"PUL.PS"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 210/* PUU-PS */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"PUU.PS"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 211/* RDHWR */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"RDHWR"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 212/* RDPGPR */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"RDPGPR"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 213/* RECIP-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"RECIP.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 214/* ROTR */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ROTR"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 215/* ROTRV */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ROTRV"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 216/* ROUND-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ROUND.L.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 217/* ROUND-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"ROUND.W.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 218/* RSQRT-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"RSQRT.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 219/* SB */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SB"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 220/* SBE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SBE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 221/* SC */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SC"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 222/* SCE */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SCE"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 223/* SDBBP */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SDBBP"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 224/* SDC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SDC1"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 225/* SDC2 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SDC2"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 226/* SDXC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SDXC1"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 227/* SEB */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SEB"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 228/* SEH */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SEH"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 229/* SH */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SH"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 230/* SHE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SHE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 231/* SLL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SLL"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 232/* SLLV */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SLLV"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 233/* SLT */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SLT"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 234/* SLTI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SLTI"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 235/* SLTIU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SLTIU"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 236/* SLTU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SLTU"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 237/* SQRT-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SQRT.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 238/* SRA */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SRA"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 239/* SRAV */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SRAV"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 240/* SRL */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SRL"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 241/* SRLV */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SRLV"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 242/* SUB */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SUB"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 243/* SUB-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SUB.fmt"),constructor_TERNOP_FMT(s,__ternop_fmt(s,x.destination,x.fmt,x.source1,x.source2)));
    }; break;
    case 244/* SUBU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SUBU"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 245/* SUXC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SUXC1"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 246/* SW */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SW"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 247/* SWC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SWC1"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 248/* SWC2 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SWC2"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 249/* SWE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SWE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 250/* SWL */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SWL"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 251/* SWLE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SWLE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 252/* SWR */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SWR"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 253/* SWRE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SWRE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 254/* SWXC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SWXC1"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 255/* SYNC */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SYNC"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 256/* SYNCI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SYNCI"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 257/* SYSCALL */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"SYSCALL"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 258/* TEQ */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TEQ"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 259/* TEQI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TEQI"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 260/* TGE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TGE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 261/* TGEI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TGEI"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 262/* TGEIU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TGEIU"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 263/* TGEU */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TGEU"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case CON_TLBINV: {
      return f_(s,from_string_lit(s,"TLBINV"),alloc_int(s,CON_NULLOP));
    }; break;
    case CON_TLBINVF: {
      return f_(s,from_string_lit(s,"TLBINVF"),alloc_int(s,CON_NULLOP));
    }; break;
    case CON_TLBP: {
      return f_(s,from_string_lit(s,"TLBP"),alloc_int(s,CON_NULLOP));
    }; break;
    case CON_TLBR: {
      return f_(s,from_string_lit(s,"TLBR"),alloc_int(s,CON_NULLOP));
    }; break;
    case CON_TLBWI: {
      return f_(s,from_string_lit(s,"TLBWI"),alloc_int(s,CON_NULLOP));
    }; break;
    case CON_TLBWR: {
      return f_(s,from_string_lit(s,"TLBWR"),alloc_int(s,CON_NULLOP));
    }; break;
    case 270/* TLT */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TLT"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 271/* TLTI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TLTI"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 272/* TLTIU */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TLTIU"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 273/* TLTU */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TLTU"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 274/* TNE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TNE"),constructor_TERNOP_SRC(s,__ternop_src(s,x.source1,x.source2,x.source3)));
    }; break;
    case 275/* TNEI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TNEI"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 276/* TRUNC-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TRUNC.L.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 277/* TRUNC-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) insn)->payload;
      return f_(s,from_string_lit(s,"TRUNC.W.fmt"),constructor_BINOP_FMT(s,__binop_fmt(s,x.destination,x.fmt,x.source)));
    }; break;
    case 278/* WAIT */: {
      unop_src_t x;
      x = ((con_unop_src_t*) insn)->payload;
      return f_(s,from_string_lit(s,"WAIT"),constructor_UNOP_SRC(s,__unop_src(s,x.source)));
    }; break;
    case 279/* WRPGPR */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"WRPGPR"),constructor_BINOP_SRC(s,__binop_src(s,x.source1,x.source2)));
    }; break;
    case 280/* WSBH */: {
      binop_t x;
      x = ((con_binop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"WSBH"),constructor_BINOP(s,__binop(s,x.destination,x.source)));
    }; break;
    case 281/* XOR */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"XOR"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    case 282/* XORI */: {
      ternop_t x;
      x = ((con_ternop_t*) insn)->payload;
      return f_(s,from_string_lit(s,"XORI"),constructor_TERNOP(s,__ternop(s,x.destination,x.source1,x.source2)));
    }; break;
    default: {
      return traverse_others(s,f_,insn);
    }; break;
  };
}
/* traversed */
static obj_t traversed(state_t s,insndata_t insn) {
  return traverse(s,recordify,insn->insn);
}
/* show/format */
static obj_t show_slash_format(state_t s,obj_t format) {
  switch (*((int_t*) format)) {
    case CON_S: {
      return from_string_lit(s,"S");
    }; break;
    case CON_D: {
      return from_string_lit(s,"D");
    }; break;
    case CON_W: {
      return from_string_lit(s,"W");
    }; break;
    case CON_L: {
      return from_string_lit(s,"L");
    }; break;
    case CON_PS: {
      return from_string_lit(s,"PS");
    }; break;
    default: {
      s->err_str = "pattern match failure in show/format at specifications/mips/mips-pretty.ml:48.7-10";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* generalize-format */
static obj_t generalize_format(state_t s,obj_t fmt_) {
  return asm_ann_string(s,string_from_rope(s,show_slash_format(s,fmt_)));
}
/* generalize-fmt */
static obj_t generalize_fmt(state_t s,obj_t ua) {
  switch (*((int_t*) ua)) {
    case CON_NULLOP: {
      return s->asm_anns_none;
    }; break;
    case 358/* UNOP_SRC */: {
      return s->asm_anns_none;
    }; break;
    case 359/* UNOP */: {
      return s->asm_anns_none;
    }; break;
    case 360/* BINOP_SRC */: {
      return s->asm_anns_none;
    }; break;
    case 361/* BINOP_FMT */: {
      binop_fmt_t x;
      x = ((con_binop_fmt_t*) ua)->payload;
      return asm_anns_one(s,generalize_format(s,x.fmt));
    }; break;
    case 362/* BINOP */: {
      return s->asm_anns_none;
    }; break;
    case 363/* TERNOP_SRC */: {
      return s->asm_anns_none;
    }; break;
    case 364/* TERNOP */: {
      return s->asm_anns_none;
    }; break;
    case 365/* TERNOP_FMT */: {
      ternop_fmt_t x;
      x = ((con_ternop_fmt_t*) ua)->payload;
      return asm_anns_one(s,generalize_format(s,x.fmt));
    }; break;
    case 366/* QUADOP */: {
      return s->asm_anns_none;
    }; break;
    case 367/* QUADOP_FMT */: {
      quadop_fmt_t x;
      x = ((con_quadop_fmt_t*) ua)->payload;
      return asm_anns_one(s,generalize_format(s,x.fmt));
    }; break;
    case 368/* QUADOP_FMT_SRC */: {
      quadop_fmt_src_t x;
      x = ((con_quadop_fmt_src_t*) ua)->payload;
      return asm_anns_one(s,generalize_format(s,x.fmt));
    }; break;
    default: {
      s->err_str = "pattern match failure in generalize-fmt at specifications/mips/mips-asm.ml:80.22-23";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* inner */
static obj_t inner(state_t s,vec_t i,int_t sz) {
  return asm_bounded(s,asm_boundary_sz(s,sz),asm_imm(s,vec_to_unsigned(s,i)));
}
/* generalize-immediate */
static obj_t generalize_immediate(state_t s,obj_t i) {
  switch (((con_obj_t*) i)->tag) {
    case 42/* IMM5 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,5);
    }; break;
    case 43/* IMM16 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,16);
    }; break;
    case 44/* OFFSET9 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,9);
    }; break;
    case 45/* OFFSET16 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,16);
    }; break;
    case 46/* SEL */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,3);
    }; break;
    case 47/* IMPL */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,16);
    }; break;
    case 48/* CODE10 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,10);
    }; break;
    case 49/* CODE19 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,19);
    }; break;
    case 50/* CODE20 */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,20);
    }; break;
    case 51/* STYPE */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,5);
    }; break;
    case 52/* POSSIZE */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,5);
    }; break;
    case 53/* SIZE */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,5);
    }; break;
    case 54/* POS */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,5);
    }; break;
    case 55/* HINT */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,5);
    }; break;
    case 56/* INSTRINDEX */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,26);
    }; break;
    case 57/* COFUN */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,25);
    }; break;
    case 58/* CC */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,3);
    }; break;
    case 59/* COND */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,4);
    }; break;
    case 60/* OP */: {
      vec_t i_;
      i_ = ((con_vec_t*) i)->payload;
      return inner(s,i_,5);
    }; break;
    default: {
      s->err_str = "pattern match failure in generalize-immediate at specifications/mips/mips-asm.ml:46.7-8";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/register */
static obj_t show_slash_register(state_t s,obj_t r) {
  switch (*((int_t*) r)) {
    case CON_ZERO: {
      return from_string_lit(s,"zero");
    }; break;
    case CON_AT: {
      return from_string_lit(s,"at");
    }; break;
    case CON_V0: {
      return from_string_lit(s,"v0");
    }; break;
    case CON_V1: {
      return from_string_lit(s,"v1");
    }; break;
    case CON_A0: {
      return from_string_lit(s,"a0");
    }; break;
    case CON_A1: {
      return from_string_lit(s,"a1");
    }; break;
    case CON_A2: {
      return from_string_lit(s,"a2");
    }; break;
    case CON_A3: {
      return from_string_lit(s,"a3");
    }; break;
    case CON_T0: {
      return from_string_lit(s,"t0");
    }; break;
    case CON_T1: {
      return from_string_lit(s,"t1");
    }; break;
    case CON_T2: {
      return from_string_lit(s,"t2");
    }; break;
    case CON_T3: {
      return from_string_lit(s,"t3");
    }; break;
    case CON_T4: {
      return from_string_lit(s,"t4");
    }; break;
    case CON_T5: {
      return from_string_lit(s,"t5");
    }; break;
    case CON_T6: {
      return from_string_lit(s,"t6");
    }; break;
    case CON_T7: {
      return from_string_lit(s,"t7");
    }; break;
    case CON_S0: {
      return from_string_lit(s,"s0");
    }; break;
    case CON_S1: {
      return from_string_lit(s,"s1");
    }; break;
    case CON_S2: {
      return from_string_lit(s,"s2");
    }; break;
    case CON_S3: {
      return from_string_lit(s,"s3");
    }; break;
    case CON_S4: {
      return from_string_lit(s,"s4");
    }; break;
    case CON_S5: {
      return from_string_lit(s,"s5");
    }; break;
    case CON_S6: {
      return from_string_lit(s,"s6");
    }; break;
    case CON_S7: {
      return from_string_lit(s,"s7");
    }; break;
    case CON_T8: {
      return from_string_lit(s,"t8");
    }; break;
    case CON_T9: {
      return from_string_lit(s,"t9");
    }; break;
    case CON_K0: {
      return from_string_lit(s,"k0");
    }; break;
    case CON_K1: {
      return from_string_lit(s,"k1");
    }; break;
    case CON_GP: {
      return from_string_lit(s,"gp");
    }; break;
    case CON_SP: {
      return from_string_lit(s,"sp");
    }; break;
    case CON_S8: {
      return from_string_lit(s,"s8");
    }; break;
    case CON_RA: {
      return from_string_lit(s,"ra");
    }; break;
    case CON_F0: {
      return from_string_lit(s,"f0");
    }; break;
    case CON_F1: {
      return from_string_lit(s,"f1");
    }; break;
    case CON_F2: {
      return from_string_lit(s,"f2");
    }; break;
    case CON_F3: {
      return from_string_lit(s,"f3");
    }; break;
    case CON_F4: {
      return from_string_lit(s,"f4");
    }; break;
    case CON_F5: {
      return from_string_lit(s,"f5");
    }; break;
    case CON_F6: {
      return from_string_lit(s,"f6");
    }; break;
    case CON_F7: {
      return from_string_lit(s,"f7");
    }; break;
    case CON_F8: {
      return from_string_lit(s,"f8");
    }; break;
    case CON_F9: {
      return from_string_lit(s,"f9");
    }; break;
    case CON_F10: {
      return from_string_lit(s,"f10");
    }; break;
    case CON_F11: {
      return from_string_lit(s,"f11");
    }; break;
    case CON_F12: {
      return from_string_lit(s,"f12");
    }; break;
    case CON_F13: {
      return from_string_lit(s,"f13");
    }; break;
    case CON_F14: {
      return from_string_lit(s,"f14");
    }; break;
    case CON_F15: {
      return from_string_lit(s,"f15");
    }; break;
    case CON_F16: {
      return from_string_lit(s,"f16");
    }; break;
    case CON_F17: {
      return from_string_lit(s,"f17");
    }; break;
    case CON_F18: {
      return from_string_lit(s,"f18");
    }; break;
    case CON_F19: {
      return from_string_lit(s,"f19");
    }; break;
    case CON_F20: {
      return from_string_lit(s,"f20");
    }; break;
    case CON_F21: {
      return from_string_lit(s,"f21");
    }; break;
    case CON_F22: {
      return from_string_lit(s,"f22");
    }; break;
    case CON_F23: {
      return from_string_lit(s,"f23");
    }; break;
    case CON_F24: {
      return from_string_lit(s,"f24");
    }; break;
    case CON_F25: {
      return from_string_lit(s,"f25");
    }; break;
    case CON_F26: {
      return from_string_lit(s,"f26");
    }; break;
    case CON_F27: {
      return from_string_lit(s,"f27");
    }; break;
    case CON_F28: {
      return from_string_lit(s,"f28");
    }; break;
    case CON_F29: {
      return from_string_lit(s,"f29");
    }; break;
    case CON_F30: {
      return from_string_lit(s,"f30");
    }; break;
    case CON_F31: {
      return from_string_lit(s,"f31");
    }; break;
    case CON_FCSR: {
      return from_string_lit(s,"fcsr");
    }; break;
    default: {
      s->err_str = "pattern match failure in show/register at specifications/mips/mips-pretty.ml:124.7-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* generalize-register */
static obj_t generalize_register(state_t s,obj_t r) {
  return asm_reg(s,string_from_rope(s,show_slash_register(s,r)));
}
/* generalize-lvalue */
static obj_t generalize_lvalue(state_t s,obj_t lval_) {
  switch (((con_obj_t*) lval_)->tag) {
    case 61/* GPR */: {
      obj_t r;
      r = ((con_obj_t*) lval_)->payload;
      return generalize_register(s,r);
    }; break;
    case 62/* FPR */: {
      obj_t f_;
      f_ = ((con_obj_t*) lval_)->payload;
      return generalize_register(s,f_);
    }; break;
    default: {
      s->err_str = "pattern match failure in generalize-lvalue at specifications/mips/mips-asm.ml:14.8-9";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* generalize-rvalue */
static obj_t generalize_rvalue(state_t s,obj_t rval_) {
  switch (((con_obj_t*) rval_)->tag) {
    case 63/* LVALUE */: {
      obj_t lval_;
      lval_ = ((con_obj_t*) rval_)->payload;
      return generalize_lvalue(s,lval_);
    }; break;
    case 64/* IMM */: {
      obj_t i;
      i = ((con_obj_t*) rval_)->payload;
      return generalize_immediate(s,i);
    }; break;
    default: {
      s->err_str = "pattern match failure in generalize-rvalue at specifications/mips/mips-asm.ml:20.11-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* generalize-ua */
static obj_t generalize_ua(state_t s,obj_t ua) {
  switch (*((int_t*) ua)) {
    case CON_NULLOP: {
      return s->asm_opnds_none;
    }; break;
    case 358/* UNOP_SRC */: {
      unop_src_t x;
      x = ((con_unop_src_t*) ua)->payload;
      return asm_opnds_one(s,generalize_rvalue(s,x.source));
    }; break;
    case 359/* UNOP */: {
      unop_t x;
      x = ((con_unop_t*) ua)->payload;
      return asm_opnds_one(s,generalize_lvalue(s,x.destination));
    }; break;
    case 360/* BINOP_SRC */: {
      binop_src_t x;
      x = ((con_binop_src_t*) ua)->payload;
      return asm_opnds_more(s,generalize_rvalue(s,x.source1),asm_opnds_one(s,generalize_rvalue(s,x.source2)));
    }; break;
    case 361/* BINOP_FMT */: {
      binop_fmt_t x;
      x = ((con_binop_fmt_t*) ua)->payload;
      return asm_opnds_more(s,generalize_lvalue(s,x.destination),asm_opnds_one(s,generalize_rvalue(s,x.source)));
    }; break;
    case 362/* BINOP */: {
      binop_t x;
      x = ((con_binop_t*) ua)->payload;
      return asm_opnds_more(s,generalize_lvalue(s,x.destination),asm_opnds_one(s,generalize_rvalue(s,x.source)));
    }; break;
    case 363/* TERNOP_SRC */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) ua)->payload;
      return asm_opnds_more(s,generalize_rvalue(s,x.source1),asm_opnds_more(s,generalize_rvalue(s,x.source2),asm_opnds_one(s,generalize_rvalue(s,x.source3))));
    }; break;
    case 364/* TERNOP */: {
      ternop_t x;
      x = ((con_ternop_t*) ua)->payload;
      return asm_opnds_more(s,generalize_lvalue(s,x.destination),asm_opnds_more(s,generalize_rvalue(s,x.source1),asm_opnds_one(s,generalize_rvalue(s,x.source2))));
    }; break;
    case 365/* TERNOP_FMT */: {
      ternop_fmt_t x;
      x = ((con_ternop_fmt_t*) ua)->payload;
      return asm_opnds_more(s,generalize_lvalue(s,x.destination),asm_opnds_more(s,generalize_rvalue(s,x.source1),asm_opnds_one(s,generalize_rvalue(s,x.source2))));
    }; break;
    case 366/* QUADOP */: {
      quadop_t x;
      x = ((con_quadop_t*) ua)->payload;
      return asm_opnds_more(s,generalize_lvalue(s,x.destination),asm_opnds_more(s,generalize_rvalue(s,x.source1),asm_opnds_more(s,generalize_rvalue(s,x.source2),asm_opnds_one(s,generalize_rvalue(s,x.source3)))));
    }; break;
    case 367/* QUADOP_FMT */: {
      quadop_fmt_t x;
      x = ((con_quadop_fmt_t*) ua)->payload;
      return asm_opnds_more(s,generalize_lvalue(s,x.destination),asm_opnds_more(s,generalize_rvalue(s,x.source1),asm_opnds_more(s,generalize_rvalue(s,x.source2),asm_opnds_one(s,generalize_rvalue(s,x.source3)))));
    }; break;
    case 368/* QUADOP_FMT_SRC */: {
      quadop_fmt_src_t x;
      x = ((con_quadop_fmt_src_t*) ua)->payload;
      return asm_opnds_more(s,generalize_rvalue(s,x.source1),asm_opnds_more(s,generalize_rvalue(s,x.source2),asm_opnds_more(s,generalize_rvalue(s,x.source3),asm_opnds_one(s,generalize_rvalue(s,x.source4)))));
    }; break;
    default: {
      s->err_str = "pattern match failure in generalize-ua at specifications/mips/mips-asm.ml:63.22-23";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* generalize */
static asm_insn_t generalize(state_t s,insndata_t insn) {
  return asm_insn_flags(s,insn->length,string_from_rope(s,select_obj(s,44/* mnemonic */,traversed(s,insn))),generalize_fmt(s,select_obj(s,90/* ua */,traversed(s,insn))),generalize_ua(s,select_obj(s,90/* ua */,traversed(s,insn))));
}
/* f */
static obj_t f(state_t s,obj_t a,obj_t b) {
  return a;
}
/* mnemonic-of */
static obj_t mnemonic_of(state_t s,obj_t insn) {
  return traverse(s,f,insn);
}
/* show/immediate */
static obj_t show_slash_immediate(state_t s,obj_t imm_) {
  switch (((con_obj_t*) imm_)->tag) {
    case 42/* IMM5 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 43/* IMM16 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 44/* OFFSET9 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 45/* OFFSET16 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 46/* SEL */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 47/* IMPL */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 48/* CODE10 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 49/* CODE19 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 50/* CODE20 */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 51/* STYPE */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 52/* POSSIZE */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 53/* SIZE */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 54/* POS */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 55/* HINT */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 56/* INSTRINDEX */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 57/* COFUN */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 58/* CC */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 59/* COND */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    case 60/* OP */: {
      vec_t x;
      x = ((con_vec_t*) imm_)->payload;
      return show_int(s,vec_to_unsigned(s,x));
    }; break;
    default: {
      s->err_str = "pattern match failure in show/immediate at specifications/mips/mips-pretty.ml:39.10-11";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/lvalue */
static obj_t show_slash_lvalue(state_t s,obj_t opnd) {
  switch (((con_obj_t*) opnd)->tag) {
    case 61/* GPR */: {
      obj_t r;
      r = ((con_obj_t*) opnd)->payload;
      return show_slash_register(s,r);
    }; break;
    case 62/* FPR */: {
      obj_t r;
      r = ((con_obj_t*) opnd)->payload;
      return show_slash_register(s,r);
    }; break;
    default: {
      s->err_str = "pattern match failure in show/lvalue at specifications/mips/mips-pretty.ml:10.11-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/rvalue */
static obj_t show_slash_rvalue(state_t s,obj_t opnd) {
  switch (((con_obj_t*) opnd)->tag) {
    case 63/* LVALUE */: {
      obj_t l;
      l = ((con_obj_t*) opnd)->payload;
      return show_slash_lvalue(s,l);
    }; break;
    case 64/* IMM */: {
      obj_t imm_;
      imm_ = ((con_obj_t*) opnd)->payload;
      return show_slash_immediate(s,imm_);
    }; break;
    default: {
      s->err_str = "pattern match failure in show/rvalue at specifications/mips/mips-pretty.ml:16.11-14";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* show/quadop-fmt-src */
static obj_t show_slash_quadop_fmt_src(state_t s,quadop_fmt_src_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_rvalue(s,x.source1),from_string_lit(s,", ")),show_slash_rvalue(s,x.source2)),from_string_lit(s,", ")),show_slash_rvalue(s,x.source3)),from_string_lit(s,", ")),show_slash_rvalue(s,x.source4));
}
/* show/quadop-fmt */
static obj_t show_slash_quadop_fmt(state_t s,quadop_fmt_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_lvalue(s,x.destination),from_string_lit(s,", ")),show_slash_rvalue(s,x.source1)),from_string_lit(s,", ")),show_slash_rvalue(s,x.source2)),from_string_lit(s,", ")),show_slash_rvalue(s,x.source3));
}
/* show/quadop */
static obj_t show_slash_quadop(state_t s,quadop_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_lvalue(s,x.destination),from_string_lit(s,", ")),show_slash_rvalue(s,x.source1)),from_string_lit(s,", ")),show_slash_rvalue(s,x.source2)),from_string_lit(s,", ")),show_slash_rvalue(s,x.source3));
}
/* show/ternop-fmt */
static obj_t show_slash_ternop_fmt(state_t s,ternop_fmt_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_lvalue(s,x.destination),from_string_lit(s,", ")),show_slash_rvalue(s,x.source1)),from_string_lit(s,", ")),show_slash_rvalue(s,x.source2));
}
/* show/ternop */
static obj_t show_slash_ternop(state_t s,ternop_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_lvalue(s,x.destination),from_string_lit(s,", ")),show_slash_rvalue(s,x.source1)),from_string_lit(s,", ")),show_slash_rvalue(s,x.source2));
}
/* show/ternop-src */
static obj_t show_slash_ternop_src(state_t s,ternop_src_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_rvalue(s,x.source1),from_string_lit(s,", ")),show_slash_rvalue(s,x.source2)),from_string_lit(s,", ")),show_slash_rvalue(s,x.source3));
}
/* show/binop */
static obj_t show_slash_binop(state_t s,binop_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_lvalue(s,x.destination),from_string_lit(s,", ")),show_slash_rvalue(s,x.source));
}
/* show/binop-fmt */
static obj_t show_slash_binop_fmt(state_t s,binop_fmt_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_lvalue(s,x.destination),from_string_lit(s,", ")),show_slash_rvalue(s,x.source));
}
/* show/binop-src */
static obj_t show_slash_binop_src(state_t s,binop_src_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,show_slash_rvalue(s,x.source1),from_string_lit(s,", ")),show_slash_rvalue(s,x.source2));
}
/* show/unop */
static obj_t show_slash_unop(state_t s,unop_t x) {
  return show_slash_lvalue(s,x.destination);
}
/* show/unop-src */
static obj_t show_slash_unop_src(state_t s,unop_src_t x) {
  return show_slash_rvalue(s,x.source);
}
/* show/ua */
static obj_t show_slash_ua(state_t s,obj_t mnemonic,obj_t ua) {
  switch (*((int_t*) ua)) {
    case CON_NULLOP: {
      return mnemonic;
    }; break;
    case 358/* UNOP_SRC */: {
      unop_src_t x;
      x = ((con_unop_src_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_unop_src(s,x));
    }; break;
    case 359/* UNOP */: {
      unop_t x;
      x = ((con_unop_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_unop(s,x));
    }; break;
    case 360/* BINOP_SRC */: {
      binop_src_t x;
      x = ((con_binop_src_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_binop_src(s,x));
    }; break;
    case 361/* BINOP_FMT */: {
      binop_fmt_t x;
      x = ((con_binop_fmt_t*) ua)->payload;
      return __plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,mnemonic,from_string_lit(s,".")),show_slash_format(s,x.fmt)),show_slash_binop_fmt(s,x));
    }; break;
    case 362/* BINOP */: {
      binop_t x;
      x = ((con_binop_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_binop(s,x));
    }; break;
    case 363/* TERNOP_SRC */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_ternop_src(s,x));
    }; break;
    case 364/* TERNOP */: {
      ternop_t x;
      x = ((con_ternop_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_ternop(s,x));
    }; break;
    case 365/* TERNOP_FMT */: {
      ternop_fmt_t x;
      x = ((con_ternop_fmt_t*) ua)->payload;
      return __plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,mnemonic,from_string_lit(s,".")),show_slash_format(s,x.fmt)),show_slash_ternop_fmt(s,x));
    }; break;
    case 366/* QUADOP */: {
      quadop_t x;
      x = ((con_quadop_t*) ua)->payload;
      return __plus__plus_(s,mnemonic,show_slash_quadop(s,x));
    }; break;
    case 367/* QUADOP_FMT */: {
      quadop_fmt_t x;
      x = ((con_quadop_fmt_t*) ua)->payload;
      return __plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,mnemonic,from_string_lit(s,".")),show_slash_format(s,x.fmt)),show_slash_quadop_fmt(s,x));
    }; break;
    case 368/* QUADOP_FMT_SRC */: {
      quadop_fmt_src_t x;
      x = ((con_quadop_fmt_src_t*) ua)->payload;
      return __plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,mnemonic,from_string_lit(s,".")),show_slash_format(s,x.fmt)),show_slash_quadop_fmt_src(s,x));
    }; break;
    default: {
      s->err_str = "pattern match failure in show/ua at specifications/mips/mips-pretty.ml:155.22-23";
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
  return add_field_obj(s,92/* fields */,fitree_union(s,select_obj(s,92/* fields */,x),select_obj(s,92/* fields */,y)),add_field_obj(s,91/* id */,select_obj(s,91/* id */,x),NULL));
}
/* fmap-add */
static obj_t fmap_add(state_t s,obj_t t,obj_t x) {
  return bbtree_add(s,gen_int__obj_obj_closure(s,&fmap_lt_q__closure),t,x);
}
/* fmap-add-with */
static obj_t fmap_add_with(state_t s,obj_t (*f_)(state_t,obj_t,obj_t),obj_t t,obj_t x) {
  return bbtree_add_with(s,gen_int__obj_obj_closure(s,&fmap_lt_q__closure),f_,t,x);
}
/* fmap-update */
static obj_t fmap_update(state_t s,obj_t t,obj_t x) {
  return fmap_add_with(s,fmap_value_merge,t,x);
}
/* fmap-get */
static obj_t fmap_get(state_t s,obj_t t,obj_t x) {
  return bbtree_get(s,gen_int__obj_obj_closure(s,&fmap_lt_q__closure),t,add_field_obj(s,92/* fields */,s->fitree_empty,add_field_obj(s,91/* id */,select_obj(s,91/* id */,x),NULL)));
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
static obj_t fmap_fold(state_t s,obj_t f_,obj_t s_,obj_t t) {
  return bbtree_fold(s,f_,s_,t);
}
/* to-field */
static obj_t to_field(state_t s,int_t sz,int_t offs) {
  return add_field_int(s,14/* hi */,((offs+sz)-1),add_field_int(s,13/* lo */,offs,NULL));
}
/* fmap-add-field */
static obj_t fmap_add_field(state_t s,obj_t t,obj_t x,obj_t f_) {
  return fmap_update(s,t,add_field_obj(s,92/* fields */,fitree_singleton(s,f_),add_field_obj(s,91/* id */,x,NULL)));
}
/* fmap-add-range */
static obj_t fmap_add_range(state_t s,obj_t t,obj_t x,int_t sz,int_t offs) {
  return fmap_add_field(s,t,x,to_field(s,sz,offs));
}
static INLINE_ATTR obj_t constructor_SEM_CONS(state_t s,struct6_t arg_of_SEM_CONS) {
  con_struct6_t adt;
  adt.tag = 418/* SEM_CONS */;
  adt.payload = arg_of_SEM_CONS;
  return (obj_t) alloc_con_struct6(s,adt);
}
/* lp */
static obj_t lp(state_t s,obj_t stmt,obj_t acc) {
  switch (*((int_t*) stmt)) {
    case CON_SEM_NIL: {
      return acc;
    }; break;
    case 418/* SEM_CONS */: {
      struct6_t x;
      x = ((con_struct6_t*) stmt)->payload;
      return lp(s,x.tl,constructor_SEM_CONS(s,__struct6(s,x.hd,acc)));
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
  adt.tag = 372/* SEM_LIN_VAR */;
  adt.payload = arg_of_SEM_LIN_VAR;
  return (obj_t) alloc_con_obj(s,adt);
}
/* var */
static obj_t var(state_t s,obj_t x) {
  return constructor_SEM_LIN_VAR(s,add_field_obj(s,91/* id */,select_obj(s,91/* id */,x),add_field_int(s,54/* offset */,select_int(s,54/* offset */,x),NULL)));
}
static INLINE_ATTR obj_t constructor_SEM_LIN_ADD(state_t s,sem_arity2_t arg_of_SEM_LIN_ADD) {
  con_sem_arity2_t adt;
  adt.tag = 374/* SEM_LIN_ADD */;
  adt.payload = arg_of_SEM_LIN_ADD;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* address */
static sem_address_t address(state_t s,int_t sz,obj_t addr) {
  return __sem_address(s,addr,sz);
}
static INLINE_ATTR obj_t constructor_SEM_VARLS_CONS(state_t s,struct6_t arg_of_SEM_VARLS_CONS) {
  con_struct6_t adt;
  adt.tag = 400/* SEM_VARLS_CONS */;
  adt.payload = arg_of_SEM_VARLS_CONS;
  return (obj_t) alloc_con_struct6(s,adt);
}
/* varls-one */
static obj_t varls_one(state_t s,obj_t v) {
  return constructor_SEM_VARLS_CONS(s,__struct6(s,add_field_obj(s,91/* id */,select_obj(s,91/* id */,v),add_field_int(s,54/* offset */,select_int(s,54/* offset */,v),add_field_int(s,9/* size */,select_int(s,9/* size */,v),NULL))),alloc_int(s,CON_SEM_VARLS_NIL)));
}
/* varls-more */
static obj_t varls_more(state_t s,obj_t v,obj_t tl) {
  return constructor_SEM_VARLS_CONS(s,__struct6(s,add_field_obj(s,91/* id */,select_obj(s,91/* id */,v),add_field_int(s,54/* offset */,select_int(s,54/* offset */,v),add_field_int(s,9/* size */,select_int(s,9/* size */,v),NULL))),tl));
}
/* mktemp */
static obj_t mktemp_(state_t s) {
  int_t t;
  int_t t_tick_;
  t = s->mon_state.tmp;
  t_tick_ = (t+1);
  s->mon_state.tmp = t_tick_;;
  return add_field_obj(s,91/* id */,constructor_VIRT_T(s,t),add_field_int(s,54/* offset */,0,NULL));
}
/* with-subscope */
static INLINE_ATTR obj_t invoke_obj_closure(state_t s,obj_t closure) {
  return ((struct {obj_t (*func)(state_t,obj_t);}*) closure)->func(s,closure);
}
static obj_t with_subscope(state_t s,obj_t m) {
  int_t l;
  obj_t ret;
  l = s->mon_state.tmp;
  ret = invoke_obj_closure(s,m);
  s->mon_state.tmp = l;;
  return ret;
}
static INLINE_ATTR obj_t constructor_SEM_ASSIGN(state_t s,struct31_t arg_of_SEM_ASSIGN) {
  con_struct31_t adt;
  adt.tag = 405/* SEM_ASSIGN */;
  adt.payload = arg_of_SEM_ASSIGN;
  return (obj_t) alloc_con_struct31(s,adt);
}
/* /ASSIGN */
static obj_t _slash_ASSIGN(state_t s,int_t sz,obj_t a,obj_t b) {
  return constructor_SEM_ASSIGN(s,__struct31(s,add_field_obj(s,91/* id */,select_obj(s,91/* id */,a),add_field_int(s,54/* offset */,select_int(s,54/* offset */,a),NULL)),b,sz));
}
static INLINE_ATTR obj_t constructor_SEM_LOAD(state_t s,struct32_t arg_of_SEM_LOAD) {
  con_struct32_t adt;
  adt.tag = 406/* SEM_LOAD */;
  adt.payload = arg_of_SEM_LOAD;
  return (obj_t) alloc_con_struct32(s,adt);
}
/* /LOAD */
static obj_t _slash_LOAD(state_t s,int_t sz,obj_t a,sem_address_t b) {
  return constructor_SEM_LOAD(s,__struct32(s,__sem_address(s,b.address,b.size),add_field_obj(s,91/* id */,select_obj(s,91/* id */,a),add_field_int(s,54/* offset */,select_int(s,54/* offset */,a),NULL)),sz));
}
static INLINE_ATTR obj_t constructor_SEM_STORE(state_t s,struct33_t arg_of_SEM_STORE) {
  con_struct33_t adt;
  adt.tag = 407/* SEM_STORE */;
  adt.payload = arg_of_SEM_STORE;
  return (obj_t) alloc_con_struct33(s,adt);
}
/* /STORE */
static obj_t _slash_STORE(state_t s,int_t sz,sem_address_t a,obj_t b) {
  return constructor_SEM_STORE(s,__struct33(s,__sem_address(s,a.address,a.size),b,sz));
}
/* /ADD */
static obj_t _slash_ADD(state_t s,obj_t a,obj_t b) {
  return constructor_SEM_LIN_ADD(s,__sem_arity2(s,a,b));
}
static INLINE_ATTR obj_t constructor_SEM_LIN_SUB(state_t s,sem_arity2_t arg_of_SEM_LIN_SUB) {
  con_sem_arity2_t adt;
  adt.tag = 375/* SEM_LIN_SUB */;
  adt.payload = arg_of_SEM_LIN_SUB;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* /SUB */
static obj_t _slash_SUB(state_t s,obj_t a,obj_t b) {
  return constructor_SEM_LIN_SUB(s,__sem_arity2(s,a,b));
}
static INLINE_ATTR obj_t constructor_SEM_ITE(state_t s,struct34_t arg_of_SEM_ITE) {
  con_struct34_t adt;
  adt.tag = 408/* SEM_ITE */;
  adt.payload = arg_of_SEM_ITE;
  return (obj_t) alloc_con_struct34(s,adt);
}
/* /ITE */
static obj_t _slash_ITE(state_t s,obj_t c,obj_t t,obj_t e_) {
  return constructor_SEM_ITE(s,__struct34(s,c,e_,t));
}
static INLINE_ATTR obj_t constructor_SEM_WHILE(state_t s,struct35_t arg_of_SEM_WHILE) {
  con_struct35_t adt;
  adt.tag = 409/* SEM_WHILE */;
  adt.payload = arg_of_SEM_WHILE;
  return (obj_t) alloc_con_struct35(s,adt);
}
/* /WHILE */
static obj_t _slash_WHILE(state_t s,obj_t c,obj_t b) {
  return constructor_SEM_WHILE(s,__struct35(s,b,c));
}
static INLINE_ATTR obj_t constructor_SEM_BRANCH(state_t s,struct36_t arg_of_SEM_BRANCH) {
  con_struct36_t adt;
  adt.tag = 411/* SEM_BRANCH */;
  adt.payload = arg_of_SEM_BRANCH;
  return (obj_t) alloc_con_struct36(s,adt);
}
/* /BRANCH */
static obj_t _slash_BRANCH(state_t s,obj_t hint,sem_address_t address_) {
  return constructor_SEM_BRANCH(s,__struct36(s,hint,__sem_address(s,address_.address,address_.size)));
}
static INLINE_ATTR obj_t constructor_SEM_CBRANCH(state_t s,struct37_t arg_of_SEM_CBRANCH) {
  con_struct37_t adt;
  adt.tag = 410/* SEM_CBRANCH */;
  adt.payload = arg_of_SEM_CBRANCH;
  return (obj_t) alloc_con_struct37(s,adt);
}
/* /CBRANCH */
static obj_t _slash_CBRANCH(state_t s,obj_t cond_,sem_address_t target_true,sem_address_t target_false) {
  return constructor_SEM_CBRANCH(s,__struct37(s,cond_,__sem_address(s,target_false.address,target_false.size),__sem_address(s,target_true.address,target_true.size)));
}
static INLINE_ATTR obj_t constructor_SEM_PRIM(state_t s,struct38_t arg_of_SEM_PRIM) {
  con_struct38_t adt;
  adt.tag = 413/* SEM_PRIM */;
  adt.payload = arg_of_SEM_PRIM;
  return (obj_t) alloc_con_struct38(s,adt);
}
/* /PRIM */
static obj_t _slash_PRIM(state_t s,string_t op_,obj_t lhs,obj_t rhs) {
  return constructor_SEM_PRIM(s,__struct38(s,lhs,op_,rhs));
}
static INLINE_ATTR obj_t constructor_SEM_THROW(state_t s,obj_t arg_of_SEM_THROW) {
  con_obj_t adt;
  adt.tag = 414/* SEM_THROW */;
  adt.payload = arg_of_SEM_THROW;
  return (obj_t) alloc_con_obj(s,adt);
}
/* /THROW */
static obj_t _slash_THROW(state_t s,obj_t exception) {
  return constructor_SEM_THROW(s,exception);
}
/* push-inner */
static obj_t push_inner(state_t s,obj_t insn) {
  obj_t tl;
  tl = s->mon_state.stack;
  s->mon_state.stack = constructor_SEM_CONS(s,__struct6(s,insn,tl));;
  return 0 /* void value */;
}
/* push */
static obj_t push(state_t s,obj_t insn) {
  switch (((con_obj_t*) insn)->tag) {
    case 405/* SEM_ASSIGN */: {
      struct31_t s_;
      s_ = ((con_struct31_t*) insn)->payload;
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
  adt.tag = 386/* SEM_SEXPR */;
  adt.payload = arg_of_SEM_SEXPR;
  return (obj_t) alloc_con_obj(s,adt);
}
static INLINE_ATTR obj_t constructor_SEM_SEXPR_LIN(state_t s,obj_t arg_of_SEM_SEXPR_LIN) {
  con_obj_t adt;
  adt.tag = 377/* SEM_SEXPR_LIN */;
  adt.payload = arg_of_SEM_SEXPR_LIN;
  return (obj_t) alloc_con_obj(s,adt);
}
/* mov */
static obj_t mov(state_t s,int_t sz,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_LIN(s,b))));
}
/* load */
static obj_t load(state_t s,int_t sz,obj_t a,int_t psz,obj_t b) {
  return push(s,_slash_LOAD(s,sz,a,__sem_address(s,b,psz)));
}
/* store */
static obj_t store(state_t s,int_t sz,sem_address_t a,obj_t b) {
  return push(s,_slash_STORE(s,sz,a,b));
}
/* addAction1 */
static obj_t addAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_LIN(s,_slash_ADD(s,b,c)))));
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  int_t arg1;
  obj_t arg2;
  obj_t arg3;
  obj_t arg4;
} closure_obj_int_obj_obj_obj__t;
static obj_t addAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return addAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* add */
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
static obj_t add(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&addAction1Closure,sz,a,b,c);
}
/* subAction1 */
static obj_t subAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_LIN(s,_slash_SUB(s,b,c)))));
}
static obj_t subAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return subAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* sub */
static obj_t sub(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&subAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_AND(state_t s,sem_arity2_t arg_of_SEM_AND) {
  con_sem_arity2_t adt;
  adt.tag = 395/* SEM_AND */;
  adt.payload = arg_of_SEM_AND;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* andbAction1 */
static obj_t andbAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_AND(s,__sem_arity2(s,b,c))));
}
static obj_t andbAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return andbAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* andb */
static obj_t andb(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&andbAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_OR(state_t s,sem_arity2_t arg_of_SEM_OR) {
  con_sem_arity2_t adt;
  adt.tag = 396/* SEM_OR */;
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
  adt.tag = 397/* SEM_XOR */;
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
  adt.tag = 387/* SEM_MUL */;
  adt.payload = arg_of_SEM_MUL;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* mul */
static obj_t mul(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_MUL(s,__sem_arity2(s,b,c))));
}
static INLINE_ATTR obj_t constructor_SEM_DIV(state_t s,sem_arity2_t arg_of_SEM_DIV) {
  con_sem_arity2_t adt;
  adt.tag = 388/* SEM_DIV */;
  adt.payload = arg_of_SEM_DIV;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* divAction1 */
static obj_t divAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_DIV(s,__sem_arity2(s,b,c))));
}
static obj_t divAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return divAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* div */
static obj_t div_(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&divAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_DIVS(state_t s,sem_arity2_t arg_of_SEM_DIVS) {
  con_sem_arity2_t adt;
  adt.tag = 389/* SEM_DIVS */;
  adt.payload = arg_of_SEM_DIVS;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* divsAction1 */
static obj_t divsAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_DIVS(s,__sem_arity2(s,b,c))));
}
static obj_t divsAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return divsAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* divs */
static obj_t divs(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&divsAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_SHL(state_t s,sem_arity2_t arg_of_SEM_SHL) {
  con_sem_arity2_t adt;
  adt.tag = 392/* SEM_SHL */;
  adt.payload = arg_of_SEM_SHL;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* shlAction1 */
static obj_t shlAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SHL(s,__sem_arity2(s,b,c))));
}
static obj_t shlAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return shlAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* shl */
static obj_t shl(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&shlAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_SHR(state_t s,sem_arity2_t arg_of_SEM_SHR) {
  con_sem_arity2_t adt;
  adt.tag = 393/* SEM_SHR */;
  adt.payload = arg_of_SEM_SHR;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* shrAction1 */
static obj_t shrAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SHR(s,__sem_arity2(s,b,c))));
}
static obj_t shrAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return shrAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* shr */
static obj_t shr(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&shrAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_SHRS(state_t s,sem_arity2_t arg_of_SEM_SHRS) {
  con_sem_arity2_t adt;
  adt.tag = 394/* SEM_SHRS */;
  adt.payload = arg_of_SEM_SHRS;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* shrsAction1 */
static obj_t shrsAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_SHRS(s,__sem_arity2(s,b,c))));
}
static obj_t shrsAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return shrsAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* shrs */
static obj_t shrs(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&shrsAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_MOD(state_t s,sem_arity2_t arg_of_SEM_MOD) {
  con_sem_arity2_t adt;
  adt.tag = 390/* SEM_MOD */;
  adt.payload = arg_of_SEM_MOD;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* modAction1 */
static obj_t modAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_MOD(s,__sem_arity2(s,b,c))));
}
static obj_t modAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return modAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* mod */
static obj_t mod(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&modAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_MODS(state_t s,sem_arity2_t arg_of_SEM_MODS) {
  con_sem_arity2_t adt;
  adt.tag = 391/* SEM_MODS */;
  adt.payload = arg_of_SEM_MODS;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* modsAction1 */
static obj_t modsAction1(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return push(s,_slash_ASSIGN(s,sz,a,constructor_SEM_MODS(s,__sem_arity2(s,b,c))));
}
static obj_t modsAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return modsAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* mods */
static obj_t mods(state_t s,int_t sz,obj_t a,obj_t b,obj_t c) {
  return gen_obj_int_obj_obj_obj__closure(s,&modsAction1Closure,sz,a,b,c);
}
static INLINE_ATTR obj_t constructor_SEM_SX(state_t s,struct39_t arg_of_SEM_SX) {
  con_struct39_t adt;
  adt.tag = 398/* SEM_SX */;
  adt.payload = arg_of_SEM_SX;
  return (obj_t) alloc_con_struct39(s,adt);
}
/* movsxAction1 */
static obj_t movsxAction1(state_t s,int_t szA,obj_t a,int_t szB,obj_t b) {
  return push(s,_slash_ASSIGN(s,szA,a,constructor_SEM_SX(s,__struct39(s,szB,b))));
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
static INLINE_ATTR obj_t constructor_SEM_ZX(state_t s,struct39_t arg_of_SEM_ZX) {
  con_struct39_t adt;
  adt.tag = 399/* SEM_ZX */;
  adt.payload = arg_of_SEM_ZX;
  return (obj_t) alloc_con_struct39(s,adt);
}
/* movzxAction1 */
static obj_t movzxAction1(state_t s,int_t szA,obj_t a,int_t szB,obj_t b) {
  return push(s,_slash_ASSIGN(s,szA,a,constructor_SEM_ZX(s,__struct39(s,szB,b))));
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
  adt.tag = 378/* SEM_SEXPR_CMP */;
  adt.payload = arg_of_SEM_SEXPR_CMP;
  return (obj_t) alloc_con_obj(s,adt);
}
static INLINE_ATTR obj_t constructor_SEM_CMPEQ(state_t s,sem_arity2_t arg_of_SEM_CMPEQ) {
  con_sem_arity2_t adt;
  adt.tag = 380/* SEM_CMPEQ */;
  adt.payload = arg_of_SEM_CMPEQ;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* cmpeq */
static obj_t cmpeq(state_t s,int_t sz,obj_t f_,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,f_,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_CMP(s,constructor_SEM_CMPEQ(s,__sem_arity2(s,a,b))))));
}
static INLINE_ATTR obj_t constructor_SEM_CMPNEQ(state_t s,sem_arity2_t arg_of_SEM_CMPNEQ) {
  con_sem_arity2_t adt;
  adt.tag = 381/* SEM_CMPNEQ */;
  adt.payload = arg_of_SEM_CMPNEQ;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* cmpneq */
static obj_t cmpneq(state_t s,int_t sz,obj_t f_,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,f_,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_CMP(s,constructor_SEM_CMPNEQ(s,__sem_arity2(s,a,b))))));
}
static INLINE_ATTR obj_t constructor_SEM_CMPLES(state_t s,sem_arity2_t arg_of_SEM_CMPLES) {
  con_sem_arity2_t adt;
  adt.tag = 382/* SEM_CMPLES */;
  adt.payload = arg_of_SEM_CMPLES;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* cmples */
static obj_t cmples(state_t s,int_t sz,obj_t f_,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,f_,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_CMP(s,constructor_SEM_CMPLES(s,__sem_arity2(s,a,b))))));
}
static INLINE_ATTR obj_t constructor_SEM_CMPLTS(state_t s,sem_arity2_t arg_of_SEM_CMPLTS) {
  con_sem_arity2_t adt;
  adt.tag = 384/* SEM_CMPLTS */;
  adt.payload = arg_of_SEM_CMPLTS;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* cmpltsAction1 */
static obj_t cmpltsAction1(state_t s,int_t sz,obj_t f_,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,f_,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_CMP(s,constructor_SEM_CMPLTS(s,__sem_arity2(s,a,b))))));
}
static obj_t cmpltsAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return cmpltsAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* cmplts */
static obj_t cmplts(state_t s,int_t sz,obj_t f_,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj_obj__closure(s,&cmpltsAction1Closure,sz,f_,a,b);
}
static INLINE_ATTR obj_t constructor_SEM_CMPLTU(state_t s,sem_arity2_t arg_of_SEM_CMPLTU) {
  con_sem_arity2_t adt;
  adt.tag = 385/* SEM_CMPLTU */;
  adt.payload = arg_of_SEM_CMPLTU;
  return (obj_t) alloc_con_sem_arity2(s,adt);
}
/* cmpltuAction1 */
static obj_t cmpltuAction1(state_t s,int_t sz,obj_t f_,obj_t a,obj_t b) {
  return push(s,_slash_ASSIGN(s,sz,f_,constructor_SEM_SEXPR(s,constructor_SEM_SEXPR_CMP(s,constructor_SEM_CMPLTU(s,__sem_arity2(s,a,b))))));
}
static obj_t cmpltuAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_obj_obj__t*) v;
  return cmpltuAction1(s,c->arg1,c->arg2,c->arg3,c->arg4);
}
/* cmpltu */
static obj_t cmpltu(state_t s,int_t sz,obj_t f_,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj_obj__closure(s,&cmpltuAction1Closure,sz,f_,a,b);
}
/* ite */
static obj_t ite(state_t s,obj_t c,obj_t t,obj_t e_) {
  return push(s,_slash_ITE(s,constructor_SEM_SEXPR_LIN(s,c),t,e_));
}
/* while */
static obj_t while_(state_t s,obj_t c,obj_t b) {
  return push(s,_slash_WHILE(s,constructor_SEM_SEXPR_LIN(s,c),b));
}
/* jump */
static obj_t jump(state_t s,sem_address_t address_) {
  s->mon_state.foundJump = 1 /* '1' */;;
  return push(s,_slash_BRANCH(s,alloc_int(s,CON_HINT_JUMP),address_));
}
/* cbranch */
static obj_t cbranch(state_t s,obj_t cond_,sem_address_t target_true,sem_address_t target_false) {
  s->mon_state.foundJump = 1 /* '1' */;;
  return push(s,_slash_CBRANCH(s,constructor_SEM_SEXPR_LIN(s,cond_),target_true,target_false));
}
/* throw */
static obj_t throw(state_t s,obj_t exception) {
  return push(s,_slash_THROW(s,exception));
}
/* unpack-lin */
static obj_t unpack_lin(state_t s,int_t sz,obj_t o) {
  switch (((con_obj_t*) o)->tag) {
    case 372/* SEM_LIN_VAR */: {
      obj_t v;
      v = ((con_obj_t*) o)->payload;
      return v;
    }; break;
    default: {
      obj_t t;
      t = mktemp_(s);
      mov(s,sz,t,o);
      return t;
    }; break;
  };
}
/* prim-generic */
static obj_t prim_generic(state_t s,obj_t op_,obj_t lhs,obj_t rhs) {
  return push(s,_slash_PRIM(s,string_from_rope(s,op_),lhs,rhs));
}
static INLINE_ATTR obj_t constructor_SEM_LIN_SCALE(state_t s,struct40_t arg_of_SEM_LIN_SCALE) {
  con_struct40_t adt;
  adt.tag = 376/* SEM_LIN_SCALE */;
  adt.payload = arg_of_SEM_LIN_SCALE;
  return (obj_t) alloc_con_struct40(s,adt);
}
static INLINE_ATTR obj_t constructor_SEM_LIN_IMM(state_t s,struct41_t arg_of_SEM_LIN_IMM) {
  con_struct41_t adt;
  adt.tag = 373/* SEM_LIN_IMM */;
  adt.payload = arg_of_SEM_LIN_IMM;
  return (obj_t) alloc_con_struct41(s,adt);
}
/* int-from-linear */
static obj_t int_from_linear(state_t s,obj_t lin) {
  switch (((con_obj_t*) lin)->tag) {
    case 372/* SEM_LIN_VAR */: {
      return alloc_int(s,CON_IO_NONE);
    }; break;
    case 373/* SEM_LIN_IMM */: {
      struct41_t x;
      x = ((con_struct41_t*) lin)->payload;
      return constructor_IO_SOME(s,x.const_);
    }; break;
    case 374/* SEM_LIN_ADD */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return io_binop(s,addi,int_from_linear(s,x.opnd1),int_from_linear(s,x.opnd2));
    }; break;
    case 375/* SEM_LIN_SUB */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return io_binop(s,subi,int_from_linear(s,x.opnd1),int_from_linear(s,x.opnd2));
    }; break;
    case 376/* SEM_LIN_SCALE */: {
      struct40_t x;
      x = ((con_struct40_t*) lin)->payload;
      return io_binop(s,muli,constructor_IO_SOME(s,x.const_),int_from_linear(s,x.opnd));
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
/* _if_thenAction1 */
static obj_t _if_thenAction1(state_t s) {
  return 0 /* void value */;
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
} closure_obj__t;
static obj_t _if_thenAction1Closure(state_t s,obj_t v) {
  return _if_thenAction1(s);
}
/* _if_then */
static INLINE_ATTR obj_t gen_obj__closure(state_t s,obj_t (*func)(state_t,obj_t)) {
  closure_obj__t content;
  content.func = func;
  closure_obj__t* closure = (closure_obj__t*) alloc(s, sizeof(closure_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t _if_then(state_t s,obj_t c,obj_t a) {
  return _if_then_else(s,c,a,gen_obj__closure(s,&_if_thenAction1Closure));
}
/* eval-cond */
static obj_t eval_cond(state_t s,obj_t c,obj_t ct) {
  obj_t cc_;
  cc_ = invoke_obj_closure(s,c);
  return mov(s,1,ct,cc_);
}
/* _while__Action2 */
static obj_t _while__Action2(state_t s,obj_t c,obj_t ct) {
  return eval_cond(s,c,ct);
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  obj_t arg1;
  obj_t arg2;
} closure_obj__obj_fun_obj__t;
static obj_t _while__Action2Closure(state_t s,obj_t v) {
  closure_obj__obj_fun_obj__t* c = (closure_obj__obj_fun_obj__t*) v;
  return _while__Action2(s,c->arg1,c->arg2);
}
/* _while__Action1 */
static obj_t _while__Action1(state_t s,obj_t c,obj_t ct) {
  return eval_cond(s,c,ct);
}
static obj_t _while__Action1Closure(state_t s,obj_t v) {
  closure_obj__obj_fun_obj__t* c = (closure_obj__obj_fun_obj__t*) v;
  return _while__Action1(s,c->arg1,c->arg2);
}
/* _while__ */
static INLINE_ATTR obj_t gen_obj__obj_fun_obj__closure(state_t s,obj_t (*func)(state_t,obj_t),obj_t arg1,obj_t arg2) {
  closure_obj__obj_fun_obj__t content;
  content.func = func;
  content.arg1 = arg1;
  content.arg2 = arg2;
  closure_obj__obj_fun_obj__t* closure = (closure_obj__obj_fun_obj__t*) alloc(s, sizeof(closure_obj__obj_fun_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t _while__(state_t s,obj_t c,obj_t b) {
  obj_t ct;
  obj_t stack;
  obj_t body;
  obj_t body_;
  ct = mktemp_(s);
  with_subscope(s,gen_obj__obj_fun_obj__closure(s,&_while__Action1Closure,c,ct));
  stack = pop_all(s);
  with_subscope(s,b);
  with_subscope(s,gen_obj__obj_fun_obj__closure(s,&_while__Action2Closure,c,ct));
  body = pop_all(s);
  body_ = rreil_stmts_rev(s,body);
  stack_set(s,stack);
  return while_(s,var(s,ct),body_);
}
/* /d */
static obj_t _slash_d(state_t s,obj_t cond_) {
  return cond_;
}
/* /xor */
static obj_t _slash_xor(state_t s,obj_t a,obj_t b) {
  obj_t a_;
  obj_t b_;
  obj_t t;
  a_ = invoke_obj_closure(s,a);
  b_ = invoke_obj_closure(s,b);
  t = mktemp_(s);
  invoke_obj_closure(s,xorb(s,1,t,a_,b_));
  return var(s,t);
}
/* imm */
static obj_t imm(state_t s,int_t i) {
  return constructor_SEM_LIN_IMM(s,__struct41(s,i));
}
/* /not */
static obj_t _slash_not(state_t s,obj_t a) {
  obj_t t;
  t = mktemp_(s);
  invoke_obj_closure(s,xorb(s,1,t,a,imm(s,1)));
  return var(s,t);
}
/* /eqAction1 */
static obj_t _slash_eqAction1(state_t s,int_t sz,obj_t a,obj_t b) {
  obj_t t;
  t = mktemp_(s);
  cmpeq(s,sz,t,a,b);
  return var(s,t);
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  int_t arg1;
  obj_t arg2;
  obj_t arg3;
} closure_obj_int_obj_obj__t;
static obj_t _slash_eqAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj__t* c = (closure_obj_int_obj_obj__t*) v;
  return _slash_eqAction1(s,c->arg1,c->arg2,c->arg3);
}
/* /eq */
static INLINE_ATTR obj_t gen_obj_int_obj_obj__closure(state_t s,obj_t (*func)(state_t,obj_t),int_t arg1,obj_t arg2,obj_t arg3) {
  closure_obj_int_obj_obj__t content;
  content.func = func;
  content.arg1 = arg1;
  content.arg2 = arg2;
  content.arg3 = arg3;
  closure_obj_int_obj_obj__t* closure = (closure_obj_int_obj_obj__t*) alloc(s, sizeof(closure_obj_int_obj_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t _slash_eq(state_t s,int_t sz,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj__closure(s,&_slash_eqAction1Closure,sz,a,b);
}
/* /neqAction1 */
static obj_t _slash_neqAction1(state_t s,int_t sz,obj_t a,obj_t b) {
  obj_t t;
  t = mktemp_(s);
  cmpneq(s,sz,t,a,b);
  return var(s,t);
}
static obj_t _slash_neqAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj__t* c = (closure_obj_int_obj_obj__t*) v;
  return _slash_neqAction1(s,c->arg1,c->arg2,c->arg3);
}
/* /neq */
static obj_t _slash_neq(state_t s,int_t sz,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj__closure(s,&_slash_neqAction1Closure,sz,a,b);
}
/* /gtsAction1 */
static obj_t _slash_gtsAction1(state_t s,int_t sz,obj_t a,obj_t b) {
  obj_t t;
  t = mktemp_(s);
  cmples(s,sz,t,a,b);
  invoke_obj_closure(s,xorb(s,1,t,var(s,t),imm(s,1)));
  return var(s,t);
}
static obj_t _slash_gtsAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj__t* c = (closure_obj_int_obj_obj__t*) v;
  return _slash_gtsAction1(s,c->arg1,c->arg2,c->arg3);
}
/* /gts */
static obj_t _slash_gts(state_t s,int_t sz,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj__closure(s,&_slash_gtsAction1Closure,sz,a,b);
}
/* /geuAction1 */
static obj_t _slash_geuAction1(state_t s,int_t sz,obj_t a,obj_t b) {
  obj_t t;
  t = mktemp_(s);
  invoke_obj_closure(s,cmpltu(s,sz,t,a,b));
  invoke_obj_closure(s,xorb(s,1,t,var(s,t),imm(s,1)));
  return var(s,t);
}
static obj_t _slash_geuAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj__t* c = (closure_obj_int_obj_obj__t*) v;
  return _slash_geuAction1(s,c->arg1,c->arg2,c->arg3);
}
/* /geu */
static obj_t _slash_geu(state_t s,int_t sz,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj__closure(s,&_slash_geuAction1Closure,sz,a,b);
}
/* /gesAction1 */
static obj_t _slash_gesAction1(state_t s,int_t sz,obj_t a,obj_t b) {
  obj_t t;
  t = mktemp_(s);
  invoke_obj_closure(s,cmplts(s,sz,t,a,b));
  invoke_obj_closure(s,xorb(s,1,t,var(s,t),imm(s,1)));
  return var(s,t);
}
static obj_t _slash_gesAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj__t* c = (closure_obj_int_obj_obj__t*) v;
  return _slash_gesAction1(s,c->arg1,c->arg2,c->arg3);
}
/* /ges */
static obj_t _slash_ges(state_t s,int_t sz,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj__closure(s,&_slash_gesAction1Closure,sz,a,b);
}
/* /ltsAction1 */
static obj_t _slash_ltsAction1(state_t s,int_t sz,obj_t a,obj_t b) {
  obj_t t;
  t = mktemp_(s);
  invoke_obj_closure(s,cmplts(s,sz,t,a,b));
  return var(s,t);
}
static obj_t _slash_ltsAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj__t* c = (closure_obj_int_obj_obj__t*) v;
  return _slash_ltsAction1(s,c->arg1,c->arg2,c->arg3);
}
/* /lts */
static obj_t _slash_lts(state_t s,int_t sz,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj__closure(s,&_slash_ltsAction1Closure,sz,a,b);
}
/* /ltuAction1 */
static obj_t _slash_ltuAction1(state_t s,int_t sz,obj_t a,obj_t b) {
  obj_t t;
  t = mktemp_(s);
  invoke_obj_closure(s,cmpltu(s,sz,t,a,b));
  return var(s,t);
}
static obj_t _slash_ltuAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj__t* c = (closure_obj_int_obj_obj__t*) v;
  return _slash_ltuAction1(s,c->arg1,c->arg2,c->arg3);
}
/* /ltu */
static obj_t _slash_ltu(state_t s,int_t sz,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj__closure(s,&_slash_ltuAction1Closure,sz,a,b);
}
/* /lesAction1 */
static obj_t _slash_lesAction1(state_t s,int_t sz,obj_t a,obj_t b) {
  obj_t t;
  t = mktemp_(s);
  cmples(s,sz,t,a,b);
  return var(s,t);
}
static obj_t _slash_lesAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj__t* c = (closure_obj_int_obj_obj__t*) v;
  return _slash_lesAction1(s,c->arg1,c->arg2,c->arg3);
}
/* /les */
static obj_t _slash_les(state_t s,int_t sz,obj_t a,obj_t b) {
  return gen_obj_int_obj_obj__closure(s,&_slash_lesAction1Closure,sz,a,b);
}
/* count */
static int_t count(state_t s,int_t c,obj_t stmts) {
  switch (((con_obj_t*) stmts)->tag) {
    case 418/* SEM_CONS */: {
      struct6_t x;
      obj_t scrutinee;
      int_t caseRes;
      x = ((con_struct6_t*) stmts)->payload;
      scrutinee = x.hd;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 408/* SEM_ITE */: {
          struct34_t i;
          i = ((con_struct34_t*) scrutinee)->payload;
          caseRes = (count(s,c,i.then_branch)+count(s,0,i.else_branch));
        }; break;
        case 409/* SEM_WHILE */: {
          struct35_t w;
          w = ((con_struct35_t*) scrutinee)->payload;
          caseRes = count(s,c,w.body);
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
/* example_aAction6 */
static obj_t example_aAction6(state_t s,obj_t t1) {
  return mov(s,64,t1,imm(s,300));
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  obj_t arg1;
} closure_obj_obj__t;
static obj_t example_aAction6Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return example_aAction6(s,c->arg1);
}
/* example_aAction4 */
static obj_t example_aAction4(state_t s,obj_t t1) {
  return mov(s,64,t1,imm(s,500));
}
static obj_t example_aAction4Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return example_aAction4(s,c->arg1);
}
/* example_aAction3 */
static obj_t example_aAction3(state_t s,obj_t t1) {
  return mov(s,64,t1,imm(s,200));
}
static obj_t example_aAction3Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return example_aAction3(s,c->arg1);
}
/* example_aAction2 */
static obj_t example_aAction2(state_t s,obj_t t2) {
  return _slash_d(s,var(s,t2));
}
static obj_t example_aAction2Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return example_aAction2(s,c->arg1);
}
/* example_aAction5 */
static INLINE_ATTR obj_t gen_obj_obj__closure(state_t s,obj_t (*func)(state_t,obj_t),obj_t arg1) {
  closure_obj_obj__t content;
  content.func = func;
  content.arg1 = arg1;
  closure_obj_obj__t* closure = (closure_obj_obj__t*) alloc(s, sizeof(closure_obj_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t example_aAction5(state_t s,obj_t t1,obj_t t2) {
  return _if_then_else(s,gen_obj_obj__closure(s,&example_aAction2Closure,t2),gen_obj_obj__closure(s,&example_aAction3Closure,t1),gen_obj_obj__closure(s,&example_aAction4Closure,t1));
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  obj_t arg1;
  obj_t arg2;
} closure_obj_obj_obj__t;
static obj_t example_aAction5Closure(state_t s,obj_t v) {
  closure_obj_obj_obj__t* c = (closure_obj_obj_obj__t*) v;
  return example_aAction5(s,c->arg1,c->arg2);
}
/* example_aAction1 */
static obj_t example_aAction1(state_t s,obj_t t0) {
  return _slash_not(s,var(s,t0));
}
static obj_t example_aAction1Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return example_aAction1(s,c->arg1);
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
  _if_then_else(s,gen_obj_obj__closure(s,&example_aAction1Closure,t0),gen_obj_obj_obj__closure(s,&example_aAction5Closure,t1,t2),gen_obj_obj__closure(s,&example_aAction6Closure,t1));
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
    case CON_Sem_PC: {
      return from_string_lit(s,"PC");
    }; break;
    case CON_Sem_ZERO: {
      return from_string_lit(s,"zero");
    }; break;
    case CON_Sem_AT: {
      return from_string_lit(s,"at");
    }; break;
    case CON_Sem_V0: {
      return from_string_lit(s,"v0");
    }; break;
    case CON_Sem_V1: {
      return from_string_lit(s,"v1");
    }; break;
    case CON_Sem_A0: {
      return from_string_lit(s,"a0");
    }; break;
    case CON_Sem_A1: {
      return from_string_lit(s,"a1");
    }; break;
    case CON_Sem_A2: {
      return from_string_lit(s,"a2");
    }; break;
    case CON_Sem_A3: {
      return from_string_lit(s,"a3");
    }; break;
    case CON_Sem_T0: {
      return from_string_lit(s,"t0");
    }; break;
    case CON_Sem_T1: {
      return from_string_lit(s,"t1");
    }; break;
    case CON_Sem_T2: {
      return from_string_lit(s,"t2");
    }; break;
    case CON_Sem_T3: {
      return from_string_lit(s,"t3");
    }; break;
    case CON_Sem_T4: {
      return from_string_lit(s,"t4");
    }; break;
    case CON_Sem_T5: {
      return from_string_lit(s,"t5");
    }; break;
    case CON_Sem_T6: {
      return from_string_lit(s,"t6");
    }; break;
    case CON_Sem_T7: {
      return from_string_lit(s,"t7");
    }; break;
    case CON_Sem_S0: {
      return from_string_lit(s,"s0");
    }; break;
    case CON_Sem_S1: {
      return from_string_lit(s,"s1");
    }; break;
    case CON_Sem_S2: {
      return from_string_lit(s,"s2");
    }; break;
    case CON_Sem_S3: {
      return from_string_lit(s,"s3");
    }; break;
    case CON_Sem_S4: {
      return from_string_lit(s,"s4");
    }; break;
    case CON_Sem_S5: {
      return from_string_lit(s,"s5");
    }; break;
    case CON_Sem_S6: {
      return from_string_lit(s,"s6");
    }; break;
    case CON_Sem_S7: {
      return from_string_lit(s,"s7");
    }; break;
    case CON_Sem_T8: {
      return from_string_lit(s,"t8");
    }; break;
    case CON_Sem_T9: {
      return from_string_lit(s,"t9");
    }; break;
    case CON_Sem_K0: {
      return from_string_lit(s,"k0");
    }; break;
    case CON_Sem_K1: {
      return from_string_lit(s,"k1");
    }; break;
    case CON_Sem_GP: {
      return from_string_lit(s,"gp");
    }; break;
    case CON_Sem_SP: {
      return from_string_lit(s,"sp");
    }; break;
    case CON_Sem_S8: {
      return from_string_lit(s,"s8");
    }; break;
    case CON_Sem_RA: {
      return from_string_lit(s,"ra");
    }; break;
    case CON_Sem_HI: {
      return from_string_lit(s,"HI");
    }; break;
    case CON_Sem_LO: {
      return from_string_lit(s,"LO");
    }; break;
    case CON_Sem_F0: {
      return from_string_lit(s,"f0");
    }; break;
    case CON_Sem_F1: {
      return from_string_lit(s,"f1");
    }; break;
    case CON_Sem_F2: {
      return from_string_lit(s,"f2");
    }; break;
    case CON_Sem_F3: {
      return from_string_lit(s,"f3");
    }; break;
    case CON_Sem_F4: {
      return from_string_lit(s,"f4");
    }; break;
    case CON_Sem_F5: {
      return from_string_lit(s,"f5");
    }; break;
    case CON_Sem_F6: {
      return from_string_lit(s,"f6");
    }; break;
    case CON_Sem_F7: {
      return from_string_lit(s,"f7");
    }; break;
    case CON_Sem_F8: {
      return from_string_lit(s,"f8");
    }; break;
    case CON_Sem_F9: {
      return from_string_lit(s,"f9");
    }; break;
    case CON_Sem_F10: {
      return from_string_lit(s,"f10");
    }; break;
    case CON_Sem_F11: {
      return from_string_lit(s,"f11");
    }; break;
    case CON_Sem_F12: {
      return from_string_lit(s,"f12");
    }; break;
    case CON_Sem_F13: {
      return from_string_lit(s,"f13");
    }; break;
    case CON_Sem_F14: {
      return from_string_lit(s,"f14");
    }; break;
    case CON_Sem_F15: {
      return from_string_lit(s,"f15");
    }; break;
    case CON_Sem_F16: {
      return from_string_lit(s,"f16");
    }; break;
    case CON_Sem_F17: {
      return from_string_lit(s,"f17");
    }; break;
    case CON_Sem_F18: {
      return from_string_lit(s,"f18");
    }; break;
    case CON_Sem_F19: {
      return from_string_lit(s,"f19");
    }; break;
    case CON_Sem_F20: {
      return from_string_lit(s,"f20");
    }; break;
    case CON_Sem_F21: {
      return from_string_lit(s,"f21");
    }; break;
    case CON_Sem_F22: {
      return from_string_lit(s,"f22");
    }; break;
    case CON_Sem_F23: {
      return from_string_lit(s,"f23");
    }; break;
    case CON_Sem_F24: {
      return from_string_lit(s,"f24");
    }; break;
    case CON_Sem_F25: {
      return from_string_lit(s,"f25");
    }; break;
    case CON_Sem_F26: {
      return from_string_lit(s,"f26");
    }; break;
    case CON_Sem_F27: {
      return from_string_lit(s,"f27");
    }; break;
    case CON_Sem_F28: {
      return from_string_lit(s,"f28");
    }; break;
    case CON_Sem_F29: {
      return from_string_lit(s,"f29");
    }; break;
    case CON_Sem_F30: {
      return from_string_lit(s,"f30");
    }; break;
    case CON_Sem_F31: {
      return from_string_lit(s,"f31");
    }; break;
    case CON_Sem_FCSR: {
      return from_string_lit(s,"FCSR");
    }; break;
    case CON_Sem_SREG: {
      return from_string_lit(s,"SREG");
    }; break;
    case CON_Sem_LLBIT: {
      return from_string_lit(s,"LLBit");
    }; break;
    case CON_Sem_DEBUG: {
      return from_string_lit(s,"Debug");
    }; break;
    case CON_Sem_CONFIG1: {
      return from_string_lit(s,"Config1");
    }; break;
    case CON_Sem_ISA_MODE: {
      return from_string_lit(s,"ISA Mode");
    }; break;
    case CON_Sem_SRSCTL: {
      return from_string_lit(s,"SRSCtl");
    }; break;
    case CON_Sem_CONFIG3: {
      return from_string_lit(s,"Config3");
    }; break;
    case CON_Sem_EPC: {
      return from_string_lit(s,"EPC");
    }; break;
    case CON_Sem_ERROR_EPC: {
      return from_string_lit(s,"ErrorEPC");
    }; break;
    case CON_Sem_DEPC: {
      return from_string_lit(s,"DEPC");
    }; break;
    case CON_Sem_CPUNUM: {
      return from_string_lit(s,"CPUNum");
    }; break;
    case CON_Sem_SYNCI_STEP: {
      return from_string_lit(s,"SYNCI Step Size");
    }; break;
    case CON_Sem_CC: {
      return from_string_lit(s,"CC");
    }; break;
    case CON_Sem_CCRES: {
      return from_string_lit(s,"CCRes");
    }; break;
    case CON_Sem_ULR: {
      return from_string_lit(s,"ULR");
    }; break;
    default: {
      s->err_str = "pattern match failure in arch-show-id at specifications/mips/mips-rreil-pretty.ml:92.5-12";
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
    case 370/* VIRT_T */: {
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
  return cbs->sem_var->sem_var_(s,rreil_convert_sem_id(s,cbs,select_obj(s,91/* id */,var_)),(select_int(s,54/* offset */,var_)+0));
}
/* rreil-convert-sem-linear */
static obj_t rreil_convert_sem_linear(state_t s,callbacks_t cbs,obj_t linear) {
  switch (((con_obj_t*) linear)->tag) {
    case 372/* SEM_LIN_VAR */: {
      obj_t v;
      v = ((con_obj_t*) linear)->payload;
      return cbs->sem_linear->sem_lin_var(s,rreil_convert_sem_var(s,cbs,v));
    }; break;
    case 373/* SEM_LIN_IMM */: {
      struct41_t i;
      i = ((con_struct41_t*) linear)->payload;
      return cbs->sem_linear->sem_lin_imm(s,(i.const_+0));
    }; break;
    case 374/* SEM_LIN_ADD */: {
      sem_arity2_t a;
      a = ((con_sem_arity2_t*) linear)->payload;
      return cbs->sem_linear->sem_lin_add(s,rreil_convert_sem_linear(s,cbs,a.opnd1),rreil_convert_sem_linear(s,cbs,a.opnd2));
    }; break;
    case 375/* SEM_LIN_SUB */: {
      sem_arity2_t s_;
      s_ = ((con_sem_arity2_t*) linear)->payload;
      return cbs->sem_linear->sem_lin_sub(s,rreil_convert_sem_linear(s,cbs,s_.opnd1),rreil_convert_sem_linear(s,cbs,s_.opnd2));
    }; break;
    case 376/* SEM_LIN_SCALE */: {
      struct40_t s_;
      s_ = ((con_struct40_t*) linear)->payload;
      return cbs->sem_linear->sem_lin_scale(s,(s_.const_+0),rreil_convert_sem_linear(s,cbs,s_.opnd));
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
    case 380/* SEM_CMPEQ */: {
      sem_arity2_t c;
      c = ((con_sem_arity2_t*) expr_cmp)->payload;
      return cbs->sem_expr_cmp->sem_cmpeq(s,rreil_convert_sem_linear(s,cbs,c.opnd1),rreil_convert_sem_linear(s,cbs,c.opnd2));
    }; break;
    case 381/* SEM_CMPNEQ */: {
      sem_arity2_t c;
      c = ((con_sem_arity2_t*) expr_cmp)->payload;
      return cbs->sem_expr_cmp->sem_cmpneq(s,rreil_convert_sem_linear(s,cbs,c.opnd1),rreil_convert_sem_linear(s,cbs,c.opnd2));
    }; break;
    case 382/* SEM_CMPLES */: {
      sem_arity2_t c;
      c = ((con_sem_arity2_t*) expr_cmp)->payload;
      return cbs->sem_expr_cmp->sem_cmples(s,rreil_convert_sem_linear(s,cbs,c.opnd1),rreil_convert_sem_linear(s,cbs,c.opnd2));
    }; break;
    case 384/* SEM_CMPLTS */: {
      sem_arity2_t c;
      c = ((con_sem_arity2_t*) expr_cmp)->payload;
      return cbs->sem_expr_cmp->sem_cmplts(s,rreil_convert_sem_linear(s,cbs,c.opnd1),rreil_convert_sem_linear(s,cbs,c.opnd2));
    }; break;
    case 385/* SEM_CMPLTU */: {
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
    case 377/* SEM_SEXPR_LIN */: {
      obj_t l;
      l = ((con_obj_t*) sexpr)->payload;
      return cbs->sem_sexpr->sem_sexpr_lin(s,rreil_convert_sem_linear(s,cbs,l));
    }; break;
    case 378/* SEM_SEXPR_CMP */: {
      obj_t c;
      c = ((con_obj_t*) sexpr)->payload;
      return cbs->sem_sexpr->sem_sexpr_cmp(s,rreil_convert_sem_expr_cmp(s,cbs,c));
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
    case 386/* SEM_SEXPR */: {
      obj_t s_;
      s_ = ((con_obj_t*) expr)->payload;
      return cbs->sem_expr->sem_sexpr(s,rreil_convert_sem_sexpr(s,cbs,s_));
    }; break;
    case 387/* SEM_MUL */: {
      sem_arity2_t m;
      m = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_mul(s,rreil_convert_sem_linear(s,cbs,m.opnd1),rreil_convert_sem_linear(s,cbs,m.opnd2));
    }; break;
    case 388/* SEM_DIV */: {
      sem_arity2_t d;
      d = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_div(s,rreil_convert_sem_linear(s,cbs,d.opnd1),rreil_convert_sem_linear(s,cbs,d.opnd2));
    }; break;
    case 389/* SEM_DIVS */: {
      sem_arity2_t d;
      d = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_divs(s,rreil_convert_sem_linear(s,cbs,d.opnd1),rreil_convert_sem_linear(s,cbs,d.opnd2));
    }; break;
    case 390/* SEM_MOD */: {
      sem_arity2_t m;
      m = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_mod(s,rreil_convert_sem_linear(s,cbs,m.opnd1),rreil_convert_sem_linear(s,cbs,m.opnd2));
    }; break;
    case 391/* SEM_MODS */: {
      sem_arity2_t m;
      m = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_mods(s,rreil_convert_sem_linear(s,cbs,m.opnd1),rreil_convert_sem_linear(s,cbs,m.opnd2));
    }; break;
    case 392/* SEM_SHL */: {
      sem_arity2_t s_;
      s_ = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_shl(s,rreil_convert_sem_linear(s,cbs,s_.opnd1),rreil_convert_sem_linear(s,cbs,s_.opnd2));
    }; break;
    case 393/* SEM_SHR */: {
      sem_arity2_t s_;
      s_ = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_shr(s,rreil_convert_sem_linear(s,cbs,s_.opnd1),rreil_convert_sem_linear(s,cbs,s_.opnd2));
    }; break;
    case 394/* SEM_SHRS */: {
      sem_arity2_t s_;
      s_ = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_shrs(s,rreil_convert_sem_linear(s,cbs,s_.opnd1),rreil_convert_sem_linear(s,cbs,s_.opnd2));
    }; break;
    case 395/* SEM_AND */: {
      sem_arity2_t a;
      a = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_and(s,rreil_convert_sem_linear(s,cbs,a.opnd1),rreil_convert_sem_linear(s,cbs,a.opnd2));
    }; break;
    case 396/* SEM_OR */: {
      sem_arity2_t o;
      o = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_or(s,rreil_convert_sem_linear(s,cbs,o.opnd1),rreil_convert_sem_linear(s,cbs,o.opnd2));
    }; break;
    case 397/* SEM_XOR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return cbs->sem_expr->sem_xor(s,rreil_convert_sem_linear(s,cbs,x.opnd1),rreil_convert_sem_linear(s,cbs,x.opnd2));
    }; break;
    case 398/* SEM_SX */: {
      struct39_t s_;
      s_ = ((con_struct39_t*) expr)->payload;
      return cbs->sem_expr->sem_sx(s,(s_.fromsize+0),rreil_convert_sem_linear(s,cbs,s_.opnd1));
    }; break;
    case 399/* SEM_ZX */: {
      struct39_t s_;
      s_ = ((con_struct39_t*) expr)->payload;
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
/* rreil-convert-sem-varl */
static obj_t rreil_convert_sem_varl(state_t s,callbacks_t cbs,obj_t varl) {
  return cbs->sem_varl->sem_varl_(s,rreil_convert_sem_id(s,cbs,select_obj(s,91/* id */,varl)),(select_int(s,54/* offset */,varl)+0),(select_int(s,9/* size */,varl)+0));
}
/* convert-inner */
static obj_t convert_inner__(state_t s,callbacks_t cbs,obj_t list,obj_t varls) {
  switch (((con_obj_t*) varls)->tag) {
    case 400/* SEM_VARLS_CONS */: {
      struct6_t s_;
      s_ = ((con_struct6_t*) varls)->payload;
      return convert_inner__(s,cbs,cbs->sem_varl_list->sem_varl_list_next(s,rreil_convert_sem_varl(s,cbs,s_.hd),list),s_.tl);
    }; break;
    case CON_SEM_VARLS_NIL: {
      return list;
    }; break;
    default: {
      s->err_str = "pattern match failure in convert-inner at specifications/rreil/rreil-cif.ml:183.6-19";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-convert-sem-varl-list */
static obj_t rreil_convert_sem_varl_list(state_t s,callbacks_t cbs,obj_t varls) {
  return convert_inner__(s,cbs,cbs->sem_varl_list->sem_varl_list_init(s),varls);
}
/* pretty-arch-exception */
static obj_t pretty_arch_exception(state_t s,obj_t exception) {
  switch (*((int_t*) exception)) {
    case CON_SEM_EXC_OVERFLOW: {
      return from_string_lit(s,"{Exception: Overflow}");
    }; break;
    case CON_SEM_EXC_VADDR_ERROR: {
      return from_string_lit(s,"{Exception: Virtual Address Error}");
    }; break;
    case CON_SEM_EXC_TRAP: {
      return from_string_lit(s,"{Exception: Trap}");
    }; break;
    case CON_SEM_EXC_SYSTEM_CALL: {
      return from_string_lit(s,"{Exception: System Call}");
    }; break;
    case CON_SEM_EXC_BREAKPOINT: {
      return from_string_lit(s,"{Exception: Breakpoint}");
    }; break;
    case CON_SEM_EXC_DEBUG_BREAKPOINT: {
      return from_string_lit(s,"{Exception: Debug Breakpoint}");
    }; break;
    case CON_SEM_EXC_DEBUG_MODE_BREAKPOINT: {
      return from_string_lit(s,"{Exception: Debug Mode Breakpoint}");
    }; break;
    case CON_SEM_EXC_RESERVED_INSTRUCTION: {
      return from_string_lit(s,"{Exception: Reserved Instruction}");
    }; break;
    default: {
      s->err_str = "pattern match failure in pretty-arch-exception at specifications/mips/mips-rreil-pretty.ml:106.7-36";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-convert-sem-exception */
static obj_t rreil_convert_sem_exception(state_t s,callbacks_t cbs,obj_t exception) {
  return cbs->sem_exception->arch(s,string_from_rope(s,pretty_arch_exception(s,exception)));
}
/* rreil-convert-sem-stmt */
static obj_t rreil_convert_sem_stmt(state_t s,callbacks_t cbs,obj_t stmt) {
  switch (((con_obj_t*) stmt)->tag) {
    case 405/* SEM_ASSIGN */: {
      struct31_t s_;
      s_ = ((con_struct31_t*) stmt)->payload;
      return cbs->sem_stmt->sem_assign(s,(s_.size+0),rreil_convert_sem_var(s,cbs,s_.lhs),rreil_convert_sem_expr(s,cbs,s_.rhs));
    }; break;
    case 406/* SEM_LOAD */: {
      struct32_t l;
      l = ((con_struct32_t*) stmt)->payload;
      return cbs->sem_stmt->sem_load(s,(l.size+0),rreil_convert_sem_var(s,cbs,l.lhs),rreil_convert_sem_address(s,cbs,l.address));
    }; break;
    case 407/* SEM_STORE */: {
      struct33_t s_;
      s_ = ((con_struct33_t*) stmt)->payload;
      return cbs->sem_stmt->sem_store(s,(s_.size+0),rreil_convert_sem_address(s,cbs,s_.address),rreil_convert_sem_linear(s,cbs,s_.rhs));
    }; break;
    case 408/* SEM_ITE */: {
      struct34_t i;
      i = ((con_struct34_t*) stmt)->payload;
      return cbs->sem_stmt->sem_ite(s,rreil_convert_sem_sexpr(s,cbs,i.cond),rreil_convert_sem_stmt_list(s,cbs,i.then_branch),rreil_convert_sem_stmt_list(s,cbs,i.else_branch));
    }; break;
    case 409/* SEM_WHILE */: {
      struct35_t w;
      w = ((con_struct35_t*) stmt)->payload;
      return cbs->sem_stmt->sem_while(s,rreil_convert_sem_sexpr(s,cbs,w.cond),rreil_convert_sem_stmt_list(s,cbs,w.body));
    }; break;
    case 410/* SEM_CBRANCH */: {
      struct37_t c;
      c = ((con_struct37_t*) stmt)->payload;
      return cbs->sem_stmt->sem_cbranch(s,rreil_convert_sem_sexpr(s,cbs,c.cond),rreil_convert_sem_address(s,cbs,c.target_true),rreil_convert_sem_address(s,cbs,c.target_false));
    }; break;
    case 411/* SEM_BRANCH */: {
      struct36_t b;
      b = ((con_struct36_t*) stmt)->payload;
      return cbs->sem_stmt->sem_branch(s,rreil_convert_branch_hint(s,cbs,b.hint),rreil_convert_sem_address(s,cbs,b.target));
    }; break;
    case 413/* SEM_PRIM */: {
      struct38_t p;
      p = ((con_struct38_t*) stmt)->payload;
      return cbs->sem_stmt->sem_prim(s,p.op,rreil_convert_sem_varl_list(s,cbs,p.lhs),rreil_convert_sem_varl_list(s,cbs,p.rhs));
    }; break;
    case 414/* SEM_THROW */: {
      obj_t p;
      p = ((con_obj_t*) stmt)->payload;
      return cbs->sem_stmt->sem_throw(s,rreil_convert_sem_exception(s,cbs,p));
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-convert-sem-stmt at specifications/rreil/rreil-cif.ml:229.14-15";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-convert-sem-stmt-list */
static obj_t rreil_convert_sem_stmt_list(state_t s,callbacks_t cbs,obj_t stmts) {
  return convert_inner___(s,cbs,cbs->sem_stmt_list->sem_stmt_list_init(s),stmts);
}
/* convert-inner */
static obj_t convert_inner___(state_t s,callbacks_t cbs,obj_t list,obj_t stmts) {
  switch (((con_obj_t*) stmts)->tag) {
    case 418/* SEM_CONS */: {
      struct6_t s_;
      s_ = ((con_struct6_t*) stmts)->payload;
      return convert_inner___(s,cbs,cbs->sem_stmt_list->sem_stmt_list_next(s,rreil_convert_sem_stmt(s,cbs,s_.hd),list),s_.tl);
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
/* rreil-show-exception */
static obj_t rreil_show_exception(state_t s,obj_t exception) {
  return pretty_arch_exception(s,exception);
}
/* rreil-show-id */
static obj_t rreil_show_id(state_t s,obj_t id) {
  switch (*((int_t*) id)) {
    case 370/* VIRT_T */: {
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
      return rreil_show_id(s,select_obj(s,91/* id */,x));
    }; break;
    default: {
      o = scrutinee;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_id(s,select_obj(s,91/* id */,x)),from_string_lit(s,".")),show_int(s,o));
    }; break;
  };
}
/* rreil-show-linear */
static obj_t rreil_show_linear(state_t s,obj_t lin) {
  switch (((con_obj_t*) lin)->tag) {
    case 372/* SEM_LIN_VAR */: {
      obj_t x;
      x = ((con_obj_t*) lin)->payload;
      return rreil_show_var(s,x);
    }; break;
    case 373/* SEM_LIN_IMM */: {
      struct41_t x;
      x = ((con_struct41_t*) lin)->payload;
      return show_int(s,x.const_);
    }; break;
    case 374/* SEM_LIN_ADD */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"("),rreil_show_linear(s,x.opnd1)),from_string_lit(s," ")),from_string_lit(s,"+")),from_string_lit(s," ")),rreil_show_linear(s,x.opnd2)),from_string_lit(s,")"));
    }; break;
    case 375/* SEM_LIN_SUB */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"("),rreil_show_linear(s,x.opnd1)),from_string_lit(s," ")),from_string_lit(s,"-")),from_string_lit(s," ")),rreil_show_linear(s,x.opnd2)),from_string_lit(s,")"));
    }; break;
    case 376/* SEM_LIN_SCALE */: {
      struct40_t x;
      int_t s_;
      int_t scrutinee;
      x = ((con_struct40_t*) lin)->payload;
      scrutinee = x.const_;
      switch (scrutinee) {
        case 0: {
          return from_string_lit(s,"");
        }; break;
        case 1: {
          return rreil_show_linear(s,x.opnd);
        }; break;
        default: {
          s_ = scrutinee;
          return _plus__plus__plus_(s,_plus__plus__plus_(s,show_int(s,s_),from_string_lit(s,"*")),rreil_show_linear(s,x.opnd));
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-show-linear at specifications/rreil/rreil-pretty.ml:126.21-22";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-cmp */
static obj_t rreil_show_cmp(state_t s,sem_arity2_t x,obj_t op_) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_linear(s,x.opnd1),from_string_lit(s," ")),op_),from_string_lit(s," ")),rreil_show_linear(s,x.opnd2));
}
/* rreil-show-op-cmp */
static obj_t rreil_show_op_cmp(state_t s,int_t size,obj_t cmp) {
  switch (((con_obj_t*) cmp)->tag) {
    case 380/* SEM_CMPEQ */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return rreil_show_cmp(s,x,_plus__plus__plus_(s,from_string_lit(s,"==:"),show_int(s,size)));
    }; break;
    case 381/* SEM_CMPNEQ */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return rreil_show_cmp(s,x,_plus__plus__plus_(s,from_string_lit(s,"!=:"),show_int(s,size)));
    }; break;
    case 382/* SEM_CMPLES */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return rreil_show_cmp(s,x,_plus__plus__plus_(s,from_string_lit(s,"<=s:"),show_int(s,size)));
    }; break;
    case 384/* SEM_CMPLTS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return rreil_show_cmp(s,x,_plus__plus__plus_(s,from_string_lit(s,"<s:"),show_int(s,size)));
    }; break;
    case 385/* SEM_CMPLTU */: {
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
    case 377/* SEM_SEXPR_LIN */: {
      obj_t l;
      l = ((con_obj_t*) sexpr)->payload;
      return rreil_show_linear(s,l);
    }; break;
    case 378/* SEM_SEXPR_CMP */: {
      obj_t c;
      c = ((con_obj_t*) sexpr)->payload;
      return rreil_show_op_cmp(s,size,c);
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
static obj_t rreil_show_arity2_infix(state_t s,sem_arity2_t x,obj_t op_) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_linear(s,x.opnd1),from_string_lit(s," ")),op_),from_string_lit(s," ")),rreil_show_linear(s,x.opnd2));
}
/* rreil-show-expr */
static obj_t rreil_show_expr(state_t s,int_t size,obj_t expr) {
  switch (((con_obj_t*) expr)->tag) {
    case 386/* SEM_SEXPR */: {
      obj_t x;
      x = ((con_obj_t*) expr)->payload;
      return rreil_show_sexpr(s,size,x);
    }; break;
    case 387/* SEM_MUL */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"*"));
    }; break;
    case 388/* SEM_DIV */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"/u"));
    }; break;
    case 389/* SEM_DIVS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"/s"));
    }; break;
    case 390/* SEM_MOD */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"%"));
    }; break;
    case 391/* SEM_MODS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"%s"));
    }; break;
    case 392/* SEM_SHL */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"<<"));
    }; break;
    case 393/* SEM_SHR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,">>u"));
    }; break;
    case 394/* SEM_SHRS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,">>s"));
    }; break;
    case 395/* SEM_AND */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"&"));
    }; break;
    case 396/* SEM_OR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"|"));
    }; break;
    case 397/* SEM_XOR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) expr)->payload;
      return rreil_show_arity2_infix(s,x,from_string_lit(s,"^"));
    }; break;
    case 398/* SEM_SX */: {
      struct39_t x;
      x = ((con_struct39_t*) expr)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"sx["),show_int(s,x.fromsize)),from_string_lit(s,"->")),show_int(s,size)),from_string_lit(s,"]")),rreil_show_linear(s,x.opnd1));
    }; break;
    case 399/* SEM_ZX */: {
      struct39_t x;
      x = ((con_struct39_t*) expr)->payload;
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
    default: {
      s->err_str = "pattern match failure in rreil-show-hint at specifications/rreil/rreil-pretty.ml:75.6-14";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-size-by-expr-type */
static int_t rreil_size_by_expr_type(state_t s,int_t bsz,obj_t ex) {
  switch (((con_obj_t*) ex)->tag) {
    case 386/* SEM_SEXPR */: {
      obj_t s_;
      s_ = ((con_obj_t*) ex)->payload;
      switch (((con_obj_t*) s_)->tag) {
        case 378/* SEM_SEXPR_CMP */: {
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
/* rreil-has-varls */
static int_t rreil_has_varls(state_t s,obj_t vs) {
  switch (((con_obj_t*) vs)->tag) {
    case 400/* SEM_VARLS_CONS */: {
      return 1 /* '1' */;
    }; break;
    case CON_SEM_VARLS_NIL: {
      return 0 /* '0' */;
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-has-varls at specifications/rreil/rreil-pretty.ml:39.4-17";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-varl */
static obj_t rreil_show_varl(state_t s,obj_t v) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_var(s,v),from_string_lit(s,":")),show_int(s,select_int(s,9/* size */,v)));
}
/* show-inner */
static obj_t show_inner(state_t s,obj_t vs) {
  switch (((con_obj_t*) vs)->tag) {
    case 400/* SEM_VARLS_CONS */: {
      struct6_t c;
      c = ((con_struct6_t*) vs)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,", "),rreil_show_varl(s,c.hd)),show_inner(s,c.tl));
    }; break;
    case CON_SEM_VARLS_NIL: {
      return from_string_lit(s,"");
    }; break;
    default: {
      s->err_str = "pattern match failure in show-inner at specifications/rreil/rreil-pretty.ml:25.8-21";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-varls */
static obj_t rreil_show_varls(state_t s,obj_t vs) {
  switch (((con_obj_t*) vs)->tag) {
    case 400/* SEM_VARLS_CONS */: {
      struct6_t c;
      obj_t scrutinee;
      c = ((con_struct6_t*) vs)->payload;
      scrutinee = c.tl;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 400/* SEM_VARLS_CONS */: {
          return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"("),rreil_show_varl(s,c.hd)),show_inner(s,c.tl)),from_string_lit(s,")"));
        }; break;
        case CON_SEM_VARLS_NIL: {
          return rreil_show_varl(s,c.hd);
        }; break;
        default: {
          s->err_str = "pattern match failure in rreil-show-varls at specifications/rreil/rreil-pretty.ml:31.11-24";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case CON_SEM_VARLS_NIL: {
      return from_string_lit(s,"(void)");
    }; break;
    default: {
      s->err_str = "pattern match failure in rreil-show-varls at specifications/rreil/rreil-pretty.ml:33.8-21";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rreil-show-stmts */
static obj_t rreil_show_stmts(state_t s,obj_t ss) {
  switch (*((int_t*) ss)) {
    case CON_SEM_NIL: {
      return from_string_lit(s,"");
    }; break;
    case 418/* SEM_CONS */: {
      struct6_t x;
      x = ((con_struct6_t*) ss)->payload;
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
    case 405/* SEM_ASSIGN */: {
      struct31_t x;
      x = ((con_struct31_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_var(s,x.lhs),from_string_lit(s," =:")),show_int(s,rreil_size_by_expr_type(s,x.size,x.rhs))),from_string_lit(s," ")),rreil_show_expr(s,x.size,x.rhs));
    }; break;
    case 406/* SEM_LOAD */: {
      struct32_t x;
      x = ((con_struct32_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_var(s,x.lhs),from_string_lit(s," =:")),show_int(s,x.size)),from_string_lit(s," ")),rreil_show_ptrderef(s,x.size,x.address));
    }; break;
    case 407/* SEM_STORE */: {
      struct33_t x;
      x = ((con_struct33_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"*"),rreil_show_address(s,x.address)),from_string_lit(s," =:")),show_int(s,x.size)),from_string_lit(s," ")),rreil_show_linear(s,x.rhs));
    }; break;
    case 408/* SEM_ITE */: {
      struct34_t x;
      x = ((con_struct34_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"if ("),rreil_show_sexpr(s,1,x.cond)),from_string_lit(s,") {\n")),rreil_show_stmts(s,x.then_branch)),from_string_lit(s,"} else {\n")),rreil_show_stmts(s,x.else_branch)),from_string_lit(s,"}"));
    }; break;
    case 409/* SEM_WHILE */: {
      struct35_t x;
      x = ((con_struct35_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"while ("),rreil_show_sexpr(s,1,x.cond)),from_string_lit(s,") {\n")),rreil_show_stmts(s,x.body)),from_string_lit(s,"}"));
    }; break;
    case 410/* SEM_CBRANCH */: {
      struct37_t x;
      x = ((con_struct37_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"if ("),rreil_show_sexpr(s,1,x.cond)),from_string_lit(s,") goto ")),rreil_show_address(s,x.target_true)),from_string_lit(s," else goto ")),rreil_show_address(s,x.target_false));
    }; break;
    case 411/* SEM_BRANCH */: {
      struct36_t x;
      x = ((con_struct36_t*) s_)->payload;
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,from_string_lit(s,"goto ["),rreil_show_hint(s,x.hint)),from_string_lit(s,"] ")),rreil_show_address(s,x.target));
    }; break;
    case 413/* SEM_PRIM */: {
      struct38_t p;
      obj_t iteRes;
      obj_t iteRes_;
      p = ((con_struct38_t*) s_)->payload;
      if (rreil_has_varls(s,p.lhs)) {
        iteRes = _plus__plus__plus_(s,rreil_show_varls(s,p.lhs),from_string_lit(s," = "));
      } else {
        iteRes = from_string_lit(s,"");
      };
      if (rreil_has_varls(s,p.rhs)) {
        iteRes_ = _plus__plus__plus_(s,from_string_lit(s," "),rreil_show_varls(s,p.rhs));
      } else {
        iteRes_ = from_string_lit(s,"");
      };
      return _plus__plus__plus_(s,_plus__plus__plus_(s,_plus__plus__plus_(s,iteRes,from_string_lit(s,"$")),from_string_lit(s,p.op)),iteRes_);
    }; break;
    case 414/* SEM_THROW */: {
      obj_t e_;
      e_ = ((con_obj_t*) s_)->payload;
      return _plus__plus__plus_(s,from_string_lit(s,"throw "),rreil_show_exception(s,e_));
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
/* update */
static obj_t update(state_t s,obj_t a,obj_t b,obj_t m,obj_t x) {
  return fmap_update(s,m,add_field_obj(s,92/* fields */,fitree_union(s,select_obj(s,92/* fields */,fmap_get(s,a,x)),select_obj(s,92/* fields */,fmap_get(s,b,x))),add_field_obj(s,91/* id */,select_obj(s,91/* id */,x),NULL)));
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
/* lv-union */
static INLINE_ATTR obj_t gen_obj_obj_obj__obj_obj_closure(state_t s,obj_t (*func)(state_t,obj_t,obj_t,obj_t),obj_t arg1,obj_t arg2) {
  closure_obj_obj_obj__obj_obj_t content;
  content.func = func;
  content.arg1 = arg1;
  content.arg2 = arg2;
  closure_obj_obj_obj__obj_obj_t* closure = (closure_obj_obj_obj__obj_obj_t*) alloc(s, sizeof(closure_obj_obj_obj__obj_obj_t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t lv_union(state_t s,obj_t a,obj_t b) {
  return fmap_fold(s,gen_obj_obj_obj__obj_obj_closure(s,&update_closure,a,b),fmap_union(s,a,b),fmap_intersection(s,a,b));
}
/* visit-semvarls */
static obj_t visit_semvarls(state_t s,obj_t (*visitor_semvar)(state_t,obj_t,int_t,obj_t),obj_t set,obj_t varls) {
  switch (((con_obj_t*) varls)->tag) {
    case 400/* SEM_VARLS_CONS */: {
      struct6_t c;
      c = ((con_struct6_t*) varls)->payload;
      return lv_union(s,visitor_semvar(s,set,select_int(s,9/* size */,c.hd),c.hd),visit_semvarls(s,visitor_semvar,set,c.tl));
    }; break;
    case CON_SEM_VARLS_NIL: {
      return set;
    }; break;
    default: {
      s->err_str = "pattern match failure in visit-semvarls at specifications/rreil/rreil-liveness.ml:16.4-17";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* visit-semvar */
static obj_t visit_semvar(state_t s,obj_t kills,int_t sz,obj_t x) {
  return fmap_add_range(s,kills,select_obj(s,91/* id */,x),sz,select_int(s,54/* offset */,x));
}
/* size-lhs */
static int_t size_lhs(state_t s,int_t size,obj_t rhs) {
  switch (((con_obj_t*) rhs)->tag) {
    case 386/* SEM_SEXPR */: {
      obj_t s_;
      s_ = ((con_obj_t*) rhs)->payload;
      switch (((con_obj_t*) s_)->tag) {
        case 378/* SEM_SEXPR_CMP */: {
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
static obj_t update_(state_t s,obj_t a,obj_t b,obj_t m,obj_t x) {
  return fmap_add(s,m,add_field_obj(s,92/* fields */,fitree_interval_difference(s,select_obj(s,92/* fields */,fmap_get(s,a,x)),select_obj(s,92/* fields */,fmap_get(s,b,x))),add_field_obj(s,91/* id */,select_obj(s,91/* id */,x),NULL)));
}
static obj_t update_closure_(state_t s,obj_t v,obj_t m,obj_t x) {
  closure_obj_obj_obj__obj_obj_t* c = (closure_obj_obj_obj__obj_obj_t*) v;
  return update_(s,c->arg1,c->arg2,m,x);
}
/* lv-difference */
static obj_t lv_difference(state_t s,obj_t a,obj_t b) {
  return fmap_fold(s,gen_obj_obj_obj__obj_obj_closure(s,&update_closure_,a,b),a,fmap_intersection(s,a,b));
}
/* lv-intersection */
static obj_t lv_intersection(state_t s,obj_t a,obj_t b) {
  return lv_difference(s,lv_difference(s,lv_union(s,a,b),lv_difference(s,a,b)),lv_difference(s,b,a));
}
/* visit-stmt */
static obj_t visit_stmt(state_t s,obj_t kills,obj_t stmt) {
  switch (((con_obj_t*) stmt)->tag) {
    case 405/* SEM_ASSIGN */: {
      struct31_t x;
      x = ((con_struct31_t*) stmt)->payload;
      return visit_semvar(s,kills,size_lhs(s,x.size,x.rhs),x.lhs);
    }; break;
    case 406/* SEM_LOAD */: {
      struct32_t x;
      x = ((con_struct32_t*) stmt)->payload;
      return visit_semvar(s,kills,x.size,x.lhs);
    }; break;
    case 408/* SEM_ITE */: {
      struct34_t x;
      x = ((con_struct34_t*) stmt)->payload;
      return lv_union(s,kills,lv_intersection(s,lv_kills(s,x.then_branch),lv_kills(s,x.else_branch)));
    }; break;
    case 413/* SEM_PRIM */: {
      struct38_t x;
      x = ((con_struct38_t*) stmt)->payload;
      return visit_semvarls(s,visit_semvar,kills,x.lhs);
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
    case 418/* SEM_CONS */: {
      struct6_t x;
      x = ((con_struct6_t*) stmts)->payload;
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
  return fmap_add_range(s,gens,select_obj(s,91/* id */,x),sz,select_int(s,54/* offset */,x));
}
/* visit-lin */
static obj_t visit_lin(state_t s,obj_t gens,int_t sz,obj_t lin) {
  switch (((con_obj_t*) lin)->tag) {
    case 372/* SEM_LIN_VAR */: {
      obj_t x;
      x = ((con_obj_t*) lin)->payload;
      return visit_semvar_(s,gens,sz,x);
    }; break;
    case 373/* SEM_LIN_IMM */: {
      return gens;
    }; break;
    case 374/* SEM_LIN_ADD */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return lv_union(s,visit_lin(s,gens,sz,x.opnd1),visit_lin(s,gens,sz,x.opnd2));
    }; break;
    case 375/* SEM_LIN_SUB */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) lin)->payload;
      return lv_union(s,visit_lin(s,gens,sz,x.opnd1),visit_lin(s,gens,sz,x.opnd2));
    }; break;
    case 376/* SEM_LIN_SCALE */: {
      struct40_t x;
      x = ((con_struct40_t*) lin)->payload;
      return visit_lin(s,gens,sz,x.opnd);
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
    case 380/* SEM_CMPEQ */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 381/* SEM_CMPNEQ */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 382/* SEM_CMPLES */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 384/* SEM_CMPLTS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) cmp)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 385/* SEM_CMPLTU */: {
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
    case 377/* SEM_SEXPR_LIN */: {
      obj_t l;
      l = ((con_obj_t*) sexpr)->payload;
      return visit_lin(s,gens,size,l);
    }; break;
    case 378/* SEM_SEXPR_CMP */: {
      obj_t c;
      c = ((con_obj_t*) sexpr)->payload;
      return visit_op_cmp(s,size,gens,c);
    }; break;
    default: {
      s->err_str = "pattern match failure in visit-sexpr at specifications/rreil/rreil-liveness.ml:66.12-25";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* visit-expr */
static obj_t visit_expr(state_t s,int_t size,obj_t gens,obj_t op_) {
  switch (((con_obj_t*) op_)->tag) {
    case 386/* SEM_SEXPR */: {
      obj_t x;
      x = ((con_obj_t*) op_)->payload;
      return visit_sexpr(s,size,gens,x);
    }; break;
    case 387/* SEM_MUL */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 388/* SEM_DIV */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 389/* SEM_DIVS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 390/* SEM_MOD */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 391/* SEM_MODS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 392/* SEM_SHL */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 393/* SEM_SHR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 394/* SEM_SHRS */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 395/* SEM_AND */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 396/* SEM_OR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 397/* SEM_XOR */: {
      sem_arity2_t x;
      x = ((con_sem_arity2_t*) op_)->payload;
      return visit_arity2(s,size,gens,x);
    }; break;
    case 398/* SEM_SX */: {
      struct39_t x;
      x = ((con_struct39_t*) op_)->payload;
      return visit_lin(s,gens,x.fromsize,x.opnd1);
    }; break;
    case 399/* SEM_ZX */: {
      struct39_t x;
      x = ((con_struct39_t*) op_)->payload;
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
static obj_t visit_flow(state_t s,int_t size,obj_t gens,struct37_t x) {
  return lv_union(s,visit_sexpr(s,size,gens,x.cond),lv_union(s,visit_address(s,gens,x.target_true),visit_address(s,gens,x.target_false)));
}
/* visit-stmt */
static obj_t visit_stmt_(state_t s,obj_t gens,obj_t stmt) {
  switch (((con_obj_t*) stmt)->tag) {
    case 405/* SEM_ASSIGN */: {
      struct31_t x;
      x = ((con_struct31_t*) stmt)->payload;
      return visit_expr(s,x.size,gens,x.rhs);
    }; break;
    case 406/* SEM_LOAD */: {
      struct32_t x;
      x = ((con_struct32_t*) stmt)->payload;
      return visit_address(s,gens,x.address);
    }; break;
    case 407/* SEM_STORE */: {
      struct33_t x;
      x = ((con_struct33_t*) stmt)->payload;
      return lv_union(s,visit_address(s,gens,x.address),visit_lin(s,gens,x.size,x.rhs));
    }; break;
    case 409/* SEM_WHILE */: {
      struct35_t x;
      x = ((con_struct35_t*) stmt)->payload;
      return visit_sexpr(s,1,gens,x.cond);
    }; break;
    case 408/* SEM_ITE */: {
      struct34_t x;
      x = ((con_struct34_t*) stmt)->payload;
      return visit_sexpr(s,1,gens,x.cond);
    }; break;
    case 411/* SEM_BRANCH */: {
      struct36_t x;
      x = ((con_struct36_t*) stmt)->payload;
      return visit_address(s,gens,x.target);
    }; break;
    case 410/* SEM_CBRANCH */: {
      struct37_t x;
      x = ((con_struct37_t*) stmt)->payload;
      return visit_flow(s,1,gens,x);
    }; break;
    case 413/* SEM_PRIM */: {
      struct38_t x;
      x = ((con_struct38_t*) stmt)->payload;
      return visit_semvarls(s,visit_semvar_,gens,x.rhs);
    }; break;
    case 414/* SEM_THROW */: {
      return gens;
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
  return alloc_vec(s,gen_vec(0, (((vec_t*) l)->data) | (((vec_t*) fitree_any_overlapping_q_(s,select_obj(s,92/* fields */,fmap_get_orelse(s,state,add_field_obj(s,92/* fields */,s->fitree_empty,add_field_obj(s,91/* id */,select_obj(s,91/* id */,x),NULL)))),i))->data)));
}
static obj_t overlaps_interval_q__closure(state_t s,obj_t v,obj_t l,obj_t i) {
  closure_obj_obj_obj__obj_obj_t* c = (closure_obj_obj_obj__obj_obj_t*) v;
  return overlaps_interval_q_(s,c->arg1,c->arg2,l,i);
}
/* overlaps? */
static obj_t overlaps_q_(state_t s,obj_t state,obj_t x) {
  return fitree_fold(s,gen_obj_obj_obj__obj_obj_closure(s,&overlaps_interval_q__closure,state,x),alloc_vec(s,gen_vec(1, 0 /* '0' */)),select_obj(s,92/* fields */,x));
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
  return _plus__plus__plus_(s,_plus__plus__plus_(s,rreil_show_id(s,select_obj(s,91/* id */,x)),from_string_lit(s,":")),fitree_pretty(s,select_obj(s,92/* fields */,x)));
}
/* lv-pretty */
static obj_t lv_pretty(state_t s,obj_t t) {
  return bbtree_pretty(s,fields,t);
}
/* live-stack-backup-and-reset */
static struct57_t live_stack_backup_and_reset(state_t s) {
  obj_t live;
  obj_t maybelive;
  live = s->mon_state.live;
  maybelive = s->mon_state.live;
  s->mon_state.live = alloc_int(s,CON_SEM_NIL);
  s->mon_state.maybelive = alloc_int(s,CON_SEM_NIL);;
  return __struct57(s,live,maybelive);
}
/* select_live */
static obj_t select_live(state_t s) {
  return s->mon_state.live;
}
/* live-stack-restore */
static void live_stack_restore(state_t s,struct57_t backup) {
  s->mon_state.live = backup.live;
  s->mon_state.maybelive = backup.maybelive;;
}
/* lvstate-empty */
static struct58_t lvstate_empty(state_t s,obj_t initial_live,obj_t stmts) {
  return __struct58(s,lv_union(s,lv_kills(s,stmts),s->fmap_empty),initial_live);
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
static struct58_t eval(state_t s,struct58_t state,obj_t kill,obj_t gen) {
  return __struct58(s,lvstate_eval_conservative(s,state.conservative,kill,gen),lvstate_eval_greedy(s,state.greedy,kill,gen));
}
/* lvstate-eval */
static struct58_t lvstate_eval(state_t s,struct58_t state,obj_t stmt) {
  return eval(s,state,lv_kill1(s,stmt),lv_gen1(s,stmt));
}
/* lv-eval-simple */
static struct58_t lv_eval_simple(state_t s,struct58_t state,obj_t stmt) {
  return __struct58(s,lv_union(s,state.conservative,lv_gen1(s,stmt)),lv_union(s,state.greedy,lv_gen1(s,stmt)));
}
/* lvstate-union-conservative */
static struct58_t lvstate_union_conservative(state_t s,struct58_t old,struct58_t conservative_state) {
  return __struct58(s,lv_union(s,old.conservative,conservative_state.conservative),lv_union(s,old.greedy,conservative_state.conservative));
}
/* lvstate-union */
static struct58_t lvstate_union(state_t s,struct58_t a,struct58_t b) {
  return __struct58(s,lv_union(s,a.conservative,b.conservative),lv_union(s,a.greedy,b.greedy));
}
/* lv-push-live-only */
static void lv_push_live_only(state_t s,obj_t stmt) {
  obj_t live;
  live = s->mon_state.live;
  s->mon_state.live = constructor_SEM_CONS(s,__struct6(s,stmt,live));;
}
/* lv-push-maybelive */
static void lv_push_maybelive(state_t s,obj_t stmt) {
  obj_t live;
  live = s->mon_state.maybelive;
  s->mon_state.maybelive = constructor_SEM_CONS(s,__struct6(s,stmt,live));;
}
/* lv-push-live */
static void lv_push_live(state_t s,obj_t stmt) {
  lv_push_live_only(s,stmt);
  lv_push_maybelive(s,stmt);
}
/* cont */
static struct58_t cont(state_t s,struct58_t state,struct6_t x,obj_t kill,struct58_t cont_state) {
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
static struct58_t sweep(state_t s,obj_t stack,struct58_t state) {
  switch (*((int_t*) stack)) {
    case CON_SEM_NIL: {
      return state;
    }; break;
    case 418/* SEM_CONS */: {
      struct6_t x;
      obj_t scrutinee;
      x = ((con_struct6_t*) stack)->payload;
      scrutinee = x.hd;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 406/* SEM_LOAD */: {
          lv_push_live(s,x.hd);
          return sweep(s,x.tl,lvstate_eval(s,state,x.hd));
        }; break;
        case 407/* SEM_STORE */: {
          lv_push_live(s,x.hd);
          return sweep(s,x.tl,lvstate_eval(s,state,x.hd));
        }; break;
        case 409/* SEM_WHILE */: {
          struct35_t y;
          struct57_t backup;
          obj_t body_rev;
          struct58_t body_state;
          struct58_t state_new;
          obj_t maybelive;
          y = ((con_struct35_t*) scrutinee)->payload;
          backup = live_stack_backup_and_reset(s);
          body_rev = rreil_stmts_rev(s,y.body);
          body_state = sweep(s,body_rev,lvstate_empty(s,s->fmap_empty,body_rev));
          state_new = lvstate_union_conservative(s,state,body_state);
          maybelive = s->mon_state.maybelive;
          live_stack_restore(s,backup);
          lv_push_live(s,_slash_WHILE(s,y.cond,maybelive));
          return sweep(s,x.tl,lvstate_eval(s,state_new,x.hd));
        }; break;
        case 408/* SEM_ITE */: {
          struct34_t y;
          struct57_t org_backup;
          obj_t then_branch_rev;
          struct58_t then_state;
          struct57_t then_backup;
          obj_t else_branch_rev;
          struct58_t else_state;
          struct57_t else_backup;
          obj_t ite_conservative;
          obj_t ite_greedy;
          struct58_t state_new;
          y = ((con_struct34_t*) scrutinee)->payload;
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
        case 410/* SEM_CBRANCH */: {
          lv_push_live(s,x.hd);
          return sweep(s,x.tl,lvstate_eval(s,state,x.hd));
        }; break;
        case 411/* SEM_BRANCH */: {
          lv_push_live(s,x.hd);
          return sweep(s,x.tl,lvstate_eval(s,state,x.hd));
        }; break;
        case 405/* SEM_ASSIGN */: {
          return cont(s,state,x,lv_kill1(s,x.hd),lvstate_eval(s,state,x.hd));
        }; break;
        case 413/* SEM_PRIM */: {
          lv_push_live(s,x.hd);
          return sweep(s,x.tl,lvstate_eval(s,state,x.hd));
        }; break;
        case 414/* SEM_THROW */: {
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
/* lv-analyze */
static struct58_t lv_analyze(state_t s,obj_t initial_live,obj_t stack) {
  s->mon_state.live = alloc_int(s,CON_SEM_NIL);
  s->mon_state.maybelive = alloc_int(s,CON_SEM_NIL);;
  return sweep(s,stack,lvstate_empty(s,initial_live,stack));
}
/* liveness */
static obj_t liveness(state_t s,obj_t instructions) {
  struct58_t lv_state;
  lv_state = lv_analyze(s,s->registers_live_map,rreil_stmts_rev(s,instructions));
  return lv_state.greedy;
}
static INLINE_ATTR obj_t constructor_SO_SOME(state_t s,obj_t arg_of_SO_SOME) {
  con_obj_t adt;
  adt.tag = 449/* SO_SOME */;
  adt.payload = arg_of_SO_SOME;
  return (obj_t) alloc_con_obj(s,adt);
}
/* lv-option-analyze */
static obj_t lv_option_analyze(state_t s,obj_t live_registers,obj_t option) {
  switch (((con_obj_t*) option)->tag) {
    case 449/* SO_SOME */: {
      obj_t stmts;
      struct58_t state;
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
  struct58_t lv_state;
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
        case 449/* SO_SOME */: {
          live_registers = lv_some_succ(s,data,s->registers_live_map);
        }; break;
        default: {
          s->err_str = "pattern match failure in liveness_super at specifications/rreil/rreil-liveness.ml:477.19-20";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    case 449/* SO_SOME */: {
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
    case 418/* SEM_CONS */: {
      struct6_t x;
      x = ((con_struct6_t*) a)->payload;
      return constructor_SEM_CONS(s,__struct6(s,x.hd,stmts_concat(s,x.tl,b)));
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
  adt.tag = 441/* STO_SOME */;
  adt.payload = arg_of_STO_SOME;
  return (obj_t) alloc_con_obj(s,adt);
}
/* def */
static obj_t def(state_t s,struct34_t i) {
  return constructor_STO_SOME(s,constructor_SEM_ITE(s,__struct34(s,i.cond,i.else_branch,i.then_branch)));
}
static INLINE_ATTR obj_t constructor_STO_MORE(state_t s,obj_t arg_of_STO_MORE) {
  con_obj_t adt;
  adt.tag = 440/* STO_MORE */;
  adt.payload = arg_of_STO_MORE;
  return (obj_t) alloc_con_obj(s,adt);
}
/* ite-cleanup-trivial */
static obj_t ite_cleanup_trivial(state_t s,struct34_t i) {
  obj_t scrutinee;
  scrutinee = i.cond;
  switch (((con_obj_t*) scrutinee)->tag) {
    case 377/* SEM_SEXPR_LIN */: {
      obj_t l;
      l = ((con_obj_t*) scrutinee)->payload;
      switch (((con_obj_t*) l)->tag) {
        case 373/* SEM_LIN_IMM */: {
          struct41_t z;
          int_t scrutinee_;
          z = ((con_struct41_t*) l)->payload;
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
static obj_t def_(state_t s,struct34_t i) {
  return constructor_STO_SOME(s,constructor_SEM_ITE(s,__struct34(s,i.cond,i.else_branch,i.then_branch)));
}
/* ite-cleanup-empty */
static obj_t ite_cleanup_empty(state_t s,struct34_t i) {
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
static obj_t ic_eval(state_t s,struct34_t i,obj_t (*fun)(state_t,struct34_t),obj_t rest) {
  switch (((con_obj_t*) rest)->tag) {
    case 440/* STO_MORE */: {
      obj_t m;
      m = ((con_obj_t*) rest)->payload;
      return constructor_STO_MORE(s,m);
    }; break;
    case 441/* STO_SOME */: {
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
static obj_t ite_cleanup(state_t s,struct34_t i,obj_t hd,obj_t tl) {
  obj_t scrutinee;
  scrutinee = ic_eval(s,i,ite_cleanup_trivial,ite_cleanup_empty(s,i));
  switch (((con_obj_t*) scrutinee)->tag) {
    case 440/* STO_MORE */: {
      obj_t m;
      m = ((con_obj_t*) scrutinee)->payload;
      return stmts_concat(s,m,tl);
    }; break;
    case 441/* STO_SOME */: {
      obj_t s_;
      s_ = ((con_obj_t*) scrutinee)->payload;
      return constructor_SEM_CONS(s,__struct6(s,s_,tl));
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
    case 418/* SEM_CONS */: {
      struct6_t x;
      obj_t scrutinee;
      x = ((con_struct6_t*) stmts)->payload;
      scrutinee = x.hd;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 408/* SEM_ITE */: {
          struct34_t i;
          i = ((con_struct34_t*) scrutinee)->payload;
          return ite_cleanup(s,i,x.hd,my_cleanup(s,x.tl));
        }; break;
        default: {
          return constructor_SEM_CONS(s,__struct6(s,x.hd,my_cleanup(s,x.tl)));
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
static INLINE_ATTR obj_t constructor_INSNS_CONS(state_t s,struct61_t arg_of_INSNS_CONS) {
  con_struct61_t adt;
  adt.tag = 444/* INSNS_CONS */;
  adt.payload = arg_of_INSNS_CONS;
  return (obj_t) alloc_con_struct61(s,adt);
}
/* traverse-insn-list */
static obj_t traverse_insn_list(state_t s,obj_t l,obj_t init,obj_t (*insn_append)(state_t,obj_t,insndata_t)) {
  switch (((con_obj_t*) l)->tag) {
    case 444/* INSNS_CONS */: {
      struct61_t cons;
      cons = ((con_struct61_t*) l)->payload;
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
/* sizeof-lval */
static int_t sizeof_lval(state_t s,obj_t x) {
  switch (((con_obj_t*) x)->tag) {
    case 61/* GPR */: {
      return 32;
    }; break;
    case 62/* FPR */: {
      return 32;
    }; break;
    default: {
      s->err_str = "pattern match failure in sizeof-lval at specifications/mips/mips-rreil-translator.ml:77.11-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sizeof-rval */
static int_t sizeof_rval(state_t s,obj_t x) {
  switch (((con_obj_t*) x)->tag) {
    case 63/* LVALUE */: {
      obj_t lv;
      lv = ((con_obj_t*) x)->payload;
      return sizeof_lval(s,lv);
    }; break;
    case 64/* IMM */: {
      obj_t imm_;
      imm_ = ((con_obj_t*) x)->payload;
      switch (((con_obj_t*) imm_)->tag) {
        case 42/* IMM5 */: {
          return 5;
        }; break;
        case 43/* IMM16 */: {
          return 16;
        }; break;
        case 44/* OFFSET9 */: {
          return 9;
        }; break;
        case 45/* OFFSET16 */: {
          return 16;
        }; break;
        case 46/* SEL */: {
          return 3;
        }; break;
        case 47/* IMPL */: {
          return 16;
        }; break;
        case 48/* CODE10 */: {
          return 10;
        }; break;
        case 49/* CODE19 */: {
          return 19;
        }; break;
        case 50/* CODE20 */: {
          return 20;
        }; break;
        case 51/* STYPE */: {
          return 5;
        }; break;
        case 52/* POSSIZE */: {
          return 5;
        }; break;
        case 53/* SIZE */: {
          return 5;
        }; break;
        case 54/* POS */: {
          return 5;
        }; break;
        case 55/* HINT */: {
          return 5;
        }; break;
        case 56/* INSTRINDEX */: {
          return 26;
        }; break;
        case 57/* COFUN */: {
          return 25;
        }; break;
        case 58/* CC */: {
          return 3;
        }; break;
        case 59/* COND */: {
          return 4;
        }; break;
        case 60/* OP */: {
          return 5;
        }; break;
        default: {
          s->err_str = "pattern match failure in sizeof-rval at specifications/mips/mips-rreil-translator.ml:103.16-17";
          longjmp(s->err_tgt,0);
        }; break;
      };
    }; break;
    default: {
      s->err_str = "pattern match failure in sizeof-rval at specifications/mips/mips-rreil-translator.ml:83.11-14";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* from-vec */
static obj_t from_vec(state_t s,int_t sn,vec_t vec) {
  switch (sn) {
    case CON_Signed: {
      return constructor_SEM_LIN_IMM(s,__struct41(s,vec_to_signed(s,vec)));
    }; break;
    case CON_Unsigned: {
      return constructor_SEM_LIN_IMM(s,__struct41(s,vec_to_unsigned(s,vec)));
    }; break;
    default: {
      s->err_str = "pattern match failure in from-vec at specifications/mips/mips-rreil-translator.ml:27.10-18";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* from-imm */
static obj_t from_imm(state_t s,int_t sn,obj_t imm_) {
  switch (((con_obj_t*) imm_)->tag) {
    case 42/* IMM5 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 43/* IMM16 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 44/* OFFSET9 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 45/* OFFSET16 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 46/* SEL */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 47/* IMPL */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 48/* CODE10 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 49/* CODE19 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 50/* CODE20 */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 51/* STYPE */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 52/* POSSIZE */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 53/* SIZE */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 54/* POS */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 55/* HINT */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 56/* INSTRINDEX */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 57/* COFUN */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 58/* CC */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 59/* COND */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    case 60/* OP */: {
      vec_t i;
      i = ((con_vec_t*) imm_)->payload;
      return from_vec(s,sn,i);
    }; break;
    default: {
      s->err_str = "pattern match failure in from-imm at specifications/mips/mips-rreil-translator.ml:50.13-14";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* semantic-fpr-of */
static obj_t semantic_fpr_of(state_t s,obj_t f_) {
  switch (*((int_t*) f_)) {
    case CON_F0: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F0),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F1: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F1),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F2: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F2),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F3: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F3),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F4: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F4),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F5: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F5),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F6: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F6),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F7: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F7),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F8: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F8),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F9: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F9),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F10: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F10),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F11: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F11),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F12: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F12),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F13: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F13),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F14: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F14),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F15: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F15),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F16: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F16),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F17: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F17),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F18: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F18),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F19: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F19),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F20: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F20),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F21: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F21),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F22: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F22),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F23: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F23),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F24: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F24),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F25: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F25),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F26: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F26),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F27: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F27),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F28: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F28),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F29: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F29),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F30: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F30),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_F31: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_F31),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_FCSR: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_FCSR),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    default: {
      s->err_str = "pattern match failure in semantic-fpr-of at specifications/mips/mips-rreil-registermapping.ml:209.7-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* semantic-gpr-of */
static obj_t semantic_gpr_of(state_t s,obj_t r) {
  switch (*((int_t*) r)) {
    case CON_ZERO: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_ZERO),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_AT: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_AT),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_V0: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_V0),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_V1: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_V1),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_A0: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_A0),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_A1: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_A1),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_A2: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_A2),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_A3: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_A3),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T0: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T0),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T1: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T1),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T2: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T2),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T3: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T3),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T4: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T4),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T5: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T5),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T6: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T6),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T7: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T7),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_S0: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_S0),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_S1: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_S1),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_S2: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_S2),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_S3: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_S3),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_S4: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_S4),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_S5: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_S5),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_S6: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_S6),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_S7: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_S7),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T8: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T8),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_T9: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_T9),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_K0: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_K0),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_K1: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_K1),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_GP: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_GP),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_SP: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_SP),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_S8: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_S8),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_RA: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_RA),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    default: {
      s->err_str = "pattern match failure in semantic-gpr-of at specifications/mips/mips-rreil-registermapping.ml:168.7-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* lval */
static obj_t lval(state_t s,int_t sn,obj_t x) {
  switch (((con_obj_t*) x)->tag) {
    case 61/* GPR */: {
      obj_t r;
      r = ((con_obj_t*) x)->payload;
      return var(s,semantic_gpr_of(s,r));
    }; break;
    case 62/* FPR */: {
      obj_t f_;
      f_ = ((con_obj_t*) x)->payload;
      return var(s,semantic_fpr_of(s,f_));
    }; break;
    default: {
      s->err_str = "pattern match failure in lval at specifications/mips/mips-rreil-translator.ml:20.11-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* rval */
static obj_t rval(state_t s,int_t sn,obj_t x) {
  switch (((con_obj_t*) x)->tag) {
    case 63/* LVALUE */: {
      obj_t lv;
      lv = ((con_obj_t*) x)->payload;
      switch (((con_obj_t*) lv)->tag) {
        case 61/* GPR */: {
          obj_t r;
          r = ((con_obj_t*) lv)->payload;
          switch (*((int_t*) r)) {
            case CON_ZERO: {
              return constructor_SEM_LIN_IMM(s,__struct41(s,0));
            }; break;
            default: {
              return lval(s,sn,lv);
            }; break;
          };
        }; break;
        default: {
          return lval(s,sn,lv);
        }; break;
      };
    }; break;
    case 64/* IMM */: {
      obj_t i;
      i = ((con_obj_t*) x)->payload;
      return from_imm(s,sn,i);
    }; break;
    default: {
      s->err_str = "pattern match failure in rval at specifications/mips/mips-rreil-translator.ml:63.11-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* write */
static obj_t write(state_t s,obj_t to,obj_t from) {
  switch (((con_obj_t*) to)->tag) {
    case 61/* GPR */: {
      obj_t r;
      r = ((con_obj_t*) to)->payload;
      return mov(s,sizeof_lval(s,to),semantic_gpr_of(s,r),from);
    }; break;
    default: {
      s->err_str = "pattern match failure in write at specifications/mips/mips-rreil-translator.ml:14.11-12";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sem-wsbh */
static obj_t sem_wsbh(state_t s,binop_t x) {
  obj_t rt_;
  int_t size;
  obj_t temp;
  obj_t p1;
  obj_t p2;
  obj_t p3;
  obj_t p4;
  obj_t res;
  rt_ = rval(s,CON_Unsigned,x.source);
  size = sizeof_rval(s,x.source);
  temp = mktemp_(s);
  mov(s,size,temp,rt_);
  p1 = mktemp_(s);
  p2 = mktemp_(s);
  p3 = mktemp_(s);
  p4 = mktemp_(s);
  mov(s,8,p1,rt_);
  invoke_obj_closure(s,shr(s,size,temp,var(s,temp),imm(s,8)));
  mov(s,8,p2,rt_);
  invoke_obj_closure(s,shr(s,size,temp,var(s,temp),imm(s,8)));
  mov(s,8,p3,rt_);
  invoke_obj_closure(s,shr(s,size,temp,var(s,temp),imm(s,8)));
  mov(s,8,p4,rt_);
  res = mktemp_(s);
  mov(s,8,res,var(s,p3));
  invoke_obj_closure(s,shl(s,size,res,var(s,res),imm(s,8)));
  mov(s,8,res,var(s,p4));
  invoke_obj_closure(s,shl(s,size,res,var(s,res),imm(s,8)));
  mov(s,8,res,var(s,p1));
  invoke_obj_closure(s,shl(s,size,res,var(s,res),imm(s,8)));
  mov(s,8,res,var(s,p2));
  return write(s,x.destination,var(s,res));
}
/* throw-exception */
static obj_t throw_exception(state_t s,obj_t exc) {
  if (s->exceptions_on) {
    return throw(s,exc);
  } else {
    return 0 /* void value */;
  };
}
/* sem-tiAction1 */
static obj_t sem_tiAction1(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_TRAP));
}
static obj_t sem_tiAction1Closure(state_t s,obj_t v) {
  return sem_tiAction1(s);
}
/* sem-ti */
static obj_t sem_ti(state_t s,obj_t (*cmp_op)(state_t,int_t,obj_t,obj_t),int_t signedness,ternop_t x) {
  obj_t rs_;
  obj_t imm_;
  int_t size;
  rs_ = rval(s,signedness,x.source1);
  imm_ = rval(s,signedness,x.source2);
  size = sizeof_rval(s,x.source1);
  return _if_then(s,cmp_op(s,size,rs_,imm_),gen_obj__closure(s,&sem_tiAction1Closure));
}
/* sem-tnei */
static obj_t sem_tnei(state_t s,ternop_t x) {
  return sem_ti(s,_slash_neq,CON_Signed,x);
}
/* sem-tltiu */
static obj_t sem_tltiu(state_t s,ternop_t x) {
  return sem_ti(s,_slash_ltu,CON_Unsigned,x);
}
/* sem-tlti */
static obj_t sem_tlti(state_t s,ternop_t x) {
  return sem_ti(s,_slash_lts,CON_Signed,x);
}
/* sem-tgeiu */
static obj_t sem_tgeiu(state_t s,ternop_t x) {
  return sem_ti(s,_slash_geu,CON_Unsigned,x);
}
/* sem-tgei */
static obj_t sem_tgei(state_t s,ternop_t x) {
  return sem_ti(s,_slash_ges,CON_Signed,x);
}
/* sem-teqi */
static obj_t sem_teqi(state_t s,ternop_t x) {
  return sem_ti(s,_slash_eq,CON_Signed,x);
}
/* sem-tAction1 */
static obj_t sem_tAction1(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_TRAP));
}
static obj_t sem_tAction1Closure(state_t s,obj_t v) {
  return sem_tAction1(s);
}
/* sem-t */
static obj_t sem_t(state_t s,obj_t (*cmp_op)(state_t,int_t,obj_t,obj_t),ternop_src_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  return _if_then(s,cmp_op(s,size,rs_,rt_),gen_obj__closure(s,&sem_tAction1Closure));
}
/* sem-tne */
static obj_t sem_tne(state_t s,ternop_src_t x) {
  return sem_t(s,_slash_neq,x);
}
/* sem-tltu */
static obj_t sem_tltu(state_t s,ternop_src_t x) {
  return sem_t(s,_slash_ltu,x);
}
/* sem-tlt */
static obj_t sem_tlt(state_t s,ternop_src_t x) {
  return sem_t(s,_slash_lts,x);
}
/* sem-tgeu */
static obj_t sem_tgeu(state_t s,ternop_src_t x) {
  return sem_t(s,_slash_geu,x);
}
/* sem-tge */
static obj_t sem_tge(state_t s,ternop_src_t x) {
  return sem_t(s,_slash_ges,x);
}
/* sem-teq */
static obj_t sem_teq(state_t s,ternop_src_t x) {
  return sem_t(s,_slash_eq,x);
}
/* sem-syscall */
static obj_t sem_syscall(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_SYSTEM_CALL));
}
/* sem-sllv-srav-srlv */
static obj_t sem_sllv_srav_srlv(state_t s,obj_t (*shift_op)(state_t,int_t,obj_t,obj_t,obj_t),ternop_t x) {
  obj_t rt_;
  obj_t rs_;
  int_t size;
  obj_t amount;
  obj_t temp;
  rt_ = rval(s,CON_Signed,x.source1);
  rs_ = rval(s,CON_Signed,x.source2);
  size = sizeof_lval(s,x.destination);
  amount = mktemp_(s);
  mov(s,5,amount,rs_);
  temp = mktemp_(s);
  invoke_obj_closure(s,shift_op(s,size,temp,rt_,var(s,amount)));
  return write(s,x.destination,var(s,temp));
}
/* sem-srlv */
static obj_t sem_srlv(state_t s,ternop_t x) {
  return sem_sllv_srav_srlv(s,shr,x);
}
/* sem-srav */
static obj_t sem_srav(state_t s,ternop_t x) {
  return sem_sllv_srav_srlv(s,shrs,x);
}
/* sem-sllv */
static obj_t sem_sllv(state_t s,ternop_t x) {
  return sem_sllv_srav_srlv(s,shl,x);
}
/* sem-sll-sra-srl */
static obj_t sem_sll_sra_srl(state_t s,obj_t (*shift_op)(state_t,int_t,obj_t,obj_t,obj_t),ternop_t x) {
  obj_t rt_;
  obj_t amount;
  int_t size;
  obj_t temp;
  rt_ = rval(s,CON_Signed,x.source1);
  amount = rval(s,CON_Signed,x.source2);
  size = sizeof_lval(s,x.destination);
  temp = mktemp_(s);
  invoke_obj_closure(s,shift_op(s,size,temp,rt_,amount));
  return write(s,x.destination,var(s,temp));
}
/* sem-srl */
static obj_t sem_srl(state_t s,ternop_t x) {
  return sem_sll_sra_srl(s,shr,x);
}
/* sem-sra */
static obj_t sem_sra(state_t s,ternop_t x) {
  return sem_sll_sra_srl(s,shrs,x);
}
/* sem-sll */
static obj_t sem_sll(state_t s,ternop_t x) {
  return sem_sll_sra_srl(s,shl,x);
}
/* sem-sdbbpAction2 */
static obj_t sem_sdbbpAction2(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_DEBUG_MODE_BREAKPOINT));
}
static obj_t sem_sdbbpAction2Closure(state_t s,obj_t v) {
  return sem_sdbbpAction2(s);
}
/* sem-sdbbpAction1 */
static obj_t sem_sdbbpAction1(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_DEBUG_BREAKPOINT));
}
static obj_t sem_sdbbpAction1Closure(state_t s,obj_t v) {
  return sem_sdbbpAction1(s);
}
/* semantic-reg-of */
static obj_t semantic_reg_of(state_t s,int_t x) {
  switch (x) {
    case CON_Sem_PC: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_PC),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_HI: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_HI),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_LO: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_LO),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_SREG: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_SREG),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_LLBIT: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_LLBIT),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,1,NULL)));
    }; break;
    case CON_Sem_DEBUG: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_DEBUG),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_CONFIG1: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_CONFIG1),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_CONFIG3: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_CONFIG3),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_ISA_MODE: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_ISA_MODE),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,1,NULL)));
    }; break;
    case CON_Sem_SRSCTL: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_SRSCTL),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_EPC: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_EPC),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_ERROR_EPC: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_ERROR_EPC),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_DEPC: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_DEPC),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_CPUNUM: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_CPUNUM),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_SYNCI_STEP: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_SYNCI_STEP),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_CC: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_CC),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_CCRES: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_CCRES),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    case CON_Sem_ULR: {
      return add_field_obj(s,91/* id */,alloc_int(s,CON_Sem_ULR),add_field_int(s,54/* offset */,0,add_field_int(s,9/* size */,32,NULL)));
    }; break;
    default: {
      s->err_str = "pattern match failure in semantic-reg-of at specifications/mips/mips-rreil-registermapping.ml:132.7-16";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sem-reg-offset */
static obj_t sem_reg_offset(state_t s,obj_t r,int_t o) {
  return add_field_int(s,54/* offset */,(select_int(s,54/* offset */,r)+o),
           del_fields(s,field_array_54,1,r));
}
/* sem-sdbbp */
static obj_t sem_sdbbp(state_t s,unop_src_t x) {
  obj_t debugDM;
  debugDM = s->fDM;
  return _if_then_else(s,_slash_eq(s,select_int(s,9/* size */,debugDM),var(s,debugDM),imm(s,0)),gen_obj__closure(s,&sem_sdbbpAction1Closure),gen_obj__closure(s,&sem_sdbbpAction2Closure));
}
/* is-user-mode */
static obj_t is_user_mode(state_t s) {
  obj_t dm;
  obj_t ksu;
  obj_t exl;
  obj_t erl;
  obj_t res;
  dm = s->fDM;
  ksu = s->fKSU;
  exl = s->fEXL;
  erl = s->fERL;
  res = mktemp_(s);
  mov(s,2,res,var(s,ksu));
  invoke_obj_closure(s,orb(s,1,res,var(s,res),var(s,dm)));
  invoke_obj_closure(s,orb(s,1,res,var(s,res),var(s,exl)));
  invoke_obj_closure(s,orb(s,1,res,var(s,res),var(s,erl)));
  return invoke_obj_closure(s,_slash_eq(s,2,var(s,res),imm(s,2)));
}
/* is-reverse-endian */
static obj_t is_reverse_endian(state_t s) {
  obj_t um;
  obj_t re;
  obj_t res;
  um = is_user_mode(s);
  re = s->fRE;
  res = mktemp_(s);
  invoke_obj_closure(s,andb(s,1,res,um,var(s,re)));
  return invoke_obj_closure(s,_slash_eq(s,1,var(s,res),imm(s,1)));
}
/* is-big-endian-cpu */
static obj_t is_big_endian_cpu(state_t s) {
  obj_t re;
  re = is_reverse_endian(s);
  if (s->bigendian_mem) {
    return invoke_obj_closure(s,_slash_eq(s,1,re,imm(s,0)));
  } else {
    return invoke_obj_closure(s,_slash_eq(s,1,re,imm(s,1)));
  };
}
/* sem-swr */
static obj_t sem_swr(state_t s,ternop_src_t x) {
  obj_t base;
  obj_t off;
  obj_t rt_;
  int_t size;
  obj_t vaddr;
  obj_t bcpu;
  obj_t bcpu2;
  obj_t byte;
  obj_t memword;
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source3);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source2);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  bcpu = is_big_endian_cpu(s);
  bcpu2 = mktemp_(s);
  invoke_obj_closure(s,movsx(s,2,bcpu2,1,bcpu));
  byte = mktemp_(s);
  invoke_obj_closure(s,xorb(s,2,byte,var(s,vaddr),var(s,bcpu2)));
  invoke_obj_closure(s,shl(s,32,byte,var(s,byte),imm(s,3)));
  mktemp_(s);
  memword = mktemp_(s);
  invoke_obj_closure(s,shr(s,size,memword,rt_,var(s,byte)));
  return store(s,32,address(s,size,var(s,vaddr)),var(s,memword));
}
/* sem-swl */
static obj_t sem_swl(state_t s,ternop_src_t x) {
  obj_t base;
  obj_t off;
  obj_t rt_;
  int_t size;
  obj_t vaddr;
  obj_t bcpu;
  obj_t bcpu2;
  obj_t byte;
  obj_t rshift;
  obj_t memword;
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source3);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source2);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  bcpu = is_big_endian_cpu(s);
  bcpu2 = mktemp_(s);
  invoke_obj_closure(s,movsx(s,2,bcpu2,1,bcpu));
  byte = mktemp_(s);
  invoke_obj_closure(s,xorb(s,2,byte,var(s,vaddr),var(s,bcpu2)));
  invoke_obj_closure(s,shl(s,32,byte,var(s,byte),imm(s,3)));
  rshift = mktemp_(s);
  invoke_obj_closure(s,sub(s,size,rshift,imm(s,24),var(s,byte)));
  memword = mktemp_(s);
  invoke_obj_closure(s,shr(s,size,memword,rt_,var(s,rshift)));
  return store(s,32,address(s,size,var(s,vaddr)),var(s,memword));
}
/* sem-sc-swAction1 */
static obj_t sem_sc_swAction1(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_VADDR_ERROR));
}
static obj_t sem_sc_swAction1Closure(state_t s,obj_t v) {
  return sem_sc_swAction1(s);
}
/* sem-sc-sw */
static obj_t sem_sc_sw(state_t s,ternop_t x) {
  obj_t rt_;
  obj_t base;
  obj_t off;
  int_t size;
  obj_t vaddr;
  rt_ = lval(s,CON_Signed,x.destination);
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  _if_then(s,_slash_neq(s,2,var(s,vaddr),imm(s,0)),gen_obj__closure(s,&sem_sc_swAction1Closure));
  return store(s,32,address(s,size,var(s,vaddr)),rt_);
}
/* sem-scAction1 */
static obj_t sem_scAction1(state_t s,ternop_t x) {
  return sem_sc_sw(s,x);
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  ternop_t arg1;
} closure_obj_ternop__t;
static obj_t sem_scAction1Closure(state_t s,obj_t v) {
  closure_obj_ternop__t* c = (closure_obj_ternop__t*) v;
  return sem_scAction1(s,c->arg1);
}
/* sem-sc */
static INLINE_ATTR obj_t gen_obj_ternop__closure(state_t s,obj_t (*func)(state_t,obj_t),ternop_t arg1) {
  closure_obj_ternop__t content;
  content.func = func;
  content.arg1 = arg1;
  closure_obj_ternop__t* closure = (closure_obj_ternop__t*) alloc(s, sizeof(closure_obj_ternop__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t sem_sc(state_t s,ternop_t x) {
  obj_t llbit;
  int_t size;
  obj_t temp;
  llbit = semantic_reg_of(s,CON_Sem_LLBIT);
  size = sizeof_lval(s,x.destination);
  _if_then(s,_slash_eq(s,select_int(s,9/* size */,llbit),var(s,llbit),imm(s,1)),gen_obj_ternop__closure(s,&sem_scAction1Closure,x));
  temp = mktemp_(s);
  invoke_obj_closure(s,movzx(s,size,temp,select_int(s,9/* size */,llbit),var(s,llbit)));
  return write(s,x.destination,var(s,temp));
}
/* sem-swAction1 */
static obj_t sem_swAction1(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_VADDR_ERROR));
}
static obj_t sem_swAction1Closure(state_t s,obj_t v) {
  return sem_swAction1(s);
}
/* sem-sw */
static obj_t sem_sw(state_t s,ternop_src_t x) {
  obj_t rt_;
  obj_t base;
  obj_t off;
  int_t size;
  obj_t vaddr;
  rt_ = rval(s,CON_Signed,x.source2);
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source3);
  size = sizeof_rval(s,x.source1);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  _if_then(s,_slash_neq(s,2,var(s,vaddr),imm(s,0)),gen_obj__closure(s,&sem_swAction1Closure));
  return store(s,32,address(s,size,var(s,vaddr)),rt_);
}
/* sem-shAction1 */
static obj_t sem_shAction1(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_VADDR_ERROR));
}
static obj_t sem_shAction1Closure(state_t s,obj_t v) {
  return sem_shAction1(s);
}
/* sem-sh */
static obj_t sem_sh(state_t s,ternop_src_t x) {
  obj_t rt_;
  obj_t base;
  obj_t off;
  int_t size;
  obj_t vaddr;
  obj_t bcpu;
  obj_t bcpu2;
  obj_t byte;
  obj_t memword;
  rt_ = rval(s,CON_Signed,x.source2);
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source3);
  size = sizeof_rval(s,x.source1);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  _if_then(s,_slash_neq(s,1,var(s,vaddr),imm(s,0)),gen_obj__closure(s,&sem_shAction1Closure));
  bcpu = is_big_endian_cpu(s);
  bcpu2 = mktemp_(s);
  invoke_obj_closure(s,shl(s,2,bcpu2,bcpu,imm(s,1)));
  byte = mktemp_(s);
  mov(s,30,at_offset(s,byte,2),imm(s,0));
  invoke_obj_closure(s,xorb(s,2,byte,var(s,vaddr),var(s,bcpu2)));
  invoke_obj_closure(s,shl(s,32,byte,var(s,byte),imm(s,3)));
  memword = mktemp_(s);
  invoke_obj_closure(s,shl(s,32,memword,rt_,var(s,byte)));
  return store(s,32,address(s,size,var(s,vaddr)),var(s,memword));
}
/* sem-sb */
static obj_t sem_sb(state_t s,ternop_src_t x) {
  obj_t rt_;
  obj_t base;
  obj_t off;
  int_t size;
  obj_t vaddr;
  obj_t bcpu;
  obj_t bcpu2;
  obj_t byte;
  obj_t memword;
  rt_ = rval(s,CON_Signed,x.source2);
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source3);
  size = sizeof_rval(s,x.source1);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  bcpu = is_big_endian_cpu(s);
  bcpu2 = mktemp_(s);
  invoke_obj_closure(s,movsx(s,2,bcpu2,1,bcpu));
  byte = mktemp_(s);
  mov(s,30,at_offset(s,byte,2),imm(s,0));
  invoke_obj_closure(s,xorb(s,2,byte,var(s,vaddr),var(s,bcpu2)));
  invoke_obj_closure(s,shl(s,32,byte,var(s,byte),imm(s,3)));
  memword = mktemp_(s);
  invoke_obj_closure(s,shl(s,32,memword,rt_,var(s,byte)));
  return store(s,32,address(s,size,var(s,vaddr)),var(s,memword));
}
/* sem-subu */
static obj_t sem_subu(state_t s,ternop_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  obj_t res;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_lval(s,x.destination);
  res = mktemp_(s);
  invoke_obj_closure(s,sub(s,size,res,rs_,rt_));
  return write(s,x.destination,var(s,res));
}
/* overflow-subAction4 */
static obj_t overflow_subAction4(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_OVERFLOW));
}
static obj_t overflow_subAction4Closure(state_t s,obj_t v) {
  return overflow_subAction4(s);
}
/* overflow-subAction2 */
static obj_t overflow_subAction2(state_t s,obj_t t1) {
  return var(s,t1);
}
static obj_t overflow_subAction2Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return overflow_subAction2(s,c->arg1);
}
/* overflow-subAction1 */
static obj_t overflow_subAction1(state_t s,obj_t t2) {
  return var(s,t2);
}
static obj_t overflow_subAction1Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return overflow_subAction1(s,c->arg1);
}
/* overflow-subAction3 */
static obj_t overflow_subAction3(state_t s,obj_t t1,obj_t t2) {
  return _slash_xor(s,gen_obj_obj__closure(s,&overflow_subAction1Closure,t2),gen_obj_obj__closure(s,&overflow_subAction2Closure,t1));
}
static obj_t overflow_subAction3Closure(state_t s,obj_t v) {
  closure_obj_obj_obj__t* c = (closure_obj_obj_obj__t*) v;
  return overflow_subAction3(s,c->arg1,c->arg2);
}
/* overflow-sub */
static obj_t overflow_sub(state_t s,int_t size,obj_t res,obj_t rs_,obj_t rt_) {
  obj_t t1;
  obj_t t2;
  t1 = mktemp_(s);
  t2 = mktemp_(s);
  mktemp_(s);
  invoke_obj_closure(s,cmplts(s,size,t1,var(s,res),imm(s,0)));
  invoke_obj_closure(s,cmplts(s,size,t2,rs_,rt_));
  return _if_then(s,gen_obj_obj_obj__closure(s,&overflow_subAction3Closure,t1,t2),gen_obj__closure(s,&overflow_subAction4Closure));
}
/* sem-sub */
static obj_t sem_sub(state_t s,ternop_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  obj_t res;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_lval(s,x.destination);
  res = mktemp_(s);
  invoke_obj_closure(s,sub(s,size,res,rs_,rt_));
  overflow_sub(s,size,res,rs_,rt_);
  return write(s,x.destination,var(s,res));
}
/* sem-slti-sltiu */
static obj_t sem_slti_sltiu(state_t s,obj_t (*mov_op)(state_t,int_t,obj_t,int_t,obj_t),obj_t (*cmp_op)(state_t,int_t,obj_t,obj_t,obj_t),ternop_t x) {
  obj_t rt_;
  obj_t imm_;
  int_t size;
  int_t size_imm;
  obj_t imm_ext;
  obj_t res;
  rt_ = rval(s,CON_Signed,x.source1);
  imm_ = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  size_imm = sizeof_rval(s,x.source2);
  imm_ext = mktemp_(s);
  invoke_obj_closure(s,mov_op(s,size,imm_ext,size_imm,imm_));
  res = mktemp_(s);
  invoke_obj_closure(s,cmp_op(s,size,res,rt_,var(s,imm_ext)));
  invoke_obj_closure(s,movzx(s,size,res,1,var(s,res)));
  return write(s,x.destination,var(s,res));
}
/* sem-sltiu */
static obj_t sem_sltiu(state_t s,ternop_t x) {
  return sem_slti_sltiu(s,movzx,cmpltu,x);
}
/* sem-slti */
static obj_t sem_slti(state_t s,ternop_t x) {
  return sem_slti_sltiu(s,movsx,cmplts,x);
}
/* sem-slt-sltu */
static obj_t sem_slt_sltu(state_t s,obj_t (*cmp_op)(state_t,int_t,obj_t,obj_t,obj_t),ternop_t x) {
  obj_t s1;
  obj_t s2;
  int_t size;
  obj_t res;
  s1 = rval(s,CON_Signed,x.source1);
  s2 = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  res = mktemp_(s);
  invoke_obj_closure(s,cmp_op(s,size,res,s1,s2));
  invoke_obj_closure(s,movzx(s,size,res,1,var(s,res)));
  return write(s,x.destination,var(s,res));
}
/* sem-sltu */
static obj_t sem_sltu(state_t s,ternop_t x) {
  return sem_slt_sltu(s,cmpltu,x);
}
/* sem-slt */
static obj_t sem_slt(state_t s,ternop_t x) {
  return sem_slt_sltu(s,cmplts,x);
}
/* sem-se */
static obj_t sem_se(state_t s,int_t sz,binop_t x) {
  obj_t rt_;
  int_t size;
  obj_t res;
  rt_ = rval(s,CON_Signed,x.source);
  size = sizeof_rval(s,x.source);
  res = mktemp_(s);
  invoke_obj_closure(s,movsx(s,size,res,sz,rt_));
  return write(s,x.destination,var(s,res));
}
/* sem-seh */
static obj_t sem_seh(state_t s,binop_t x) {
  return sem_se(s,16,x);
}
/* sem-seb */
static obj_t sem_seb(state_t s,binop_t x) {
  return sem_se(s,8,x);
}
/* sem-rotrv */
static obj_t sem_rotrv(state_t s,ternop_t x) {
  obj_t rt_;
  obj_t rs_;
  int_t size;
  obj_t left;
  obj_t amount;
  obj_t right_;
  obj_t res;
  rt_ = rval(s,CON_Signed,x.source1);
  rs_ = rval(s,CON_Unsigned,x.source2);
  size = sizeof_rval(s,x.source1);
  left = mktemp_(s);
  invoke_obj_closure(s,shr(s,size,left,rt_,rs_));
  amount = mktemp_(s);
  invoke_obj_closure(s,sub(s,size,amount,imm(s,32),rs_));
  right_ = mktemp_(s);
  invoke_obj_closure(s,shl(s,size,right_,rt_,var(s,amount)));
  res = mktemp_(s);
  invoke_obj_closure(s,orb(s,size,res,var(s,left),var(s,right_)));
  return write(s,x.destination,var(s,res));
}
/* lin-to-int */
static int_t lin_to_int(state_t s,obj_t x) {
  switch (((con_obj_t*) x)->tag) {
    case 373/* SEM_LIN_IMM */: {
      struct41_t li;
      li = ((con_struct41_t*) x)->payload;
      return li.const_;
    }; break;
    default: {
      s->err_str = "pattern match failure in lin-to-int at specifications/mips/mips-rreil-translator.ml:71.19-21";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sem-rotr */
static obj_t sem_rotr(state_t s,ternop_t x) {
  obj_t rt_;
  obj_t sa_;
  int_t size;
  int_t amount;
  obj_t res;
  rt_ = rval(s,CON_Signed,x.source1);
  sa_ = rval(s,CON_Unsigned,x.source2);
  size = sizeof_rval(s,x.source1);
  amount = lin_to_int(s,sa_);
  res = mktemp_(s);
  invoke_obj_closure(s,shr(s,size,res,rt_,sa_));
  mov(s,amount,at_offset(s,res,(32-amount)),rt_);
  return write(s,x.destination,var(s,res));
}
/* hwr-reg-of */
static obj_t hwr_reg_of(state_t s,int_t x) {
  switch (x) {
    case 0: {
      return semantic_reg_of(s,CON_Sem_CPUNUM);
    }; break;
    case 1: {
      return semantic_reg_of(s,CON_Sem_SYNCI_STEP);
    }; break;
    case 2: {
      return semantic_reg_of(s,CON_Sem_CC);
    }; break;
    case 3: {
      return semantic_reg_of(s,CON_Sem_CCRES);
    }; break;
    case 29: {
      return semantic_reg_of(s,CON_Sem_ULR);
    }; break;
    default: {
      s->err_str = "pattern match failure in hwr-reg-of at specifications/mips/mips-rreil-translator.ml:1089.7-9";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* sem-rdhwr */
static obj_t sem_rdhwr(state_t s,binop_t x) {
  obj_t rd_;
  int_t i;
  rd_ = rval(s,CON_Unsigned,x.source);
  i = lin_to_int(s,rd_);
  if (4<=i) {
    if (i==29) {
      obj_t reg;
      reg = hwr_reg_of(s,i);
      return write(s,x.destination,var(s,reg));
    } else {
      return throw_exception(s,alloc_int(s,CON_SEM_EXC_RESERVED_INSTRUCTION));
    };
  } else {
    obj_t reg;
    reg = hwr_reg_of(s,i);
    return write(s,x.destination,var(s,reg));
  };
}
/* sem-pauseAction1 */
static obj_t sem_pauseAction1(state_t s) {
  return 0 /* void value */;
}
static obj_t sem_pauseAction1Closure(state_t s,obj_t v) {
  return sem_pauseAction1(s);
}
/* sem-pause */
static obj_t sem_pause(state_t s) {
  obj_t llbit;
  obj_t epc;
  obj_t pc;
  llbit = semantic_reg_of(s,CON_Sem_LLBIT);
  _while__(s,_slash_eq(s,1,var(s,llbit),imm(s,0)),gen_obj__closure(s,&sem_pauseAction1Closure));
  epc = semantic_reg_of(s,CON_Sem_EPC);
  pc = semantic_reg_of(s,CON_Sem_PC);
  return invoke_obj_closure(s,add(s,select_int(s,9/* size */,pc),epc,var(s,pc),imm(s,0)));
}
/* sem-nor */
static obj_t sem_nor(state_t s,ternop_t x) {
  obj_t s1;
  obj_t s2;
  int_t size;
  obj_t res;
  s1 = rval(s,CON_Unsigned,x.source1);
  s2 = rval(s,CON_Unsigned,x.source2);
  size = sizeof_lval(s,x.destination);
  res = mktemp_(s);
  invoke_obj_closure(s,orb(s,size,res,s1,s2));
  invoke_obj_closure(s,xorb(s,size,res,var(s,res),imm(s,(0-1))));
  return write(s,x.destination,var(s,res));
}
/* sem-mul */
static obj_t sem_mul(state_t s,ternop_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  obj_t rs_ext;
  obj_t rt_ext;
  obj_t res;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  rs_ext = mktemp_(s);
  invoke_obj_closure(s,movsx(s,size*2,rs_ext,size,rs_));
  rt_ext = mktemp_(s);
  invoke_obj_closure(s,movsx(s,size*2,rt_ext,size,rt_));
  res = mktemp_(s);
  mul(s,size*2,res,var(s,rs_ext),var(s,rt_ext));
  return write(s,x.destination,var(s,res));
}
/* sem-mult-multu */
static obj_t sem_mult_multu(state_t s,obj_t (*ext_op)(state_t,int_t,obj_t,int_t,obj_t),ternop_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  obj_t rs_ext;
  obj_t rt_ext;
  obj_t res;
  obj_t hi;
  obj_t lo;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  rs_ext = mktemp_(s);
  invoke_obj_closure(s,ext_op(s,size*2,rs_ext,size,rs_));
  rt_ext = mktemp_(s);
  invoke_obj_closure(s,ext_op(s,size*2,rt_ext,size,rt_));
  res = mktemp_(s);
  mul(s,size*2,res,var(s,rs_ext),var(s,rt_ext));
  hi = semantic_reg_of(s,CON_Sem_HI);
  lo = semantic_reg_of(s,CON_Sem_LO);
  mov(s,size,lo,var(s,res));
  return mov(s,size,hi,var(s,at_offset(s,res,size)));
}
/* sem-multu */
static obj_t sem_multu(state_t s,ternop_t x) {
  return sem_mult_multu(s,movzx,x);
}
/* sem-mult */
static obj_t sem_mult(state_t s,ternop_t x) {
  return sem_mult_multu(s,movsx,x);
}
/* sem-movf-movtAction1 */
static obj_t sem_movf_movtAction1(state_t s,ternop_t x,obj_t rs_) {
  return write(s,x.destination,rs_);
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  ternop_t arg1;
  obj_t arg2;
} closure_obj_ternop_obj__t;
static obj_t sem_movf_movtAction1Closure(state_t s,obj_t v) {
  closure_obj_ternop_obj__t* c = (closure_obj_ternop_obj__t*) v;
  return sem_movf_movtAction1(s,c->arg1,c->arg2);
}
/* sem-movf-movt */
static INLINE_ATTR obj_t gen_obj_ternop_obj__closure(state_t s,obj_t (*func)(state_t,obj_t),ternop_t arg1,obj_t arg2) {
  closure_obj_ternop_obj__t content;
  content.func = func;
  content.arg1 = arg1;
  content.arg2 = arg2;
  closure_obj_ternop_obj__t* closure = (closure_obj_ternop_obj__t*) alloc(s, sizeof(closure_obj_ternop_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t sem_movf_movt(state_t s,ternop_t x,int_t i) {
  obj_t rs_;
  obj_t cc_;
  int_t cc_int;
  obj_t fcsr;
  int_t bit;
  rs_ = rval(s,CON_Signed,x.source1);
  cc_ = rval(s,CON_Signed,x.source2);
  cc_int = lin_to_int(s,cc_);
  fcsr = semantic_fpr_of(s,alloc_int(s,CON_FCSR));
  if (cc_int==0) {
    bit = (23+cc_int);
  } else {
    bit = (24+cc_int);
  };
  return _if_then(s,_slash_eq(s,1,var(s,at_offset(s,fcsr,bit)),imm(s,i)),gen_obj_ternop_obj__closure(s,&sem_movf_movtAction1Closure,x,rs_));
}
/* sem-movt */
static obj_t sem_movt(state_t s,ternop_t x) {
  return sem_movf_movt(s,x,1);
}
/* sem-movf */
static obj_t sem_movf(state_t s,ternop_t x) {
  return sem_movf_movt(s,x,0);
}
/* sem-movn-movzAction1 */
static obj_t sem_movn_movzAction1(state_t s,ternop_t x,obj_t rs_) {
  return write(s,x.destination,rs_);
}
static obj_t sem_movn_movzAction1Closure(state_t s,obj_t v) {
  closure_obj_ternop_obj__t* c = (closure_obj_ternop_obj__t*) v;
  return sem_movn_movzAction1(s,c->arg1,c->arg2);
}
/* sem-movn-movz */
static obj_t sem_movn_movz(state_t s,obj_t (*cmp_op)(state_t,int_t,obj_t,obj_t),ternop_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  return _if_then(s,cmp_op(s,size,rt_,imm(s,0)),gen_obj_ternop_obj__closure(s,&sem_movn_movzAction1Closure,x,rs_));
}
/* sem-movz */
static obj_t sem_movz(state_t s,ternop_t x) {
  return sem_movn_movz(s,_slash_eq,x);
}
/* sem-movn */
static obj_t sem_movn(state_t s,ternop_t x) {
  return sem_movn_movz(s,_slash_neq,x);
}
/* sem-mtlo */
static obj_t sem_mtlo(state_t s,unop_src_t x) {
  obj_t rs_;
  obj_t lo;
  rs_ = rval(s,CON_Signed,x.source);
  lo = semantic_reg_of(s,CON_Sem_LO);
  return mov(s,select_int(s,9/* size */,lo),lo,rs_);
}
/* sem-mthi */
static obj_t sem_mthi(state_t s,unop_src_t x) {
  obj_t rs_;
  obj_t hi;
  rs_ = rval(s,CON_Signed,x.source);
  hi = semantic_reg_of(s,CON_Sem_HI);
  return mov(s,select_int(s,9/* size */,hi),hi,rs_);
}
/* sem-mflo */
static obj_t sem_mflo(state_t s,unop_t x) {
  obj_t lo;
  lo = semantic_reg_of(s,CON_Sem_LO);
  return write(s,x.destination,var(s,lo));
}
/* sem-mfhi */
static obj_t sem_mfhi(state_t s,unop_t x) {
  obj_t hi;
  hi = semantic_reg_of(s,CON_Sem_HI);
  return write(s,x.destination,var(s,hi));
}
/* sem-madd-maddu-msub-msubu */
static obj_t sem_madd_maddu_msub_msubu(state_t s,obj_t (*ext_op)(state_t,int_t,obj_t,int_t,obj_t),obj_t (*add_sub_op)(state_t,int_t,obj_t,obj_t,obj_t),ternop_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  obj_t rs_ext;
  obj_t rt_ext;
  obj_t res;
  obj_t hi;
  obj_t lo;
  obj_t hilo;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  rs_ext = mktemp_(s);
  invoke_obj_closure(s,ext_op(s,size*2,rs_ext,size,rs_));
  rt_ext = mktemp_(s);
  invoke_obj_closure(s,ext_op(s,size*2,rt_ext,size,rt_));
  res = mktemp_(s);
  mul(s,size*2,res,var(s,rs_ext),var(s,rt_ext));
  hi = semantic_reg_of(s,CON_Sem_HI);
  lo = semantic_reg_of(s,CON_Sem_LO);
  hilo = mktemp_(s);
  invoke_obj_closure(s,movzx(s,size*2,hilo,size,var(s,lo)));
  mov(s,size,at_offset(s,hilo,size),var(s,hi));
  invoke_obj_closure(s,add_sub_op(s,size*2,res,var(s,res),var(s,hilo)));
  mov(s,size,lo,var(s,res));
  return mov(s,size,hi,var(s,at_offset(s,res,size)));
}
/* sem-msubu */
static obj_t sem_msubu(state_t s,ternop_t x) {
  return sem_madd_maddu_msub_msubu(s,movzx,sub,x);
}
/* sem-msub */
static obj_t sem_msub(state_t s,ternop_t x) {
  return sem_madd_maddu_msub_msubu(s,movzx,sub,x);
}
/* sem-maddu */
static obj_t sem_maddu(state_t s,ternop_t x) {
  return sem_madd_maddu_msub_msubu(s,movzx,add,x);
}
/* sem-madd */
static obj_t sem_madd(state_t s,ternop_t x) {
  return sem_madd_maddu_msub_msubu(s,movsx,add,x);
}
/* sem-lui */
static obj_t sem_lui(state_t s,binop_t x) {
  obj_t immediate_;
  int_t size;
  int_t size_imm;
  obj_t res;
  immediate_ = rval(s,CON_Unsigned,x.source);
  size = sizeof_lval(s,x.destination);
  size_imm = sizeof_rval(s,x.source);
  res = mktemp_(s);
  invoke_obj_closure(s,shl(s,size,res,immediate_,imm(s,(32-size_imm))));
  return write(s,x.destination,var(s,res));
}
/* sem-lwr */
static obj_t sem_lwr(state_t s,ternop_t x) {
  obj_t base;
  obj_t off;
  obj_t rt_;
  int_t size;
  obj_t vaddr;
  obj_t bcpu;
  obj_t bcpu2;
  obj_t byte;
  obj_t memword;
  obj_t lshift;
  obj_t high;
  obj_t rshift;
  obj_t low;
  obj_t res;
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source2);
  rt_ = lval(s,CON_Signed,x.destination);
  size = sizeof_lval(s,x.destination);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  bcpu = is_big_endian_cpu(s);
  bcpu2 = mktemp_(s);
  invoke_obj_closure(s,movsx(s,2,bcpu2,1,bcpu));
  byte = mktemp_(s);
  invoke_obj_closure(s,xorb(s,2,byte,var(s,vaddr),var(s,bcpu2)));
  invoke_obj_closure(s,shl(s,32,byte,var(s,byte),imm(s,3)));
  memword = mktemp_(s);
  load(s,32,memword,size,var(s,vaddr));
  lshift = mktemp_(s);
  invoke_obj_closure(s,sub(s,size,lshift,imm(s,32),var(s,byte)));
  high = mktemp_(s);
  invoke_obj_closure(s,shr(s,size,high,var(s,memword),var(s,lshift)));
  invoke_obj_closure(s,shl(s,size,high,var(s,high),var(s,lshift)));
  rshift = mktemp_(s);
  invoke_obj_closure(s,sub(s,size,rshift,imm(s,31),var(s,byte)));
  low = mktemp_(s);
  invoke_obj_closure(s,shl(s,size,low,rt_,var(s,rshift)));
  invoke_obj_closure(s,shr(s,size,low,var(s,low),var(s,rshift)));
  res = mktemp_(s);
  invoke_obj_closure(s,orb(s,size,res,var(s,high),var(s,low)));
  return write(s,x.destination,var(s,res));
}
/* sem-lwl */
static obj_t sem_lwl(state_t s,ternop_t x) {
  obj_t base;
  obj_t off;
  obj_t rt_;
  int_t size;
  obj_t vaddr;
  obj_t bcpu;
  obj_t bcpu2;
  obj_t byte;
  obj_t memword;
  obj_t lshift;
  obj_t high;
  obj_t rshift;
  obj_t low;
  obj_t res;
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source2);
  rt_ = lval(s,CON_Signed,x.destination);
  size = sizeof_lval(s,x.destination);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  bcpu = is_big_endian_cpu(s);
  bcpu2 = mktemp_(s);
  invoke_obj_closure(s,movsx(s,2,bcpu2,1,bcpu));
  byte = mktemp_(s);
  invoke_obj_closure(s,xorb(s,2,byte,var(s,vaddr),var(s,bcpu2)));
  invoke_obj_closure(s,shl(s,32,byte,var(s,byte),imm(s,3)));
  memword = mktemp_(s);
  load(s,32,memword,size,var(s,vaddr));
  lshift = mktemp_(s);
  invoke_obj_closure(s,sub(s,size,lshift,imm(s,24),var(s,byte)));
  high = mktemp_(s);
  invoke_obj_closure(s,shl(s,size,high,var(s,memword),var(s,lshift)));
  rshift = mktemp_(s);
  invoke_obj_closure(s,add(s,size,rshift,imm(s,8),var(s,byte)));
  low = mktemp_(s);
  invoke_obj_closure(s,shl(s,size,low,rt_,var(s,rshift)));
  invoke_obj_closure(s,shr(s,size,low,var(s,low),var(s,rshift)));
  res = mktemp_(s);
  invoke_obj_closure(s,orb(s,size,res,var(s,high),var(s,low)));
  return write(s,x.destination,var(s,res));
}
/* sem-lwAction1 */
static obj_t sem_lwAction1(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_VADDR_ERROR));
}
static obj_t sem_lwAction1Closure(state_t s,obj_t v) {
  return sem_lwAction1(s);
}
/* sem-lw */
static obj_t sem_lw(state_t s,ternop_t x) {
  obj_t base;
  obj_t off;
  int_t size;
  obj_t vaddr;
  obj_t memword;
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  _if_then(s,_slash_neq(s,2,var(s,vaddr),imm(s,0)),gen_obj__closure(s,&sem_lwAction1Closure));
  memword = mktemp_(s);
  load(s,32,memword,size,var(s,vaddr));
  return write(s,x.destination,var(s,memword));
}
/* sem-ll */
static obj_t sem_ll(state_t s,ternop_t x) {
  obj_t llbit;
  llbit = semantic_reg_of(s,CON_Sem_LLBIT);
  mov(s,1,llbit,imm(s,1));
  return sem_lw(s,x);
}
/* sem-lh-lhuAction1 */
static obj_t sem_lh_lhuAction1(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_VADDR_ERROR));
}
static obj_t sem_lh_lhuAction1Closure(state_t s,obj_t v) {
  return sem_lh_lhuAction1(s);
}
/* sem-lh-lhu */
static obj_t sem_lh_lhu(state_t s,obj_t (*ext_op)(state_t,int_t,obj_t,int_t,obj_t),ternop_t x) {
  obj_t base;
  obj_t off;
  int_t size;
  obj_t vaddr;
  obj_t memword;
  obj_t bcpu;
  obj_t bcpu2;
  obj_t byte;
  obj_t res;
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  _if_then(s,_slash_neq(s,1,var(s,vaddr),imm(s,0)),gen_obj__closure(s,&sem_lh_lhuAction1Closure));
  memword = mktemp_(s);
  load(s,32,memword,size,var(s,vaddr));
  bcpu = is_big_endian_cpu(s);
  bcpu2 = mktemp_(s);
  invoke_obj_closure(s,shl(s,2,bcpu2,bcpu,imm(s,1)));
  byte = mktemp_(s);
  mov(s,30,at_offset(s,byte,2),imm(s,0));
  invoke_obj_closure(s,xorb(s,2,byte,var(s,vaddr),var(s,bcpu2)));
  invoke_obj_closure(s,shl(s,32,byte,var(s,byte),imm(s,3)));
  invoke_obj_closure(s,shr(s,32,memword,var(s,memword),var(s,byte)));
  res = mktemp_(s);
  invoke_obj_closure(s,ext_op(s,size,res,16,var(s,memword)));
  return write(s,x.destination,var(s,res));
}
/* sem-lhu */
static obj_t sem_lhu(state_t s,ternop_t x) {
  return sem_lh_lhu(s,movzx,x);
}
/* sem-lh */
static obj_t sem_lh(state_t s,ternop_t x) {
  return sem_lh_lhu(s,movsx,x);
}
/* sem-lb-lbu */
static obj_t sem_lb_lbu(state_t s,obj_t (*ext_op)(state_t,int_t,obj_t,int_t,obj_t),ternop_t x) {
  obj_t base;
  obj_t off;
  int_t size;
  obj_t vaddr;
  obj_t memword;
  obj_t bcpu;
  obj_t bcpu2;
  obj_t byte;
  obj_t res;
  base = rval(s,CON_Signed,x.source1);
  off = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  vaddr = mktemp_(s);
  invoke_obj_closure(s,add(s,size,vaddr,base,off));
  memword = mktemp_(s);
  load(s,32,memword,size,var(s,vaddr));
  bcpu = is_big_endian_cpu(s);
  bcpu2 = mktemp_(s);
  invoke_obj_closure(s,movsx(s,2,bcpu2,1,bcpu));
  byte = mktemp_(s);
  mov(s,30,at_offset(s,byte,2),imm(s,0));
  invoke_obj_closure(s,xorb(s,2,byte,var(s,vaddr),var(s,bcpu2)));
  invoke_obj_closure(s,shl(s,32,byte,var(s,byte),imm(s,3)));
  invoke_obj_closure(s,shr(s,32,memword,var(s,memword),var(s,byte)));
  res = mktemp_(s);
  invoke_obj_closure(s,ext_op(s,size,res,8,var(s,memword)));
  return write(s,x.destination,var(s,res));
}
/* sem-lbu */
static obj_t sem_lbu(state_t s,ternop_t x) {
  return sem_lb_lbu(s,movzx,x);
}
/* sem-lb */
static obj_t sem_lb(state_t s,ternop_t x) {
  return sem_lb_lbu(s,movsx,x);
}
/* sem-jrAction1 */
static obj_t sem_jrAction1(state_t s,obj_t rs_,obj_t isamode) {
  return mov(s,select_int(s,9/* size */,isamode),isamode,rs_);
}
static obj_t sem_jrAction1Closure(state_t s,obj_t v) {
  closure_obj_obj_obj__t* c = (closure_obj_obj_obj__t*) v;
  return sem_jrAction1(s,c->arg1,c->arg2);
}
/* sem-jr */
static obj_t sem_jr(state_t s,ternop_t x) {
  obj_t rs_;
  int_t size;
  obj_t pc;
  obj_t pc_true;
  obj_t pc_false;
  obj_t config1CA;
  obj_t cond_;
  obj_t isamode;
  rs_ = rval(s,CON_Signed,x.source1);
  size = sizeof_rval(s,x.source1);
  pc = semantic_reg_of(s,CON_Sem_SREG);
  pc_true = mktemp_(s);
  mov(s,size,pc_true,rs_);
  pc_false = mktemp_(s);
  mov(s,size,pc_false,rs_);
  mov(s,1,pc_false,imm(s,0));
  config1CA = s->fCA;
  cond_ = invoke_obj_closure(s,_slash_eq(s,1,var(s,config1CA),imm(s,0)));
  isamode = semantic_reg_of(s,CON_Sem_ISA_MODE);
  _if_then(s,_slash_neq(s,1,var(s,config1CA),imm(s,0)),gen_obj_obj_obj__closure(s,&sem_jrAction1Closure,rs_,isamode));
  return cbranch(s,cond_,address(s,select_int(s,9/* size */,pc),var(s,pc_true)),address(s,select_int(s,9/* size */,pc),var(s,pc_false)));
}
/* sem-jr-hb */
static obj_t sem_jr_hb(state_t s,ternop_t x) {
  return sem_jr(s,x);
}
/* scale */
static obj_t scale(state_t s,int_t i,obj_t x) {
  return constructor_SEM_LIN_SCALE(s,__struct40(s,i,x));
}
/* sem-j */
static obj_t sem_j(state_t s,unop_src_t x) {
  obj_t index;
  int_t size;
  obj_t index_ext;
  obj_t pc;
  obj_t addr;
  index = rval(s,CON_Unsigned,x.source);
  size = sizeof_rval(s,x.source);
  index_ext = scale(s,4,index);
  pc = semantic_reg_of(s,CON_Sem_PC);
  addr = mktemp_(s);
  mov(s,32,addr,var(s,pc));
  mov(s,(size+2),addr,index_ext);
  return jump(s,address(s,select_int(s,9/* size */,pc),var(s,addr)));
}
/* sem-jal */
static obj_t sem_jal(state_t s,unop_src_t x) {
  obj_t pc;
  obj_t ra;
  pc = semantic_reg_of(s,CON_Sem_PC);
  ra = semantic_gpr_of(s,alloc_int(s,CON_RA));
  invoke_obj_closure(s,add(s,select_int(s,9/* size */,ra),ra,var(s,pc),imm(s,4)));
  return sem_j(s,x);
}
/* sem-jalx */
static obj_t sem_jalx(state_t s,unop_src_t x) {
  obj_t isamode;
  isamode = semantic_reg_of(s,CON_Sem_ISA_MODE);
  invoke_obj_closure(s,xorb(s,1,isamode,var(s,isamode),imm(s,1)));
  return sem_jal(s,x);
}
/* sem-jalr */
static obj_t sem_jalr(state_t s,ternop_t x) {
  obj_t pc;
  int_t size;
  obj_t temp;
  pc = semantic_reg_of(s,CON_Sem_PC);
  size = sizeof_lval(s,x.destination);
  temp = mktemp_(s);
  invoke_obj_closure(s,add(s,size,temp,var(s,pc),imm(s,4)));
  write(s,x.destination,var(s,temp));
  return sem_jr(s,x);
}
/* sem-jalr-hb */
static obj_t sem_jalr_hb(state_t s,ternop_t x) {
  return sem_jalr(s,x);
}
/* sem-ins */
static obj_t sem_ins(state_t s,quadop_t x) {
  obj_t rs_;
  obj_t msb_;
  obj_t lsb_;
  obj_t rt_;
  int_t size;
  int_t ps;
  int_t sz;
  obj_t temp;
  obj_t res;
  rs_ = rval(s,CON_Unsigned,x.source1);
  msb_ = rval(s,CON_Unsigned,x.source2);
  lsb_ = rval(s,CON_Unsigned,x.source3);
  rt_ = lval(s,CON_Unsigned,x.destination);
  size = sizeof_rval(s,x.source1);
  ps = lin_to_int(s,lsb_);
  sz = ((1-ps)+lin_to_int(s,msb_));
  temp = mktemp_(s);
  mov(s,size,temp,rs_);
  res = mktemp_(s);
  mov(s,size,res,rt_);
  mov(s,sz,res,var(s,at_offset(s,temp,ps)));
  return write(s,x.destination,var(s,res));
}
/* sem-ext */
static obj_t sem_ext(state_t s,quadop_t x) {
  obj_t rs_;
  obj_t msbd_;
  obj_t lsb_;
  int_t size;
  int_t ps;
  int_t sz;
  obj_t temp;
  obj_t res;
  rs_ = rval(s,CON_Unsigned,x.source1);
  msbd_ = rval(s,CON_Unsigned,x.source2);
  lsb_ = rval(s,CON_Unsigned,x.source3);
  size = sizeof_rval(s,x.source1);
  ps = lin_to_int(s,lsb_);
  sz = (1+lin_to_int(s,msbd_));
  temp = mktemp_(s);
  mov(s,size,temp,rs_);
  res = mktemp_(s);
  mov(s,size,res,imm(s,0));
  mov(s,sz,res,var(s,at_offset(s,temp,ps)));
  return write(s,x.destination,var(s,res));
}
/* sem-eretAction5 */
static obj_t sem_eretAction5(state_t s,obj_t temp,obj_t pc) {
  return mov(s,select_int(s,9/* size */,pc),pc,var(s,temp));
}
static obj_t sem_eretAction5Closure(state_t s,obj_t v) {
  closure_obj_obj_obj__t* c = (closure_obj_obj_obj__t*) v;
  return sem_eretAction5(s,c->arg1,c->arg2);
}
/* sem-eretAction4 */
static obj_t sem_eretAction4(state_t s,obj_t temp,obj_t pc) {
  obj_t isa_mode;
  isa_mode = semantic_reg_of(s,CON_Sem_ISA_MODE);
  mov(s,1,isa_mode,var(s,temp));
  mov(s,select_int(s,9/* size */,pc),pc,var(s,temp));
  return mov(s,1,pc,imm(s,0));
}
static obj_t sem_eretAction4Closure(state_t s,obj_t v) {
  closure_obj_obj_obj__t* c = (closure_obj_obj_obj__t*) v;
  return sem_eretAction4(s,c->arg1,c->arg2);
}
/* sem-eretAction2 */
static obj_t sem_eretAction2(state_t s) {
  obj_t pss;
  obj_t css;
  pss = s->fPSS;
  css = s->fCSS;
  return mov(s,4,css,var(s,pss));
}
static obj_t sem_eretAction2Closure(state_t s,obj_t v) {
  return sem_eretAction2(s);
}
/* sem-eretAction3 */
static obj_t sem_eretAction3(state_t s,obj_t temp) {
  obj_t epc;
  obj_t exl;
  epc = semantic_reg_of(s,CON_Sem_EPC);
  exl = s->fEXL;
  mov(s,select_int(s,9/* size */,epc),temp,var(s,epc));
  mov(s,1,exl,imm(s,0));
  if (2<=s->architectureRevision) {
    obj_t hss;
    obj_t bev;
    obj_t cond1;
    obj_t cond2;
    obj_t cond_;
    hss = s->fHSS;
    bev = s->fBEV;
    cond1 = invoke_obj_closure(s,_slash_gts(s,4,var(s,hss),imm(s,0)));
    cond2 = invoke_obj_closure(s,_slash_eq(s,1,var(s,bev),imm(s,0)));
    cond_ = mktemp_(s);
    invoke_obj_closure(s,andb(s,1,cond_,cond1,cond2));
    return _if_then(s,_slash_eq(s,1,var(s,cond_),imm(s,1)),gen_obj__closure(s,&sem_eretAction2Closure));
  } else {
    return 0 /* void value */;
  };
}
static obj_t sem_eretAction3Closure(state_t s,obj_t v) {
  closure_obj_obj__t* c = (closure_obj_obj__t*) v;
  return sem_eretAction3(s,c->arg1);
}
/* sem-eretAction1 */
static obj_t sem_eretAction1(state_t s,obj_t erl,obj_t temp) {
  obj_t err_epc;
  err_epc = semantic_reg_of(s,CON_Sem_ERROR_EPC);
  mov(s,select_int(s,9/* size */,err_epc),temp,var(s,err_epc));
  return mov(s,1,erl,imm(s,0));
}
static obj_t sem_eretAction1Closure(state_t s,obj_t v) {
  closure_obj_obj_obj__t* c = (closure_obj_obj_obj__t*) v;
  return sem_eretAction1(s,c->arg1,c->arg2);
}
/* sem-eret */
static obj_t sem_eret(state_t s) {
  obj_t erl;
  obj_t temp;
  obj_t pc;
  obj_t llbit;
  erl = s->fERL;
  temp = mktemp_(s);
  _if_then_else(s,_slash_eq(s,1,var(s,erl),imm(s,1)),gen_obj_obj_obj__closure(s,&sem_eretAction1Closure,erl,temp),gen_obj_obj__closure(s,&sem_eretAction3Closure,temp));
  pc = semantic_reg_of(s,CON_Sem_PC);
  if (vec_eq(s,s->isMIPS16Implemented,1 /* '1' */)) {
    obj_t isa_mode;
    isa_mode = semantic_reg_of(s,CON_Sem_ISA_MODE);
    mov(s,1,isa_mode,var(s,temp));
    mov(s,select_int(s,9/* size */,pc),pc,var(s,temp));
    mov(s,1,pc,imm(s,0));
  } else {
    obj_t c3_isa;
    c3_isa = s->fISA;
    _if_then_else(s,_slash_gts(s,2,var(s,c3_isa),imm(s,0)),gen_obj_obj_obj__closure(s,&sem_eretAction4Closure,temp,pc),gen_obj_obj_obj__closure(s,&sem_eretAction5Closure,temp,pc));
  };
  llbit = semantic_reg_of(s,CON_Sem_LLBIT);
  return mov(s,1,llbit,imm(s,0));
}
/* sem-ei */
static obj_t sem_ei(state_t s,unop_t x) {
  obj_t sreg;
  obj_t temp;
  obj_t ie;
  sreg = semantic_reg_of(s,CON_Sem_SREG);
  temp = mktemp_(s);
  mov(s,select_int(s,9/* size */,sreg),temp,var(s,sreg));
  ie = s->fIE;
  mov(s,1,ie,imm(s,1));
  return write(s,x.destination,var(s,temp));
}
/* sem-div-divu */
static obj_t sem_div_divu(state_t s,obj_t (*div_op)(state_t,int_t,obj_t,obj_t,obj_t),obj_t (*mod_op)(state_t,int_t,obj_t,obj_t,obj_t),ternop_t x) {
  obj_t num;
  obj_t denom;
  int_t size;
  obj_t hi;
  obj_t lo;
  num = rval(s,CON_Signed,x.source1);
  denom = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  hi = semantic_reg_of(s,CON_Sem_HI);
  lo = semantic_reg_of(s,CON_Sem_LO);
  invoke_obj_closure(s,div_op(s,size,lo,num,denom));
  return invoke_obj_closure(s,mod_op(s,size,hi,num,denom));
}
/* sem-divu */
static obj_t sem_divu(state_t s,ternop_t x) {
  return sem_div_divu(s,divs,mods,x);
}
/* sem-div */
static obj_t sem_div(state_t s,ternop_t x) {
  return sem_div_divu(s,div_,mod,x);
}
/* sem-di */
static obj_t sem_di(state_t s,unop_t x) {
  obj_t sreg;
  obj_t temp;
  obj_t ie;
  sreg = semantic_reg_of(s,CON_Sem_SREG);
  temp = mktemp_(s);
  mov(s,select_int(s,9/* size */,sreg),temp,var(s,sreg));
  ie = s->fIE;
  mov(s,1,ie,imm(s,0));
  return write(s,x.destination,var(s,temp));
}
/* sem-deretAction2 */
static obj_t sem_deretAction2(state_t s,obj_t depc,obj_t pc) {
  return mov(s,select_int(s,9/* size */,pc),pc,var(s,depc));
}
static obj_t sem_deretAction2Closure(state_t s,obj_t v) {
  closure_obj_obj_obj__t* c = (closure_obj_obj_obj__t*) v;
  return sem_deretAction2(s,c->arg1,c->arg2);
}
/* sem-deretAction1 */
static obj_t sem_deretAction1(state_t s,obj_t depc,obj_t pc) {
  obj_t isa_mode;
  isa_mode = semantic_reg_of(s,CON_Sem_ISA_MODE);
  mov(s,1,isa_mode,var(s,depc));
  mov(s,select_int(s,9/* size */,pc),pc,var(s,depc));
  return mov(s,1,pc,imm(s,0));
}
static obj_t sem_deretAction1Closure(state_t s,obj_t v) {
  closure_obj_obj_obj__t* c = (closure_obj_obj_obj__t*) v;
  return sem_deretAction1(s,c->arg1,c->arg2);
}
/* sem-deret */
static obj_t sem_deret(state_t s) {
  obj_t dm;
  obj_t iexi;
  obj_t depc;
  obj_t pc;
  dm = s->fDM;
  iexi = s->fIEXI;
  mov(s,1,dm,imm(s,0));
  mov(s,1,iexi,imm(s,0));
  depc = semantic_reg_of(s,CON_Sem_DEPC);
  pc = semantic_reg_of(s,CON_Sem_PC);
  if (vec_eq(s,s->isMIPS16Implemented,1 /* '1' */)) {
    obj_t isa_mode;
    isa_mode = semantic_reg_of(s,CON_Sem_ISA_MODE);
    mov(s,1,isa_mode,var(s,depc));
    mov(s,select_int(s,9/* size */,pc),pc,var(s,depc));
    return mov(s,1,pc,imm(s,0));
  } else {
    obj_t c3_isa;
    c3_isa = s->fISA;
    return _if_then_else(s,_slash_gts(s,2,var(s,c3_isa),imm(s,0)),gen_obj_obj_obj__closure(s,&sem_deretAction1Closure,depc,pc),gen_obj_obj_obj__closure(s,&sem_deretAction2Closure,depc,pc));
  };
}
/* sem-clAction1 */
static obj_t sem_clAction1(state_t s,int_t size,obj_t amount,obj_t i) {
  invoke_obj_closure(s,sub(s,size,amount,imm(s,31),var(s,i)));
  return mov(s,size,i,imm(s,0));
}
static obj_t sem_clAction1Closure(state_t s,obj_t v) {
  closure_obj_int_obj_obj__t* c = (closure_obj_int_obj_obj__t*) v;
  return sem_clAction1(s,c->arg1,c->arg2,c->arg3);
}
/* sem-clAction2 */
static obj_t sem_clAction2(state_t s,int_t bit,obj_t rs_,int_t size,obj_t amount,obj_t i,obj_t shifted) {
  invoke_obj_closure(s,shr(s,size,shifted,rs_,var(s,i)));
  return _if_then_else(s,_slash_neq(s,1,var(s,shifted),imm(s,bit)),gen_obj_int_obj_obj__closure(s,&sem_clAction1Closure,size,amount,i),sub(s,size,i,var(s,i),imm(s,1)));
}
typedef struct {
  obj_t (*func)(state_t,obj_t);
  int_t arg1;
  obj_t arg2;
  int_t arg3;
  obj_t arg4;
  obj_t arg5;
  obj_t arg6;
} closure_obj_int_obj_int_obj_obj_obj__t;
static obj_t sem_clAction2Closure(state_t s,obj_t v) {
  closure_obj_int_obj_int_obj_obj_obj__t* c = (closure_obj_int_obj_int_obj_obj_obj__t*) v;
  return sem_clAction2(s,c->arg1,c->arg2,c->arg3,c->arg4,c->arg5,c->arg6);
}
/* sem-cl */
static INLINE_ATTR obj_t gen_obj_int_obj_int_obj_obj_obj__closure(state_t s,obj_t (*func)(state_t,obj_t),int_t arg1,obj_t arg2,int_t arg3,obj_t arg4,obj_t arg5,obj_t arg6) {
  closure_obj_int_obj_int_obj_obj_obj__t content;
  content.func = func;
  content.arg1 = arg1;
  content.arg2 = arg2;
  content.arg3 = arg3;
  content.arg4 = arg4;
  content.arg5 = arg5;
  content.arg6 = arg6;
  closure_obj_int_obj_int_obj_obj_obj__t* closure = (closure_obj_int_obj_int_obj_obj_obj__t*) alloc(s, sizeof(closure_obj_int_obj_int_obj_obj_obj__t));
  *closure = content;
  return (obj_t) closure;
}
static obj_t sem_cl(state_t s,int_t bit,ternop_t x) {
  obj_t rs_;
  int_t size;
  obj_t amount;
  obj_t i;
  obj_t shifted;
  rs_ = rval(s,CON_Unsigned,x.source1);
  size = sizeof_rval(s,x.source1);
  amount = mktemp_(s);
  mov(s,size,amount,imm(s,32));
  i = mktemp_(s);
  mov(s,size,i,imm(s,31));
  shifted = mktemp_(s);
  _while__(s,_slash_neq(s,size,var(s,i),imm(s,0)),gen_obj_int_obj_int_obj_obj_obj__closure(s,&sem_clAction2Closure,bit,rs_,size,amount,i,shifted));
  return write(s,x.destination,var(s,amount));
}
/* sem-break */
static obj_t sem_break(state_t s,unop_src_t x) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_BREAKPOINT));
}
/* cbranch-rel */
static obj_t cbranch_rel(state_t s,obj_t cond_,obj_t offset) {
  obj_t pc;
  obj_t new_pc;
  pc = semantic_reg_of(s,CON_Sem_PC);
  new_pc = mktemp_(s);
  invoke_obj_closure(s,add(s,select_int(s,9/* size */,pc),new_pc,var(s,pc),offset));
  return cbranch(s,cond_,address(s,select_int(s,9/* size */,pc),var(s,new_pc)),address(s,select_int(s,9/* size */,pc),var(s,pc)));
}
/* sem-b */
static obj_t sem_b(state_t s,obj_t (*cmp_op)(state_t,int_t,obj_t,obj_t),ternop_src_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  obj_t off;
  obj_t off_ext;
  obj_t cond_;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_rval(s,x.source1);
  off = rval(s,CON_Signed,x.source3);
  off_ext = scale(s,4,off);
  cond_ = invoke_obj_closure(s,cmp_op(s,size,rs_,rt_));
  return cbranch_rel(s,cond_,off_ext);
}
/* sem-bnel */
static obj_t sem_bnel(state_t s,ternop_src_t x) {
  return sem_b(s,_slash_neq,x);
}
/* sem-bne */
static obj_t sem_bne(state_t s,ternop_src_t x) {
  return sem_b(s,_slash_neq,x);
}
/* sem-bz */
static obj_t sem_bz(state_t s,obj_t (*cmp_op)(state_t,int_t,obj_t,obj_t),ternop_t x) {
  obj_t rs_;
  int_t size;
  obj_t off;
  obj_t off_ext;
  obj_t cond_;
  rs_ = rval(s,CON_Signed,x.source1);
  size = sizeof_rval(s,x.source1);
  off = rval(s,CON_Signed,x.source2);
  off_ext = scale(s,4,off);
  cond_ = invoke_obj_closure(s,cmp_op(s,size,rs_,imm(s,0)));
  return cbranch_rel(s,cond_,off_ext);
}
/* sem-bltzl */
static obj_t sem_bltzl(state_t s,ternop_t x) {
  return sem_bz(s,_slash_lts,x);
}
/* sem-bz-link */
static obj_t sem_bz_link(state_t s,obj_t (*cmp_op)(state_t,int_t,obj_t,obj_t),ternop_t x) {
  obj_t pc;
  obj_t ra;
  pc = semantic_reg_of(s,CON_Sem_PC);
  ra = semantic_gpr_of(s,alloc_int(s,CON_RA));
  invoke_obj_closure(s,add(s,select_int(s,9/* size */,ra),ra,var(s,pc),imm(s,4)));
  return sem_bz(s,cmp_op,x);
}
/* sem-bltzall */
static obj_t sem_bltzall(state_t s,ternop_t x) {
  return sem_bz_link(s,_slash_lts,x);
}
/* sem-bltzal */
static obj_t sem_bltzal(state_t s,ternop_t x) {
  return sem_bz_link(s,_slash_lts,x);
}
/* sem-bltz */
static obj_t sem_bltz(state_t s,ternop_t x) {
  return sem_bz(s,_slash_lts,x);
}
/* sem-blezl */
static obj_t sem_blezl(state_t s,ternop_t x) {
  return sem_bz(s,_slash_les,x);
}
/* sem-blez */
static obj_t sem_blez(state_t s,ternop_t x) {
  return sem_bz(s,_slash_les,x);
}
/* sem-bgtzl */
static obj_t sem_bgtzl(state_t s,ternop_t x) {
  return sem_bz(s,_slash_gts,x);
}
/* sem-bgtz */
static obj_t sem_bgtz(state_t s,ternop_t x) {
  return sem_bz(s,_slash_gts,x);
}
/* sem-bgezl */
static obj_t sem_bgezl(state_t s,ternop_t x) {
  return sem_bz(s,_slash_ges,x);
}
/* sem-bgezall */
static obj_t sem_bgezall(state_t s,ternop_t x) {
  return sem_bz_link(s,_slash_ges,x);
}
/* sem-bgezal */
static obj_t sem_bgezal(state_t s,ternop_t x) {
  return sem_bz_link(s,_slash_ges,x);
}
/* sem-bgez */
static obj_t sem_bgez(state_t s,ternop_t x) {
  return sem_bz(s,_slash_ges,x);
}
/* sem-beql */
static obj_t sem_beql(state_t s,ternop_src_t x) {
  return sem_b(s,_slash_eq,x);
}
/* sem-beq */
static obj_t sem_beq(state_t s,ternop_src_t x) {
  return sem_b(s,_slash_eq,x);
}
/* sem-bitwise-imm */
static obj_t sem_bitwise_imm(state_t s,obj_t (*bit_op)(state_t,int_t,obj_t,obj_t,obj_t),ternop_t x) {
  obj_t rs_;
  obj_t imm_;
  int_t size;
  obj_t res;
  rs_ = rval(s,CON_Unsigned,x.source1);
  imm_ = rval(s,CON_Unsigned,x.source2);
  size = sizeof_lval(s,x.destination);
  res = mktemp_(s);
  invoke_obj_closure(s,bit_op(s,size,res,rs_,imm_));
  return write(s,x.destination,var(s,res));
}
/* sem-xori */
static obj_t sem_xori(state_t s,ternop_t x) {
  return sem_bitwise_imm(s,xorb,x);
}
/* sem-bitwise */
static obj_t sem_bitwise(state_t s,obj_t (*bit_op)(state_t,int_t,obj_t,obj_t,obj_t),ternop_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  obj_t res;
  rs_ = rval(s,CON_Unsigned,x.source1);
  rt_ = rval(s,CON_Unsigned,x.source2);
  size = sizeof_lval(s,x.destination);
  res = mktemp_(s);
  invoke_obj_closure(s,bit_op(s,size,res,rs_,rt_));
  return write(s,x.destination,var(s,res));
}
/* sem-xor */
static obj_t sem_xor(state_t s,ternop_t x) {
  return sem_bitwise(s,xorb,x);
}
/* sem-ori */
static obj_t sem_ori(state_t s,ternop_t x) {
  return sem_bitwise_imm(s,orb,x);
}
/* sem-or */
static obj_t sem_or(state_t s,ternop_t x) {
  return sem_bitwise(s,orb,x);
}
/* sem-andi */
static obj_t sem_andi(state_t s,ternop_t x) {
  return sem_bitwise_imm(s,andb,x);
}
/* sem-and */
static obj_t sem_and(state_t s,ternop_t x) {
  return sem_bitwise(s,andb,x);
}
/* sem-addiu */
static obj_t sem_addiu(state_t s,ternop_t x) {
  obj_t rs_;
  obj_t imm_;
  int_t size;
  obj_t res;
  rs_ = rval(s,CON_Signed,x.source1);
  imm_ = rval(s,CON_Signed,x.source2);
  size = sizeof_lval(s,x.destination);
  res = mktemp_(s);
  invoke_obj_closure(s,add(s,size,res,rs_,imm_));
  return write(s,x.destination,var(s,res));
}
/* overflow-add-addiAction1 */
static obj_t overflow_add_addiAction1(state_t s) {
  return throw_exception(s,alloc_int(s,CON_SEM_EXC_OVERFLOW));
}
static obj_t overflow_add_addiAction1Closure(state_t s,obj_t v) {
  return overflow_add_addiAction1(s);
}
/* overflow-add-addi */
static obj_t overflow_add_addi(state_t s,int_t size,obj_t res,obj_t rs_,obj_t rt_) {
  obj_t t1;
  obj_t t2;
  obj_t t3;
  t1 = mktemp_(s);
  t2 = mktemp_(s);
  t3 = mktemp_(s);
  invoke_obj_closure(s,xorb(s,size,t1,var(s,res),rs_));
  invoke_obj_closure(s,xorb(s,size,t2,var(s,res),rt_));
  invoke_obj_closure(s,andb(s,size,t3,var(s,t1),var(s,t2)));
  return _if_then(s,_slash_lts(s,size,var(s,t3),imm(s,0)),gen_obj__closure(s,&overflow_add_addiAction1Closure));
}
/* sem-addi */
static obj_t sem_addi(state_t s,ternop_t x) {
  obj_t rs_;
  obj_t imm_;
  int_t size;
  obj_t res;
  rs_ = rval(s,CON_Signed,x.source1);
  imm_ = rval(s,CON_Signed,x.source2);
  size = sizeof_lval(s,x.destination);
  res = mktemp_(s);
  invoke_obj_closure(s,add(s,size,res,rs_,imm_));
  overflow_add_addi(s,size,res,rs_,imm_);
  return write(s,x.destination,var(s,res));
}
/* sem-addu */
static obj_t sem_addu(state_t s,ternop_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  obj_t res;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_lval(s,x.destination);
  res = mktemp_(s);
  invoke_obj_closure(s,add(s,size,res,rs_,rt_));
  return write(s,x.destination,var(s,res));
}
/* sem-add */
static obj_t sem_add(state_t s,ternop_t x) {
  obj_t rs_;
  obj_t rt_;
  int_t size;
  obj_t res;
  rs_ = rval(s,CON_Signed,x.source1);
  rt_ = rval(s,CON_Signed,x.source2);
  size = sizeof_lval(s,x.destination);
  res = mktemp_(s);
  invoke_obj_closure(s,add(s,size,res,rs_,rt_));
  overflow_add_addi(s,size,res,rs_,rt_);
  return write(s,x.destination,var(s,res));
}
/* mnemonic-with-format */
static obj_t mnemonic_with_format(state_t s,obj_t insn,struct19_t x) {
  return _plus__plus__plus_(s,_plus__plus__plus_(s,mnemonic_of(s,insn),from_string_lit(s,".")),show_slash_format(s,x.fmt));
}
/* sem-default-quadop-fmt-src-ro-generic */
static obj_t sem_default_quadop_fmt_src_ro_generic(state_t s,obj_t insn,struct19_t x) {
  int_t src1_sz;
  int_t src2_sz;
  int_t src3_sz;
  int_t src4_sz;
  obj_t src1;
  obj_t src2;
  obj_t src3;
  obj_t src4;
  obj_t src1_up;
  obj_t src2_up;
  obj_t src3_up;
  obj_t src4_up;
  src1_sz = sizeof_rval(s,x.source1);
  src2_sz = sizeof_rval(s,x.source2);
  src3_sz = sizeof_rval(s,x.source3);
  src4_sz = sizeof_rval(s,x.source4);
  src1 = rval(s,CON_Signed,x.source1);
  src2 = rval(s,CON_Signed,x.source2);
  src3 = rval(s,CON_Signed,x.source3);
  src4 = rval(s,CON_Signed,x.source4);
  src1_up = unpack_lin(s,src1_sz,src1);
  src2_up = unpack_lin(s,src2_sz,src2);
  src3_up = unpack_lin(s,src3_sz,src3);
  src4_up = unpack_lin(s,src4_sz,src4);
  return prim_generic(s,mnemonic_with_format(s,insn,x),s->varls_none,varls_more(s,add_field_int(s,9/* size */,src4_sz,
                                                                                    del_fields(s,field_array_9,1,src4_up)),varls_more(s,add_field_int(s,9/* size */,src3_sz,
                                                                                                                                          del_fields(s,field_array_9,1,src3_up)),varls_more(s,add_field_int(s,9/* size */,src2_sz,
                                                                                                                                                                                                del_fields(s,field_array_9,1,src2_up)),varls_one(s,add_field_int(s,9/* size */,src1_sz,
                                                                                                                                                                                                                                                     del_fields(s,field_array_9,1,src1_up)))))));
}
/* sem-default-quadop-fmt-ro-generic */
static obj_t sem_default_quadop_fmt_ro_generic(state_t s,obj_t insn,struct19_t x) {
  int_t src1_sz;
  int_t src2_sz;
  int_t src3_sz;
  int_t dst_sz;
  obj_t src1;
  obj_t src2;
  obj_t src3;
  obj_t dst;
  obj_t src1_up;
  obj_t src2_up;
  obj_t src3_up;
  obj_t dst_up;
  src1_sz = sizeof_rval(s,x.source1);
  src2_sz = sizeof_rval(s,x.source2);
  src3_sz = sizeof_rval(s,x.source3);
  dst_sz = sizeof_lval(s,x.destination);
  src1 = rval(s,CON_Signed,x.source1);
  src2 = rval(s,CON_Signed,x.source2);
  src3 = rval(s,CON_Signed,x.source3);
  dst = lval(s,CON_Signed,x.destination);
  src1_up = unpack_lin(s,src1_sz,src1);
  src2_up = unpack_lin(s,src2_sz,src2);
  src3_up = unpack_lin(s,src3_sz,src3);
  dst_up = unpack_lin(s,dst_sz,dst);
  return prim_generic(s,mnemonic_with_format(s,insn,x),varls_one(s,add_field_int(s,9/* size */,dst_sz,
                                                                     del_fields(s,field_array_9,1,dst_up))),varls_more(s,add_field_int(s,9/* size */,src3_sz,
                                                                                                                           del_fields(s,field_array_9,1,src3_up)),varls_more(s,add_field_int(s,9/* size */,src2_sz,
                                                                                                                                                                                 del_fields(s,field_array_9,1,src2_up)),varls_one(s,add_field_int(s,9/* size */,src1_sz,
                                                                                                                                                                                                                                      del_fields(s,field_array_9,1,src1_up))))));
}
/* sem-default-quadop-ro-generic */
static obj_t sem_default_quadop_ro_generic(state_t s,obj_t insn,quadop_t x) {
  int_t src1_sz;
  int_t src2_sz;
  int_t src3_sz;
  int_t dst_sz;
  obj_t src1;
  obj_t src2;
  obj_t src3;
  obj_t dst;
  obj_t src1_up;
  obj_t src2_up;
  obj_t src3_up;
  obj_t dst_up;
  src1_sz = sizeof_rval(s,x.source1);
  src2_sz = sizeof_rval(s,x.source2);
  src3_sz = sizeof_rval(s,x.source3);
  dst_sz = sizeof_lval(s,x.destination);
  src1 = rval(s,CON_Signed,x.source1);
  src2 = rval(s,CON_Signed,x.source2);
  src3 = rval(s,CON_Signed,x.source3);
  dst = lval(s,CON_Signed,x.destination);
  src1_up = unpack_lin(s,src1_sz,src1);
  src2_up = unpack_lin(s,src2_sz,src2);
  src3_up = unpack_lin(s,src3_sz,src3);
  dst_up = unpack_lin(s,dst_sz,dst);
  return prim_generic(s,mnemonic_of(s,insn),varls_one(s,add_field_int(s,9/* size */,dst_sz,
                                                          del_fields(s,field_array_9,1,dst_up))),varls_more(s,add_field_int(s,9/* size */,src3_sz,
                                                                                                                del_fields(s,field_array_9,1,src3_up)),varls_more(s,add_field_int(s,9/* size */,src2_sz,
                                                                                                                                                                      del_fields(s,field_array_9,1,src2_up)),varls_one(s,add_field_int(s,9/* size */,src1_sz,
                                                                                                                                                                                                                           del_fields(s,field_array_9,1,src1_up))))));
}
/* sem-default-ternop-src-ro-generic */
static obj_t sem_default_ternop_src_ro_generic(state_t s,obj_t insn,ternop_src_t x) {
  int_t src1_sz;
  int_t src2_sz;
  int_t src3_sz;
  obj_t src1;
  obj_t src2;
  obj_t src3;
  obj_t src1_up;
  obj_t src2_up;
  obj_t src3_up;
  src1_sz = sizeof_rval(s,x.source1);
  src2_sz = sizeof_rval(s,x.source2);
  src3_sz = sizeof_rval(s,x.source3);
  src1 = rval(s,CON_Signed,x.source1);
  src2 = rval(s,CON_Signed,x.source2);
  src3 = rval(s,CON_Signed,x.source3);
  src1_up = unpack_lin(s,src1_sz,src1);
  src2_up = unpack_lin(s,src2_sz,src2);
  src3_up = unpack_lin(s,src3_sz,src3);
  return prim_generic(s,mnemonic_of(s,insn),s->varls_none,varls_more(s,add_field_int(s,9/* size */,src3_sz,
                                                                         del_fields(s,field_array_9,1,src3_up)),varls_more(s,add_field_int(s,9/* size */,src2_sz,
                                                                                                                               del_fields(s,field_array_9,1,src2_up)),varls_one(s,add_field_int(s,9/* size */,src1_sz,
                                                                                                                                                                                    del_fields(s,field_array_9,1,src1_up))))));
}
/* sem-default-ternop-fmt-ro-generic */
static obj_t sem_default_ternop_fmt_ro_generic(state_t s,obj_t insn,struct19_t x) {
  int_t src1_sz;
  int_t src2_sz;
  int_t dst_sz;
  obj_t src1;
  obj_t src2;
  obj_t dst;
  obj_t src1_up;
  obj_t src2_up;
  obj_t dst_up;
  src1_sz = sizeof_rval(s,x.source1);
  src2_sz = sizeof_rval(s,x.source2);
  dst_sz = sizeof_lval(s,x.destination);
  src1 = rval(s,CON_Signed,x.source1);
  src2 = rval(s,CON_Signed,x.source2);
  dst = lval(s,CON_Signed,x.destination);
  src1_up = unpack_lin(s,src1_sz,src1);
  src2_up = unpack_lin(s,src2_sz,src2);
  dst_up = unpack_lin(s,dst_sz,dst);
  return prim_generic(s,mnemonic_with_format(s,insn,x),varls_one(s,add_field_int(s,9/* size */,dst_sz,
                                                                     del_fields(s,field_array_9,1,dst_up))),varls_more(s,add_field_int(s,9/* size */,src2_sz,
                                                                                                                           del_fields(s,field_array_9,1,src2_up)),varls_one(s,add_field_int(s,9/* size */,src1_sz,
                                                                                                                                                                                del_fields(s,field_array_9,1,src1_up)))));
}
/* sem-default-ternop-ro-generic */
static obj_t sem_default_ternop_ro_generic(state_t s,obj_t insn,ternop_t x) {
  int_t src1_sz;
  int_t src2_sz;
  int_t dst_sz;
  obj_t src1;
  obj_t src2;
  obj_t dst;
  obj_t src1_up;
  obj_t src2_up;
  obj_t dst_up;
  src1_sz = sizeof_rval(s,x.source1);
  src2_sz = sizeof_rval(s,x.source2);
  dst_sz = sizeof_lval(s,x.destination);
  src1 = rval(s,CON_Signed,x.source1);
  src2 = rval(s,CON_Signed,x.source2);
  dst = lval(s,CON_Signed,x.destination);
  src1_up = unpack_lin(s,src1_sz,src1);
  src2_up = unpack_lin(s,src2_sz,src2);
  dst_up = unpack_lin(s,dst_sz,dst);
  return prim_generic(s,mnemonic_of(s,insn),varls_one(s,add_field_int(s,9/* size */,dst_sz,
                                                          del_fields(s,field_array_9,1,dst_up))),varls_more(s,add_field_int(s,9/* size */,src2_sz,
                                                                                                                del_fields(s,field_array_9,1,src2_up)),varls_one(s,add_field_int(s,9/* size */,src1_sz,
                                                                                                                                                                     del_fields(s,field_array_9,1,src1_up)))));
}
/* sem-default-binop-src-ro-generic */
static obj_t sem_default_binop_src_ro_generic(state_t s,obj_t insn,ternop_t x) {
  int_t src1_sz;
  int_t src2_sz;
  obj_t src1;
  obj_t src2;
  obj_t src1_up;
  obj_t src2_up;
  src1_sz = sizeof_rval(s,x.source1);
  src2_sz = sizeof_rval(s,x.source2);
  src1 = rval(s,CON_Signed,x.source1);
  src2 = rval(s,CON_Signed,x.source2);
  src1_up = unpack_lin(s,src1_sz,src1);
  src2_up = unpack_lin(s,src2_sz,src2);
  return prim_generic(s,mnemonic_of(s,insn),s->varls_none,varls_more(s,add_field_int(s,9/* size */,src2_sz,
                                                                         del_fields(s,field_array_9,1,src2_up)),varls_one(s,add_field_int(s,9/* size */,src1_sz,
                                                                                                                              del_fields(s,field_array_9,1,src1_up)))));
}
/* sem-default-binop-fmt-ro-generic */
static obj_t sem_default_binop_fmt_ro_generic(state_t s,obj_t insn,struct19_t x) {
  int_t src_sz;
  int_t dst_sz;
  obj_t src;
  obj_t dst;
  obj_t src_up;
  obj_t dst_up;
  src_sz = sizeof_rval(s,x.source);
  dst_sz = sizeof_lval(s,x.destination);
  src = rval(s,CON_Signed,x.source);
  dst = lval(s,CON_Signed,x.destination);
  src_up = unpack_lin(s,src_sz,src);
  dst_up = unpack_lin(s,dst_sz,dst);
  return prim_generic(s,mnemonic_with_format(s,insn,x),varls_one(s,add_field_int(s,9/* size */,dst_sz,
                                                                     del_fields(s,field_array_9,1,dst_up))),varls_one(s,add_field_int(s,9/* size */,src_sz,
                                                                                                                          del_fields(s,field_array_9,1,src_up))));
}
/* sem-default-binop-ro-generic */
static obj_t sem_default_binop_ro_generic(state_t s,obj_t insn,binop_t x) {
  int_t src_sz;
  int_t dst_sz;
  obj_t src;
  obj_t dst;
  obj_t src_up;
  obj_t dst_up;
  src_sz = sizeof_rval(s,x.source);
  dst_sz = sizeof_lval(s,x.destination);
  src = rval(s,CON_Signed,x.source);
  dst = lval(s,CON_Signed,x.destination);
  src_up = unpack_lin(s,src_sz,src);
  dst_up = unpack_lin(s,dst_sz,dst);
  return prim_generic(s,mnemonic_of(s,insn),varls_one(s,add_field_int(s,9/* size */,dst_sz,
                                                          del_fields(s,field_array_9,1,dst_up))),varls_one(s,add_field_int(s,9/* size */,src_sz,
                                                                                                               del_fields(s,field_array_9,1,src_up))));
}
/* sem-default-nullop-ro-generic */
static obj_t sem_default_nullop_ro_generic(state_t s,obj_t insn) {
  return prim_generic(s,mnemonic_of(s,insn),s->varls_none,s->varls_none);
}
/* sem-default-unop-src-ro-generic */
static obj_t sem_default_unop_src_ro_generic(state_t s,obj_t insn,unop_src_t x) {
  int_t src_sz;
  obj_t src;
  obj_t src_up;
  src_sz = sizeof_rval(s,x.source);
  src = rval(s,CON_Signed,x.source);
  src_up = unpack_lin(s,src_sz,src);
  return prim_generic(s,mnemonic_of(s,insn),s->varls_none,varls_one(s,add_field_int(s,9/* size */,src_sz,
                                                                        del_fields(s,field_array_9,1,src_up))));
}
/* semantics */
static obj_t semantics(state_t s,obj_t i) {
  switch (((con_obj_t*) i)->tag) {
    case 70/* ABS-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 71/* ADD */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_add(s,x);
    }; break;
    case 72/* ADD-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_ternop_fmt_ro_generic(s,i,x);
    }; break;
    case 73/* ADDI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_addi(s,x);
    }; break;
    case 74/* ADDIU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_addiu(s,x);
    }; break;
    case 75/* ADDU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_addu(s,x);
    }; break;
    case 76/* ALNV-PS */: {
      quadop_t x;
      x = ((con_quadop_t*) i)->payload;
      return sem_default_quadop_ro_generic(s,i,x);
    }; break;
    case 77/* AND */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_and(s,x);
    }; break;
    case 78/* ANDI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_andi(s,x);
    }; break;
    case 79/* BC1F */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 80/* BC1FL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 81/* BC1T */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 82/* BC1TL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 83/* BC2F */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 84/* BC2FL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 85/* BC2T */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 86/* BC2TL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 87/* BEQ */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_beq(s,x);
    }; break;
    case 88/* BEQL */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_beql(s,x);
    }; break;
    case 89/* BGEZ */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bgez(s,x);
    }; break;
    case 90/* BGEZAL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bgezal(s,x);
    }; break;
    case 91/* BGEZALL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bgezall(s,x);
    }; break;
    case 92/* BGEZL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bgezl(s,x);
    }; break;
    case 93/* BGTZ */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bgtz(s,x);
    }; break;
    case 94/* BGTZL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bgtzl(s,x);
    }; break;
    case 95/* BLEZ */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_blez(s,x);
    }; break;
    case 96/* BLEZL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_blezl(s,x);
    }; break;
    case 97/* BLTZ */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bltz(s,x);
    }; break;
    case 98/* BLTZAL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bltzal(s,x);
    }; break;
    case 99/* BLTZALL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bltzall(s,x);
    }; break;
    case 100/* BLTZL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_bltzl(s,x);
    }; break;
    case 101/* BNE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_bne(s,x);
    }; break;
    case 102/* BNEL */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_bnel(s,x);
    }; break;
    case 103/* BREAK */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_break(s,x);
    }; break;
    case 104/* C-cond-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_quadop_fmt_src_ro_generic(s,i,x);
    }; break;
    case 105/* CACHE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 106/* CACHEE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 107/* CEIL-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 108/* CEIL-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 109/* CFC1 */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 110/* CFC2 */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 111/* CLO */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_cl(s,1,x);
    }; break;
    case 112/* CLZ */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_cl(s,0,x);
    }; break;
    case 113/* COP2 */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_default_unop_src_ro_generic(s,i,x);
    }; break;
    case 114/* CTC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 115/* CTC2 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 116/* CVT-D-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 117/* CVT-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 118/* CVT-PS-S */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 119/* CVT-S-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 120/* CVT-S-PL */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 121/* CVT-S-PU */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 122/* CVT-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case CON_DERET: {
      return sem_deret(s);
    }; break;
    case 124/* DI */: {
      unop_t x;
      x = ((con_unop_t*) i)->payload;
      return sem_di(s,x);
    }; break;
    case 125/* DIV */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_div(s,x);
    }; break;
    case 126/* DIV-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_ternop_fmt_ro_generic(s,i,x);
    }; break;
    case 127/* DIVU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_divu(s,x);
    }; break;
    case 128/* EI */: {
      unop_t x;
      x = ((con_unop_t*) i)->payload;
      return sem_ei(s,x);
    }; break;
    case CON_ERET: {
      return sem_eret(s);
    }; break;
    case 130/* EXT */: {
      quadop_t x;
      x = ((con_quadop_t*) i)->payload;
      return sem_ext(s,x);
    }; break;
    case 131/* FLOOR-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 132/* FLOOR-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 133/* INS */: {
      quadop_t x;
      x = ((con_quadop_t*) i)->payload;
      return sem_ins(s,x);
    }; break;
    case 134/* J */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_j(s,x);
    }; break;
    case 135/* JAL */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_jal(s,x);
    }; break;
    case 136/* JALR */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_jalr(s,x);
    }; break;
    case 137/* JALR-HB */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_jalr_hb(s,x);
    }; break;
    case 138/* JALX */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_jalx(s,x);
    }; break;
    case 139/* JR */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_jr(s,x);
    }; break;
    case 140/* JR-HB */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_jr_hb(s,x);
    }; break;
    case 141/* LB */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lb(s,x);
    }; break;
    case 142/* LBE */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lb(s,x);
    }; break;
    case 143/* LBU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lbu(s,x);
    }; break;
    case 144/* LBUE */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lbu(s,x);
    }; break;
    case 145/* LDC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 146/* LDC2 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 147/* LDXC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 148/* LH */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lh(s,x);
    }; break;
    case 149/* LHE */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lh(s,x);
    }; break;
    case 150/* LHU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lhu(s,x);
    }; break;
    case 151/* LHUE */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lhu(s,x);
    }; break;
    case 152/* LL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_ll(s,x);
    }; break;
    case 153/* LLE */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_ll(s,x);
    }; break;
    case 154/* LUI */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_lui(s,x);
    }; break;
    case 155/* LUXC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 156/* LW */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lw(s,x);
    }; break;
    case 157/* LWC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 158/* LWC2 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 159/* LWE */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lw(s,x);
    }; break;
    case 160/* LWL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lwl(s,x);
    }; break;
    case 161/* LWLE */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lwl(s,x);
    }; break;
    case 162/* LWR */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lwr(s,x);
    }; break;
    case 163/* LWRE */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_lwr(s,x);
    }; break;
    case 164/* LWXC1 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 165/* MADD */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_madd(s,x);
    }; break;
    case 166/* MADD-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_ternop_fmt_ro_generic(s,i,x);
    }; break;
    case 167/* MADDU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_maddu(s,x);
    }; break;
    case 168/* MFC0 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 169/* MFC1 */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 170/* MFC2 */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 171/* MFHC1 */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 172/* MFHC2 */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 173/* MFHI */: {
      unop_t x;
      x = ((con_unop_t*) i)->payload;
      return sem_mfhi(s,x);
    }; break;
    case 174/* MFLO */: {
      unop_t x;
      x = ((con_unop_t*) i)->payload;
      return sem_mflo(s,x);
    }; break;
    case 175/* MOV-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 176/* MOVF */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_movf(s,x);
    }; break;
    case 177/* MOVF-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_ternop_fmt_ro_generic(s,i,x);
    }; break;
    case 178/* MOVN */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_movn(s,x);
    }; break;
    case 179/* MOVN-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_ternop_fmt_ro_generic(s,i,x);
    }; break;
    case 180/* MOVT */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_movt(s,x);
    }; break;
    case 181/* MOVT-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_ternop_fmt_ro_generic(s,i,x);
    }; break;
    case 182/* MOVZ */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_movz(s,x);
    }; break;
    case 183/* MOVZ-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_ternop_fmt_ro_generic(s,i,x);
    }; break;
    case 184/* MSUB */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_msub(s,x);
    }; break;
    case 185/* MSUB-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_quadop_fmt_ro_generic(s,i,x);
    }; break;
    case 186/* MSUBU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_msubu(s,x);
    }; break;
    case 187/* MTC0 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 188/* MTC1 */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 189/* MTC2 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 190/* MTHC1 */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 191/* MTHC2 */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 192/* MTHI */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_mthi(s,x);
    }; break;
    case 193/* MTLO */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_mtlo(s,x);
    }; break;
    case 194/* MUL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_mul(s,x);
    }; break;
    case 195/* MUL-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_ternop_fmt_ro_generic(s,i,x);
    }; break;
    case 196/* MULT */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_mult(s,x);
    }; break;
    case 197/* MULTU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_multu(s,x);
    }; break;
    case 198/* NEG-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 199/* NMADD-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_quadop_fmt_ro_generic(s,i,x);
    }; break;
    case 200/* NMSUB-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_quadop_fmt_ro_generic(s,i,x);
    }; break;
    case 201/* NOR */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_nor(s,x);
    }; break;
    case 202/* OR */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_or(s,x);
    }; break;
    case 203/* ORI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_ori(s,x);
    }; break;
    case CON_PAUSE: {
      return sem_pause(s);
    }; break;
    case 204/* PLL-PS */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 205/* PLU-PS */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 206/* PREF */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 207/* PREFE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 208/* PREFX */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 209/* PUL-PS */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 210/* PUU-PS */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_ternop_ro_generic(s,i,x);
    }; break;
    case 211/* RDHWR */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_rdhwr(s,x);
    }; break;
    case 212/* RDPGPR */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_default_binop_ro_generic(s,i,x);
    }; break;
    case 213/* RECIP-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 214/* ROTR */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_rotr(s,x);
    }; break;
    case 215/* ROTRV */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_rotrv(s,x);
    }; break;
    case 216/* ROUND-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 217/* ROUND-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 218/* RSQRT-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 219/* SB */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_sb(s,x);
    }; break;
    case 220/* SBE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_sb(s,x);
    }; break;
    case 221/* SC */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_sc(s,x);
    }; break;
    case 222/* SCE */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_sc(s,x);
    }; break;
    case 223/* SDBBP */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_sdbbp(s,x);
    }; break;
    case 224/* SDC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 225/* SDC2 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 226/* SDXC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 227/* SEB */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_seb(s,x);
    }; break;
    case 228/* SEH */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_seh(s,x);
    }; break;
    case 229/* SH */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_sh(s,x);
    }; break;
    case 230/* SHE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_sh(s,x);
    }; break;
    case 231/* SLL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_sll(s,x);
    }; break;
    case 232/* SLLV */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_sllv(s,x);
    }; break;
    case 233/* SLT */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_slt(s,x);
    }; break;
    case 234/* SLTI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_slti(s,x);
    }; break;
    case 235/* SLTIU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_sltiu(s,x);
    }; break;
    case 236/* SLTU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_sltu(s,x);
    }; break;
    case 237/* SQRT-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 238/* SRA */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_sra(s,x);
    }; break;
    case 239/* SRAV */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_srav(s,x);
    }; break;
    case 240/* SRL */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_srl(s,x);
    }; break;
    case 241/* SRLV */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_srlv(s,x);
    }; break;
    case 242/* SUB */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_sub(s,x);
    }; break;
    case 243/* SUB-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_ternop_fmt_ro_generic(s,i,x);
    }; break;
    case 244/* SUBU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_subu(s,x);
    }; break;
    case 245/* SUXC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 246/* SW */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_sw(s,x);
    }; break;
    case 247/* SWC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 248/* SWC2 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 249/* SWE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_sw(s,x);
    }; break;
    case 250/* SWL */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_swl(s,x);
    }; break;
    case 251/* SWLE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_swl(s,x);
    }; break;
    case 252/* SWR */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_swr(s,x);
    }; break;
    case 253/* SWRE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_swr(s,x);
    }; break;
    case 254/* SWXC1 */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_default_ternop_src_ro_generic(s,i,x);
    }; break;
    case 255/* SYNC */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_default_unop_src_ro_generic(s,i,x);
    }; break;
    case 256/* SYNCI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 257/* SYSCALL */: {
      return sem_syscall(s);
    }; break;
    case 258/* TEQ */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_teq(s,x);
    }; break;
    case 259/* TEQI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_teqi(s,x);
    }; break;
    case 260/* TGE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_tge(s,x);
    }; break;
    case 261/* TGEI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_tgei(s,x);
    }; break;
    case 262/* TGEIU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_tgeiu(s,x);
    }; break;
    case 263/* TGEU */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_tgeu(s,x);
    }; break;
    case CON_TLBINV: {
      return sem_default_nullop_ro_generic(s,i);
    }; break;
    case CON_TLBINVF: {
      return sem_default_nullop_ro_generic(s,i);
    }; break;
    case CON_TLBP: {
      return sem_default_nullop_ro_generic(s,i);
    }; break;
    case CON_TLBR: {
      return sem_default_nullop_ro_generic(s,i);
    }; break;
    case CON_TLBWI: {
      return sem_default_nullop_ro_generic(s,i);
    }; break;
    case CON_TLBWR: {
      return sem_default_nullop_ro_generic(s,i);
    }; break;
    case 270/* TLT */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_tlt(s,x);
    }; break;
    case 271/* TLTI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_tlti(s,x);
    }; break;
    case 272/* TLTIU */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_tltiu(s,x);
    }; break;
    case 273/* TLTU */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_tltu(s,x);
    }; break;
    case 274/* TNE */: {
      ternop_src_t x;
      x = ((con_ternop_src_t*) i)->payload;
      return sem_tne(s,x);
    }; break;
    case 275/* TNEI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_tnei(s,x);
    }; break;
    case 276/* TRUNC-L-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 277/* TRUNC-W-fmt */: {
      struct19_t x;
      x = ((con_struct19_t*) i)->payload;
      return sem_default_binop_fmt_ro_generic(s,i,x);
    }; break;
    case 278/* WAIT */: {
      unop_src_t x;
      x = ((con_unop_src_t*) i)->payload;
      return sem_default_unop_src_ro_generic(s,i,x);
    }; break;
    case 279/* WRPGPR */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_default_binop_src_ro_generic(s,i,x);
    }; break;
    case 280/* WSBH */: {
      binop_t x;
      x = ((con_binop_t*) i)->payload;
      return sem_wsbh(s,x);
    }; break;
    case 281/* XOR */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_xor(s,x);
    }; break;
    case 282/* XORI */: {
      ternop_t x;
      x = ((con_ternop_t*) i)->payload;
      return sem_xori(s,x);
    }; break;
    default: {
      s->err_str = "pattern match failure in semantics at specifications/mips/mips-rreil-translator.ml:1678.12-13";
      longjmp(s->err_tgt,0);
    }; break;
  };
}
/* translate-mips */
static obj_t translate_mips(state_t s,insndata_t insn) {
  return semantics(s,insn->insn);
}
/* translate-block-single */
static obj_t translate_block_single(state_t s,insndata_t insn) {
  int_t ic;
  ic = s->mon_state.ins_count;
  s->mon_state.tmp = 0;
  s->mon_state.ins_count = (ic+1);;
  return translate_mips(s,insn);
}
/* decode-translate-block-headless */
static obj_t decode_translate_block_headless(state_t s,vec_t config,int_t limit) {
  insndata_t insn;
  obj_t insns;
  int_t jmp;
  int_t idx;
  insn = decode(s,config);
  insns = s->mon_state.insns;
  s->mon_state.insns = constructor_INSNS_CONS(s,__struct61(s,__insndata(s,insn->insn,insn->length),insns));;
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
static obj_t decode_translate_block(state_t s,vec_t config,int_t limit) {
  obj_t stmts;
  s->mon_state.stack = alloc_int(s,CON_SEM_NIL);
  s->mon_state.foundJump = 0 /* '0' */;
  s->mon_state.ins_count = 0;;
  stmts = decode_translate_block_headless(s,config,limit);
  return rreil_stmts_rev(s,stmts);
}
/* translate-block-at */
static obj_t translate_block_at(state_t s,vec_t config,int_t idx) {
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
static obj_t seek_translate_block_at(state_t s,vec_t config,obj_t idx_opt) {
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
    case 374/* SEM_LIN_ADD */: {
      sem_arity2_t s_;
      obj_t scrutinee_;
      s_ = ((con_sem_arity2_t*) scrutinee)->payload;
      scrutinee_ = s_.opnd1;
      switch (((con_obj_t*) scrutinee_)->tag) {
        case 372/* SEM_LIN_VAR */: {
          obj_t v;
          v = ((con_obj_t*) scrutinee_)->payload;
          if (is_sem_ip_(s,select_obj(s,91/* id */,v))) {
            obj_t scrutinee__;
            scrutinee__ = s_.opnd2;
            switch (((con_obj_t*) scrutinee__)->tag) {
              case 373/* SEM_LIN_IMM */: {
                struct41_t i;
                i = ((con_struct41_t*) scrutinee__)->payload;
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
        case 373/* SEM_LIN_IMM */: {
          struct41_t i;
          obj_t scrutinee__;
          i = ((con_struct41_t*) scrutinee_)->payload;
          scrutinee__ = s_.opnd2;
          switch (((con_obj_t*) scrutinee__)->tag) {
            case 372/* SEM_LIN_VAR */: {
              obj_t v;
              v = ((con_obj_t*) scrutinee__)->payload;
              if (is_sem_ip_(s,select_obj(s,91/* id */,v))) {
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
    case 372/* SEM_LIN_VAR */: {
      obj_t v;
      v = ((con_obj_t*) scrutinee)->payload;
      if (is_sem_ip_(s,select_obj(s,91/* id */,v))) {
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
static struct62_t io_tw(state_t s,obj_t a) {
  return __struct62(s,a,a);
}
/* io-to */
static struct62_t io_to(state_t s,obj_t a) {
  return __struct62(s,a,alloc_int(s,CON_IO_NONE));
}
/* io */
static struct62_t io(state_t s,obj_t a,obj_t b) {
  return __struct62(s,a,b);
}
/* relative-next */
static struct62_t relative_next(state_t s,obj_t stmts) {
  return relative_next_generic(s,is_sem_ip,stmts);
}
/* relative-next-generic */
static struct62_t relative_next_generic(state_t s,int_t (*is_sem_ip_)(state_t,obj_t),obj_t stmts) {
  switch (((con_obj_t*) stmts)->tag) {
    case 418/* SEM_CONS */: {
      struct6_t x;
      obj_t scrutinee;
      x = ((con_struct6_t*) stmts)->payload;
      scrutinee = x.hd;
      switch (((con_obj_t*) scrutinee)->tag) {
        case 410/* SEM_CBRANCH */: {
          struct37_t b;
          b = ((con_struct37_t*) scrutinee)->payload;
          return io(s,raddress(s,is_sem_ip_,b.target_true),raddress(s,is_sem_ip_,b.target_false));
        }; break;
        case 411/* SEM_BRANCH */: {
          struct36_t b;
          b = ((con_struct36_t*) scrutinee)->payload;
          return io_to(s,raddress(s,is_sem_ip_,b.target));
        }; break;
        case 408/* SEM_ITE */: {
          struct34_t c;
          c = ((con_struct34_t*) scrutinee)->payload;
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
static translate_result_t decode_translate_super_block(state_t s,vec_t config,int_t limit) {
  obj_t stmts;
  int_t ic;
  struct62_t succs;
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
static obj_t decode_translate_block_optimized_inner(state_t s,vec_t config,int_t limit,int_t pres) {
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
static opt_result_t decode_translate_block_optimized(state_t s,vec_t config,int_t limit,int_t opt_config) {
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
static obj_t decode_translate_single(state_t s,vec_t config) {
  return decode_translate_block(s,config,0);
}
/* succ-pretty */
static obj_t succ_pretty(state_t s,obj_t succ,string_t name) {
  switch (((con_obj_t*) succ)->tag) {
    case 449/* SO_SOME */: {
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
  translate_mips(s,insn);
  stack = s->mon_state.stack;
  return rreil_stmts_rev(s,stack);
}
/* pretty-arch-exception */
obj_t gdsl_mips_rreil_pretty_arch_exception(state_t s,obj_t exception) {
  return pretty_arch_exception(s,exception);
}
/* pretty-arch-id */
obj_t gdsl_mips_rreil_pretty_arch_id(state_t s,obj_t r) {
  return pretty_arch_id(s,r);
}
/* translate */
obj_t gdsl_mips_rreil_translate(state_t s,insndata_t insn) {
  return translate(s,__insndata(s,insn->insn,insn->length));
}
/* succ-pretty */
obj_t gdsl_mips_rreil_succ_pretty(state_t s,obj_t succ,string_t name) {
  return succ_pretty(s,succ,name);
}
/* decode-translate-super-block */
translate_result_t gdsl_mips_rreil_decode_translate_super_block(state_t s,int_t config,int_t limit) {
  translate_result_t con_payload;
  con_payload = decode_translate_super_block(s,gen_vec(0, config),limit);
  return __translate_result(s,con_payload->insns,con_payload->succ_a,con_payload->succ_b);
}
/* decode-translate-single */
obj_t gdsl_mips_rreil_decode_translate_single(state_t s,int_t config) {
  return decode_translate_single(s,gen_vec(0, config));
}
/* select_ins_count */
int_t gdsl_mips_rreil_select_ins_count(state_t s) {
  return select_ins_count(s);
}
/* decode-translate-block */
obj_t gdsl_mips_rreil_decode_translate_block(state_t s,int_t config,int_t limit) {
  return decode_translate_block(s,gen_vec(0, config),limit);
}
/* decode-translate-block-optimized */
opt_result_t gdsl_mips_rreil_decode_translate_block_optimized(state_t s,int_t config,int_t limit,int_t opt_config) {
  opt_result_t con_payload;
  con_payload = decode_translate_block_optimized(s,gen_vec(0, config),limit,opt_config);
  return __opt_result(s,con_payload->insns,con_payload->rreil);
}
/* traverse-insn-list */
obj_t gdsl_mips_rreil_traverse_insn_list(state_t s,obj_t l,obj_t init,obj_t (*insn_append)(state_t,obj_t,insndata_t)) {
  return traverse_insn_list(s,l,init,insn_append);
}
/* optimization-config */
obj_t gdsl_mips_rreil_optimization_config(state_t s) {
  return s->gdsl_mips_rreil_optimization_config;
}
/* cleanup */
obj_t gdsl_mips_rreil_cleanup(state_t s,obj_t stmts) {
  return cleanup(s,stmts);
}
/* liveness_super */
lv_super_result_t gdsl_mips_rreil_liveness_super(state_t s,translate_result_t data) {
  lv_super_result_t con_payload;
  con_payload = liveness_super(s,__translate_result(s,data->insns,data->succ_a,data->succ_b));
  return __lv_super_result(s,con_payload->after,con_payload->initial);
}
/* liveness */
obj_t gdsl_mips_rreil_liveness(state_t s,obj_t instructions) {
  return liveness(s,instructions);
}
/* select_live */
obj_t gdsl_mips_rreil_select_live(state_t s) {
  return select_live(s);
}
/* lv-pretty */
obj_t gdsl_mips_rreil_lv_pretty(state_t s,obj_t t) {
  return lv_pretty(s,t);
}
/* rreil-pretty */
obj_t gdsl_mips_rreil_rreil_pretty(state_t s,obj_t ss) {
  return rreil_pretty(s,ss);
}
/* rreil-convert-sem-stmt-list */
obj_t gdsl_mips_rreil_rreil_convert_sem_stmt_list(state_t s,callbacks_t cbs,obj_t stmts) {
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
obj_t gdsl_mips_rreil_example_b(state_t s) {
  return example_b(s);
}
/* example_a */
obj_t gdsl_mips_rreil_example_a(state_t s) {
  return example_a(s);
}
/* rreil-stmts-count */
int_t gdsl_mips_rreil_rreil_stmts_count(state_t s,obj_t stmts) {
  return rreil_stmts_count(s,stmts);
}
/* pretty */
obj_t gdsl_mips_rreil_pretty(state_t s,insndata_t i) {
  return pretty(s,__insndata(s,i->insn,i->length));
}
/* generalize */
asm_insn_t gdsl_mips_rreil_generalize(state_t s,insndata_t insn) {
  asm_insn_t con_payload;
  con_payload = generalize(s,__insndata(s,insn->insn,insn->length));
  return __asm_insn(s,con_payload->annotations,con_payload->length,con_payload->mnemonic,con_payload->opnds);
}
/* decode */
insndata_t gdsl_mips_rreil_decode(state_t s,int_t config) {
  insndata_t con_payload;
  con_payload = decode(s,gen_vec(0, config));
  return __insndata(s,con_payload->insn,con_payload->length);
}
/* config-default */
int_t gdsl_mips_rreil_config_default(state_t s) {
  return s->gdsl_mips_rreil_config_default;
}
/* decoder-config */
obj_t gdsl_mips_rreil_decoder_config(state_t s) {
  return s->gdsl_mips_rreil_decoder_config;
}
/* asm-pretty */
obj_t gdsl_mips_rreil_asm_pretty(state_t s,asm_insn_t ai) {
  return asm_pretty(s,__asm_insn(s,ai->annotations,ai->length,ai->mnemonic,ai->opnds));
}
/* asm-convert-insn */
obj_t gdsl_mips_rreil_asm_convert_insn(state_t s,asm_callbacks_t cbs,asm_insn_t insn) {
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
obj_t gdsl_mips_rreil_conf_next(state_t s,obj_t co) {
  return conf_next(s,co);
}
/* conf-data */
int_t gdsl_mips_rreil_conf_data(state_t s,obj_t co) {
  return conf_data(s,co);
}
/* conf-long */
string_t gdsl_mips_rreil_conf_long(state_t s,obj_t co) {
  return conf_long(s,co);
}
/* conf-short */
string_t gdsl_mips_rreil_conf_short(state_t s,obj_t co) {
  return conf_short(s,co);
}
/* has-conf */
int_t gdsl_mips_rreil_has_conf(state_t s,obj_t co) {
  return has_conf(s,co);
}
/* int-max */
int_t gdsl_mips_rreil_int_max(state_t s) {
  return s->gdsl_mips_rreil_int_max;
}
/* rope-to-string */
string_t gdsl_mips_rreil_rope_to_string(state_t s,obj_t r,string_t buf) {
  return rope_to_string(s,r,buf);
}
/* rope-print */
void gdsl_mips_rreil_rope_print(state_t s,obj_t r) {
  rope_print(s,r);
}
/* rope-length */
int_t gdsl_mips_rreil_rope_length(state_t s,obj_t r) {
  return rope_length(s,r);
}

state_t
gdsl_mips_rreil_init(void) {
  state_t s = calloc(1,sizeof(struct state));
  s->handle = stdout;
  /* compute all constant expressions */
  s->bbtree_empty = alloc_int(s,CON_Lf);
  s->fitree_empty = s->bbtree_empty;
  s->int_max = 0x7FFFFFFFFFFFFFFF;
  s->asm_opnds_none = alloc_int(s,CON_ASM_OPNDS_NIL);
  s->asm_anns_none = alloc_int(s,CON_ASM_ANNS_NIL);
  s->decoder_config = alloc_int(s,CON_END);
  s->config_default = 0 /* '' */;
  s->fmap_empty = s->bbtree_empty;
  s->varls_none = alloc_int(s,CON_SEM_VARLS_NIL);
  s->registers_live_map = s->fmap_empty;
  s->optimization_config = _amp__star_(s,_amp__star_(s,conf(s,gen_vec(2, 0 /* '00' */),from_string_lit(s,"block"),from_string_lit(s,"translate a basic block at a time")),conf(s,gen_vec(2, 1 /* '01' */),from_string_lit(s,"liveness"),from_string_lit(s,"remove dead assignments"))),conf(s,gen_vec(2, 2 /* '10' */),from_string_lit(s,"inter-bb"),from_string_lit(s,"perform inter-basic block liveness analysis")));
  s->exceptions_on = 1 /* '1' */;
  s->fDM = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_DEBUG),0);
  s->fRE = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_SREG),25);
  s->fKSU = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_SREG),3);
  s->fERL = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_SREG),2);
  s->fEXL = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_SREG),1);
  s->bigendian_mem = 1 /* '1' */;
  s->fCA = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_CONFIG1),2);
  s->fPSS = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_SRSCTL),6);
  s->fCSS = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_SRSCTL),0);
  s->fHSS = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_SRSCTL),26);
  s->fBEV = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_SREG),22);
  s->architectureRevision = 5;
  s->fISA = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_CONFIG3),14);
  s->isMIPS16Implemented = 1 /* '1' */;
  s->fIE = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_SREG),0);
  s->fIEXI = sem_reg_offset(s,semantic_reg_of(s,CON_Sem_DEBUG),1);
  s->gdsl_mips_rreil_optimization_config = s->optimization_config;
  s->gdsl_mips_rreil_config_default = s->config_default;
  s->gdsl_mips_rreil_decoder_config = s->decoder_config;
  s->gdsl_mips_rreil_int_max = s->int_max;
  /* keep the heap of constant expressions separate */
  s->const_heap_base = s->heap_base;
  s->heap_base = NULL;
  s->heap_limit = NULL;
  s->heap = NULL;

gdsl_mips_rreil_endianness  (s, 0, 1);

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


