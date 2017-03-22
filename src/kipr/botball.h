#ifndef BOTBALL_H
#define BOTBALL_H
/* bunch of useless botball stuff, just defining them here so gcc won't complain */

void mrp(int x, int y, int z);
/**
 * Sleep for a certain amount of tiem
 * @param x [description]
 */
void msleep(int x);
/**
 * Sets position of servo
 * @param x servo
 * @param y position
 */
void set_servo_position(int x, int y);
int get_servo_position(int x);
void enable_servo(int x);
void disable_servo(int x);
int a_button();
int b_button();
int c_button();
int analog(int x);
void mav(int x, int y);
void off(int x);
int create_connect();
int create_disconnect();
int printf(const char * a, ...);
void create_drive_straight(int x);
void create_start();
void create_stop();
void create_drive_direct(int x, int y);
void create_spin_CCW(int speed);
void create_spin_CW(int speed);
void create_write_byte(char b);
int create_read_block(char *data, int count);
float sin(float x);
float cos(float x);
float tan(float x);

#endif
