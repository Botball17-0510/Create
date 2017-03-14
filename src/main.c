///////////////////////////////////////////////////////////////
// main.c                                                    //
// Created by Zachary Mayhew                                 //
// For use by botball team 17-0510                           //
///////////////////////////////////////////////////////////////
#ifdef __GNUC__
#include "kipr/botball.h"
#else
#include <kipr/botball.h>
#endif
#include "exmove.h"
#include "initialDrive.h"
#include "farmHayBales.h"
#include "blueCow.h"

/**
 * Initialise create and servos
 */
void init() {
    // TODO Add light activate
    create_connect();
    msleep(1500);
    create_start();
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
	printf("Press A for initialDrive");
	printf("Press B for farmHayBales");
	printf("Press C for blueCow");
	if (a_button()) {
		initialDrive();
	}
	else if (b_button()) {
		farmHayBales();
	}
	else if (c_button()) {
		blueCow();
	}
	dinit();
	return 0;
}
