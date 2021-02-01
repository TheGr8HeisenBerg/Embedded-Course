/*
 * main.c
 *
 *  Created on: Jan 23, 2021
 *      Author: Youssef
 */
#include <avr/io.h>



int main(void){
	DDRA &= ~(1<<0) & ~(1<<1) & ~(1<<2);
	DDRC |= (1<<0) | (1<<1);
	PORTC &= ~(1<<0) & ~(1<<1);
	while(1){
		if(PINA & (1<<0)){
			PORTC |= (1<<0);
			PORTC &= ~(1<<1);
		} else if(PINA & (1<<1)){
			PORTC &= ~(1<<0);
			PORTC |= (1<<1);
		} else{
			PORTC &= ~(1<<0);
			PORTC &= ~(1<<1);
		}
	}
}
