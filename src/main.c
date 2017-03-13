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
	initialDrive();
	farmHayBales();
	blueCow();
	dinit();
	return 0;
}
