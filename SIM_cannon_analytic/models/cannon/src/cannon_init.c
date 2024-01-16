/******************************* TRICK HEADER ****************************
PURPOSE: (Set the initial data values)
*************************************************************************/

/* Model Include files */
#include <math.h>
#include "../include/cannon.h"
#include "../../failure/include/failure.h"

/* default data job */
int cannon_default_data( CANNON* C, FAILURE* H ) {

    C->acc[0] = 0.0;
    C->acc[1] = -9.81;
    C->init_angle = M_PI/6 ;
    C->init_speed  = 50.0 ;
    C->pos0[0] = 0.0 ;
    C->pos0[1] = 0.0 ;

    C->time = 0.0 ;

    C->impact = 0 ;
    C->impactTime = 0.0 ;

    H->isBroken = false;
    H->isOpen = true;

    return 0 ;
}

/* initialization job */
int cannon_init( CANNON* C, FAILURE* H) {
   
    C->vel0[0] = C->init_speed*cos(C->init_angle);
    C->vel0[1] = C->init_speed*sin(C->init_angle);

    C->vel[0] = C->vel0[0] ; 
    C->vel[1] = C->vel0[1] ; 

    C->impactTime = 0.0;
    C->impact = 0.0;

    H->isBroken = false;
    H->isOpen = true;

    return 0 ; 
}