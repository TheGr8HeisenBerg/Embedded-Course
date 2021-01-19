/*
 * main.c
 *
 *  Created on: Jan 19, 2021
 *      Author: JIGamer
 */


#include <avr/io.h>
#include <util/delay.h>


int main(void){
	DDRA &= ~(1<<3);
	DDRC |= (1<<5);
	PORTC &= ~(1<<5);
	unsigned char flag = 0;
	while(1){
		if(PINA & (1<<3)){
			_delay_ms(30);
			if(PINA & (1<<3)){
				if(flag == 0){
					flag  = 1;
					PORTC |= (1<<5);
				}
			}
		} else {
			flag = 0;
			PORTC &= ~(1<<5);
		}
	}
}
