{-# LANGUAGE ForeignFunctionInterface, GeneralizedNewtypeDeriving #-}
module RREIL (
    module RREIL.Internal.Types,
    heap_reset,heap_size,seek,ip,inslen,rreil,
    instruction,decode,source,
    runRRT,GDSL,
    RRT,RRDec) 
where
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


newtype (MonadIO m, GDSL p) => RRT p m a = RRT (ReaderT p m a) 
    deriving (Monad, Functor, Applicative, MonadIO, MonadReader p)
    
newtype (GDSL p) => RRDec p a = RRDec (ReaderT (p,GDSL_INSNDATA) IO a) 
    deriving (Monad, Functor, Applicative, MonadIO, MonadReader (p,GDSL_INSNDATA))


heap_size :: (GDSL p, MonadIO m) => RRT p m Int
heap_size = liftM fromIntegral $ (liftIO . gdsl_heap_residency) =<< ask

heap_reset :: (GDSL p, MonadIO m) => RRT p m ()
heap_reset = (liftIO . gdsl_reset_heap) =<< ask

seek :: (GDSL p, MonadIO m) => Int -> RRT p m Int
seek z = do
  ctx <- ask
  liftIO $ liftM fromIntegral (gdsl_seek ctx (fromIntegral z))

ip :: (GDSL p, MonadIO m) => RRT p m Word64
ip = do
  ctx <- ask
  liftIO $ liftM fromIntegral (gdsl_get_ip ctx)


inslen :: (GDSL p) => RRDec p Int
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

rreil :: (GDSL p) => RRDec p [STMT]
rreil = do
  (ctx,insn) <- ask
  liftIO $ do
          x <- gdsl_translate ctx insn
          y <- gdcb_haskell_rreil
          unwrap =<< gdsl_rreil_convert_sem_stmt_list ctx y x


-- |Generalize instruction

instruction :: (GDSL p) => RRDec p ASM_INSN
instruction = do
  (ctx,insn) <- ask
  liftIO $ do
           x <- gdsl_generalize ctx insn
           y <- gdcb_haskell_asm
           unwrap =<< gdsl_asm_convert_insn ctx y x
        

decode :: (GDSL p, MonadIO m) => RRDec p a -> RRT p m a
decode (RRDec f) = do
  ctx  <- ask
  insn <- liftIO $ do
             cfg <- gdsl_config_default ctx
             gdsl_decode ctx cfg

  liftIO $ runReaderT f (ctx,insn)

  
source :: (GDSL p, MonadIO m) => B.ByteString -> Word -> RRT p m ()
source code base = do
  ctx <- ask
  liftIO $ withForeignPtr fd $ \d -> do
           gdsl_set_code ctx (d `plusPtr` offset) (fromIntegral size) (fromIntegral base)

    where
      (fd,offset,size) = B.toForeignPtr code

runRRT :: (GDSL p, MonadIO m) => RRT p m a -> m a
runRRT (RRT f) = do 
  ctx <- liftIO gdsl_init
  x   <- runReaderT f ctx
  liftIO (gdsl_destroy ctx)
  return x

