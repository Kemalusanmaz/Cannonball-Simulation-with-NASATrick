from pkgutil import extend_path
__path__ = extend_path(__path__, __name__)
import sys
import os
sys.path.append(os.getcwd() + "/trick.zip/trick")

import _sim_services
from sim_services import *

# create "all_cvars" to hold all global/static vars
all_cvars = new_cvar_list()
combine_cvars(all_cvars, cvar)
cvar = None

# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/S_source.hh
import _m65b5dbb78d8a6d2b5bd6f79fa88cc2fd
combine_cvars(all_cvars, cvar)
cvar = None

# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/FDIR/include/ballFDIR.h
import _mcb62551ceabae12d33639a84d366a7f8
combine_cvars(all_cvars, cvar)
cvar = None

# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/FDIR/include/cannonFDIR.h
import _m2d8eef0b3fff52621a7fd7f4385f78f7
combine_cvars(all_cvars, cvar)
cvar = None

# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/ball/include/ball.h
import _m603684d0070f1ec4ddac5f3ffee06468
combine_cvars(all_cvars, cvar)
cvar = None

# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon.h
import _m945e1f079631c9de55bdd1d760eded56
combine_cvars(all_cvars, cvar)
cvar = None

# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/wrappers/include/ballWrapper.h
import _m5a945cb755bb698f6b45072873cc40ff
combine_cvars(all_cvars, cvar)
cvar = None

# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/wrappers/include/cannonWrapper.h
import _ma750df08e2d9fd33879d7d7313be3144
combine_cvars(all_cvars, cvar)
cvar = None

# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/S_source.hh
from m65b5dbb78d8a6d2b5bd6f79fa88cc2fd import *
# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/FDIR/include/ballFDIR.h
from mcb62551ceabae12d33639a84d366a7f8 import *
# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/FDIR/include/cannonFDIR.h
from m2d8eef0b3fff52621a7fd7f4385f78f7 import *
# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/ball/include/ball.h
from m603684d0070f1ec4ddac5f3ffee06468 import *
# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon.h
from m945e1f079631c9de55bdd1d760eded56 import *
# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/wrappers/include/ballWrapper.h
from m5a945cb755bb698f6b45072873cc40ff import *
# /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/wrappers/include/cannonWrapper.h
from ma750df08e2d9fd33879d7d7313be3144 import *

# S_source.hh
import _m65b5dbb78d8a6d2b5bd6f79fa88cc2fd
from m65b5dbb78d8a6d2b5bd6f79fa88cc2fd import *

import _top
import top

import _swig_double
import swig_double

import _swig_int
import swig_int

import _swig_ref
import swig_ref

from shortcuts import *

from exception import *

cvar = all_cvars

