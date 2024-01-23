#include "../include/cannonWrapper.h"
#include "../../cannon/include/cannon.h"
#include "../../FDIR/include/cannonFDIR.h"

void cannon_init_wrapper(CANNON* B,CANNONFAILURE* F){
    cannon_init_FDIR(B,F);
}

void cannon_step_wrapper(CANNON* B,CANNONFAILURE* F, InputHeightValue* I){
    cannon_step_FDIR(B,F,I);
}