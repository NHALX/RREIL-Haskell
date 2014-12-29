module RREIL.MIPS where
import RREIL.GDSL
import RREIL.Internal.Types (GDSL_STATE,GDSL_INT,ASM_INSN,Statement)
import Foreign
import Foreign.C.Types
import Foreign.C.String


newtype MIPS = MIPS GDSL_STATE

instance GDSL MIPS where
    gdsl_init             = gdsl_mips_rreil_init
    gdsl_destroy          = gdsl_mips_rreil_destroy 
    gdsl_set_code         = gdsl_mips_rreil_set_code
    gdsl_decode           = gdsl_mips_rreil_decode
    gdsl_insn_length _ _  = return 4
    gdsl_get_ip           = gdsl_mips_rreil_get_ip
    gdsl_seek             = gdsl_mips_rreil_seek
    gdsl_reset_heap       = gdsl_mips_rreil_reset_heap
    gdsl_heap_residency   = gdsl_mips_rreil_heap_residency
    gdsl_config_default   = gdsl_mips_rreil_config_default
    gdsl_translate        = gdsl_mips_rreil_translate

    gdsl_rreil_convert_sem_stmt_list = gdsl_mips_rreil_rreil_convert_sem_stmt_list

    gdsl_generalize       = gdsl_mips_rreil_generalize
    gdsl_asm_convert_insn = gdsl_mips_rreil_asm_convert_insn



foreign import ccall unsafe gdsl_mips_rreil_config_default :: MIPS -> IO GDSL_INT
-- foreign import ccall unsafe gdsl_config_opnd_sz_16 :: MIPS -> IO GDSL_INT

foreign import ccall unsafe gdsl_mips_rreil_init :: IO MIPS
foreign import ccall unsafe gdsl_mips_rreil_destroy :: MIPS -> IO ()
foreign import ccall unsafe gdsl_mips_rreil_set_code :: MIPS -> Ptr Word8 -> CSize -> CSize -> IO ()
foreign import ccall unsafe gdsl_mips_rreil_decode :: MIPS -> GDSL_INT -> IO GDSL_INSNDATA
foreign import ccall unsafe gdsl_mips_rreil_get_ip :: MIPS -> IO CSize
foreign import ccall unsafe gdsl_mips_rreil_seek :: MIPS -> CSize -> IO GDSL_INT
foreign import ccall unsafe gdsl_mips_rreil_reset_heap :: MIPS -> IO ()
foreign import ccall unsafe gdsl_mips_rreil_heap_residency :: MIPS -> IO CSize
foreign import ccall unsafe gdsl_mips_rreil_translate :: MIPS -> GDSL_INSNDATA -> IO GDSL_OBJ
foreign import ccall unsafe gdsl_mips_rreil_generalize :: MIPS -> GDSL_INSNDATA -> IO GDSL_OBJ

foreign import ccall safe gdsl_mips_rreil_rreil_convert_sem_stmt_list :: MIPS -> RREIL_CONS -> GDSL_OBJ -> IO (StablePtr [Statement])
foreign import ccall safe gdsl_mips_rreil_asm_convert_insn :: MIPS -> ASM_CONS -> GDSL_OBJ -> IO (StablePtr ASM_INSN)
