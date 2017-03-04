///////////////////////////////////////////////////////////////
// main.c                                                    //
// Created by Zachary Mayhew                                 //
// For use by botball team 17-0510                           //
///////////////////////////////////////////////////////////////

#include <kipr/botball.h>
#include "exmove.h"

/**
 * Initialise create and servos
 */
void init() {
	create_connect();

}

/**
 * Deinitialize create and servos
 */
void dinit() {
	create_disconnect();
}

int main() {
	init();
	straight_distance(200, 50);
	rotate(90, RIGHT, 50);
	dinit();
	return 0;
}
