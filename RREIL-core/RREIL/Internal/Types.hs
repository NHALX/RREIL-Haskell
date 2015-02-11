{-# LANGUAGE DeriveDataTypeable, DeriveGeneric #-}
module RREIL.Internal.Types (
    ASM_INSN(..),ASM_OPND(..),ASM_SIGNEDNESS(..),ASM_BOUNDARY(..),ASM_ANN(..),ID_SHARED(..),ID(..),
    EXCEPTION(..),ADDRESS(..),LIN(..),SEXPR(..),CMP(..),EXPR(..),STMT(..),
    VARL(..),VAR(..),FLOPS(..),BRANCH_HINT(..),
    wrap,
    unwrap,
    GDSL_INT,
    GDSL_STATE)
where
import RREIL.Internal.C_gdsl_generic
import Foreign
import Foreign.C.Types
import Foreign.C.String
import Control.Applicative
import Data.Typeable
import GHC.Generics

type GDSL_STATE = Ptr ()
type GDSL_INT   = C'int_t


--------------------------------------------------------

type W = StablePtr 

wrap = newStablePtr

unwrap r = do
  -- print ("unwrap:", castStablePtrToPtr r) 
  x <- deRefStablePtr r
  freeStablePtr r
  return x

--------------------------------------------------------

list_init = wrap []

list_next next list = do
  xs <- unwrap list
  x  <- unwrap next
  wrap (xs ++ [x])

binop f a b = wrap =<< f <$> unwrap a 
                         <*> unwrap b

uop f a = wrap =<< f <$> unwrap a

--------------------------------------------------------

foreign export ccall asm_insn :: GDSL_STATE -> GDSL_INT -> CString -> W [ASM_ANN] -> W [ASM_OPND] -> IO (W ASM_INSN)
asm_insn state length mnemonic annotations opnds = wrap =<< ASM_INSN (fromIntegral length) 
                                                                 <$> peekCString mnemonic
                                                                 <*> unwrap annotations
                                                                 <*> unwrap opnds

data ASM_INSN = ASM_INSN { insn_length      :: Word64,
                           insn_mnemonic    :: String,
                           insn_annotations :: [ASM_ANN],
                           insn_opnds       :: [ASM_OPND] } deriving (Show,Read,Ord,Eq,Typeable,Generic)

---------------------- operand list --------------------

foreign export ccall asm_opnds_next :: GDSL_STATE -> W ASM_OPND -> W [ASM_OPND] -> IO (W [ASM_OPND])
asm_opnds_next state = list_next

foreign export ccall asm_opnds_init :: GDSL_STATE -> IO (W [ASM_OPND])
asm_opnds_init state = list_init

------------------------- operand ----------------------

foreign export ccall asm_register :: GDSL_STATE -> CString -> IO (W ASM_OPND)
asm_register state str = wrap =<< ASM_REGISTER <$> peekCString str

foreign export ccall asm_memory :: GDSL_STATE -> W ASM_OPND -> IO (W ASM_OPND)
asm_memory state = uop ASM_MEMORY

foreign export ccall asm_imm :: GDSL_STATE -> GDSL_INT -> IO (W ASM_OPND)
asm_imm state int = wrap $ ASM_IMM (fromIntegral int)

foreign export ccall asm_post_op :: GDSL_STATE -> W ASM_OPND -> W ASM_OPND -> IO (W ASM_OPND)
asm_post_op state = binop ASM_POST_OP

foreign export ccall asm_pre_op :: GDSL_STATE -> W ASM_OPND -> W ASM_OPND -> IO (W ASM_OPND)
asm_pre_op state = binop ASM_PRE_OP 

foreign export ccall asm_rel :: GDSL_STATE -> W ASM_OPND -> IO (W ASM_OPND)
asm_rel state = uop ASM_REL

foreign export ccall asm_annotated :: GDSL_STATE -> W ASM_ANN -> W ASM_OPND -> IO (W ASM_OPND)
asm_annotated state = binop ASM_ANNOTATED 

foreign export ccall asm_sum :: GDSL_STATE -> W ASM_OPND -> W ASM_OPND -> IO (W ASM_OPND)
asm_sum state = binop ASM_SUM 

foreign export ccall asm_scale :: GDSL_STATE -> GDSL_INT -> W ASM_OPND -> IO (W ASM_OPND)
asm_scale state factor obj = wrap =<< ASM_SCALE (fromIntegral factor) <$> unwrap obj

foreign export ccall asm_bounded :: GDSL_STATE -> W ASM_BOUNDARY -> W ASM_OPND -> IO (W ASM_OPND)
asm_bounded state = binop ASM_BOUNDED 

foreign export ccall asm_sign :: GDSL_STATE -> W ASM_SIGNEDNESS -> W ASM_OPND -> IO (W ASM_OPND)
asm_sign state = binop ASM_SIGN 

foreign export ccall asm_composite :: GDSL_STATE -> W [ASM_OPND] -> IO (W ASM_OPND)
asm_composite state = uop ASM_COMPOSITE

data ASM_OPND = ASM_COMPOSITE [ASM_OPND]
              | ASM_SIGN ASM_SIGNEDNESS ASM_OPND
              | ASM_BOUNDED ASM_BOUNDARY ASM_OPND
              | ASM_SCALE Word64 ASM_OPND
              | ASM_SUM ASM_OPND ASM_OPND
              | ASM_ANNOTATED ASM_ANN ASM_OPND
              | ASM_REL ASM_OPND
              | ASM_PRE_OP ASM_OPND ASM_OPND
              | ASM_POST_OP ASM_OPND ASM_OPND
              | ASM_IMM Int64
              | ASM_MEMORY ASM_OPND
              | ASM_REGISTER String
             deriving (Show,Read,Ord,Eq,Typeable,Generic)

------------------ signedness -----------------

foreign export ccall asm_signed :: GDSL_STATE -> IO (W ASM_SIGNEDNESS)
asm_signed state = wrap ASM_SIGNED

foreign export ccall asm_unsigned :: GDSL_STATE -> IO (W ASM_SIGNEDNESS)
asm_unsigned state = wrap ASM_UNSIGNED

data ASM_SIGNEDNESS = ASM_SIGNED
                    | ASM_UNSIGNED
                      deriving (Show,Read,Ord,Eq,Typeable,Generic)

----------------- boundary ---------------------

foreign export ccall asm_sz :: GDSL_STATE -> GDSL_INT -> IO (W ASM_BOUNDARY)
asm_sz state size = wrap $ ASM_BOUNDARY_SZ (fromIntegral size)

foreign export ccall asm_sz_o :: GDSL_STATE -> GDSL_INT -> GDSL_INT -> IO (W ASM_BOUNDARY)
asm_sz_o state size offset = wrap $ ASM_BOUNDARY_SZ_O (fromIntegral size) (fromIntegral offset)

data ASM_BOUNDARY = ASM_BOUNDARY_SZ   { boundary_size   :: Word64}
                  | ASM_BOUNDARY_SZ_O { boundary_size   :: Word64, 
                                        boundary_offset :: Word64 }
                    deriving (Show,Read,Ord,Eq,Typeable,Generic)

--------------- annotation list ----------------

foreign export ccall asm_annotations_next :: GDSL_STATE -> W ASM_ANN -> W [ASM_ANN] -> IO (W [ASM_ANN])
asm_annotations_next state = list_next

foreign export ccall asm_annotations_init :: GDSL_STATE -> IO (W [ASM_ANN])
asm_annotations_init state = list_init

---------------- annotations -------------------

foreign export ccall asm_annotation_string :: GDSL_STATE -> CString -> IO (W ASM_ANN)
asm_annotation_string state name = wrap =<< ASM_ANN_STRING <$> peekCString name 

foreign export ccall asm_annotation_function :: GDSL_STATE -> CString -> W [ASM_OPND] -> IO (W ASM_ANN)
asm_annotation_function state name opnds = wrap =<< ASM_ANN_FUNCTION <$> peekCString name 
                                                                     <*> unwrap opnds

foreign export ccall asm_annotation_opnd :: GDSL_STATE -> CString -> W ASM_OPND -> IO (W ASM_ANN)
asm_annotation_opnd state name opnd = wrap =<< ASM_ANN_OPND <$> peekCString name 
                                                            <*> unwrap opnd

data ASM_ANN = ASM_ANN_OPND String ASM_OPND
             | ASM_ANN_FUNCTION String [ASM_OPND]
             | ASM_ANN_STRING String
                deriving (Show,Read,Ord,Eq,Typeable,Generic)

-------------------------------------------------------------------
      
{--
// sem_id
static obj_t shared(state_t state, int_t eid) {
  struct rreil_id *id = (struct rreil_id*)malloc(sizeof(struct rreil_id));
  id->type = RREIL_ID_TYPE_SHARED;
  switch(eid) {
    case RREIL_ID_SHARED_FLOATING_FLAGS: {
      id->shared = RREIL_ID_SHARED_FLOATING_FLAGS;
      break;
    }
  }
  return (obj_t)id;
}
--}
data ID_SHARED = FLOATING_FLAGS deriving (Show,Read,Ord,Eq,Typeable,Generic)

foreign export ccall sem_id_shared :: GDSL_STATE -> GDSL_INT -> IO (W ID)
sem_id_shared state i 
    | i == c'ID_FLOATING_FLAGS = wrap (SHARED FLOATING_FLAGS)
       
foreign export ccall sem_id_virt_t :: GDSL_STATE -> GDSL_INT -> IO (W ID)
sem_id_virt_t state i = wrap (TEMP $ fromIntegral i)

{--
TODO: how to deal with this X86 specialization?
#ifdef GDSL_X86
obj_t sem_id_arch(state_t state, string_t pretty_id) {
  struct rreil_id *id = (struct rreil_id*)malloc(sizeof(struct rreil_id));
  id->type = RREIL_ID_TYPE_X86;
  id->x86 = x86_reg_from_name(pretty_id);
  return id;
}
#else
obj_t sem_id_arch(state_t state, string_t pretty_id) {
  struct rreil_id *id = (struct rreil_id*)malloc(sizeof(struct rreil_id));
  id->type = RREIL_ID_TYPE_ARCH;
  id->arch = (char*)malloc(strlen(pretty_id) + 1);
  strcpy(id->arch, pretty_id);
  return id;
}
#endif
--}

foreign export ccall sem_id_arch :: GDSL_STATE -> CString -> IO (W ID)
sem_id_arch state str = wrap =<< ID <$> peekCString str

data ID = ID String 
        | TEMP Word64
        | SHARED ID_SHARED
          deriving (Show,Read,Ord,Eq,Typeable,Generic)
--------------------------------------------------------

foreign export ccall sem_exception_shared :: GDSL_STATE -> GDSL_INT -> IO (W EXCEPTION)
sem_exception_shared state eexp 
     | eexp == c'EXCEPTION_DIVISION_BY_ZERO = wrap DIVISION_BY_ZERO

{--
TODO: how to deal with this X86 specialization?
#ifdef GDSL_X86
obj_t exception_arch(state_t state, string_t ex) {
  struct rreil_exception *EXCEPTION = (struct rreil_exception*)malloc(sizeof(struct rreil_exception));
  EXCEPTION->type = RREIL_EXCEPTION_TYPE_X86;
  EXCEPTION->x86 = x86_exception_from_name(ex);
  return EXCEPTION;
}
#else
obj_t exception_arch(state_t state, string_t ex) {
  struct rreil_exception *EXCEPTION = (struct rreil_exception*)malloc(sizeof(struct rreil_exception));
  EXCEPTION->arch = (char*)malloc(strlen(ex) + 1);
  strcpy(EXCEPTION->arch, ex);;
  return EXCEPTION;
}
#endif
--}

data EXCEPTION = ARCH String 
               | DIVISION_BY_ZERO
                 deriving (Show,Read,Ord,Eq,Typeable,Generic)

foreign export ccall sem_exception_arch :: GDSL_STATE -> CString -> IO (W EXCEPTION)
sem_exception_arch state str = wrap =<< ARCH <$> peekCString str

------------------------------------------------------

foreign export ccall sem_address :: GDSL_STATE -> GDSL_INT -> W LIN -> IO (W ADDRESS)
sem_address state size addr = wrap =<< ADDRESS (fromIntegral size) <$> unwrap addr

data ADDRESS = ADDRESS { address_size :: Word64, 
                         address      :: LIN } deriving (Show,Read,Ord,Eq,Typeable,Generic)


foreign export ccall sem_var :: GDSL_STATE -> W ID -> GDSL_INT -> IO (W VAR)
sem_var state id offset = wrap =<< VAR <$> unwrap id 
                                       <*> return (fromIntegral offset)

--------------- linear -------------------------------

foreign export ccall sem_lin_var :: GDSL_STATE -> W VAR -> IO (W LIN)
sem_lin_var state = uop LIN_VAR

foreign export ccall sem_lin_imm :: GDSL_STATE -> GDSL_INT -> IO (W LIN)
sem_lin_imm state = wrap . LIN_IMM . fromIntegral

foreign export ccall sem_lin_sub :: GDSL_STATE -> W LIN -> W LIN -> IO (W LIN)
sem_lin_sub state = binop LIN_SUB
 
foreign export ccall sem_lin_add :: GDSL_STATE -> W LIN -> W LIN -> IO (W LIN)
sem_lin_add state = binop LIN_ADD
 
foreign export ccall sem_lin_scale :: GDSL_STATE -> GDSL_INT -> W LIN -> IO (W LIN)
sem_lin_scale state imm opnd = wrap =<< LIN_SCALE (fromIntegral imm) <$> unwrap opnd

data LIN = LIN_SCALE { scale_imm :: Word64,
                       scale_opnd :: LIN } 

         | LIN_IMM Int64 

         | LIN_VAR VAR

         | LIN_ADD { ladd_opnd1 :: LIN,
                     ladd_opnd2 :: LIN }

         | LIN_SUB { lsub_opnd1 :: LIN,
                     lsub_opnd2 :: LIN }
              
          deriving (Show,Read,Ord,Eq,Typeable,Generic)


---------------------- sem_sexpr -------------------------

foreign export ccall sem_sexpr_lin :: GDSL_STATE -> W LIN -> IO (W SEXPR)
sem_sexpr_lin state = uop SEXPR_LIN

foreign export ccall sem_sexpr_cmp :: GDSL_STATE -> W CMP -> IO (W SEXPR)
sem_sexpr_cmp state = uop SEXPR_CMP

foreign export ccall sem_sexpr_arb :: GDSL_STATE -> IO (W SEXPR)
sem_sexpr_arb state = wrap SEXPR_ARB

data SEXPR = SEXPR_ARB
           | SEXPR_CMP CMP
           | SEXPR_LIN LIN
           deriving (Show,Read,Ord,Eq,Typeable,Generic)

---------------------- sem_expr_cmp -----------------------

foreign export ccall sem_cmpeq :: GDSL_STATE -> W LIN -> W LIN -> IO (W CMP)
sem_cmpeq state = binop CMP_EQ

foreign export ccall sem_cmpneq :: GDSL_STATE -> W LIN -> W LIN -> IO (W CMP)
sem_cmpneq state = binop CMP_NEQ

foreign export ccall sem_cmples :: GDSL_STATE -> W LIN -> W LIN -> IO (W CMP)
sem_cmples state = binop CMP_LES

foreign export ccall sem_cmpleu :: GDSL_STATE -> W LIN -> W LIN -> IO (W CMP)
sem_cmpleu state = binop CMP_LEU

foreign export ccall sem_cmplts :: GDSL_STATE -> W LIN -> W LIN -> IO (W CMP)
sem_cmplts state = binop CMP_LTS

foreign export ccall sem_cmpltu :: GDSL_STATE -> W LIN -> W LIN -> IO (W CMP)
sem_cmpltu state = binop CMP_LTU


data CMP = CMP_LTU { ltu_opnd1 :: LIN,
                     ltu_opnd2 :: LIN }

         | CMP_LTS { lts_opnd1 :: LIN,
                     lts_opnd2 :: LIN }

         | CMP_LEU { leu_opnd1 :: LIN,
                     leu_opnd2 :: LIN }

         | CMP_LES { les_opnd1 :: LIN,
                     les_opnd2 :: LIN }

         | CMP_NEQ { neq_opnd1 :: LIN,
                     neq_opnd2 :: LIN }

         | CMP_EQ { eq_opnd1 :: LIN,
                    eq_opnd2 :: LIN }

          deriving (Show,Read,Ord,Eq,Typeable,Generic)

----------------------- sem_expr ----------------------

foreign export ccall sem_sexpr :: GDSL_STATE -> W SEXPR -> IO (W EXPR)
sem_sexpr state = uop EXPR_SEXPR

foreign export ccall sem_mul :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_mul state = binop MUL

foreign export ccall sem_div :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_div state = binop DIV

foreign export ccall sem_divs :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_divs state = binop DIVS

foreign export ccall sem_mods :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_mods state = binop MODS

foreign export ccall sem_mod :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_mod state = binop MOD

foreign export ccall sem_shl :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_shl state = binop SHL

foreign export ccall sem_shr :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_shr state = binop SHR

foreign export ccall sem_shrs :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_shrs state = binop SHRS

foreign export ccall sem_and :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_and state = binop AND

foreign export ccall sem_or :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_or state = binop OR

foreign export ccall sem_xor :: GDSL_STATE -> W LIN -> W LIN -> IO (W EXPR)
sem_xor state = binop XOR

foreign export ccall sem_sx :: GDSL_STATE -> GDSL_INT -> W LIN -> IO (W EXPR)
sem_sx state fromsize opnd1 = wrap =<< SX <$> return (fromIntegral fromsize)
                                          <*> unwrap opnd1

foreign export ccall sem_zx :: GDSL_STATE -> GDSL_INT -> W LIN -> IO (W EXPR)
sem_zx state fromsize opnd1 = wrap =<< ZX <$> return (fromIntegral fromsize)
                                          <*> unwrap opnd1


data EXPR = ZX { zx_fromsize :: Word64,
                 zx_opnd     :: LIN }

          | SX { sx_fromsize :: Word64,
                 sx_opnd     :: LIN }

          | XOR { xor_opnd1 :: LIN,
                  xor_opnd2 :: LIN }

          | OR { or_opnd1 :: LIN,
                 or_opnd2 :: LIN }

          | AND { and_opnd1 :: LIN,
                  and_opnd2 :: LIN }

          | SHRS { shrs_opnd1 :: LIN,
                   shrs_opnd2 :: LIN }

          | SHR { shr_opnd1 :: LIN,
                  shr_opnd2 :: LIN }

          | SHL { shl_opnd1 :: LIN,
                  shl_opnd2 :: LIN }

          | MODS { mods_opnd1 :: LIN,
                   mods_opnd2 :: LIN }

          | MOD { mod_opnd1 :: LIN,
                  mod_opnd2 :: LIN }

          | DIVS { divs_opnd1 :: LIN,
                   divs_opnd2 :: LIN }

          | DIV { div_opnd1 :: LIN,
                  div_opnd2 :: LIN }

          | MUL { mul_opnd1 :: LIN,
                  mul_opnd2 :: LIN }

          | EXPR_SEXPR SEXPR

            deriving (Show,Read,Ord,Eq,Typeable,Generic)

--------------------- sem_varl --------------------------

foreign export ccall sem_varl :: GDSL_STATE -> W ID -> GDSL_INT -> GDSL_INT -> IO (W VARL)
sem_varl state i offset size = wrap =<< VARL <$> unwrap i
                                             <*> return (fromIntegral offset)
                                             <*> return (fromIntegral size)

--------------------- sem_varls -------------------------

foreign export ccall sem_varls_next :: GDSL_STATE -> W VARL -> W [VARL] -> IO (W [VARL])
sem_varls_next state next list = do
  x  <- unwrap next
  xs <- unwrap list
  wrap (xs ++ [x])

foreign export ccall sem_varls_init :: GDSL_STATE -> IO (W [VARL])
sem_varls_init state = wrap []


foreign export ccall sem_flop :: GDSL_STATE -> GDSL_INT -> IO (W FLOPS)
sem_flop state con 
    | con == c'FLOP_FADD = wrap FADD
    | con == c'FLOP_FSUB = wrap FSUB
    | con == c'FLOP_FMUL = wrap FMUL

--------------------- sem_stmt -------------------------

data STMT = THROW EXCEPTION 
          | ASSIGN { assign_size :: Word64,
                     assign_lhs  :: VAR,
                     assign_rhs  :: EXPR }

          | LOAD { load_size :: Word64,
                   load_lhs  :: VAR,
                   load_address :: ADDRESS }

          | STORE { store_size    :: Word64,
                    store_address :: ADDRESS,
                    store_rhs     :: LIN }

          | ITE { ite_cond :: SEXPR,
                  ite_then :: [STMT],
                  ite_else :: [STMT] }

          | WHILE { while_cond :: SEXPR, 
                    while_body :: [STMT] }

          | CBRANCH { cbranch_cond  :: SEXPR,
                      cbranch_true  :: ADDRESS,
                      cbranch_false :: ADDRESS }

          | BRANCH { branch_type   :: BRANCH_HINT,
                     branch_target :: ADDRESS }

          | FLOP { flop_op    :: FLOPS, 
                   flop_flags :: VAR,
                   flop_lhs   :: VARL,
                   flop_rhs   :: [VARL] }

          | PRIM { prim_op  :: String, 
                   prim_lhs :: [VARL], 
                   prim_rhs :: [VARL] }

            deriving (Show,Read,Ord,Eq,Typeable,Generic)

            
data VARL = VARL { varl_id :: ID, 
                   varl_offset :: Word64, 
                   varl_size :: Word64 } 
                   deriving (Show,Read,Ord,Eq,Typeable,Generic)

                   
data VAR = VAR { var_id :: ID, 
                 var_offset :: Word64 } 
                 deriving (Show,Read,Ord,Eq,Typeable,Generic)

                 
data FLOPS = FADD | FSUB | FMUL deriving (Show,Read,Ord,Eq,Typeable,Generic)


data BRANCH_HINT = HINT_CALL 
                 | HINT_JUMP 
                 | HINT_RET 
                  deriving (Show,Read,Ord,Eq,Typeable,Generic)


foreign export ccall sem_assign :: GDSL_STATE -> GDSL_INT -> W VAR -> W EXPR -> IO (W STMT)
sem_assign state size lhs rhs = wrap =<< ASSIGN <$> return (fromIntegral size)
                                                <*> unwrap lhs
                                                <*> unwrap rhs


foreign export ccall sem_load :: GDSL_STATE -> GDSL_INT -> W VAR -> W ADDRESS -> IO (W STMT)
sem_load state size lhs address = wrap =<< LOAD <$> return (fromIntegral size)
                                                <*> unwrap lhs
                                                <*> unwrap address

foreign export ccall sem_store :: GDSL_STATE -> GDSL_INT -> W ADDRESS -> W LIN -> IO (W STMT)
sem_store state size address rhs = wrap =<< STORE <$> return (fromIntegral size)
                                                  <*> unwrap address
                                                  <*> unwrap rhs

foreign export ccall sem_ite :: GDSL_STATE -> W SEXPR -> W [STMT] -> W [STMT] -> IO (W STMT)
sem_ite state cond then_b else_b = wrap =<< ITE <$> unwrap cond
                                                <*> unwrap then_b
                                                <*> unwrap else_b

foreign export ccall sem_while :: GDSL_STATE -> W SEXPR -> W [STMT] -> IO (W STMT)
sem_while state cond body = wrap =<< WHILE <$> unwrap cond
                                           <*> unwrap body


foreign export ccall sem_cbranch :: GDSL_STATE -> W SEXPR -> W ADDRESS -> W ADDRESS -> IO (W STMT)
sem_cbranch state cond true false = wrap =<< CBRANCH <$> unwrap cond
                                                     <*> unwrap true
                                                     <*> unwrap false


foreign export ccall sem_branch :: GDSL_STATE -> W BRANCH_HINT -> W ADDRESS -> IO (W STMT)
sem_branch state hint target = wrap =<< BRANCH <$> unwrap hint 
                                               <*> unwrap target


foreign export ccall sem_flop_stmt :: GDSL_STATE -> W FLOPS -> W VAR -> W VARL -> W [VARL] -> IO (W STMT)
sem_flop_stmt state op flags lhs rhs = wrap =<< FLOP <$> unwrap op
                                                     <*> unwrap flags
                                                     <*> unwrap lhs
                                                     <*> unwrap rhs
  
foreign export ccall sem_prim :: GDSL_STATE -> CString -> W [VARL] -> W [VARL] -> IO (W STMT)
sem_prim state op lhs rhs = wrap =<< PRIM <$> peekCString op
                                          <*> unwrap lhs
                                          <*> unwrap rhs


foreign export ccall sem_throw :: GDSL_STATE -> W EXCEPTION -> IO (W STMT)
sem_throw state exception = wrap . THROW =<< unwrap exception


foreign export ccall sem_branch_hint :: GDSL_STATE -> GDSL_INT -> IO (W BRANCH_HINT)
sem_branch_hint state con 
    | con == c'BRANCH_HINT_JUMP = wrap HINT_JUMP
    | con == c'BRANCH_HINT_CALL = wrap HINT_CALL
    | con == c'BRANCH_HINT_RET  = wrap HINT_RET

foreign export ccall sem_stmts_next :: GDSL_STATE -> W STMT -> W [STMT] -> IO (W [STMT])
sem_stmts_next state = list_next

foreign export ccall sem_stmts_init :: GDSL_STATE -> IO (W [STMT])
sem_stmts_init state = list_init


