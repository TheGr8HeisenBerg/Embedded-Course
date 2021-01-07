/*
 ============================================================================
 Name        : Question_16.c
 Author      : Youssef El-Nemaky
 Description : Write a C function to count the number of 1’s in an unsigned 8-bit integer.
============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned char numberOfOnes(unsigned char);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	unsigned char number;

	printf("Enter your unsigned 8-bit number (range: 0->255): ");
	scanf("%i", &number);

	printf("%u has %u s in it", number , numberOfOnes(number));

	return 0;
}

unsigned char numberOfOnes(unsigned char number){
	unsigned char ones = 0;
	for(unsigned char i = 0; i < 8; i++){
		if(number & (1 << i)){
			ones++;
		}
	}
	return ones;
}
