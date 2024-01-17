/******************************* TRICK HEADER ****************************
PURPOSE: (Set the initial data values)
*************************************************************************/

/* Model Include files */
#include <math.h>
#include "../include/ball.h"
#include <string.h>
#include <stdio.h>
#include "../../failure/include/failure.h"


/* initialization job */
int ball_reset(BALL *B, FAILURE *F)
{

    
    if (F->isBroken == true)
    {
        F->isReset = true;
        F->isOpen = false;

        ball_default_data(B, F);
        ball_init(B, F);
    }
    else
    {
        F->isReset = false;
        F->isOpen = true;
    }

    return 0;
    // "Sim model will reset due to broken "
}

// printf(isReset);
