{-# OPTIONS_GHC -fno-warn-unused-imports #-}
#include <bindings.dsl.h>
#include "gdsl_generic.h"
module RREIL.Internal.C_gdsl_generic where
import Foreign.Ptr
import Data.Word
#strict_import

{- enum id_shared {
    ID_FLOATING_FLAGS = 0
}; -}
#integral_t enum id_shared
#num ID_FLOATING_FLAGS

{- enum branch_hint {
    BRANCH_HINT_JUMP = 0, BRANCH_HINT_CALL = 1, BRANCH_HINT_RET = 2
}; -}
#integral_t enum branch_hint
#num BRANCH_HINT_JUMP
#num BRANCH_HINT_CALL
#num BRANCH_HINT_RET

{- enum exception {
    EXCEPTION_DIVISION_BY_ZERO = 0
}; -}
#integral_t enum exception
#num EXCEPTION_DIVISION_BY_ZERO

{- enum flop {
    FLOP_FADD = 0, FLOP_FSUB = 1, FLOP_FMUL = 2
}; -}
#integral_t enum flop
#num FLOP_FADD
#num FLOP_FSUB
#num FLOP_FMUL

{- enum optimization_configuration {
    PRESERVATION_EVERYWHERE = 1,
    PRESERVATION_BLOCK = 2,
    PRESERVATION_CONTEXT = 4
}; -}
#integral_t enum optimization_configuration
#num PRESERVATION_EVERYWHERE
#num PRESERVATION_BLOCK
#num PRESERVATION_CONTEXT

{- typedef void * obj_t; -}
#synonym_t obj_t, (Ptr ())

{- typedef struct state * state_t; -}
#synonym_t state_t , (Ptr ())

{- typedef long long int int_t; -}
#synonym_t int_t , Int64




