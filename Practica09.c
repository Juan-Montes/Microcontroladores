#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "Mylib.h"

int main(void){
        GPIO_Conf();    //Funcion en mi libreria
        while(1){
                if(boton_pushPC(0) == 1)
                {
                        salida_uno(PORTD,5);
                }
                if(boton_pushPC(0) == 0)
                {
                        salida_cero(PORTD,5);
                }
        }
        return 0;
}



