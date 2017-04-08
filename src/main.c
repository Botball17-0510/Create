///////////////////////////////////////////////////////////////
// main.c                                                    //
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
    //msleep(1500);
    printf("start\n");
    create_safe();
	printf("connected\n");
	// light here
    set_servo_position(ARM_SERVO, ARM_UP);
    set_servo_position(CLAW_SERVO, CLAW_CLOSED);    //set starting values
	enable_servo(ARM_SERVO);
	enable_servo(CLAW_SERVO);

	initEx(POS_START_X, POS_START_Y, 0);
    //arm(ARM_UP);
}


/**
 * Deinitialize create and servos
 */
void dinit() {
	//disable_servo(ARM_SERVO);
	//disable_servo(CLAW_SERVO);
    disable_servos();   //Disable all servos - make sure you are not DQed
	create_disconnect();
	printf("Done!\n");
}

int main() {
  printf("init\n");
	init();

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
