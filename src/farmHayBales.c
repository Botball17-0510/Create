#ifndef MINIFIED
#include "farmHayBales.h"
#ifdef __GNUC__
#include "kipr/botball.h"
#else
#include <kipr/botball.h>
#endif
#include "exmove.h"
#include "createDrive.h"
#endif

/**
 * Grabs the 3 haybales at the farm
 */
void farmHayBales() {
	create_forward(1000, SPEED);
	printf("waiting\n");
	msleep(2000);
	create_backward(1000, SPEED);
}
