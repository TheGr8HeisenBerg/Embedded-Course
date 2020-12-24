/*
 ============================================================================
 Name        : Question_8.c
 Author      : Youssef El-Nemaky
 Description :  a program that reads a positive integer and
				checks if it is a perfect square
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int num;

	printf("Enter your number to check if it is a perfect square or not: ");
	scanf("%u", &num);

	if(sqrt(num) * sqrt(num) == num){
		printf("%d is a perfect square!", num);
	} else printf("%d is not a perfect square!", num);

	return 0;
}
