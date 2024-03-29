/*
 * Lab1_Task3_PushToggle.c
 *
 * Created: 30-Jul-18 7:58:26 PM
 * Author : Dell
 */ 

#ifndef F_CPU
#define F_CPU 12000000ul
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // PA0 as output
    DDRA |= 1 << DDA0;
    	
    while (1)
    {    	
	    // Toggle on push
	    if (PINA & 1 << PINA1) {
		    _delay_ms(300);
		    PORTA ^= 1 << PORTA0;
	    }
    }
}

