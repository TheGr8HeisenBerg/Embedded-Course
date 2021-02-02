/*
 * Exercise1.c
 *
 *  Created on: Feb 2, 2021
 *      Author: Youssef
 */

#include <avr/io.h>
#include <avr/interrupt.h>


void ext_int0_init(void){
	DDRD &= ~(1<<PD2);
	MCUCR |= (1<<ISC00) | (1<<ISC01);
	GICR |= (1<<INT0);
}

int main(void){
	SREG |= (1<<7);
	DDRC |= (1<<PC0);
	PORTC |= (1<<PC0);
	ext_int0_init();
	while(1){

	}
}

ISR(INT0_vect){
	PORTC ^= (1<<PC0);
}

