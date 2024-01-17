/******************************* TRICK HEADER ****************************
PURPOSE: (Set the initial data values)
*************************************************************************/

/* Model Include files */
#include <math.h>
#include "../include/ball.h"
#include "../../failure/include/failure.h"

/* default data job */
int ball_default_data( BALL* B, FAILURE* F) {

    B->acc[0] = 0.0;
    B->acc[1] = -9.81;
    B->init_angle = M_PI/6 ;
    B->init_speed  = 50.0 ;
    B->pos0[0] = 0.0 ;
    B->pos0[1] = 0.0 ;

    B->time = 0.0 ;

    B->impact = 0 ;
    B->impactTime = 0.0 ;

    
    F->isBroken = false;
    F->isOpen = true;
    F->isReset = false;    

    return 0 ;
}



/* initialization job */
int ball_init( BALL* B, FAILURE* F) {
   
    F->isBroken = false;
    F->isOpen = true;
    F->isReset = false;
    
    B->vel0[0] = B->init_speed*cos(B->init_angle);
    B->vel0[1] = B->init_speed*sin(B->init_angle);

    B->vel[0] = B->vel0[0] ; 
    B->vel[1] = B->vel0[1] ; 

    B->impactTime = 0.0;
    B->impact = 0.0;

    ball_reset(B,F);   

    return 0 ; 
}



