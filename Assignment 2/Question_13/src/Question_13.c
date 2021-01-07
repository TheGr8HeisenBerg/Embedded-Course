/*
 ============================================================================
 Name        : Question_13.c
 Author      : Youssef El-Nemaky
 Description : In this challenge write a function to add two floating numbers.
Determine the integer floor of the sum. The floor is the truncated float
value, anything after the decimal point is dropped. For instance
floor(1.1+3.05)=floor(4.15)=4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int integerSum(float, float);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float number1, number2;

	printf("Enter your two floating numbers: ");
	scanf("%f %f", &number1, &number2);

	printf("integer sum: %d" , integerSum(number1 , number2));
	return 0;
}


int integerSum(float num1, float num2){
	return num1 + num2;
}
