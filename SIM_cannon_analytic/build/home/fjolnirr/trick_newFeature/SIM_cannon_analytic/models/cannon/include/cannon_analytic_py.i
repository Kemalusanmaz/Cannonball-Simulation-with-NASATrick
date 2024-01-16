%module m35dc9d2d496f9f76fb0b82f92b100ff3

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon_analytic.h"
%}




#ifndef CANNON_ANALYTIC_H
#define CANNON_ANALYTIC_H
%import "build/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon_py.i"
%import "build/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/failure/include/failure_py.i"
#ifdef __cplusplus
extern "C" {
#endif
int cannon_analytic(CANNON*, FAILURE*) ;
#ifdef __cplusplus
}
#endif
#endif
