/**********************************TRICK HEADER***************************************
PURPOSE: (Cannon0Wrapper.h)
ICG IGNORE TYPES:
(
  ICG:(Nocomment)
)
**************************************************************************/

#include "../../cannon/include/cannon.h"
#include "../../FDIR/include/cannonFDIR.h"

#ifdef __cplusplus
extern "C" {
#endif
void cannon_step_wrapper(CANNON*,CANNONFAILURE*,InputHeightValue*);
void cannon_init_wrapper(CANNON*,CANNONFAILURE*);
void cannon_default_FDIR(CANNONFAILURE*);
void cannon_init_FDIR(CANNON*,CANNONFAILURE*);
void cannon_step_FDIR(CANNON*,CANNONFAILURE*,InputHeightValue*);
//void AOCS_shutdown_FDIR();
#ifdef __cplusplus
}
#endif