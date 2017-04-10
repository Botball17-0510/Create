#ifndef MINIFIED
#include "kipr/botball.h"
#include "initialDrive.h"
#include "createDrive.h"

#include "exmove.h"
#endif

void initialDrive() {
	pickUpObject(100);
  	msleep(500);
  	//square up
  	create_backward(50, 30);
    create_wait_time(10);
  	create_block();

  	create_forward(20, 30);
  	create_wait_time(5);
  	create_left(40, 0, SPEED);
	create_left(40, 0, 30);	//goes slower in order to get the box over the ramp	//reverse_distance(POS_START_X+200, SPEED);
  	create_forward(10, 30);
  	//create_left(5, 0, SPEED);
  	create_wait_time(5);

  	create_forward(90, SPEED);	//create_forward(POS_COW_X-POS_START_X, SPEED);
  	create_wait_time(10);
	create_right(65, 0, 30);
  	create_block();
  	//square up
  	create_backward(80, 30);
  	create_wait_time(5);
    create_block();

  	//reverse_distance(50, SPEED);
	//updateRobotPos(310, 0);
}
