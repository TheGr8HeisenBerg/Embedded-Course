/*
 * main.c
 *
 *  Created on: Jan 20, 2021
 *      Author: Youssef
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRD &= ~(1<<4);
	DDRC |= 0x0f;
	PORTC &= 0xf0;
	unsigned char flag = 0 , number = 0;

	while(1){
		if(PIND & (1<<4)){
			_delay_ms(30);
			if(PIND & (1<<4)){
				if(flag == 0){
					flag = 1;
					if( (PORTC & 0x0f) == 9){
						number = 0;
					} else number++;
					PORTC = (PORTC & 0xf0) | number;
				}
			}
		} else flag = 0;
	}
}
