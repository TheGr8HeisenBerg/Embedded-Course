/*
 ============================================================================
 Name        : Question_11.c
 Author      : Youssef El-Nemaky
 Description : Write a C function that returns 1 if the input number is a power of 2
and return 0 if the input number is not power of 2.
For example: 1, 2 and 16 are power of 2.
 0, 10 and 30 are not power of 2.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int isPowerOfTwo(int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int number;

	printf("Enter your number: ");
	scanf("%d", &number);

	if(isPowerOfTwo(number)){
		printf("%d is a power of 2", number);
	} else printf("%d is not a power of 2", number);

	return 0;
}



int isPowerOfTwo(int number){
	while(number != 1){
		if(number % 2 != 0){
			return 0;
		}
		number /= 2;
	}
	return 1;
}
