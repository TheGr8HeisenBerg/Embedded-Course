/*
 ============================================================================
 Name        : Question_10.c
 Author      : Youssef El-Nemaky
 Description : A program to make a simple calculator using
			   switch-case. The calculator takes the operation
			   (+ or – or * or /) and takes the two input arguments and
			   print the results.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char operation;
	float num1 , num2;

	printf("Please, Select your operation\n + - * /\n: ");
	scanf("%c", &operation);

	printf("Enter your first number: ");
	scanf("%f", &num1);

	printf("Enter your second number: ");
	scanf("%f", &num2);

	switch(operation){
	case '+':
		printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
	break;

	case '-':
		printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
	break;

	case '*':
		printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
	break;

	case '/':
		printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
	 break;

	}
	return 0;
}
