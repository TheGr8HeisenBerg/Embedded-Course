/*
 ============================================================================
 Name        : Question_09.c
 Author      : Youssef El-Nemaky
 Description : Write a C Function that swaps the value of two integer numbers.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swapTwoNumbers(int *, int *);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int number1, number2;

	printf("Enter your two numbers: ");
	scanf("%d %d", &number1, &number2);

	printf("Before Swapping:\n");
	printf("number1: %d\nnumber2: %d\n", number1, number2);

	swapTwoNumbers(&number1, &number2);
	printf("After Swapping:\n");
	printf("number1: %d\nnumber2: %d", number1, number2);
	return 0;
}


void swapTwoNumbers(int * num1Ptr, int * num2Ptr){
	*num1Ptr = *num1Ptr ^ *num2Ptr;
	*num2Ptr = *num1Ptr ^ *num2Ptr;
	*num1Ptr = *num1Ptr ^ *num2Ptr;
}
