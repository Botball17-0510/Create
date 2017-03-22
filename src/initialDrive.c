#ifndef MINIFIED
#include "initialDrive.h"
#include "createDrive.h"

#include "exmove.h"
#endif

void initialDrive() {
	create_backward(20, 10);
	create_forward(20, 10);
	pickUpObject();
	create_left(90, DIAMETER/2.0F);
	create_forward(310, 10);
	create_right(90, DIAMETER/2.0F);
	// updateRobotPos(310, 0);
}
