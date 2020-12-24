/*
 ============================================================================
 Name        : Question_12.c
 Author      : Youssef El-Nemaky
 Description : A program that reads a positive integer and
			   computes the factorial
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int x;
	unsigned int fact = 1;

	printf("Enter your number: ");
	scanf("%u", &x);

	for(int i = x; i > 1;i--){
		fact *= i;
	}

	printf("The factorial of %u is %u", x, fact);

	return 0;
}
