#include "../include/ballWrapper.h"
#include "../../ball/include/ball.h"
#include "../../cannon/include/cannon.h"
#include "../../FDIR/include/ballFDIR.h"

void ball_init_wrapper(BALL* B,FAILURE* F){
    ball_init_FDIR(B,F);
}

void ball_step_wrapper(BALL* B,FAILURE* F, InputHeightValue* I){
    ball_step_FDIR(B,F,I);
}