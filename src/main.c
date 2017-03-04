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
	// TODO INIT SERVOS
	create_connect();
}

/**
 * Deinitialize create and servos
 */
void dinit() {
	// TODO DINIT SERVOS
	create_disconnect();
}

int main() {
	init();
	straight_distance(200, 50);
	rotate(90, RIGHT, 50);
	dinit();
	return 0;
}
