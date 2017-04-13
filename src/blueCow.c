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
    create_forward(1300, SPEED + 20); //create_drive_direct_dist(SPEED * 1.04, SPEED * 0.96, POS_COW_Y - DIAMETER - BACK_Y);
  	create_right(90, 0, SPEED);
  	create_backward(250, SPEED);
  	create_backward(30, 30);	//square up
  	create_forward(200, SPEED);
  	create_left(80, 0, SPEED);
  	create_forward(250, SPEED);	//drive next to blue cow
  	create_right(20, 0, SPEED);
  	create_block();

  	set_servo_position(CLAW_SERVO, CLAW_CLOSED);	//pick up blue cow
  	slowServo(ARM_SERVO, ARM_DOWN, 1000);
  	msleep(500);
  	create_right(90, 0, SPEED);
  	create_block();
  /*
  	set_servo_position(CLAW_SERVO, CLAW_OPEN);	//pick up blue cow
  	slowServo(ARM_SERVO, ARM_DOWN, 1000);
  	msleep(300);
	slowServo(CLAW_SERVO, CLAW_CLOSED - 200, 1000);	//closing on horizontal blue cow, wider claw opening
  	set_servo_position(ARM_SERVO, ARM_DOWN - 500);	//lifted arm position

    create_right(20, 0, 30);	//turn towards barn
  	create_forward(90, SPEED);
  	create_right(30, 0, 30);
  	create_block();
  	slowServo(ARM_SERVO, ARM_DOWN, 500);
  	set_servo_position(CLAW_SERVO, CLAW_OPEN);
  	slowServo(ARM_SERVO, ARM_UP, 1000);
    */
}
