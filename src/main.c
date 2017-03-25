///////////////////////////////////////////////////////////////
// main.c                                                    //
// Created by Zachary Mayhew                                 //
// For use by botball team 17-0510                           //
///////////////////////////////////////////////////////////////
#ifndef MINIFIED
#ifdef __GNUC__
#include "kipr/botball.h"
#else
#include <kipr/botball.h>
#endif
#include "exmove.h"
#include "initialDrive.h"
#include "farmHayBales.h"
#include "blueCow.h"
#endif

/**
 * Initialise create and servos
 */
void init() {
	printf("coneccting to create\n");
	// TODO Add light activate
	create_connect();
    printf("msleep\n");
    msleep(1500);
    printf("start\n");
    create_full();
	printf("connected\n");
	// light here
	enable_servo(ARM_SERVO);
	enable_servo(CLAW_SERVO);

	initEx(POS_START_X, POS_START_Y, 0);
}


/**
 * Deinitialize create and servos
 */
void dinit() {
	disable_servo(ARM_SERVO);
	disable_servo(CLAW_SERVO);
	create_disconnect();
	printf("Done!\n");
}

int main() {
  printf("init\n");
	init();
	// printf("Press A for initialDrive");
	// printf("Press B for farmHayBales");
	// printf("Press C for blueCow");
	// if (a_button()) {
	// 	initialDrive();
	// }
	// else if (b_button()) {
	// 	farmHayBales();
	// }
	// else if (c_button()) {
	// 	blueCow();
	// }
	printf("Exec: initDrive\n");
	initialDrive();
	printf("Exec: blueCow\n");
	blueCow();
	printf("Exec: hay\n");
	farmHayBales();

	printf("dinit\n");
	dinit();
	return 0;
}
