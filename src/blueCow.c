#include "blueCow.h"
#ifdef __GNUC__
#include "kipr/botball.h"
#else
#include <kipr/botball.h>
#endif
#include "exmove.h"
#include "createDrive.h"

void blueCow() {
    create_forward(1730,SPEED);
    create_right(90,RADIUS,SPEED);
    create_forward(510,SPEED);
    create_left(90,RADIUS,SPEED);
    create_forward(340,SPEED);
    arm(ARM_DOWN);
    claw(CLAW_CLOSED);
    arm(ARM_UP);
    create_right(180,RADIUS,SPEED);
    arm(ARM_DOWN);
    claw(CLAW_OPEN):
    updateRobotPos(-510, 1730 + 340);
}
