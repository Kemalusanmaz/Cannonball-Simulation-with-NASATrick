%module m945e1f079631c9de55bdd1d760eded56

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon.h"
%}

%trick_swig_class_typemap(CANNON, CANNON)



#ifndef CANNON_H
#define CANNON_H
%import "build/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/failure/include/failure_py.i"


typedef struct {

    double vel0[2] ;    

    double pos0[2] ;    

    double init_speed ; 

    double init_angle ; 



    double acc[2] ;     

    double vel[2] ;     

    double pos[2] ;     


    double time;        


    int impact ;        

    double impactTime;  



} CANNON ;


#ifdef __cplusplus
extern "C" {
#endif
    int cannon_default_data(CANNON*,FAILURE*) ;
    int cannon_init(CANNON*,FAILURE*) ;
    int cannon_analytic(CANNON*, FAILURE*) ;
    int cannon_reset(CANNON*,FAILURE*) ;
    int cannon_shutdown(CANNON*) ;
#ifdef __cplusplus
}
#endif

#endif

#ifdef TRICK_SWIG_DEFINED_CANNON
%trick_cast_as(CANNON, CANNON)
#endif
