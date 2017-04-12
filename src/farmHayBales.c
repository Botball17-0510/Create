
#include "exmove.h"
#include "createDrive.h"
#include "farmHayBales.h"

/**
 * Grabs the 3 haybales at the farm
 */
void farmHayBales() {
  claw(CLAW_OPEN);
  arm(1800);
  msleep(200);
  arm(1400);
  msleep(200);
	straight_distance(100, SPEED);
	create_right(90, 0, SPEED);
}
