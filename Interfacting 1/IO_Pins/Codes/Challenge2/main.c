/*
 * main.c
 *
 *  Created on: Jan 20, 2021
 *      Author: Youssef
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRA &= ~(1<<0) & ~(1<<1);
	DDRD |= 0x0f;
	PORTD &= 0xf0;
	unsigned char num = 0, flag0 = 0, flag1 = 0;
	while(1){
		if(PINA & (1<<0)){
			_delay_ms(30);
			if(PINA & (1<<0)){
				if(flag0 == 0){
					flag0 = 1;
					if((PORTD & 0x0f) != 9){
						num++;
						PORTD = (PORTD & 0xf0) | num;
					}
				}
			}
		} else flag0 = 0;


		if(PINA & (1<<1)){
			_delay_ms(30);
			if(PINA & (1<<1)){
				if(flag1 == 0){
					flag1 = 1;
					if((PORTD & 0x0f) != 0){
						num--;
						PORTD = (PORTD & 0xf0) | num;
					}
				}
			}
		} else flag1 = 0;
	}
}
