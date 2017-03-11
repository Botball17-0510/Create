///////////////////////////////////////////////////////////////
// main.c                                                    //
// Created by Zachary Mayhew                                 //
// For use by botball team 17-0510                           //
///////////////////////////////////////////////////////////////

#include <kipr/botball.h>
//#include <stdio.h>
//#include <time.h>
//#include <stdint.h>
//#include "debug.h"
#include "exmove.h"

#define ARM_SERVO 1
#define CLAW_SERVO 0

#define CLAW_CLOSED 950
#define CLAW_OPEN 450

#define ARM_DOWN 2000
#define ARM_UP 200

void claw(int v) {
	set_servo_position (CLAW_SERVO, v);
}

void arm(int v) {
	set_servo_position (ARM_SERVO, v);
}

void pickUpObject() {
	arm(ARM_DOWN);
	claw(CLAW_CLOSED);
	arm(ARM_UP);
	claw(CLAW_OPEN);
}

/**
 * Initialise create and servos
 */
void init() {
	// TODO Add light activate
	create_connect();
	// light here
	enable_servo(ARM_SERVO);
	enable_servo(CLAW_SERVO);
}

/**
 * Deinitialize create and servos
 */
void dinit() {
	disable_servo(ARM_SERVO);
	disable_servo(CLAW_SERVO);
	create_disconnect();
}

int main() {
	init();
	//straight_distance(200, 50);
	//rotate(90, RIGHT, 50);
	pickUpObject();
	//dinit();
	return 0;
}
