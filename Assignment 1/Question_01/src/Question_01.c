/*
 ============================================================================
 Name        : Question_1.c
 Author      : Youssef El-Nemaky
 Description : A program that take two integers from the user
			   and print the results of this equation:
			   Result = ((num1 + num2) * 3) – 10
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1 , num2;
	printf("Enter your first number: ");
	scanf("%d", &num1);

	printf("Enter your second number: ");
	scanf("%d", &num2);

	printf("((%d + %d) * 3 ) - 10 = %d",num1, num2, (num1 + num2) * 3 -10);
	return 0;
}
