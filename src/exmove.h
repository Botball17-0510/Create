#ifndef EXMOVE_H
#define EXMOVE_H

void straight_distance(int mm, int speed) {
	create_drive_straight(speed);
	msleep((25/28)*(mm/speed)*1000);
	create_stop();
}

#endif
