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
    printf("long distance %d\n", distance);
	int short_distance = 500;
	set_create_distance(0);

    int remaining_distance = distance;
	while (remaining_distance > 0) {
       int travel = short_distance < distance ? short_distance : distance;
       printf("move %d\n", travel);
	   straight_distance(travel, speed);
       int current =  get_create_distance();
       printf("current distance %d\n", current);
       remaining_distance = distance - current;
	   msleep(1000);
    }
	
}

// void straight. It uses create_drive_direct

void blueCow() {
    create_forward(POS_COW_Y - DIAMETER - BACK_Y, HIGH_SPEED);
    create_right(90,RADIUS,SPEED);
    straight_distance(ARM_X,SPEED);
    create_left(90,RADIUS,SPEED);
    straight_distance(DIAMETER - ARM_Y,SPEED);
    pick();
    create_right(180,RADIUS,SPEED);
    drop();
    //updateRobotPos(-510, 1730 + 340);
}
