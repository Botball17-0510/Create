#ifndef MINIFIED
#include "kipr/botball.h"
#include "initialDrive.h"
#include "createDrive.h"

#include "exmove.h"
#endif

void initialDrive() {
	pickUpObject();
  	msleep(500);
  	//square up
  	create_backward(45, 30);
    create_wait_time(5);
  	create_block();

  	create_forward(20, 30);
  	create_wait_time(5);
  	create_left(40, 0, SPEED);
	create_left(43, 0, 30);	//goes slower in order to get the box over the ramp	//reverse_distance(POS_START_X+200, SPEED);
  	create_forward(120, SPEED);	//create_forward(POS_COW_X-POS_START_X, SPEED);
  	create_wait_time(20);
	create_right(90, 0, SPEED);
  	create_block();
  	//square up
  	create_backward(60, 30);

  	//reverse_distance(50, SPEED);
	//updateRobotPos(310, 0);
}
