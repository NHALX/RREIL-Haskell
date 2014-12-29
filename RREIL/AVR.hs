module RREIL.AVR where
import RREIL.GDSL
import RREIL.Internal.Types (GDSL_STATE,GDSL_INT,ASM_INSN,Statement)
import Foreign
import Foreign.C.Types
import Foreign.C.String


newtype AVR = AVR GDSL_STATE

instance GDSL AVR where
    gdsl_init             = gdsl_avr_rreil_init
    gdsl_destroy          = gdsl_avr_rreil_destroy 
    gdsl_set_code         = gdsl_avr_rreil_set_code
    gdsl_decode           = gdsl_avr_rreil_decode
    gdsl_insn_length _ _  = return 2
    gdsl_get_ip           = gdsl_avr_rreil_get_ip
    gdsl_seek             = gdsl_avr_rreil_seek
    gdsl_reset_heap       = gdsl_avr_rreil_reset_heap
    gdsl_heap_residency   = gdsl_avr_rreil_heap_residency
    gdsl_config_default   = gdsl_avr_rreil_config_default
    gdsl_translate        = gdsl_avr_rreil_translate

    gdsl_rreil_convert_sem_stmt_list = gdsl_avr_rreil_rreil_convert_sem_stmt_list

    gdsl_generalize       = gdsl_avr_rreil_generalize
    gdsl_asm_convert_insn = gdsl_avr_rreil_asm_convert_insn



foreign import ccall unsafe gdsl_avr_rreil_config_default :: AVR -> IO GDSL_INT

foreign import ccall unsafe gdsl_avr_rreil_init :: IO AVR
foreign import ccall unsafe gdsl_avr_rreil_destroy :: AVR -> IO ()
foreign import ccall unsafe gdsl_avr_rreil_set_code :: AVR -> Ptr Word8 -> CSize -> CSize -> IO ()
foreign import ccall unsafe gdsl_avr_rreil_decode :: AVR -> GDSL_INT -> IO GDSL_INSNDATA
foreign import ccall unsafe gdsl_avr_rreil_get_ip :: AVR -> IO CSize
foreign import ccall unsafe gdsl_avr_rreil_seek :: AVR -> CSize -> IO GDSL_INT
foreign import ccall unsafe gdsl_avr_rreil_reset_heap :: AVR -> IO ()
foreign import ccall unsafe gdsl_avr_rreil_heap_residency :: AVR -> IO CSize
foreign import ccall unsafe gdsl_avr_rreil_translate :: AVR -> GDSL_INSNDATA -> IO GDSL_OBJ
foreign import ccall unsafe gdsl_avr_rreil_generalize :: AVR -> GDSL_INSNDATA -> IO GDSL_OBJ

foreign import ccall safe gdsl_avr_rreil_rreil_convert_sem_stmt_list :: AVR -> RREIL_CONS -> GDSL_OBJ -> IO (StablePtr [Statement])
foreign import ccall safe gdsl_avr_rreil_asm_convert_insn :: AVR -> ASM_CONS -> GDSL_OBJ -> IO (StablePtr ASM_INSN)
