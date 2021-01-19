/*
 * main.c
 *
 *  Created on: Jan 19, 2021
 *      Author: JIGamer
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRB &= ~(1<<0);
	PORTB |= (1<<0);

	DDRC |= (1<<0);
	PORTC |= (1<<0);

	unsigned char flag = 0;

	while(1){
		if(!(PINB & (1<<0))){
			_delay_ms(30);
			if(!(PINB & (1<<0))){
				if(flag == 0){
					flag = 1;
					PORTC ^= (1<<0);
				}
			}
		} else flag = 0;
	}
}
