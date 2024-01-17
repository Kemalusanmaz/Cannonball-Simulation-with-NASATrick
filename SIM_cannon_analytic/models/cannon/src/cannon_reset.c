/******************************* TRICK HEADER ****************************
PURPOSE: (Set the initial data values)
*************************************************************************/

/* Model Include files */
#include <math.h>
#include "../include/cannon.h"
#include <string.h>
#include <stdio.h>
#include "../../failure/include/failure.h"





/* initialization job */
  int cannon_reset (CANNON* C, FAILURE* F) {
   
    
    if (F->isBroken == true)
    {
        F->isReset = true;
        F->isOpen = false;
        C->time = 0;
        
        cannon_init(C,F);
        
        
    }else {
        F->isReset = false;
        F->isOpen = true;
    }
    
    return 0 ;
    // "Sim model will reset due to broken " 
}

// printf(isReset);


