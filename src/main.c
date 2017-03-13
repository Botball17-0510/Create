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

/**
 * Initialise create and servos
 */
void init() {
	// TODO Add light activate
	// create_connect();
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
	//create_disconnect();
}

int main() {
	init();

	dinit();
	return 0;
}
