#define AARDVARK_SERIAL
#include "core.h"
/* The above tells the compiler we want the core Aardvark utilities.
And the define above it, tells core we want the SERIAL utilities exposed. */

int main(void) {
  /* We initialise the serial library. Which sets up USART for us. */
  serial_init();

  while(1) {
    /* And now we can just use printf as normal. */
    printf("%s", "Hello, world!\r\n");
  }

  return 0;
}
