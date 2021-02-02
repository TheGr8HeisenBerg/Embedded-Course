/*
 * Exercise2.c
 *
 *  Created on: Feb 2, 2021
 *      Author: Youssef
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

void ext_int1_init(void){
	DDRD &= ~(1<<PD3);
	PORTD |= (1<<PD3);
	MCUCR |= (1<<ISC11);
	GICR |= (1<<INT1);
}

int main(void){
	SREG |= (1<<7);
	DDRC = 0xff;
	PORTC = 0x01;
	ext_int1_init();
	while(1){
		_delay_ms(500);
		PORTC = (PORTC<<1);
		if(PORTC == 0){
			PORTC = 0x01;
		}
	}
}


ISR(INT1_vect){
	unsigned char beforeInterruptState = PORTC;
	unsigned char i = 0;
	PORTC = 0xff;
	for(i = 0 ; i < 10; i++){
		_delay_ms(500);
		PORTC ^= 0xff;
	}
	PORTC = beforeInterruptState;
}
