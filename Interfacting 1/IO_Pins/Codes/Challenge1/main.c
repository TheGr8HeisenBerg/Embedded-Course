/*
 * main.c
 *
 *  Created on: Jan 19, 2021
 *      Author: Youssef
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRC |= 0xff;
	PORTC = 0;

	while(1){
		_delay_ms(500);
		PORTC = (PORTC<<1);
		if(PORTC == 0x00){
			PORTC = 0x01;
		}
	}
}
