/*****************************************************************************
PURPOSE:    ( Analytical Ball )
*****************************************************************************/
#include <stdio.h>
#include <math.h>
#include "../include/ball.h"
#include "../../failure/include/failure.h"

int ball_analytic( BALL* B, FAILURE* F) {


    B->acc[0] =  0.00;
    B->acc[1] = -9.81 ;
    B->vel[0] = B->vel0[0] + B->acc[0] * B->time ;
    B->vel[1] = B->vel0[1] + B->acc[1] * B->time ;
    B->pos[0] = B->pos0[0] + (B->vel0[0] + (0.5) * B->acc[0] * B->time) * B->time ;
    B->pos[1] = B->pos0[1] + (B->vel0[1] + (0.5) * B->acc[1] * B->time) * B->time ;
    if (B->pos[1] < 0.0) {
        B->impactTime = (- B->vel0[1] - sqrt( B->vel0[1] * B->vel0[1] - 2 * B->pos0[1]))/B->acc[1];
        B->pos[0] = B->impactTime * B->vel0[0];
        B->pos[1] = 0.0;
        B->vel[0] = 0.0;
        B->vel[1] = 0.0;
        if ( !B->impact ) {
            B->impact = 1;
            fprintf(stderr, "\n\nIMPACT: t = %.9f, pos[0] = %.9f\n\n", B->impactTime, B->pos[0] ) ;
        }
    }

 
    B->time += 0.01 ;


    
    ball_reset(B,F);

    return 0 ;
}