module RREIL.GDSL where
import RREIL.Internal.C_gdsl_generic
import RREIL.Internal.Types (STMT,ASM_INSN,GDSL_INT)
import Foreign
import Foreign.C.Types
import Foreign.C.String



type GDSL_OBJ      = Ptr ()
type GDSL_RREIL    = GDSL_OBJ
type GDSL_ASM_INSN = GDSL_OBJ
newtype GDSL_INSNDATA = GDSL_INSNDATA (Ptr ())
newtype ASM_CONS = ASM_CONS (Ptr ())
newtype RREIL_CONS = RREIL_CONS (Ptr ())


foreign import ccall unsafe gdcb_haskell_asm :: IO ASM_CONS
foreign import ccall unsafe gdcb_haskell_rreil :: IO RREIL_CONS


class GDSL a where

    -- |An initial run-time state can be obtained by calling gdsl_init. 
    -- The returned state should be freed by calling gdsl_destroy. 
    -- Note that several states can be active at the same time, 
    -- making it possible to run GDSL programs in several threads.
    gdsl_init :: IO a


    -- |Frees the heap and the decoder state.
    gdsl_destroy :: a -> IO ()


    -- |The functions sets the buffer that instructions are read from. 
    -- The buf parameter contains the buffer of size buf_len. 
    -- The parameter base denotes the address that the built-in GDSL function ip_get returns 
    -- when called after no bytes have been consumed from the buffer, 
    -- i.e., it denotes the starting address of the buffer.
    gdsl_set_code :: a -> Ptr Word8 -> CSize -> CSize -> IO ()


    -- |Decode instruction at current position
    gdsl_decode :: a -> GDSL_INT -> IO GDSL_INSNDATA


    -- |Get length of instruction at current position
    gdsl_insn_length :: a -> GDSL_INSNDATA -> IO CInt


    -- |Query the offset of the current IP relative to base. 
    gdsl_get_ip :: a -> IO CSize


    -- |Set the current code position to this address. 
    gdsl_seek :: a -> CSize -> IO GDSL_INT


    -- |Reset the heap. Objects returned by exported function are no longer valid
    --  after a call to this funciton. This function does not necessarily
    --  deallocate all of the heap.
    gdsl_reset_heap :: a -> IO ()


    -- |Query the num of bytes currently allocated on the heap. 
    gdsl_heap_residency :: a -> IO CSize


    gdsl_config_default :: a -> IO GDSL_INT


    gdsl_translate :: a -> GDSL_INSNDATA -> IO GDSL_OBJ


    gdsl_rreil_convert_sem_stmt_list :: a -> RREIL_CONS -> GDSL_OBJ -> IO (StablePtr [STMT])


    gdsl_generalize :: a -> GDSL_INSNDATA -> IO GDSL_OBJ


    gdsl_asm_convert_insn :: a -> ASM_CONS -> GDSL_OBJ -> IO (StablePtr ASM_INSN)
