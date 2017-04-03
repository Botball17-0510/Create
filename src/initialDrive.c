#ifndef MINIFIED
#include "kipr/botball.h"
#include "initialDrive.h"
#include "createDrive.h"

#include "exmove.h"
#endif

void initialDrive() {
	pickUpObject();
  	msleep(500);
  	claw(CLAW_CLOSED);
  	reverse_distance(100, SPEED);
  	straight_distance(50, SPEED);
	create_left(90, 0, SPEED);
  	//reverse_distance(POS_START_X+200, SPEED);
	straight_distance(POS_COW_X-POS_START_X, SPEED);
	create_right(90, 0, SPEED);
	updateRobotPos(310, 0);
}
