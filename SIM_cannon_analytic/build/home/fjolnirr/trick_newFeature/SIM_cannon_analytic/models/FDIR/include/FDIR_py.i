%module m93c737684e244b5169597a3f87ad03e0

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/FDIR/include/FDIR.h"
%}

%trick_swig_class_typemap(FAILURE, FAILURE)



#ifndef FDIR_H
#define FDIR_H



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
