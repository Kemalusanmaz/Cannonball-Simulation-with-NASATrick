/*************************************************************************
PURPOSE: ( Cannon Analytic Model )
**************************************************************************/
#ifndef CANNON_ANALYTIC_H
#define CANNON_ANALYTIC_H
#include "cannon.h"
#include "../../failure/include/failure.h"
#ifdef __cplusplus
extern "C" {
#endif
int cannon_analytic(CANNON*, FAILURE*) ;
#ifdef __cplusplus
}
#endif
#endif