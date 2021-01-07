/*
 ============================================================================
 Name        : Question_19.c
 Author      : Youssef El-Nemaky
 Description : Write a C function that return 0 if a given number is a power of 3,
 otherwise return 1 (except 3 to the power of 0).
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int isPowerOfThree(unsigned int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int number;

	printf("Enter your number: ");
	scanf("%u", &number);

	if(!isPowerOfThree(number)){
		printf("%u is a power of 3", number);
	} else printf("%u is not a power of 3", number);

	return 0;
}


unsigned int isPowerOfThree(unsigned int number){
	if(number == 0){
		return 1;
	}
	while(number != 1){
		if(number % 3 != 0){
			return 1;
		}
		number /= 3;
	}
	return 0;
}
