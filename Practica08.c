#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void){
        DDRB=0b11111111;  //PORTB se configura como salida
        PORTB=0b00000000;
        while(1){
                PORTB=32;  //un set en el bit 5, 2^5=32 ON LED
                _delay_ms(500);
                PORTB=0;        //OFF LED
                _delay_ms(500);
        }
        return 0;
}



