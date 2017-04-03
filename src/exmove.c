#ifndef MINIFIED
#ifdef __GNUC__
#include "kipr/botball.h"
#else
#include <kipr/botball.h>
#endif
#include "exmove.h"
#include "createDrive.h"
#endif

RobotPos currentPos;

void initEx(int x, int y, int rotation) {
	currentPos = newRobotPos(x, y, rotation);
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

void pick() {
    arm(ARM_DOWN);
    claw(CLAW_CLOSED);
    arm(ARM_UP);
}

void drop() {
    arm(ARM_DOWN);
    claw(CLAW_OPEN);
}

// go straight a certain distance TODO Make it more accurate
void straight_distance(int mm, int speed) {
	currentPos.x += mm * sin(currentPos.rotation);
	currentPos.y += mm * cos(currentPos.rotation);
    printf("create_drive_straight %d\n", speed);
	create_drive_direct(speed * 1.1, speed * 0.9);
    printf("msleep %d\n", mm * 1000 / speed);
	msleep(mm * 1000 / speed);
    printf("create_stop\n");
	create_stop();
}

void reverse_distance(int mm, int speed) {
	currentPos.x -= mm * sin(currentPos.rotation);
	currentPos.y -= mm * cos(currentPos.rotation);
	create_drive_straight(-speed);
	msleep((mm/speed)*1000);
	create_stop();
}

// Rotate by a given degree, in the given direction, at the given speed.
// todo: make it more accurate
void rotate(float degrees, int direction, int speed) {
    float distance = ((degrees/360) * CIRCUMFERENCE);
    if (direction == LEFT) {
			currentPos.rotation-=degrees;
			create_spin_CCW(speed);
    } else {
			currentPos.rotation+=degrees;
			create_spin_CW(speed);
    }
		msleep((distance/speed)*1000);
		create_stop();
}

RobotPos newRobotPos(int x, int y, int rotation) {
	RobotPos pos;
	pos.x = x;
	pos.y = y;
	pos.rotation = rotation;
	return pos;
}

RobotPos getRobotPos() {
	return currentPos;
}

void updateRobotPos(int x, int y) {
    currentPos.x += x;
    currentPos.y += y;
}

void setRobotPos(RobotPos pos) {
	currentPos = pos;
}
