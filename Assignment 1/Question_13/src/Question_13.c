/*
 ============================================================================
 Name        : Question_13.c
 Author      : Youssef El-Nemaky
 Description : A program that reads a positive integer and
			   checks if it is a prime.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int number;

	printf("Enter the number to check weather it's a prime or not: ");
	scanf("%u", &number);

	if(number == 1){
		printf("%u is not a prime number!", number);
	} else {
		for(int i =  2; i < number / 2 ;i++){
			if(number % i == 0){
				printf("%u is not a prime number!", number);
				return 0;
			}
		}
		printf("%u is a prime number!", number);
	}
	return 0;
}
