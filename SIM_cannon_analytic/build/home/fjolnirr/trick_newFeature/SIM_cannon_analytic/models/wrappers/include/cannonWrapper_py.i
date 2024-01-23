%module ma750df08e2d9fd33879d7d7313be3144

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/wrappers/include/cannonWrapper.h"
%}





%import "build/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon_py.i"
%import "build/home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/FDIR/include/cannonFDIR_py.i"

#ifdef __cplusplus
extern "C" {
#endif
void cannon_step_wrapper(CANNON*,CANNONFAILURE*,InputHeightValue*);
void cannon_init_wrapper(CANNON*,CANNONFAILURE*);
void cannon_default_FDIR(CANNONFAILURE*);
void cannon_init_FDIR(CANNON*,CANNONFAILURE*);
void cannon_step_FDIR(CANNON*,CANNONFAILURE*,InputHeightValue*);

#ifdef __cplusplus
}
#endif
