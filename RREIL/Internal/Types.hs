module RREIL.Internal.Types where
import RREIL.Internal.C_gdsl_generic
import Foreign
import Foreign.C.Types
import Foreign.C.String
import Control.Applicative

type GDSL_STATE = Ptr ()
type GDSL_INT   = C'int_t


--------------------------------------------------------

type P = StablePtr 

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

foreign export ccall asm_insn :: GDSL_STATE -> GDSL_INT -> CString -> P [ASM_ANN] -> P [ASM_OPND] -> IO (P ASM_INSN)
asm_insn state length mnemonic annotations opnds = wrap =<< ASM_INSN (fromIntegral length) 
                                                                 <$> peekCString mnemonic
                                                                 <*> unwrap annotations
                                                                 <*> unwrap opnds

data ASM_INSN = ASM_INSN { insn_length      :: Word64,
                           insn_mnemonic    :: String,
                           insn_annotations :: [ASM_ANN],
                           insn_opnds       :: [ASM_OPND] } deriving Show

---------------------- operand list --------------------

foreign export ccall asm_opnds_next :: GDSL_STATE -> P ASM_OPND -> P [ASM_OPND] -> IO (P [ASM_OPND])
asm_opnds_next state = list_next

foreign export ccall asm_opnds_init :: GDSL_STATE -> IO (P [ASM_OPND])
asm_opnds_init state = list_init

------------------------- operand ----------------------

foreign export ccall asm_register :: GDSL_STATE -> CString -> IO (P ASM_OPND)
asm_register state str = wrap =<< ASM_REGISTER <$> peekCString str

foreign export ccall asm_memory :: GDSL_STATE -> P ASM_OPND -> IO (P ASM_OPND)
asm_memory state = uop ASM_MEMORY

foreign export ccall asm_imm :: GDSL_STATE -> GDSL_INT -> IO (P ASM_OPND)
asm_imm state int = wrap $ ASM_IMM (fromIntegral int)

foreign export ccall asm_post_op :: GDSL_STATE -> P ASM_OPND -> P ASM_OPND -> IO (P ASM_OPND)
asm_post_op state = binop ASM_POST_OP

foreign export ccall asm_pre_op :: GDSL_STATE -> P ASM_OPND -> P ASM_OPND -> IO (P ASM_OPND)
asm_pre_op state = binop ASM_PRE_OP 

foreign export ccall asm_rel :: GDSL_STATE -> P ASM_OPND -> IO (P ASM_OPND)
asm_rel state = uop ASM_REL

foreign export ccall asm_annotated :: GDSL_STATE -> P ASM_ANN -> P ASM_OPND -> IO (P ASM_OPND)
asm_annotated state = binop ASM_ANNOTATED 

foreign export ccall asm_sum :: GDSL_STATE -> P ASM_OPND -> P ASM_OPND -> IO (P ASM_OPND)
asm_sum state = binop ASM_SUM 

foreign export ccall asm_scale :: GDSL_STATE -> GDSL_INT -> P ASM_OPND -> IO (P ASM_OPND)
asm_scale state factor obj = wrap =<< ASM_SCALE (fromIntegral factor) <$> unwrap obj

foreign export ccall asm_bounded :: GDSL_STATE -> P ASM_BOUNDARY -> P ASM_OPND -> IO (P ASM_OPND)
asm_bounded state = binop ASM_BOUNDED 

foreign export ccall asm_sign :: GDSL_STATE -> P ASM_SIGNEDNESS -> P ASM_OPND -> IO (P ASM_OPND)
asm_sign state = binop ASM_SIGN 

foreign export ccall asm_composite :: GDSL_STATE -> P [ASM_OPND] -> IO (P ASM_OPND)
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
             deriving (Show)

------------------ signedness -----------------

foreign export ccall asm_signed :: GDSL_STATE -> IO (P ASM_SIGNEDNESS)
asm_signed state = wrap ASM_SIGNED

foreign export ccall asm_unsigned :: GDSL_STATE -> IO (P ASM_SIGNEDNESS)
asm_unsigned state = wrap ASM_UNSIGNED

data ASM_SIGNEDNESS = ASM_SIGNED
                    | ASM_UNSIGNED
                      deriving Show

----------------- boundary ---------------------

foreign export ccall asm_sz :: GDSL_STATE -> GDSL_INT -> IO (P ASM_BOUNDARY)
asm_sz state size = wrap $ ASM_BOUNDARY_SZ (fromIntegral size)

foreign export ccall asm_sz_o :: GDSL_STATE -> GDSL_INT -> GDSL_INT -> IO (P ASM_BOUNDARY)
asm_sz_o state size offset = wrap $ ASM_BOUNDARY_SZ_O (fromIntegral size) (fromIntegral offset)

data ASM_BOUNDARY = ASM_BOUNDARY_SZ   { boundary_size   :: Word64}
                  | ASM_BOUNDARY_SZ_O { boundary_size   :: Word64, 
                                        boundary_offset :: Word64 }
                    deriving Show

--------------- annotation list ----------------

foreign export ccall asm_annotations_next :: GDSL_STATE -> P ASM_ANN -> P [ASM_ANN] -> IO (P [ASM_ANN])
asm_annotations_next state = list_next

foreign export ccall asm_annotations_init :: GDSL_STATE -> IO (P [ASM_ANN])
asm_annotations_init state = list_init

---------------- annotations -------------------

foreign export ccall asm_annotation_string :: GDSL_STATE -> CString -> IO (P ASM_ANN)
asm_annotation_string state name = wrap =<< ASM_ANN_STRING <$> peekCString name 

foreign export ccall asm_annotation_function :: GDSL_STATE -> CString -> P [ASM_OPND] -> IO (P ASM_ANN)
asm_annotation_function state name opnds = wrap =<< ASM_ANN_FUNCTION <$> peekCString name 
                                                                     <*> unwrap opnds

foreign export ccall asm_annotation_opnd :: GDSL_STATE -> CString -> P ASM_OPND -> IO (P ASM_ANN)
asm_annotation_opnd state name opnd = wrap =<< ASM_ANN_OPND <$> peekCString name 
                                                            <*> unwrap opnd

data ASM_ANN = ASM_ANN_OPND String ASM_OPND
             | ASM_ANN_FUNCTION String [ASM_OPND]
             | ASM_ANN_STRING String
                deriving (Show)

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
data ID_Shared = FloatingFlags deriving Show

foreign export ccall sem_id_shared :: GDSL_STATE -> GDSL_INT -> IO (P ID)
sem_id_shared state i 
    | i == c'ID_FLOATING_FLAGS = wrap (Shared FloatingFlags)
       
foreign export ccall sem_id_virt_t :: GDSL_STATE -> GDSL_INT -> IO (P ID)
sem_id_virt_t state i = wrap (Temp $ fromIntegral i)

{--
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

foreign export ccall sem_id_arch :: GDSL_STATE -> CString -> IO (P ID)
sem_id_arch state str = wrap =<< ID <$> peekCString str

data ID = ID String 
        | Temp Word64
        | Shared ID_Shared
          deriving (Show)
--------------------------------------------------------

foreign export ccall exception_shared :: GDSL_STATE -> GDSL_INT -> IO (P Exception)
exception_shared state eexp 
     | eexp == c'EXCEPTION_DIVISION_BY_ZERO = wrap DivisionByZero

{--
#ifdef GDSL_X86
obj_t exception_arch(state_t state, string_t ex) {
  struct rreil_exception *exception = (struct rreil_exception*)malloc(sizeof(struct rreil_exception));
  exception->type = RREIL_EXCEPTION_TYPE_X86;
  exception->x86 = x86_exception_from_name(ex);
  return exception;
}
#else
obj_t exception_arch(state_t state, string_t ex) {
  struct rreil_exception *exception = (struct rreil_exception*)malloc(sizeof(struct rreil_exception));
  exception->arch = (char*)malloc(strlen(ex) + 1);
  strcpy(exception->arch, ex);;
  return exception;
}
#endif
--}

data Exception = Arch String 
               | DivisionByZero 
                 deriving (Show)

foreign export ccall exception_arch :: GDSL_STATE -> CString -> IO (P Exception)
exception_arch state str = wrap =<< Arch <$> peekCString str

------------------------------------------------------

foreign export ccall sem_address :: GDSL_STATE -> GDSL_INT -> P Linear -> IO (P Address)
sem_address state size addr = wrap =<< Address (fromIntegral size) <$> unwrap addr

data Address = Address { address_size :: Word64, 
                         address      :: Linear } deriving (Show)


foreign export ccall sem_var :: GDSL_STATE -> P ID -> GDSL_INT -> IO (P Variable)
sem_var state id offset = wrap =<< Variable <$> unwrap id 
                                            <*> return (fromIntegral offset)

--------------- linear -------------------------------

foreign export ccall sem_lin_var :: GDSL_STATE -> P Variable -> IO (P Linear)
sem_lin_var state = uop Var

foreign export ccall sem_lin_imm :: GDSL_STATE -> GDSL_INT -> IO (P Linear)
sem_lin_imm state = wrap . Immediate . fromIntegral

foreign export ccall sem_lin_sub :: GDSL_STATE -> P Linear -> P Linear -> IO (P Linear)
sem_lin_sub state = binop LSUB
 
foreign export ccall sem_lin_add :: GDSL_STATE -> P Linear -> P Linear -> IO (P Linear)
sem_lin_add state = binop LADD
 
foreign export ccall sem_lin_scale :: GDSL_STATE -> GDSL_INT -> P Linear -> IO (P Linear)
sem_lin_scale state imm opnd = wrap =<< Scale (fromIntegral imm) <$> unwrap opnd

data Linear = Scale { scale_imm :: Word64,
                      scale_opnd :: Linear } 

            | Immediate Int64 

            | Var Variable

            | LADD { ladd_opnd1 :: Linear,
                     ladd_opnd2 :: Linear }

            | LSUB { lsub_opnd1 :: Linear,
                     lsub_opnd2 :: Linear }
              
              deriving (Show)


---------------------- sem_sexpr -------------------------

foreign export ccall sem_sexpr_lin :: GDSL_STATE -> P Linear -> IO (P SExpr)
sem_sexpr_lin state = uop LIN

foreign export ccall sem_sexpr_cmp :: GDSL_STATE -> P Comparator -> IO (P SExpr)
sem_sexpr_cmp state = uop CMP

foreign export ccall sem_sexpr_arb :: GDSL_STATE -> IO (P SExpr)
sem_sexpr_arb state = wrap ARB

data SExpr = ARB
           | CMP Comparator
           | LIN Linear
           deriving Show

---------------------- sem_expr_cmp -----------------------

foreign export ccall sem_cmpeq :: GDSL_STATE -> P Linear -> P Linear -> IO (P Comparator)
sem_cmpeq state = binop EQUAL

foreign export ccall sem_cmpneq :: GDSL_STATE -> P Linear -> P Linear -> IO (P Comparator)
sem_cmpneq state = binop NEQ

foreign export ccall sem_cmples :: GDSL_STATE -> P Linear -> P Linear -> IO (P Comparator)
sem_cmples state = binop LES

foreign export ccall sem_cmpleu :: GDSL_STATE -> P Linear -> P Linear -> IO (P Comparator)
sem_cmpleu state = binop LEU

foreign export ccall sem_cmplts :: GDSL_STATE -> P Linear -> P Linear -> IO (P Comparator)
sem_cmplts state = binop LTS

foreign export ccall sem_cmpltu :: GDSL_STATE -> P Linear -> P Linear -> IO (P Comparator)
sem_cmpltu state = binop LTU


data Comparator = LTU { ltu_opnd1 :: Linear,
                        ltu_opnd2 :: Linear }

                | LTS { lts_opnd1 :: Linear,
                        lts_opnd2 :: Linear }

                | LEU { leu_opnd1 :: Linear,
                        leu_opnd2 :: Linear }

                | LES { les_opnd1 :: Linear,
                        les_opnd2 :: Linear }

                | NEQ { neq_opnd1 :: Linear,
                        neq_opnd2 :: Linear }

                | EQUAL { eq_opnd1 :: Linear,
                          eq_opnd2 :: Linear }

                deriving Show

----------------------- sem_expr ----------------------

foreign export ccall sem_sexpr :: GDSL_STATE -> P SExpr -> IO (P Expr)
sem_sexpr state = uop EXPR_S

foreign export ccall sem_mul :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_mul state = binop MUL

foreign export ccall sem_div :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_div state = binop DIV

foreign export ccall sem_divs :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_divs state = binop DIVS

foreign export ccall sem_mods :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_mods state = binop MODS

foreign export ccall sem_mod :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_mod state = binop MOD

foreign export ccall sem_shl :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_shl state = binop SHL

foreign export ccall sem_shr :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_shr state = binop SHR

foreign export ccall sem_shrs :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_shrs state = binop SHRS

foreign export ccall sem_and :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_and state = binop AND

foreign export ccall sem_or :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_or state = binop OR

foreign export ccall sem_xor :: GDSL_STATE -> P Linear -> P Linear -> IO (P Expr)
sem_xor state = binop XOR

foreign export ccall sem_sx :: GDSL_STATE -> GDSL_INT -> P Linear -> IO (P Expr)
sem_sx state fromsize opnd1 = wrap =<< SX <$> return (fromIntegral fromsize)
                                          <*> unwrap opnd1

foreign export ccall sem_zx :: GDSL_STATE -> GDSL_INT -> P Linear -> IO (P Expr)
sem_zx state fromsize opnd1 = wrap =<< ZX <$> return (fromIntegral fromsize)
                                          <*> unwrap opnd1


data Expr = ZX { zx_fromsize :: Word64,
                 zx_opnd     :: Linear }

          | SX { sx_fromsize :: Word64,
                 sx_opnd     :: Linear }

          | XOR { xor_opnd1 :: Linear,
                  xor_opnd2 :: Linear }

          | OR { or_opnd1 :: Linear,
                 or_opnd2 :: Linear }

          | AND { and_opnd1 :: Linear,
                  and_opnd2 :: Linear }

          | SHRS { shrs_opnd1 :: Linear,
                   shrs_opnd2 :: Linear }

          | SHR { shr_opnd1 :: Linear,
                  shr_opnd2 :: Linear }

          | SHL { shl_opnd1 :: Linear,
                  shl_opnd2 :: Linear }

          | MODS { mods_opnd1 :: Linear,
                   mods_opnd2 :: Linear }

          | MOD { mod_opnd1 :: Linear,
                  mod_opnd2 :: Linear }

          | DIVS { divs_opnd1 :: Linear,
                   divs_opnd2 :: Linear }

          | DIV { div_opnd1 :: Linear,
                  div_opnd2 :: Linear }

          | MUL { mul_opnd1 :: Linear,
                  mul_opnd2 :: Linear }

          | EXPR_S SExpr

            deriving (Show)

--------------------- sem_varl --------------------------

foreign export ccall sem_varl :: GDSL_STATE -> P ID -> GDSL_INT -> GDSL_INT -> IO (P VarLimited)
sem_varl state i offset size = wrap =<< VarLimited <$> unwrap i
                                                   <*> return (fromIntegral offset)
                                                   <*> return (fromIntegral size)

--------------------- sem_varls -------------------------

foreign export ccall sem_varls_next :: GDSL_STATE -> P VarLimited -> P [VarLimited] -> IO (P [VarLimited])
sem_varls_next state next list = do
  x  <- unwrap next
  xs <- unwrap list
  wrap (xs ++ [x])

foreign export ccall sem_varls_init :: GDSL_STATE -> IO (P [VarLimited])
sem_varls_init state = wrap []


foreign export ccall sem_flop :: GDSL_STATE -> GDSL_INT -> IO (P FloatOperation)
sem_flop state con 
    | con == c'FLOP_FADD = wrap FADD
    | con == c'FLOP_FSUB = wrap FSUB
    | con == c'FLOP_FMUL = wrap FMUL

--------------------- sem_stmt -------------------------

data Statement = Throw Exception 
               | Assign { assign_size :: Word64,
                          assign_lhs  :: Variable,
                          assign_rhs  :: Expr }

               | Load { load_size :: Word64,
                        load_lhs  :: Variable,
                        load_address :: Address }

               | Store { store_size    :: Word64,
                         store_address :: Address,
                         store_rhs     :: Linear }

               | IfThenElse { ite_cond :: SExpr,
                              ite_then :: [Statement],
                              ite_else :: [Statement] }

               | While { while_cond :: SExpr, 
                         while_body :: [Statement] }

               | CBranch { cbranch_cond  :: SExpr,
                           cbranch_true  :: Address,
                           cbranch_false :: Address }

               | Branch { branch_type   :: BranchHint,
                          branch_target :: Address }

               | Flop { flop_op    :: FloatOperation, 
                        flop_flags :: Variable,
                        flop_lhs   :: VarLimited,
                        flop_rhs   :: [VarLimited] }

               | Prim { prim_op  :: String, 
                        prim_lhs :: [VarLimited], 
                        prim_rhs :: [VarLimited] }

                 deriving Show

data VarLimited = VarLimited { varl_id :: ID, varl_offset :: Word64, varl_size :: Word64 } deriving (Show)  
data Variable   = Variable   { var_id :: ID, var_offset :: Word64 } deriving (Show)

data FloatOperation = FADD | FSUB | FMUL deriving (Show)

data BranchHint = CALL | JMP | RET deriving Show


foreign export ccall sem_assign :: GDSL_STATE -> GDSL_INT -> P Variable -> P Expr -> IO (P Statement)
sem_assign state size lhs rhs = wrap =<< Assign <$> return (fromIntegral size)
                                                <*> unwrap lhs
                                                <*> unwrap rhs


foreign export ccall sem_load :: GDSL_STATE -> GDSL_INT -> P Variable -> P Address -> IO (P Statement)
sem_load state size lhs address = wrap =<< Load <$> return (fromIntegral size)
                                                <*> unwrap lhs
                                                <*> unwrap address

foreign export ccall sem_store :: GDSL_STATE -> GDSL_INT -> P Address -> P Linear -> IO (P Statement)
sem_store state size address rhs = wrap =<< Store <$> return (fromIntegral size)
                                                  <*> unwrap address
                                                  <*> unwrap rhs

foreign export ccall sem_ite :: GDSL_STATE -> P SExpr -> P [Statement] -> P [Statement] -> IO (P Statement)
sem_ite state cond then_b else_b = wrap =<< IfThenElse <$> unwrap cond
                                                       <*> unwrap then_b
                                                       <*> unwrap else_b

foreign export ccall sem_while :: GDSL_STATE -> P SExpr -> P [Statement] -> IO (P Statement)
sem_while state cond body = wrap =<< While <$> unwrap cond
                                           <*> unwrap body


foreign export ccall sem_cbranch :: GDSL_STATE -> P SExpr -> P Address -> P Address -> IO (P Statement)
sem_cbranch state cond true false = wrap =<< CBranch <$> unwrap cond
                                                     <*> unwrap true
                                                     <*> unwrap false


foreign export ccall sem_branch :: GDSL_STATE -> P BranchHint -> P Address -> IO (P Statement)
sem_branch state hint target = wrap =<< Branch <$> unwrap hint 
                                               <*> unwrap target


foreign export ccall sem_flop_stmt :: GDSL_STATE -> P FloatOperation -> P Variable -> P VarLimited -> P [VarLimited] -> IO (P Statement)
sem_flop_stmt state op flags lhs rhs = wrap =<< Flop <$> unwrap op
                                                     <*> unwrap flags
                                                     <*> unwrap lhs
                                                     <*> unwrap rhs
  
foreign export ccall sem_prim :: GDSL_STATE -> CString -> P [VarLimited] -> P [VarLimited] -> IO (P Statement)
sem_prim state op lhs rhs = wrap =<< Prim <$> peekCString op
                                          <*> unwrap lhs
                                          <*> unwrap rhs


foreign export ccall sem_throw :: GDSL_STATE -> P Exception -> IO (P Statement)
sem_throw state exception = wrap . Throw =<< unwrap exception


foreign export ccall branch_hint :: GDSL_STATE -> GDSL_INT -> IO (P BranchHint)
branch_hint state con 
    | con == c'BRANCH_HINT_JUMP = wrap JMP
    | con == c'BRANCH_HINT_CALL = wrap CALL
    | con == c'BRANCH_HINT_RET  = wrap RET

foreign export ccall sem_stmts_next :: GDSL_STATE -> P Statement -> P [Statement] -> IO (P [Statement])
sem_stmts_next state = list_next

foreign export ccall sem_stmts_init :: GDSL_STATE -> IO (P [Statement])
sem_stmts_init state = list_init


