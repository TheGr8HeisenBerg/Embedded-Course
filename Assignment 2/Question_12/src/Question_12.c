/*
 ============================================================================
 Name        : Question_12.c
 Author      : Youssef El-Nemaky
 Description :  Write a C function that calculates the required heater activation time
according to the input temperature of water.
- if input temperature is from 0 to 30, then required heating time = 7 minutes.
- if input temperature is from 30 to 60, then required heating time = 5 minutes.
- if input temperature is from 60 to 90, then required heating time = 3 minutes.
- if input temperature is more than 90, then required heating time = 1 minute;
- if temperature is invalid (more than 100), return 0
Example:
Input = 10 -> output = 7
Input = 35 -> output = 5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int heatingTime(int temperature);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int temperature;

	printf("Enter your temperature: ");
	scanf("%d", &temperature);

	printf("for a temperature of %d , heating time should be %d minutes", temperature, heatingTime(temperature));

	return 0;
}


int heatingTime(int temperature){
	if(temperature >= 0 && temperature <= 30){
		return 7;
	} else if(temperature >= 30 && temperature <= 60){
		return 5;
	} else if(temperature >= 60 && temperature <= 90){
		return 3;
	} else if(temperature >= 90 && temperature <= 100){
		return 1;
	} else return 0;
}
