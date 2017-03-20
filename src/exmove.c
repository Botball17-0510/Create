#ifdef __GNUC__
#include "kipr/botball.h"
#else
#include <kipr/botball.h>
#endif
#include "exmove.h"
#include "createDrive.h"

RobotPos currentPos;

void initEx(int x, int y) {
	currentPos = newRobotPos(x, y);
}

void slowServo(int servo, int goal, float ms) {
    int start = get_servo_position(servo);
   	float trueMs = ms/(goal-start);
   	printf("%f", trueMs);
  	int i = start;
   	for (; i < goal; i++) {
   		set_servo_position(servo, i);
   		msleep(trueMs);
   	}
}

void claw(int v) {
	// slowServo(CLAW_SERVO, v, speed);
  	set_servo_position(CLAW_SERVO, v);
  	msleep(500);
}

void arm(int v) {
	set_servo_position(ARM_SERVO, v);
    msleep(1000);
}

void pickUpObject() {
	arm(ARM_DOWN);
	claw(CLAW_CLOSED);
	arm(ARM_UP);
	claw(CLAW_OPEN);
}


// go straight a certain distance TODO Make it more accurate
void straight_distance(int mm, int speed) {
	create_drive_straight(speed);
	msleep((mm/speed) * 1000);
	create_stop();
}

void reverse_distance(int mm, int speed) {
	create_drive_straight(-speed);
	msleep((mm/speed)*1000);
	create_stop();
}

// Rotate by a given degree, in the given direction, at the given speed.
// todo: make it more accurate
void rotate(float degrees, int direction, int speed) {
    //printf("time to spin: %f\n",time);
    if (direction == LEFT) {
        create_left(degrees, 0, speed);
    } else {
        create_right(degrees, 0, speed);
    }
<<<<<<< HEAD
    //printf("sleep %f seconds\n", time);
    msleep(time * 1000);
    create_stop();    
=======
>>>>>>> Fixed intti function
}

RobotPos newRobotPos(int x, int y) {
	RobotPos pos;
	pos.x = x;
	pos.y = y;
	return pos;
}

RobotPos getRobotPos() {
	return currentPos;
}

void setRobotPos(RobotPos pos) {
	currentPos = pos;
}

void robotGoto(RobotPos pos) {
	// TODO implement function
}

void faceDirection(int direction) {
	// TODO implement function
}
