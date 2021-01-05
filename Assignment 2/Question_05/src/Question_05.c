/*
 ============================================================================
 Name        : Question_05.c
 Author      : Youssef El-Nemaky
 Description : Write a C function to check if the input is an even number or an odd
number, if even number return 0 if odd number return 1.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int isOdd(int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x;

	printf("Enter your number to check weather it's odd or not: ");
	scanf("%d", &x);

	if(isOdd(x)){
		printf("%d is odd", x);
	} else printf("%d is even", x);


	return 0;
}


int isOdd(int n){
	return n % 2? 1:0;
}
