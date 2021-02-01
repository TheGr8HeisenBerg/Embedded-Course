/*
 * main.c
 *
 *  Created on: Jan 25, 2021
 *      Author: Youssef
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

//global time array

unsigned char time_array[3] = {0,27,12};

void timer1_init(){
	//set timer 1 to compare 1 second
	TCCR1B |= (1<<CS10) | (1<<CS11) | (1<<WGM12);
	OCR1A = 15625;
	TIMSK |= (1<<OCIE1A);
}
int main(void){
	SREG |= (1<<7); //Enabling Global Interrupt
	DDRD |= 0x0f; // Make the first 4 pins output for the BCD
	DDRC |= 0x3f; // Make the first 6 pins output for the 7 segment control ON/OFF
	DDRA |= (1<<0);
	PORTA &= ~(1<<0);
	PORTC = 0;
	unsigned char i;
	timer1_init();
	while(1){
		for(i = 0;i < 6; i++){
			//turn off old 7-segment before turning on the new one
			if(i == 0){
				PORTC &= ~(1<<5);
			} else PORTC &= ~(1<<(i-1));
			//turn on the new 7-segment
			PORTC |= (1<<i);

			//choosing what to output from time array first or second digit
			if(i % 2 == 0){
				PORTD = (PORTD & 0xf0) | (time_array[(i/2)] % 10);
			} else PORTD = (PORTD & 0xf0) | (time_array[(i/2)] / 10);

			_delay_ms(1);
		}
	}
}

ISR(TIMER1_COMPA_vect){
	PORTA ^= (1<<0);
	time_array[0]++;
	if(time_array[0] == 61){
		time_array[0] = 0;
		time_array[1]++;
		if(time_array[1] == 61){
			time_array[1] = 0;
			time_array[2]++;
			if(time_array[2] == 12){
				time_array[2] = 0;
			}
		}
	}
}

