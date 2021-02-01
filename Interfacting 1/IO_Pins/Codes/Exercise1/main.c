/*
 * main.c
 *
 *  Created on: Jan 19, 2021
 *      Author: Youssef
 */


#include <avr/io.h>
#include <util/delay.h>


int main(void){
	DDRA &= ~(1<<3);
	DDRC |= (1<<5);
	PORTC &= ~(1<<5);
	while(1){
		if(PINA & (1<<3)){
			_delay_ms(30);
			if(PINA & (1<<3)){
					PORTC |= (1<<5);
			}
		} else {
			PORTC &= ~(1<<5);
		}
	}
}
