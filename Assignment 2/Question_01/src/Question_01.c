/*
 ============================================================================
 Name        : Question_01.c
 Author      : Youssef El-Nemaky
 Description : A C Function that prints the cube of any number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long long cubeOfN(int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x;

	printf("Enter your number: ");
	scanf("%d" , &x);

	printf("cube of %d is %lld", x, cubeOfN(x));
	return 0;
}

long long cubeOfN(int n){
	return n * n * n;
}
