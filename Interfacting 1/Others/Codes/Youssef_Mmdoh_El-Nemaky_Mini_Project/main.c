/*
 * main.c
 *
 *  Created on: Jan 30, 2021
 *      Author: Youssef Mmdoh El-Nemaky
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

unsigned char time[3] = {0,0,0}; // global array to keep track of time

//time[0] -> seconds
//time[1] -> minutes
//time[2] -> hours

void timer1_ctc_init(void);
void timer1_resume(void);
void timer1_pause(void);
void ext_int0_init(void);
void ext_int1_init(void);
void ext_int2_init(void);



int main(void){
	unsigned char segmentToPower;
	SREG |= (1<<7); //setting global interrupt enable
	DDRC |= 0x0f; //setting first 4 bits on port-c to be output
	DDRA |= 0x3f; //setting first 6 bits on port-a to be output
	//calling initialization functions
	timer1_ctc_init();
	ext_int0_init();
	ext_int1_init();
	ext_int2_init();

	//super loop
	while(1){
		for(segmentToPower = 0;segmentToPower < 6; segmentToPower++){
			PORTA = (PORTA & 0xc0) | (1<<segmentToPower);
			if(segmentToPower % 2 == 0){
				PORTC = (PORTC & 0xf0) | (time[segmentToPower/2] % 10);
			} else PORTC = (PORTC & 0xf0) | (time[segmentToPower/2] / 10);
			_delay_ms(5);
		}
	}
}

void timer1_ctc_init(void){
	//this function is to configure the timer to run on ctc mode and to fire an interrupt every 1 second.

	/*
	 * IMPORTANT EQUATIONS
	 * F_oc = 1 Mhz
	 * chosen pre-scaler = 64
	 * F_timer = 1 Mhz / 64 = 	15625 Hz
	 * single tick time = 1 / F_timer = 1 / 15625 = 64 us.
	 * number of ticks to reach 1 second = 1 / 64 us = 15625 tick
	 */

	TCCR1B |= (1<<WGM12) | (1<<CS10) | (1<<CS11); // set timer on CTC mode and a prescaler of 64
	OCR1A = 15625; // number of ticks to reach 1 second
	TIMSK |= (1<<OCIE1A); // enabling output compare match interrupt

}

void timer1_resume(void){
	TCCR1B |= (1<<CS10) | (1<<CS11); //clock resumed on pre-scaler of 64 - timer resumed
}

void timer1_pause(void){
	TCCR1B &= ~(1<<CS10) & ~(1<<CS11); //removing clock - timer paused
}

void ext_int0_init(void){
	//This function will enable external interrupt 0 to work on falling edge with an internal pull up resistor
	DDRD &= ~(1<<PD2);   //making pin 2 of port-D input
	PORTD |= (1<<PD2);   //enabling internal pull up resistor
	MCUCR |= (1<<ISC01); //configuring interrupt to fire on falling edge
	GICR |= (1<<INT0); 	 //setting external interrupt 0 request enable
}

void ext_int1_init(void){
	//This function will enable external interrupt 1 to work on rising edge with pull down configuration
	DDRD  &= ~(1<<PD3); //making pin 3 of port-D input
	MCUCR |= (1<<ISC10) | (1<<ISC11); //configuring interrupt to fire on rising edge
	GICR |= (1<<INT1); //setting external interrupt 1 request enable
}

void ext_int2_init(void){
	//This function will enable external interrupt 2 to work on falling edge with internal pull up resistor
	DDRB &= ~(1<<PB2); //making pin 2 of port-B input
	PORTB |= (1<<PB2); //enabling internal pull up resistor
	MCUCSR &= ~(1<<ISC2); //configuring interrupt to fire on falling edge
	GICR |= (1<<INT2); //setting external interrupt 2 request enable
}

ISR(TIMER1_COMPA_vect){
	//Update Time
	time[0]++; //update seconds
	if(time[0] == 60){
		time[0] = 0;
		time[1]++; //update minutes
		if(time[1] == 60){
			time[1] = 0;
			time[2]++; //update hours


			//IN CASE OF CLOCK
			/*
			 * if(time[2] == 12) time[2] = 1 //12 hours setting
			 * if(time[2] == 24) time[2] = 0 //24 hours setting
			 */
		}
	}
}

ISR(INT0_vect){
	//Reset Timer
	time[0] = 0;
	time[1] = 0;
	time[2] = 0;
	TCNT1 = 0;
}
ISR(INT1_vect){
	//Pause Timer
	timer1_pause();
}
ISR(INT2_vect){
	//Resume Timer
	timer1_resume();
}


