#include "../include/ballWrapper.h"
#include "../../ball/include/ball.h"
#include "../../cannon/include/cannon.h"
#include "../../FDIR/include/ballFDIR.h"

void ball_init_wrapper(BALL* B){    
    ball_init(B);
}

void ball_step_wrapper(BALL* B, InputHeightValue* I){
    ball_step(B,I);
}