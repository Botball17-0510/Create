#include <kipr/botball.h>
#include "exmove.h"
#include "createDrive.h"
#include "farmHayBales.h"

/**
 * Markers are there to be used in reference to the FHB plan doc
 * @param n marker #
 */
void marker(int n) {
  printf("FHB MARKER %d\n", n);
}

/**
 * Grabs the 3 haybales at the farm
 */
void farmHayBales() {
  // marker(1);

  marker(-2);
  create_backward(700, HIGH_SPEED); // marker 2
  create_block();
  
  marker(3);
  create_forward(810, SPEED); // marker 3
  create_block();

  marker(4);
  create_left(90, 0, SPEED); // marker 4
  create_block();

  marker(5);
  create_backward(500, HIGH_SPEED); // marker 5
  create_block();

  marker(6);
  create_forward(130, SPEED); // marker 6
  create_block();

  marker(7);
  create_left(86, 0, SPEED); // marker 7
  create_block();

  marker(8);
  create_forward(190, SPEED); // marker 8
  create_block();
  pickUpObject(-100);

  int i;
  for (i = 0; i < 9; i ++){
    marker(9+i);
    create_forward(45, SPEED); // marker 9
    create_block();
    pickUpObject(-100);
  }

  //////////////////////////////////////////////////////////////////////////////
  // Finished hay bale portion move over peoples                              //
  //////////////////////////////////////////////////////////////////////////////

  // This is simple enough to not need the markers

  create_right(90, 0, SPEED);
  create_block();

  create_forward(600, SPEED);
  create_block();

}
