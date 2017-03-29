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

#just for show to my friend so that he can understand commiting + pushing + github


/**
 * Grabs the 3 haybales at the farm
 */
void farmHayBales() {

	create_right(90, 0, SPEED);
	straight_distance(500, SPEED);
	create_right(90, 0, SPEED);
	straight_distance(200, SPEED);
	
}
