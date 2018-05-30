#define AARDVARK_SERIAL
#include "core.h"
/* The above tells the compiler we want the core Aardvark utilities.
And the define above it, tells core we want the SERIAL utilities exposed. */

int main(void) {

  /* We intialise the serial library, which sets up USART for us. */
  serial_init();

  /* We need somewhere to store our input! */
  char input;

  while(1) {
    /* And now we can use getchar and printf as normal.
       Our getchar will loop until data is available, so it is *blocking*.
    */
    input = getchar();
    printf("Received: %c\n", input);
  }

  return 0;
}
