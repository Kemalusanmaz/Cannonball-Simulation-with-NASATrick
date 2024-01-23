%module m603684d0070f1ec4ddac5f3ffee06468

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/ball/include/ball.h"
%}

%trick_swig_class_typemap(BALL, BALL)



#ifndef BALL_H
#define BALL_H

%import "build/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon_py.i"


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

    
} BALL ;




#ifdef __cplusplus
extern "C" {
#endif
    void ball_default_data(BALL*) ;
    void ball_init(BALL*) ;
    void ball_step(BALL*, InputHeightValue*) ;
#ifdef __cplusplus
}
#endif

#endif

#ifdef TRICK_SWIG_DEFINED_BALL
%trick_cast_as(BALL, BALL)
#endif
