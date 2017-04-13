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
  	create_backward(45, 30);
    create_wait_time(10);
  	create_block();

  	create_forward(10, 30);
  	create_wait_time(5);
  	create_left(30, 0, SPEED);
	create_left(28, 0, 30);	//goes slower in order to get the box over the ramp
  	create_wait_time(5);

  	create_forward(120, SPEED);
  	create_wait_time(5);
	create_right(48, 0, 30);
  	create_wait_time(5);
  	//square up
  	create_backward(50, 30);	//square up
  	create_wait_time(5);
    create_block();

}
