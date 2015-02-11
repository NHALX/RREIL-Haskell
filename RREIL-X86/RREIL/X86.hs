{-# LANGUAGE FlexibleInstances #-}
module RREIL.X86 where
import RREIL.GDSL
import RREIL (GDSL_STATE,GDSL_INT,ASM_INSN,STMT)
import Foreign
import Foreign.C.Types
import Foreign.C.String
import GHC.TypeLits

data M32
data M64

newtype X86 a = X86 GDSL_STATE

type X86_32 = X86 M32
type X86_64 = X86 M64

instance GDSL (X86 M64) where
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
    
instance GDSL (X86 M32) where
    gdsl_init             = gdsl_x86_rreil_init
    gdsl_destroy          = gdsl_x86_rreil_destroy 
    gdsl_set_code         = gdsl_x86_rreil_set_code
    gdsl_decode           = gdsl_x86_rreil_decode
    gdsl_insn_length      = gdsl_x86_rreil_insn_length
    gdsl_get_ip           = gdsl_x86_rreil_get_ip
    gdsl_seek             = gdsl_x86_rreil_seek
    gdsl_reset_heap       = gdsl_x86_rreil_reset_heap
    gdsl_heap_residency   = gdsl_x86_rreil_heap_residency
    gdsl_config_default   = gdsl_x86_rreil_config_mode32
    gdsl_translate        = gdsl_x86_rreil_translate

    gdsl_rreil_convert_sem_stmt_list = gdsl_x86_rreil_rreil_convert_sem_stmt_list

    gdsl_generalize       = gdsl_x86_rreil_generalize
    gdsl_asm_convert_insn = gdsl_x86_rreil_asm_convert_insn
    
--- x86 specific --
foreign import ccall unsafe gdsl_x86_rreil_config_mode32 :: X86 a -> IO GDSL_INT


-------------------
-- foreign import ccall unsafe gdsl_config_opnd_sz_16 :: X86 a -> IO GDSL_INT
foreign import ccall unsafe gdsl_x86_rreil_config_default :: X86 a -> IO GDSL_INT
foreign import ccall unsafe gdsl_x86_rreil_init :: IO (X86 a)
foreign import ccall unsafe gdsl_x86_rreil_destroy :: X86 a -> IO ()
foreign import ccall unsafe gdsl_x86_rreil_set_code :: X86 a -> Ptr Word8 -> CSize -> CSize -> IO ()
foreign import ccall unsafe gdsl_x86_rreil_decode :: X86 a -> GDSL_INT -> IO GDSL_INSNDATA
foreign import ccall unsafe gdsl_x86_rreil_insn_length :: X86 a -> GDSL_INSNDATA -> IO CInt
foreign import ccall unsafe gdsl_x86_rreil_get_ip :: X86 a -> IO CSize
foreign import ccall unsafe gdsl_x86_rreil_seek :: X86 a -> CSize -> IO GDSL_INT
foreign import ccall unsafe gdsl_x86_rreil_reset_heap :: X86 a -> IO ()
foreign import ccall unsafe gdsl_x86_rreil_heap_residency :: X86 a -> IO CSize
foreign import ccall unsafe gdsl_x86_rreil_translate :: X86 a -> GDSL_INSNDATA -> IO GDSL_OBJ
foreign import ccall unsafe gdsl_x86_rreil_generalize :: X86 a -> GDSL_INSNDATA -> IO GDSL_OBJ

foreign import ccall safe gdsl_x86_rreil_rreil_convert_sem_stmt_list :: X86 a -> RREIL_CONS -> GDSL_OBJ -> IO (StablePtr [STMT])
foreign import ccall safe gdsl_x86_rreil_asm_convert_insn :: X86 a -> ASM_CONS -> GDSL_OBJ -> IO (StablePtr ASM_INSN)
