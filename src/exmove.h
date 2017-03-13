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
 * Moves the servo to a given position, taking a given amount of seconds
 *
 * @param (int) servo Id of the servo to move, between 0 and 3
 * @param (int) goal Position of the servo to move to, between 0 and 2047
 * @param (float) ms The amount of time to take to move to the position
 */
void slowServo(int servo, int goal, float ms);

void claw(int v);

void arm(int v);

void pickUpObject();

void straight_distance(int mm, int speed);

void reverse_distance(int mm, int speed);

// DEPRECATED ON VERSION THE FIRST ONE DOENT WORK FIX IT BEFORE USEING
void rotate(float degrees, int direction, int speed);

#endif
