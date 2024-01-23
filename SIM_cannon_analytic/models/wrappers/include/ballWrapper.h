/**********************************TRICK HEADER***************************************
PURPOSE: (Ball0Wrapper.h)
ICG IGNORE TYPES:
(
  ICG:(Nocomment)
)
**************************************************************************/

#include "../../ball/include/ball.h"
#include "../../FDIR/include/ballFDIR.h"
#include "../../cannon/include/cannon.h"

#ifdef __cplusplus
extern "C" {
#endif
void ball_step_wrapper(BALL*,FAILURE*,InputHeightValue*);
void ball_init_wrapper(BALL*,FAILURE*);
void ball_default_FDIR(FAILURE*);
void ball_init_FDIR(BALL*,FAILURE*);
void ball_step_FDIR(BALL*,FAILURE*,InputHeightValue*);
//void AOCS_shutdown_FDIR();
#ifdef __cplusplus
}
#endif