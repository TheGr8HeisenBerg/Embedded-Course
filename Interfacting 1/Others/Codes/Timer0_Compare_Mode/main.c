/*
 * main.c
 *
 *  Created on: Jan 22, 2021
 *      Author: Youssef
 */
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

void timer0_ctc_init(void){
	TCCR0 = (1<<FOC0) | (1<<WGM01) | (1<<CS00) | (1<<CS02);
	OCR0 = 250;
	SREG |= (1<<7);
	TIMSK |= (1<<OCIE0);
}

unsigned char tick = 0;
int main(void){
	DDRD |= (1<<0);
	PORTD &= ~(1<<0);
	timer0_ctc_init();
	while(1){

	}
}


ISR(TIMER0_COMP_vect){
	tick++;
	if(tick == 2){
		tick = 0;
		PORTD ^= (1<<0);
	}
}
