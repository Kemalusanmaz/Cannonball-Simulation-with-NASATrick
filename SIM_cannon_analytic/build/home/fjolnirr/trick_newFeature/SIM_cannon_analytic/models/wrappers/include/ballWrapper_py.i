%module m5a945cb755bb698f6b45072873cc40ff

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/wrappers/include/ballWrapper.h"
%}





%import "build/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/ball/include/ball_py.i"
%import "build/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/FDIR/include/ballFDIR_py.i"
%import "build/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon_py.i"

#ifdef __cplusplus
extern "C" {
#endif
void ball_step_wrapper(BALL*,FAILURE*,InputHeightValue*);
void ball_init_wrapper(BALL*,FAILURE*);
void ball_default_FDIR(FAILURE*);
void ball_init_FDIR(BALL*,FAILURE*);
void ball_step_FDIR(BALL*,FAILURE*,InputHeightValue*);

#ifdef __cplusplus
}
#endif
