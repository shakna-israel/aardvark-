#include <avr/io.h>
#include <util/delay.h>

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
    _delay_ms(1000);
    /*
      Bitshift back the other way.
    */
    PORTB &= ~_BV(PORTB5);
    _delay_ms(1000);
  }

  return 0;
}
