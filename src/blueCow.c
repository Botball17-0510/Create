\\#ifndef MINIFIED
#include "blueCow.h"
#ifdef __GNUC__
#include "kipr/botball.h"
#else
#include <kipr/botball.h>
#endif
#include "exmove.h"
#include "createDrive.h"
#endif


void blueCow() {
    int speed = 50;
    int radius = 0;
    create_forward(1730,speed);
    create_right(90,radius,speed);
    create_forward(510,speed);
    create_left(90,radius,speed);
    create_forward(340,speed);
    arm(ARM_DOWN);
    claw(CLAW_CLOSED);
    arm(ARM_UP);
    create_right(180,radius,speed);
    arm(ARM_DOWN);
    claw(CLAW_OPEN);
    //updateRobotPos(-510, 1730 + 340);
}
