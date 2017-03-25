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
    straight_distance(1730,SPEED);
    create_right(90,RADIUS,SPEED);
    straight_distance(510,SPEED);
    create_left(90,RADIUS,SPEED);
    straight_distance(340,SPEED);
    pick();
    create_right(180,RADIUS,SPEED);
    drop();
    //updateRobotPos(-510, 1730 + 340);
}
