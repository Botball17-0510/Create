///////////////////////////////////////////////////////////////
// exmove.c                                                  //
// Created by Zachary Mayhew                                 //
// For use by botball team 17-0510                           //
// Use for basic functions                                   //
///////////////////////////////////////////////////////////////

#ifndef EXMOVE_H
#define EXMOVE_H

#define LEFT 0
#define RIGHT 1

#define PI 3.141592f

// distance between the two wheels
#define DIAMETER 249.0
#define CIRCUMFERENCE DIAMETER*PI


#define ARM_SERVO 1
#define CLAW_SERVO 0

#define CLAW_CLOSED 950
#define CLAW_OPEN 450

#define ARM_DOWN 2000
#define ARM_UP 200

/**
 * Moves the servo slowly
 * @param servo servo port
 * @param goal  goal for servo
 * @param ms    time it should take
 */
void slowServo(int servo, int goal, float ms);

/**
 * Sets the position of the claw
 * @param v position
 */
void claw(int v);

/**
 * Sets the position of the arm
 * @param v position
 */
void arm(int v);

/**
 * Picks up an object such as hay bale and puts it in the container
 */
void pickUpObject();

/**
 * Moves straight a distance
 * @param mm    distance to be moved
 * @param speed speed at which to move
 */
void straight_distance(int mm, int speed);

/**
 * Reverse a certain distance
 * @param mm    Distance to be move
 * @param speed speed to move
 */
void reverse_distance(int mm, int speed);

/**
 * Rotates the entire robot to a position
 * @param degrees   angle to move
 * @param direction direction (left or right)
 * @param speed     speed to move
 */
void rotate(float degrees, int direction, int speed);

#endif
