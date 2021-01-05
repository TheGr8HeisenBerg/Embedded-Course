/*
 ============================================================================
 Name        : Question_05.c
 Author      : Youssef El-Nemaky
 Description : Write a C Function that display Prime Numbers between Intervals (two
numbers) by Making Function.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int isPrime(int);
void printPrimes(int, int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number1, number2;

	printf("Enter the start and the end of your range: ");
	scanf("%d %d", &number1 , &number2);

	printPrimes(number1, number2);
	return 0;
}

int isPrime(int x){
	if(x <= 1){
		return 0;
	}

	for(int i  = 2; i < x; i++){
		if(x % i == 0){
			return 0;
		}
	}
	return 1;
}

void printPrimes(int start, int end){
	for(int  i = start; i <= end; i++){
		if(isPrime(i)){
			printf("%d ", i);
		}
	}
}

