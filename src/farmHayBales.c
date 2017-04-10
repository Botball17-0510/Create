#include "exmove.h"
#include "createDrive.h"
#include "farmHayBales.h"

/**
 * Grabs the 3 haybales at the farm
 */
void farmHayBales() {

	create_right(90, 0, SPEED);
	straight_distance(500, SPEED);
	create_right(90, 0, SPEED);
	straight_distance(200, SPEED);

}
