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
 * @author Zachary Mayhew
 */
void init() {
	// TODO Add light activate
	create_connect();
	msleep(1500);
	create_start();
	// light here
	enable_servo(ARM_SERVO);
	enable_servo(CLAW_SERVO);
	RobotPos initialPos = newRobotPos(POS_START_X, POS_START_Y);
	setRobotPos(initialPos);
}


/**
 * Deinitialize create and servos
 * @author Zachary Mayhew
 */
void dinit() {
	disable_servo(ARM_SERVO);
	disable_servo(CLAW_SERVO);
	create_disconnect();
}

/**
 * Main function
 * @author Zachary Mayhew, Bobby Wang, Arjun
 */
int main() {
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
	initialDrive();
	farmHayBales();
	dinit();
	return 0;
}
