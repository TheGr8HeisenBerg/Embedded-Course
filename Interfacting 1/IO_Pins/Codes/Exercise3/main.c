/*
 * main.c
 *
 *  Created on: Jan 19, 2021
 *      Author: Youssef
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRB &= ~(1<<0) & ~(1<<1);
	DDRC |= (1<<0) | (1<<1);
	PORTC &= ~(1<<0) & ~(1<<1);

	while(1){
		if(PINB & (1<<0)){
			_delay_ms(30);
			if(PINB & (1<<0)){
				PORTC |= (1<<0);
			}
		} else PORTC &= ~(1<<0);

		if(PINB & (1<<1)){
			_delay_ms(30);
			if(PINB & (1<<1)){
				PORTC |= (1<<1);
			}
		} else PORTC &= ~(1<<1);
	}
}
