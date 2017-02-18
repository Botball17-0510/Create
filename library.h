#ifndef OPERAIION_RICHARD_H
#define OPERATION_RICHARD_H

#define WHEEL_DISTANCE some ammount of inches

#define POINT_EMPTY 0
#define POINT_BLOCK 1

typedef unsigned int grid_point;
typedef unsigned int grid_pos;
typedef grid_point[][] grid;
typedef unsigned int port;

struct Robot {
	port left_port;
	port right_port;
	port prox_port;
};

struct RichardGrid {
	grid grid;
	grid_pos robot_x;
	grid_pos robot_y;
};

Robot createRobot(port left_port, port right_port, port prox_port) {
	Robot robot;
	robot.left_port = left_port;
	robot.right_port = right_port;
	robot.prox_port = prox_port;
}

/**
 * Creates a richard grid
 * @param grid_width width of grid
 * @param grid_height height of grid
 * @param robot_x x pos of robot
 * @param robot_y y pos of robot
 */
RichardGrid createRichardGrid(grid_pos grid_width, grid_pos grid_height, grid_pos robot_x, grid_pos robot_y) {
	RichardGrid grid;
	grid.grid = grid_point[grid_width][grid_height];
	grid.robot_x = robot_x;
	grid.robot_y = robot_y;
}

void turnToAngle(float angle) {
	// turn to an angle
}

void travelDistance(float distance) {
	// go a distance
}

void goToPoint(RichardGrid grid, Robot robot, grid_pos x, grid_pos y) {
	grid_pos dx = abs(grid.robot_x - x);
	grid_pos dy = abs(grid.robot_y - y);
	unsigned float distance = sqrt(dx*dx + dy*dy);
	float angle = tan(dy/dx);
	turnToAngle(angle);
	travelDistance(distance);
}

void updateData(RichardGrid grid, Robot robot) {
	mav(robot.left_port, 1500);
	mav(robot.right_port, -1500);
	unsigned short[360] values;
	int i = 0;
	while (i < 360) {
		values[i] = analog(robot.prox_port);
		// turn 1 degree
		i++;
	}
	ao();
}

#endif
