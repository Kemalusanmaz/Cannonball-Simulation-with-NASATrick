%module m221c37067f1f2af7f60b6148345ae2f7

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/failure/include/failure.h"
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
