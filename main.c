/**
 * main.c for wallaby grid search based movement
 */

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
	dinit();
	return 0;
}
