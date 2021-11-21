#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "Mylib.h"

int main(void){
        GPIO_Conf();
        while(1)
        {
                PORTD =0b00000001;
                _delay_ms(50);
                while(PORTD<=0b01000000)        //set en el bit 7 =128d
                {
                        PORTD = PORTD<<1;
                        _delay_ms(50);
                }
                while(PORTD>=0b00000100)        //set en el bit 3 =8d
                {
                        PORTD = PORTD>>1;
                        _delay_ms(50);
                }
        }
        return 0;
}


