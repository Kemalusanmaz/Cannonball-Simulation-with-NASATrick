#include <Python.h>
#if PY_VERSION_HEX >= 0x03000000
extern "C" {

PyObject * PyInit__m65b5dbb78d8a6d2b5bd6f79fa88cc2fd(void) ; /* /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/S_source.hh */
PyObject * PyInit__m603684d0070f1ec4ddac5f3ffee06468(void) ; /* /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/ball/include/ball.h */
PyObject * PyInit__m945e1f079631c9de55bdd1d760eded56(void) ; /* /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon.h */
PyObject * PyInit__m221c37067f1f2af7f60b6148345ae2f7(void) ; /* /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/failure/include/failure.h */
PyObject * PyInit__sim_services(void) ;
PyObject * PyInit__top(void) ;
PyObject * PyInit__swig_double(void) ;
PyObject * PyInit__swig_int(void) ;
PyObject * PyInit__swig_ref(void) ;

void init_swig_modules(void) {

    PyImport_AppendInittab("_m603684d0070f1ec4ddac5f3ffee06468", PyInit__m603684d0070f1ec4ddac5f3ffee06468) ;
    PyImport_AppendInittab("_m945e1f079631c9de55bdd1d760eded56", PyInit__m945e1f079631c9de55bdd1d760eded56) ;
    PyImport_AppendInittab("_m221c37067f1f2af7f60b6148345ae2f7", PyInit__m221c37067f1f2af7f60b6148345ae2f7) ;
    PyImport_AppendInittab("_m65b5dbb78d8a6d2b5bd6f79fa88cc2fd", PyInit__m65b5dbb78d8a6d2b5bd6f79fa88cc2fd) ;
    PyImport_AppendInittab("_sim_services", PyInit__sim_services) ;
    PyImport_AppendInittab("_top", PyInit__top) ;
    PyImport_AppendInittab("_swig_double", PyInit__swig_double) ;
    PyImport_AppendInittab("_swig_int", PyInit__swig_int) ;
    PyImport_AppendInittab("_swig_ref", PyInit__swig_ref) ;
    return ;
}

}
#else
extern "C" {

void init_m65b5dbb78d8a6d2b5bd6f79fa88cc2fd(void) ; /* /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/S_source.hh */
void init_m603684d0070f1ec4ddac5f3ffee06468(void) ; /* /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/ball/include/ball.h */
void init_m945e1f079631c9de55bdd1d760eded56(void) ; /* /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/cannon/include/cannon.h */
void init_m221c37067f1f2af7f60b6148345ae2f7(void) ; /* /home/fjolnirr/trick_newFeature/SIM_cannon_analytic/models/failure/include/failure.h */
void init_sim_services(void) ;
void init_top(void) ;
void init_swig_double(void) ;
void init_swig_int(void) ;
void init_swig_ref(void) ;

void init_swig_modules(void) {

    init_m603684d0070f1ec4ddac5f3ffee06468() ;
    init_m945e1f079631c9de55bdd1d760eded56() ;
    init_m221c37067f1f2af7f60b6148345ae2f7() ;
    init_m65b5dbb78d8a6d2b5bd6f79fa88cc2fd() ;
    init_sim_services() ;
    init_top() ;
    init_swig_double() ;
    init_swig_int() ;
    init_swig_ref() ;
    return ;
}

}
#endif
