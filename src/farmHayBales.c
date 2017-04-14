
#include "exmove.h"
#include "createDrive.h"
#include "farmHayBales.h"

void MARKER(int n) {
  printf("FHB MARKER %d\n", n);
}

/**
 * Grabs the 3 haybales at the farm
 */
void farmHayBales() {
  // MARKER(1);
  // claw(CLAW_OPEN); // MARKER 1
  // arm(1400);
  // msleep(400);

  MARKER(2);
	create_backward(600, HIGH_SPEED); // MARKER 2
  create_block();

  MARKER(3);
  create_forward(740, SPEED); // MARKER 3
  create_block();

  MARKER(4);
  create_left(90, 0, SPEED); // MARKER 4
  create_block();

  MARKER(5);
  create_backward(500, HIGH_SPEED); // MARKER 5
  create_block();

  MARKER(6);
  create_forward(150, SPEED); // MARKER 6
  create_block();

  MARKER(7);
  create_left(86, 0, SPEED); // MARKER 7
  create_block();

  MARKER(8);
  create_forward(230, SPEED); // MARKER 8
  create_block();
  pickUpObject(-100);

  MARKER(9);
  create_forward(160, SPEED); // MARKER 9
  create_block();
  pickUpObject(-100);

  MARKER(10);
  create_forward(160, SPEED); // MARKER 10
  create_block();
  pickUpObject(-100);

}
