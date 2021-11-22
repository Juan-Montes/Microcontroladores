#ifndef GPIO_h_
#define GPIO_h_



void GPIO_Conf()
{
        DDRB = 0b00000000;
        DDRC = 0b11111111;      //Salida
        DDRD = 0b00000000;      //Entrada
        PORTC = 0;
        PORTD = 0;
}

void IntExt_Conf()
{
        EICRA = (1<<ISC11)|(1<<ISC10)|(1<<ISC01)|(1<<ISC00);
        EIMSK = (1<<INT1)|(1<<INT0);
        EIFR = (0<<INTF1)|(0<<INTF0);
        PCICR = (0<<PCIE2)|(0<<PCIE1)|(0<<PCIE0);
        PCIFR = (0<<PCIF2)|(0<<PCIF1)|(0<<PCIF0);
        PCMSK2 = (0<<PCINT23)|(0<<PCINT22)|(0<<PCINT21)|(0<<PCINT20)|(0<<PCI>
        PCMSK1 = (0<<PCINT14)|(0<<PCINT13)|(0<<PCINT12)|(0<<PCINT11)|(0<<PCI>
        PCMSK0 = (0<<PCINT7)|(0<<PCINT6)|(0<<PCINT5)|(0<<PCINT4)|(0<<PCINT3)>

}
#endif
