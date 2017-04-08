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
    arm(ARM_UP);
    msleep(1000);
    create_drive_direct_dist(SPEED * 1.04, SPEED * 0.96, POS_COW_Y - DIAMETER - BACK_Y);
    create_block();
    msleep(1000);
    create_right(90,RADIUS,SPEED);
    create_block();
    msleep(1000);
    create_forward(ARM_X,SPEED);
    create_block();
    msleep(1000);
    create_left(90,RADIUS,SPEED);
    create_block();
    msleep(1000);
    create_forward(DIAMETER - ARM_Y,SPEED);
    create_block();
    msleep(1000);
    pick();
    create_block();
    msleep(1000);
    create_right(180,RADIUS,SPEED);
    create_block();
    msleep(1000);
    drop();
    //updateRobotPos(-510, 1730 + 340);
}
