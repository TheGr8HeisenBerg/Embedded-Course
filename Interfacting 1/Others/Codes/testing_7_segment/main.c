/*
 * main.c
 *
 *  Created on: Jan 28, 2021
 *      Author: Youssef
 */

#include <avr/io.h>

int main(void){
	DDRD |= 0x0f;
	PORTD &= 0xf8;
	while(1){

	}
}
