%module mcb62551ceabae12d33639a84d366a7f8

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/FDIR/include/ballFDIR.h"
%}

%trick_swig_class_typemap(FAILURE, FAILURE)
%trick_swig_class_typemap(RUN, RUN)
%trick_swig_class_typemap(CLOSE, CLOSE)
%trick_swig_class_typemap(WARNING, WARNING)
%trick_swig_class_typemap(FDIR, FDIR)



#ifndef BALLFDIR_H
#define BALLFDIR_H



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

#ifdef TRICK_SWIG_DEFINED_FAILURE
%trick_cast_as(FAILURE, FAILURE)
#endif
#ifdef TRICK_SWIG_DEFINED_RUN
%trick_cast_as(RUN, RUN)
#endif
#ifdef TRICK_SWIG_DEFINED_CLOSE
%trick_cast_as(CLOSE, CLOSE)
#endif
#ifdef TRICK_SWIG_DEFINED_WARNING
%trick_cast_as(WARNING, WARNING)
#endif
#ifdef TRICK_SWIG_DEFINED_FDIR
%trick_cast_as(FDIR, FDIR)
#endif
