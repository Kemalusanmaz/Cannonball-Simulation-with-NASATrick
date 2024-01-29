/******************************* TRICK HEADER ****************************
PURPOSE: (Set the initial data values)
*************************************************************************/

/* Model Include files */
#include <math.h>
#include <string.h>
#include <stdio.h>
#include "../../FDIR/include/ballFDIR.h"
#include "../../ball/include/ball.h"
#include "../../cannon/include/cannon.h"
#include "../../wrappers/include/ballWrapper.h"

void FDIR_default_data(FDIR* f){
    f->run.isOn = 1;
    f->run.isRun = 1;
    f->close.isOff = 0;
    f->failure.isBroken = 0;
    f->failure.isBug = 0;
    f->failure.isCrashed = 0;
    f->warning.isMaintanence = 0;
    f->warning.isPatching = 0;
    f->warning.isRecovery = 0;
}

void ball_run(FDIR* f){
    if (f->run.isOn)
    {
        f->run.isRun = 1;
        f->close.isOff = 0;
    }else{
        f->run.isRun = 0;
        f->close.isOff = 1;
        
    }    
}

void ball_close(FDIR* f){
    if (f->close.isOff)
    {
        f->close.isClose = 1;
        f->run.isOn = 0;
    }else{
        f->close.isClose = 0;
        f->run.isOn = 1;
    }
    
}

void ball_failure(FDIR* f){
    if (f->failure.isBroken || f->failure.isBug || f->failure.isCrashed)
    {
        f->failure.isFailure = 1;
    }else{
        f->failure.isFailure = 0;
    }
    
}

void ball_warning(FDIR* f){
      if (f->warning.isMaintanence || f->warning.isPatching || f->warning.isRecovery)
    {
        f->warning.isWarning = 1;
    }else{
        f->warning.isWarning = 0;
    }
}

void ball_getMode(FDIR* f){
    
    ball_close(f);
    ball_run(f);
    ball_failure(f);
    ball_warning(f);

    if (f->close.isClose)
    {
        f->isFDIR = 1;
    }else{
        if (f->run.isRun && f->failure.isFailure == 0 && f->warning.isWarning == 0)
        {
            f->isFDIR = 0;
        }else if (f->run.isRun && f->failure.isFailure == 1 && f->warning.isWarning == 1)
        {
            f->isFDIR = 3;
        }
        else if (f->run.isRun && f->failure.isFailure == 1 && f->warning.isWarning == 0)
        {
            f->isFDIR = 2;
        }
        else if (f->run.isRun && f->failure.isFailure == 0 && f->warning.isWarning == 1)
        {
            f->isFDIR = 3;
        }
    }

}
    
        //En öncelikli Close
    // if (f->close.isClose)
    // {
    //     f->isFDIR = 1;
        
    // }
    
    // if (f->warning.isWarning && f->close.isClose == 0)
    // {
    //     f->isFDIR = 3;
    // }else if (f->warning.isWarning && f->close.isClose == 1)
    // {
    //     f->isFDIR = 1; //close öncelikli
    // }
    
    // if (f->failure.isFailure && f->warning.isWarning == 0)
    // {
    //     f->isFDIR = 2;
        
    // }else if (f->failure.isFailure && f->warning.isWarning == 1)
    // {
    //     f->isFDIR = 3; //warning öncelikli
    // }

    
    
    
    
    
    
    
    
    
    
    
