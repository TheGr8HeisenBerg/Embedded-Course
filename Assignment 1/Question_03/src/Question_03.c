/*
 ============================================================================
 Name        : Question_3.c
 Author      : Youssef El-Nemaky
 Description : A program for converting temperature from
			   degrees Celsius to degrees Fahrenheit,
   	   	   	   given the formula:
    			F = C x 9 / 5 + 32
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float celsius;
	printf("Enter your degree in celsius: ");
	scanf("%f", &celsius);

	printf("%.2f in celsius = %.2f in fahrenheit", celsius, celsius * 9.0f/5.0f + 32);
	return 0;
}
