#ifndef MINIFIED
#include "kipr/botball.h"
#include "initialDrive.h"
#include "createDrive.h"

#include "exmove.h"
#endif

void initialDrive() {
	pickUpObject(100);
  	msleep(500);
	slowServo(CLAW_SERVO, CLAW_CLOSED, 1000);
  	//square up
  	create_backward(45, 50);
    create_wait_time(10);
  	create_block();

  	create_forward(10, 50);
  	create_wait_time(5);
  	create_left(35, 0, SPEED);
	create_left(40, 0, 50);	//goes slower in order to get the box over the ramp
  	create_wait_time(5);
  	
  	create_forward(150, SPEED * 2);
  	create_wait_time(5);
	create_right(65, 0, SPEED);
  	create_wait_time(5);
  	//square up
  	create_backward(80, 50);	//square up
  	create_wait_time(5);
    create_block();

}
