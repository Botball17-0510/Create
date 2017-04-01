#ifndef MINIFIED
#include "blueCow.h"
#ifdef __GNUC__
#include "kipr/botball.h"
#else
#include <kipr/botball.h>
#endif
#include "exmove.h"
#include "createDrive.h"
#endif

void long_distance(int distance, int speed) {
	int short_distance = 500;
	set_create_distance(0);

	while create_distance = 0 {
	   straight_distance(short_distance, speed);
       int current =  get_create_distance();
			 updateRobotPos(current);
			 msleep(10);
    }
	
}

// void straight. It uses create_drive_direct

void blueCow() {
    long_distance(POS_START_Y - DIAMETER - BACK_Y,SPEED);
    create_right(90,RADIUS,SPEED);
    straight_distance(ARM_X,SPEED);
    create_left(90,RADIUS,SPEED);
    straight_distance(DIAMETER - ARM_Y,SPEED);
    pick();
    create_right(180,RADIUS,SPEED);
    drop();
    //updateRobotPos(-510, 1730 + 340);
}
