#include <avr/io.h>

/*
  The below says to use Aardvark's core wrappers,
  and to enable the CLOCK library, where we can
  find `delay` defined.
*/
#define ARRDVARK_CLOCK
#include "core.h"

int main(void) {
  /*
    Set the register to output
  */
  DDRB |= _BV(PORTB5);

  while(1) {
    /*
      Bitshift the register to on
    */
    PORTB |= _BV(PORTB5);
    delay(1000);
    /*
      Bitshift back the other way.
    */
    PORTB &= ~_BV(PORTB5);
    delay(1000);
  }

  return 0;
}
