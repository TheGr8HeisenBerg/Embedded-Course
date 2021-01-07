/*
 ============================================================================
 Name        : Question_18.c
 Author      : Youssef El-Nemaky
 Description : Given a positive integer z, check if z can be written as p^q , where p and q are positive integers
 other than 1, if z can be written as p^q , return 1 else return 0.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPowerOfTwoNumbers(unsigned int);
unsigned int power(unsigned int, unsigned int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int z;

	printf("Enter your positive number: ");
	scanf("%u", &z);

	printf("return value of the function: %u", isPowerOfTwoNumbers(z));
	return 0;
}

int isPowerOfTwoNumbers(unsigned int z){
	for(unsigned int p = 2; p <= sqrt(z); p++){
		for(unsigned int q = 2; q < z; q++){
			if(power(p,q) == z){
				printf("p = %u , q = %u\n", p, q);
				return 1;
			} else if(power(p,q) > z){
				break;
			}
		}
	}
	return 0;
}

unsigned int power(unsigned int x, unsigned int y){
	unsigned int total = 1;
	for(int i  = 0; i < y; i++){
		total *= x;
	}
	return total;
}
