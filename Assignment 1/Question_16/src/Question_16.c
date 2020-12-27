/*
 ============================================================================
 Name        : Question_16.c
 Author      : Youssef El-Nemaky
 Description : A program to reverse a number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number, reversedNumber = 0;
	printf("Enter your number to reverse: ");
	scanf("%d", &number);

	while(number != 0){
		reversedNumber = reversedNumber * 10 + (number % 10);
		number /= 10;
	}

	printf("The number reversed = %d", reversedNumber);
	return 0;
}
