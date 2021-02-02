/*
 * Challenge.c
 *
 *  Created on: Feb 2, 2021
 *      Author: Youssef
 */
#include <avr/io.h>
#include <avr/interrupt.h>

void ext_int2_init(void){
	SREG |= (1<<7);
	DDRB &= ~(1<<PB2);
	MCUCR |= (1<<ISC2);
	GICR |= (1<<INT2);
}

int main(void){
	ext_int2_init();
	DDRC |= 0x0f;
	PORTC &= 0xf0;
	while(1){

	}
}


ISR(INT2_vect){
	unsigned char number = (PORTC<<4)>>4;
	number++;
	if(number == 10){
		number = 0;
	}
	PORTC = (PORTC & 0xf0) | number;
}
