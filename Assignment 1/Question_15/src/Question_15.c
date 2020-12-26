/*
 ============================================================================
 Name        : Question_15.c
 Author      : Youssef El-Nemaky
 Description :  A program to calculate the power of a number.
				The number and its power are input from user.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float number, power;

	printf("Enter your number: ");
	scanf("%f", &number);

	printf("Enter your power: ");
	scanf("%f", &power);

	printf("%.2f ^ %.2f = %.2f",number, power, pow(number, power));

	return 0;
}
