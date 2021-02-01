/*
 * main.c
 *
 *  Created on: Jan 22, 2021
 *      Author: Youssef
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


void INT1_INIT(void){
	DDRD &= ~(1<<PD3); // making pd3 input pin
	PORTD |= (1<<3);
	SREG |= (1<<7); // enabling interrupts
	GICR |= (1<<INT1); // enable external interrupt 1 request


	//enabling external interrupt 1 to work on falling edge
	MCUCR |= (1<<ISC11);
	MCUCR &= ~(1<<ISC10);

}

int main(void){
	DDRC = 0xff;
	PORTC = 1;
	INT1_INIT();

	while(1){
		_delay_ms(1000);
		PORTC = (PORTC<<1);

		if(PORTC==0x00){
			PORTC = 1;
		}

	}
}

ISR(INT1_vect){
	unsigned char oldState = PORTC;
	PORTC = 0xff;
	for(int i = 0; i < 10;i++){
		_delay_ms(1000);
		PORTC ^= 255;
	}
	PORTC = oldState;

}
