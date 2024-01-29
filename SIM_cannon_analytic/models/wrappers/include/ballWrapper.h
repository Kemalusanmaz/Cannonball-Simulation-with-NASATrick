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
void ball_step_wrapper(BALL*, InputHeightValue*);
void ball_init_wrapper(BALL*);
// void ball_default_FDIR(FDIR*);
// void ball_init_FDIR(BALL*,FDIR*);
// void ball_step_FDIR(BALL*,FDIR*,InputHeightValue*);
#ifdef __cplusplus
}
#endif