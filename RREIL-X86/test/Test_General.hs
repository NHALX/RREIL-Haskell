{-# LANGUAGE OverloadedStrings #-}

module Main where
import Foreign
import Foreign.C.Types
import Data.IORef
import RREIL
import RREIL.GDSL
import RREIL.X86

import Control.Monad.Trans
import System.Exit (exitFailure,exitSuccess)

var_ip = Variable {var_id = ID "IP", var_offset = 0}
var_si = Variable {var_id = ID "SI", var_offset = 0}
var_sp = Variable {var_id = ID "SP", var_offset = 0}

expected = [
    Assign {assign_size = 64, 
            assign_lhs = var_ip,
            assign_rhs = EXPR_S (LIN (LADD { 
                ladd_opnd1 = Var var_ip, 
                ladd_opnd2 = Immediate 1
                }))
            },
            
    Assign {assign_size = 64, 
            assign_lhs = Variable {var_id = Temp 0, var_offset = 0}, 
            assign_rhs = EXPR_S (LIN (Var var_si))},
            
    Assign {assign_size = 64, 
            assign_lhs = var_sp, 
            assign_rhs = EXPR_S (LIN (LSUB {
                lsub_opnd1 = Var var_sp, 
                lsub_opnd2 = Immediate 8
                }))
            },
            
    Store {store_size = 64, 
           store_address = Address {address_size = 64, address = Var var_sp}, 
           store_rhs = Var (Variable {var_id = Temp 0, var_offset = 0})
           }
    ]
    
main = do
       xs <- runRREIL (f "\x56" :: RM X86 [Statement])
       
       if xs == expected
        then exitSuccess
        else exitFailure
        
    where
      f b = do
            source b 0
            xs <- decode g

            liftIO . print =<< heap_size
            heap_reset
            liftIO . print =<< ip
            seek 0
            liftIO . print =<< ip
            return xs
            
      g :: GDSL p => DRM p [Statement]
      g = do
           x <- instruction
           y <- rreil
           liftIO . print =<< inslen
           liftIO $ do 
                    print x
                    mapM_ print y
           return y