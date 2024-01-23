%module m021a0514e6142bb6578f5726b29fe06c

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/FDIR.h"
%}

%trick_swig_class_typemap(FAILURE, FAILURE)



#ifndef FAILURE_H
#define FAILURE_H



typedef struct {
    bool isBroken;
    bool isOpen;
    bool isReset;
} FAILURE;

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif

#ifdef TRICK_SWIG_DEFINED_FAILURE
%trick_cast_as(FAILURE, FAILURE)
#endif
