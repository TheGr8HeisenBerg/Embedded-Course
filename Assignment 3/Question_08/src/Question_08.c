/*
 ============================================================================
 Name        : Question_08.c
 Author      : Youssef El-Nemaky
 Description : Write a program that computes the nth term of the geometric series:
 1, 3, 9, 27, …
 Run the program to compute the 10th term of the given series.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int n, int r){
	int result = 1;
	for(int i = 0; i < r; i++){
		result *= n;
	}
	return result;
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n = 0;

	do{
		printf("Enter your positive number: ");
		scanf("%d", &n);
	} while(n <= 0);


	printf("no. %d in the series is %d", n , power(3,n-1));

	return 0;
}
