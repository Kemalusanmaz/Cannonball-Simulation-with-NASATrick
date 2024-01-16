/*****************************************************************************
PURPOSE:    ( Analytical Cannon )
*****************************************************************************/
#include <stdio.h>
#include <math.h>
#include "../include/cannon_analytic.h"
#include "../models/failure/include/failure.h"

int cannon_analytic( CANNON* C, FAILURE* F ) {

    C->acc[0] =  0.00;
    C->acc[1] = -9.81 ;
    C->vel[0] = C->vel0[0] + C->acc[0] * C->time ;
    C->vel[1] = C->vel0[1] + C->acc[1] * C->time ;
    C->pos[0] = C->pos0[0] + (C->vel0[0] + (0.5) * C->acc[0] * C->time) * C->time ;
    C->pos[1] = C->pos0[1] + (C->vel0[1] + (0.5) * C->acc[1] * C->time) * C->time ;
    if (C->pos[1] < 0.0) {
        C->impactTime = (- C->vel0[1] - sqrt( C->vel0[1] * C->vel0[1] - 2 * C->pos0[1]))/C->acc[1];
        C->pos[0] = C->impactTime * C->vel0[0];
        C->pos[1] = 0.0;
        C->vel[0] = 0.0;
        C->vel[1] = 0.0;
        if ( !C->impact ) {
            C->impact = 1;
            fprintf(stderr, "\n\nIMPACT: t = %.9f, pos[0] = %.9f\n\n", C->impactTime, C->pos[0] ) ;
        }
    }

    
    int flag = 0;
    if (flag == 0 && C->time > 7.0)
    {
        F->isBroken = true;
        F->isOpen = false;
        flag = 1;
    }
    
    /*
     * Increment time by the time delta associated with this job
     * Note that the 0.01 matches the frequency of this job
     * as specified in the S_define.
     */
    C->time += 0.01 ;
    return 0 ;
}