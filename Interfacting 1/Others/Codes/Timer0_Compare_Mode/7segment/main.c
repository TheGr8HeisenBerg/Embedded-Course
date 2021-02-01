/*
 * main.c
 *
 *  Created on: Jan 19, 2021
 *      Author: JIGamer
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRA &= ~(1<<1);
	DDRC |= 0x0f;
	PORTC &= 0xf0;
	unsigned char num = 0;
	unsigned char flag = 0;
	while(1){
		if(PINA & (1<<1)){
			_delay_ms(30);
			if(PINA & (1<<1)){
				if(flag == 0){
					flag = 1;
					if((PORTC & 0x0f) == 9){
						num = 0;
					} else{
						num++;
					}
					PORTC = (PORTC & 0xf0) | num;
				}
			}
		} else flag = 0;
	}
}
