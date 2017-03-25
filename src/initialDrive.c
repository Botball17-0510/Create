#ifndef MINIFIED
#include "initialDrive.h"
#include "createDrive.h"

#include "exmove.h"
#endif

void initialDrive() {
	pickUpObject();
	create_left(90, 0, DIAMETER/2.0F);
	straight_distance(310, SPEED);
	create_right(90, 0, DIAMETER/2.0F);
	updateRobotPos(310, 0);
}
