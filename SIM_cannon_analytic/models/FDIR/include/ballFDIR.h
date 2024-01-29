/*************************************************************************
PURPOSE: (Represent the state and initial conditions of a Failure)
**************************************************************************/
#ifndef BALLFDIR_H
#define BALLFDIR_H

#include <stdbool.h>


typedef struct {
    bool isBroken;
    bool isBug;
    bool isCrashed;
    bool isFailure;
} FAILURE;

typedef struct {
    bool isOn;
    bool isRun;
} RUN;

typedef struct {
    bool isOff;
    bool isClose;
} CLOSE;

typedef struct {
    bool isPatching;
    bool isMaintanence;
    bool isRecovery;
    bool isWarning;
} WARNING;

typedef struct {
    WARNING warning;
    RUN run;
    CLOSE close;
    FAILURE failure;
    int isFDIR;
} FDIR;

#ifdef __cplusplus
extern "C" {
#endif
    void FDIR_default_data(FDIR*);
    void ball_run(FDIR*);
    void ball_close(FDIR*);
    void ball_failure(FDIR*);
    void ball_warning(FDIR*);
    void ball_getMode(FDIR*);
#ifdef __cplusplus
}
#endif

#endif
