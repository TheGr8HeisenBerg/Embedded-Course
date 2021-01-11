/*
 ============================================================================
 Name        : Question_07.c
 Author      : Youssef El-Nemaky
 Description : Write a program that computes the nth term of the arithmetic series:
 1, 3, 5, 7, 9, …
 Run the program to compute the 100th term of the given series.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i = 0, j = 0, n = 0;

	do{
		printf("Enter your positive number: ");
		scanf("%d", &n);
	} while(n <= 0);


	for(i = 1, j = 1; i < n;i++ , j += 2);

	printf("no. %d in the series is %d", n , j);

	return 0;
}
