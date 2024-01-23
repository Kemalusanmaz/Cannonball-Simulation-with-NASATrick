%module m2d8eef0b3fff52621a7fd7f4385f78f7

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/FDIR/include/cannonFDIR.h"
%}

%trick_swig_class_typemap(CANNONFAILURE, CANNONFAILURE)



#ifndef CANNONFDIR_H
#define CANNONFDIR_H



typedef struct {
    bool isBroken;
    bool isOpen;
    bool isReset;
} CANNONFAILURE;

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif

#ifdef TRICK_SWIG_DEFINED_CANNONFAILURE
%trick_cast_as(CANNONFAILURE, CANNONFAILURE)
#endif
