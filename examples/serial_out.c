#define AARDVARK_SERIAL
#include "core.h"

int main(void) {
  serial_init();

  while(1) {
    printf("%s", "Hello, world!\r\n");
  }
}
