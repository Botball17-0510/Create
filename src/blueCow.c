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
  	create_forward(700, SPEED * 2);
  	create_left(2, 0, SPEED);	//adjust for right veering of robot
  	create_forward(700, SPEED * 2); //create_drive_direct_dist(SPEED * 1.04, SPEED * 0.96, POS_COW_Y - DIAMETER - BACK_Y);
  	create_right(90, 0, SPEED);
  	create_backward(250, SPEED);
  	create_backward(30, SPEED);	//square up
  	create_forward(190, SPEED);
  	create_left(80, 0, SPEED);
  	create_forward(250, SPEED * 2);	//drive next to blue cow
  	create_block();

  	set_servo_position(CLAW_SERVO, CLAW_CLOSED);	//pick up blue cow
  	slowServo(ARM_SERVO, ARM_DOWN, 1000);
  	msleep(500);
  	create_forward(100, SPEED);
  	create_right(40, 0, SPEED);
  	create_forward(70, SPEED);
  	create_right(80, 0, SPEED);
  	create_forward(100, SPEED);
  	create_left(50, 0, SPEED);
  	create_backward(90, SPEED);
  	create_block();

  	slowServo(ARM_SERVO, ARM_UP, 1000);
  	msleep(500);
  	create_right(90, 0, SPEED);
  	create_block();
}
