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
%trick_swig_class_typemap(InputHeightValue, InputHeightValue)



#ifndef CANNON_H
#define CANNON_H


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


    double receiveHeight;
    
} CANNON ;

typedef struct{
    double height;
}InputHeightValue;




#ifdef __cplusplus
extern "C" {
#endif
    void cannon_default_data(CANNON*) ;
    void cannon_init(CANNON*) ;
    void cannon_step(CANNON*,InputHeightValue*) ;
#ifdef __cplusplus
}
#endif

#endif

#ifdef TRICK_SWIG_DEFINED_CANNON
%trick_cast_as(CANNON, CANNON)
#endif
#ifdef TRICK_SWIG_DEFINED_InputHeightValue
%trick_cast_as(InputHeightValue, InputHeightValue)
#endif
