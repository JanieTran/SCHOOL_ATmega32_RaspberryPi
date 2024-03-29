/*
 * Lab1_Task3.c
 *
 * Created: 20-Jul-18 4:14:19 PM
 * Author : Dell
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	// PA0 as output
    DDRA |= 1 << DDA0;
	
    while (1) 
    {
		// LED on when pushed, off when released
		if (PINA & 1 << PINA1) {
			PORTA |= 1 << PORTA0;
		} else {
			PORTA &= ~(1 << PORTA0);
		}
    }
}

