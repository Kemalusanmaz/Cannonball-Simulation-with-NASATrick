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



} BALL ;

#ifdef __cplusplus
extern "C" {
#endif
    int ball_default_data(BALL*,FAILURE*) ;
    int ball_init(BALL*,FAILURE*) ;
    int ball_analytic(BALL*, FAILURE*) ;
    int ball_reset(BALL*,FAILURE*) ;
    int ball_shutdown(BALL*) ;
#ifdef __cplusplus
}
#endif

#endif

#ifdef TRICK_SWIG_DEFINED_BALL
%trick_cast_as(BALL, BALL)
#endif
