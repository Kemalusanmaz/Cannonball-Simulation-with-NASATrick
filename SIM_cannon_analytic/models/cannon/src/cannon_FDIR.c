/******************************* TRICK HEADER ****************************
PURPOSE: (Set the initial data values)
*************************************************************************/

/* Model Include files */
#include <math.h>
#include <string.h>
#include <stdio.h>
#include "../../FDIR/include/cannonFDIR.h"
#include "../../cannon/include/cannon.h"


/* initialization job */

void cannon_default_FDIR(CANNONFAILURE *F)
{
    F->isBroken = false;
    F->isOpen = true;
    F->isReset = false;
}

void cannon_init_FDIR(CANNON* B,CANNONFAILURE *F)
{
    
    
    if (F->isBroken == true)
    {
       
            F->isReset = true;
            F->isOpen = false;
            fprintf(stderr, "Cihaz init aşamasında bozuldu, resetleniyor.");
            // AOCS_default_FDIR(F);
        
        
        //AOCS_shutdown
        
                
    }
    else
    {
        cannon_default_FDIR(F);
        cannon_init(B);
        
    }

    
    // "Sim model will reset due to broken "
}

void cannon_step_FDIR(CANNON* B,CANNONFAILURE *F, InputHeightValue* I)
{

    
    if (F->isBroken == true)
    {
        F->isReset = true;
        F->isOpen = false;
        fprintf(stderr, "Cihaz step aşamasında bozuldu, resetleniyor.");
        // AOCS_init_FDIR(F,aocs0_u,aocs0_y,sat_y);
        cannon_init(B);
        
    }
    else
    {
        cannon_default_FDIR(F);
        cannon_step(B,I);
    }

    
    // "Sim model will reset due to broken "
}