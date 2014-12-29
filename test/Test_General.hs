{-# LANGUAGE OverloadedStrings #-}

module Main where
import Foreign
import Foreign.C.Types
import Data.IORef
import RREIL
import RREIL.GDSL
import RREIL.X86
import RREIL.MIPS
import RREIL.AVR

import Control.Monad.Trans
import System.Exit (exitFailure,exitSuccess)

main = do
       runRREIL (f "\x56" :: RM X86 ())
       runRREIL (f "\x55\x31\xD2\x89" :: RM MIPS ())
       runRREIL (f "\x55\x31\xD2\x89\xE5\x8B" :: RM AVR ())
       exitSuccess
       
    where
      f b = do
            source b 0
            decode g

            liftIO . print =<< heap_size
            heap_reset
            liftIO . print =<< ip
            seek 0
            liftIO . print =<< ip

      g :: GDSL p => DRM p ()
      g = do
           x <- instruction
           y <- rreil
           liftIO . print =<< inslen
           liftIO $ do 
                    print x
                    mapM_ print y
