#include "exmove.h"

/**
 * Moves the servo to a given position, taking a given amount of seconds
 *
 * @param (int) servo Id of the servo to move, between 0 and 3
 * @param (int) goal Position of the servo to move to, between 0 and 2047
 * @param (float) ms The amount of time to take to move to the position
 */
void slowServo(int servo, int goal, float ms) {
    int start = get_servo_position(servo);
   	float trueMs = ms/(goal-start);
   	printf("%d", trueMs);
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
	msleep((mm/speed)*1000);
	create_stop();
}

// turn x # of degrees left/right at speed TODO make it work properly- doesnt work yet
void rotate(float degrees, int direction, int speed) {
	if (direction == LEFT) {
		create_drive_direct(speed, -speed);
	} else {
		create_drive_direct(-speed, speed);
	}
	float mm = degrees/360.0f*CIRCUMFERENCE;
	msleep((mm/speed)*1000);
	create_stop();
}
