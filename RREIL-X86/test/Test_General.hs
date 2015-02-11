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

var_ip = VAR {var_id = ID "IP", var_offset = 0}
var_si = VAR {var_id = ID "SI", var_offset = 0}
var_sp = VAR {var_id = ID "SP", var_offset = 0}

expected = [
    ASSIGN {assign_size = 64, 
            assign_lhs = var_ip,
            assign_rhs = EXPR_SEXPR (SEXPR_LIN (LIN_ADD { 
                ladd_opnd1 = LIN_VAR var_ip, 
                ladd_opnd2 = LIN_IMM 1
                }))
            },
            
    ASSIGN {assign_size = 64, 
            assign_lhs = VAR {var_id = TEMP 0, var_offset = 0}, 
            assign_rhs = EXPR_SEXPR (SEXPR_LIN (LIN_VAR var_si))},
            
    ASSIGN {assign_size = 64, 
            assign_lhs = var_sp, 
            assign_rhs = EXPR_SEXPR (SEXPR_LIN (LIN_SUB {
                lsub_opnd1 = LIN_VAR var_sp, 
                lsub_opnd2 = LIN_IMM 8
                }))
            },
            
    STORE {store_size = 64, 
           store_address = ADDRESS {address_size = 64, address = LIN_VAR var_sp}, 
           store_rhs = LIN_VAR (VAR {var_id = TEMP 0, var_offset = 0})
           }
    ]
    
main = do
       xs <- runRRT (f "\x56" :: RRT X86_64 IO [STMT])
       
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
            
      g :: GDSL p => RRDec p [STMT]
      g = do
           x <- instruction
           y <- rreil
           liftIO . print =<< inslen
           liftIO $ do 
                    print x
                    mapM_ print y
           return y