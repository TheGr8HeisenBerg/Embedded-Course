/*
 ============================================================================
 Name        : Question_17.c
 Author      : Youssef El-Nemaky
 Version     :
 Copyright   : 
 Description : A program that counts number of digits in a decimal number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number, numberOfDigits = 0;

	printf("Enter your number: ");
	scanf("%d", &number);

	printf("Number of digits in %d is ", number);
	if(number == 0){
		numberOfDigits = 1;
	}
	else
	{
		while(number != 0){
			number /= 10;
			numberOfDigits++;
		}
	}


	printf("%d", numberOfDigits);
	return 0;
}
