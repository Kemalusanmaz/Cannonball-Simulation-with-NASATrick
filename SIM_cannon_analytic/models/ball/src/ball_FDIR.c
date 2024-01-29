// /******************************* TRICK HEADER ****************************
// PURPOSE: (Set the initial data values)
// *************************************************************************/

// /* Model Include files */
// #include <math.h>
// #include <string.h>
// #include <stdio.h>
// #include "../../FDIR/include/ballFDIR.h"
// #include "../../ball/include/ball.h"
// #include "../../cannon/include/cannon.h"


// /* initialization job */

// void ball_default_FDIR(FDIR *F)
// {
//     F->isBroken = false;
//     F->isOpen = true;
//     F->isReset = false;
// }

// void ball_init_FDIR(BALL* B,FDIR *F)
// {
    
    
//     if (F->isBroken == true)
//     {
       
//             F->isReset = true;
//             F->isOpen = false;
//             fprintf(stderr, "Cihaz init aşamasında bozuldu, resetleniyor.");
//             // AOCS_default_FDIR(F);
        
        
//         //AOCS_shutdown
        
                
//     }
//     else
//     {
//         ball_default_FDIR(F);
//         ball_init(B);
        
//     }

    
//     // "Sim model will reset due to broken "
// }

// void ball_step_FDIR(BALL* B,FDIR *F, InputHeightValue* I)
// {

//     if (F->isFDIR == 0) /*Run mode*/
//     {
//         ball_step(B,I);
//         F->close.isClose = 0;
//         F->run.isRun = 1;
//     }
//     else if (F->isFDIR == 1)
//     {
//         F->close.isClose = 1;
//         F->run.isRun = 0;
//     }
//     else if (F->isFDIR == 2)
//     {
//         /* code */
//     }
//     else if (F->isFDIR == 3)
//     {
//         /* code */
//     }
//     else
//     {
//         /* code */
//     }
    
    
    
//     // if (F->isBroken == true)
//     // {
//     //     F->isReset = true;
//     //     F->isOpen = false;
//     //     fprintf(stderr, "Cihaz step aşamasında bozuldu, resetleniyor.");
//     //     // AOCS_init_FDIR(F,aocs0_u,aocs0_y,sat_y);
//     //     ball_default_data(B);
//     //     ball_init(B);
        
//     // }
//     // else
//     // {
//     //     ball_default_FDIR(F);
//     //     ball_step(B,I);
//     // }

    
//     // // "Sim model will reset due to broken "
// }