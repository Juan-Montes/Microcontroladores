#ifndef Mylib_h_
#define Mylib_h_

#define salida_uno(port,bit) (port) |= (1<<(bit))
#define salida_cero(port,bit) (port) &= ~(1<<(bit))

#define boton_pushPB(bit) (PINB & (1<<bit))//boton PORTB
#define boton_pushPC(bit) (PINC & (1<<bit))
#define boton_pushPD(bit) (PIND & (1<<bit))


//Funcion para configurar los puertos I/O

void GPIO_Conf(){

        DDRB = 0b11111111; //Salida
        DDRC = 0b00000000; //Entrada
        DDRD = 0b11111111; //Salida

        PORTB = 0b00000000; //clear ports for trash bits;
        PORTC = 0b00000000;
        PORTD = 0b00000000;
}
#endif


