#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "GPIO.h"

unsigned int cuenta = 0;

ISR(INT0_vect,ISR_NAKED)
{
cuenta++;
if(cuenta >=64)
{
        cuenta = 0;
        PORTC = cuenta;
}
PORTC = cuenta;
reti();
}               // Vector de interrupción externa del INT0

ISR(INT1_vect,ISR_NAKED)
{
cuenta--;
if(cuenta >= 255)
{
        cuenta=63;
        PORTC = cuenta;
}
PORTC = cuenta;
reti();
}               // Vector de interrupción externa del INT1


int main(void)
{
        GPIO_Conf();
        IntExt_Conf();
        sei();
        while(1)
        {
        }
}
