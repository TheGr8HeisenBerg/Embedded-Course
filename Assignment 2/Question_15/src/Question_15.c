/*
 ============================================================================
 Name        : Question_15.c
 Author      : Youssef El-Nemaky
 Description : Write a C function to count the number of 1’s in an unsigned 32-bit integer.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned char numberOfOnes(unsigned int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	unsigned int number;

	printf("Enter your unsigned 32-bit integer (range: 0 -> 4,294,967,295): ");
	scanf("%i", &number);

	printf("%u has %u s in it.", number, numberOfOnes(number));

	return 0;
}


unsigned char numberOfOnes(unsigned int number){
	unsigned char ones = 0;

	for(unsigned int i = 0; i < 32; i++){
		if(number & (1 << i)){
			ones++;
		}
	}

	return ones;
}

