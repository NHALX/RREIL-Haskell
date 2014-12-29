{-# LANGUAGE ForeignFunctionInterface #-}
module RREIL where
import RREIL.GDSL
import RREIL.Internal.Types
import Foreign.ForeignPtr
import Foreign
import Data.IORef
import Control.Applicative
import Control.Monad.Reader
import Debug.Trace
import qualified Data.ByteString as B
import qualified Data.ByteString.Internal as B


type RM p = ReaderT p IO
type DRM p = ReaderT (p,GDSL_INSNDATA) IO

{--
state :: GDSL p => RM p GDSL_STATE
state = toGDSL_STATE <$> ask

state2 :: GDSL p => DRM p (GDSL_STATE,GDSL_INSNDATA)
state2 = do
  (a,b) <- ask
  return (toGDSL_STATE a, b)
--}

heap_size :: GDSL p => Integral z => RM p z
heap_size = liftM fromIntegral $ (liftIO . gdsl_heap_residency) =<< ask

heap_reset :: GDSL p => RM p ()
heap_reset = (liftIO . gdsl_reset_heap) =<< ask

seek :: (Integral z, GDSL p) => z -> RM p z
seek z = do
  ctx <- ask
  liftIO $ liftM fromIntegral (gdsl_seek ctx (fromIntegral z))

ip :: (Integral z, GDSL p) => RM p z
ip = do
  ctx <- ask
  liftIO $ liftM fromIntegral (gdsl_get_ip ctx)


inslen :: (GDSL p) => DRM p Int
inslen = do
  (ctx,insn) <- ask
  liftIO $ liftM fromIntegral (gdsl_insn_length ctx insn)

{--
string_t gdf_prettyp_insn(state_t state, obj_t insn)
  return gdsl_merge_rope(state, gdsl_pretty(state, insn));

string_t gdf_prettyp_rreil(state_t state, obj_t rreil)
  return gdsl_merge_rope(state, gdsl_rreil_pretty(state, rreil));

--}

-- |Lift instruction to RREIL

rreil :: GDSL p => DRM p [Statement]
rreil = do
  (ctx,insn) <- ask
  liftIO $ do
          x <- gdsl_translate ctx insn
          y <- gdcb_haskell_rreil
          unwrap =<< gdsl_rreil_convert_sem_stmt_list ctx y x


-- |Generalize instruction

instruction :: GDSL p => DRM p ASM_INSN
instruction = do
  (ctx,insn) <- ask
  liftIO $ do
           x <- gdsl_generalize ctx insn
           y <- gdcb_haskell_asm
           unwrap =<< gdsl_asm_convert_insn ctx y x
        

decode :: GDSL p => DRM p a -> RM p a
decode f = do
  ctx  <- ask
  insn <- liftIO $ do
             cfg <- gdsl_config_default ctx
             gdsl_decode ctx cfg

  liftIO $ runReaderT f (ctx,insn)

  
source :: (GDSL p, Integral z) => B.ByteString -> z -> RM p ()
source code base = do
  ctx <- ask
  liftIO $ withForeignPtr fd $ \d -> do
           gdsl_set_code ctx (d `plusPtr` offset) (fromIntegral size) (fromIntegral base)

    where
      (fd,offset,size) = B.toForeignPtr code

runRREIL :: GDSL p => RM p a -> IO a
runRREIL f = do 
  ctx <- gdsl_init
  x   <- runReaderT f ctx
  gdsl_destroy ctx
  return x


