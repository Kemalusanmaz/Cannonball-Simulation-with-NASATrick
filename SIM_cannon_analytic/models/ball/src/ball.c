/******************************* TRICK HEADER ****************************
PURPOSE: (Set the initial data values)
*************************************************************************/

/* Model Include files */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "../include/ball.h"
#include "../../cannon/include/cannon.h"

/* default data job */
void ball_default_data(BALL* B) {

    B->acc[0] = 0.0;
    B->acc[1] = -9.81;
    B->init_angle = M_PI/6 ;
    B->init_speed  = 50.0 ;
    B->pos0[0] = 0.0 ;
    B->pos0[1] = 0.0 ;

    B->time = 0.0 ;

    B->impact = 0 ;
    B->impactTime = 0.0 ;

    
}



/* initialization job */
void ball_init(BALL* B) {
       
    B->vel0[0] = B->init_speed*cos(B->init_angle);
    B->vel0[1] = B->init_speed*sin(B->init_angle);

    B->vel[0] = B->vel0[0] ; 
    B->vel[1] = B->vel0[1] ; 

    B->impactTime = 0.0;
    B->impact = 0.0;  

    
}

void ball_step(BALL* B, InputHeightValue* I) {


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

    // I-> height = (B->vel0[0] + B->acc[0] * B->time) + 3;

    

    B->time += 0.01 ;

    I -> height = B->vel0[0] + B->acc[0] * B->time ;
  

}



