#ifndef MINIFIED
#	include "farmHayBales.h"
#	ifdef __GNUC__
#		include "kipr/botball.h"
#	else
#		include <kipr/botball.h>
#	endif
#	include "exmove.h"
#	include "createDrive.h"
#endif

/**
 * Grabs the 3 haybales at the farm
 */
void farmHayBales() {
	straight_distance(100, SPEED);
	create_left(90, LEFT, SPEED);
}
