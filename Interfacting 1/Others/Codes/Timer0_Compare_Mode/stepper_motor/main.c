/*
 * main.c
 *
 *  Created on: Jan 23, 2021
 *      Author: Youssef
 */


#include <avr/io.h>
#include <util/delay.h>

#define max_steps 8
int main(void){
	unsigned char stepperMotor[max_steps] = {8,12,4,6,2,3,1,9};
	DDRC |= 0x0f;
	PORTC &= 0xf0;
	unsigned char counter = 0;
	while(1){
		PORTC = (PORTC & 0xf0) | stepperMotor[counter];
		counter++;
		if(counter == 9){
			counter = 0;
		}
		_delay_ms(500);
	}
}
