/*
 * main.c
 *
 *  Created on: Jan 19, 2021
 *      Author: Youssef
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRD |= (1<<6);
	PORTD |= (1<<6);
	while(1){
		_delay_ms(1000);
		PORTD ^= (1<<6);
	}
}
