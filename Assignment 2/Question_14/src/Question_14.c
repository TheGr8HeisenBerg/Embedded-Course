/*
 ============================================================================
 Name        : Question_14.c
 Author      : Youssef El-Nemaky
 Description : Write a C Function that calculate the Fibonacci series using recursive
method.
The Fibonacci Series : 0,1,1,2,3,5,8,13,21,…
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int nthFibRec(int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int nthFibNumber;

	printf("Enter the nth fibonaccie number you want to find: ");
	scanf("%d", &nthFibNumber);

	printf("%d", nthFibRec(nthFibNumber));
	return 0;
}

int nthFibRec(int n){
	if(n == 0){
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return nthFibRec(n - 1) + nthFibRec(n - 2);
	}
}
