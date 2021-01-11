/*
 ============================================================================
 Name        : Question_09.c
 Author      : Youssef El-Nemaky
 Description : The sequence of numbers 0, 1, 1, 2, 3, 5, 8, 13, … is called Fibonacci numbers; each is the sum of the preceding 2. Write a
 program which given n, returns the nth Fibonacci number.
 -with for/while
 -with recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fib_rec(int n){
	if(n == 0 || n == 1){
		return n;
	} else return fib_rec(n - 1) + fib_rec(n - 2);
}

int fib_not_rec(int n){
	int first = 0;
	int second = 1;
	if(n == 0 || n == 1){
		return n;
	}
	for(int i = 2; i <= n;i++){
		second += first;
		first = second - first;
	}

	return second;
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n;

	printf("Enter your number to find nth number of fib series: ");
	scanf("%d", &n);

	printf("using rec: %d\n", fib_rec(n));
	printf("using loops: %d", fib_not_rec(n));

	return 0;
}
