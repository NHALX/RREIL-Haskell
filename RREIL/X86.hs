module RREIL.X86 where
import RREIL.GDSL
import RREIL.Internal.Types (GDSL_STATE,GDSL_INT,ASM_INSN,Statement)
import Foreign
import Foreign.C.Types
import Foreign.C.String


newtype X86 = X86 GDSL_STATE


instance GDSL X86 where
    gdsl_init             = gdsl_x86_rreil_init
    gdsl_destroy          = gdsl_x86_rreil_destroy 
    gdsl_set_code         = gdsl_x86_rreil_set_code
    gdsl_decode           = gdsl_x86_rreil_decode
    gdsl_insn_length      = gdsl_x86_rreil_insn_length
    gdsl_get_ip           = gdsl_x86_rreil_get_ip
    gdsl_seek             = gdsl_x86_rreil_seek
    gdsl_reset_heap       = gdsl_x86_rreil_reset_heap
    gdsl_heap_residency   = gdsl_x86_rreil_heap_residency
    gdsl_config_default   = gdsl_x86_rreil_config_default
    gdsl_translate        = gdsl_x86_rreil_translate

    gdsl_rreil_convert_sem_stmt_list = gdsl_x86_rreil_rreil_convert_sem_stmt_list

    gdsl_generalize       = gdsl_x86_rreil_generalize
    gdsl_asm_convert_insn = gdsl_x86_rreil_asm_convert_insn

--- x86 specific --
foreign import ccall unsafe gdsl_x86_rreil_config_mode32 :: X86 -> IO GDSL_INT


-------------------
-- foreign import ccall unsafe gdsl_config_opnd_sz_16 :: X86 -> IO GDSL_INT
foreign import ccall unsafe gdsl_x86_rreil_config_default :: X86 -> IO GDSL_INT
foreign import ccall unsafe gdsl_x86_rreil_init :: IO X86
foreign import ccall unsafe gdsl_x86_rreil_destroy :: X86 -> IO ()
foreign import ccall unsafe gdsl_x86_rreil_set_code :: X86 -> Ptr Word8 -> CSize -> CSize -> IO ()
foreign import ccall unsafe gdsl_x86_rreil_decode :: X86 -> GDSL_INT -> IO GDSL_INSNDATA
foreign import ccall unsafe gdsl_x86_rreil_insn_length :: X86 -> GDSL_INSNDATA -> IO CInt
foreign import ccall unsafe gdsl_x86_rreil_get_ip :: X86 -> IO CSize
foreign import ccall unsafe gdsl_x86_rreil_seek :: X86 -> CSize -> IO GDSL_INT
foreign import ccall unsafe gdsl_x86_rreil_reset_heap :: X86 -> IO ()
foreign import ccall unsafe gdsl_x86_rreil_heap_residency :: X86 -> IO CSize
foreign import ccall unsafe gdsl_x86_rreil_translate :: X86 -> GDSL_INSNDATA -> IO GDSL_OBJ
foreign import ccall unsafe gdsl_x86_rreil_generalize :: X86 -> GDSL_INSNDATA -> IO GDSL_OBJ

foreign import ccall safe gdsl_x86_rreil_rreil_convert_sem_stmt_list :: X86 -> RREIL_CONS -> GDSL_OBJ -> IO (StablePtr [Statement])
foreign import ccall safe gdsl_x86_rreil_asm_convert_insn :: X86 -> ASM_CONS -> GDSL_OBJ -> IO (StablePtr ASM_INSN)
