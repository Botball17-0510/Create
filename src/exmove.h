///////////////////////////////////////////////////////////////
// exmove.c                                                  //
// Created by Zachary Mayhew                                 //
// For use by botball team 17-0510                           //
///////////////////////////////////////////////////////////////

#ifndef EXMOVE_H
#define EXMOVE_H

#define LEFT 0
#define RIGHT 1

#define PI 3.141592f

#define DIAMETER 25.0f
#define CIRCUMFERENCE DIAMETER*PI

void straight_distance(int mm, int speed) {
	create_drive_straight(speed);
	msleep((mm/speed)*1000);
	create_stop();
}
void rotate(float degrees, int direction, int speed) {
	if (direction == LEFT) {
		create_drive_direct(speed, -speed);
	} else {
		create_drive_direct(-speed, speed);
	}
	float mm = degrees/360.0f*CIRCUMFERENCE;
	msleep((mm/speed)*1000);
	create_stop();
}

#endif
