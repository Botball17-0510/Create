#include "farmHayBales.h"
#ifdef __GNUC__
#include "kipr/botball.h"
#else
#include <kipr/botball.h>
#endif
#include "exmove.h"

#define SPEED 10

/**
 * Grabs the 3 haybales at the farm
 */
void farmHayBales() {
	straight_distance(150, SPEED);
	rotate(90, LEFT, SPEED);

}
