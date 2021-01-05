/*
 ============================================================================
 Name        : Question_04.c
 Author      : Youssef El-Nemaky
 Description : Write a C Function that return the addition or subtraction or
multiplication or division for two numbers. The function should take the
required operation and two numbers as arguments. It also should check
that the input operation is one of those operation that mentioned before
and if not it should return error. The function should be implemented
using switch case.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float operation(char, float, float, char *);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float number1 , number2, result;
	char operationCharacter;
	char errorVariable = 0;

	printf("Enter your operation: + - * /: ");
	scanf("%c", &operationCharacter);
	printf("Enter your two numbers: ");
	scanf("%f %f", &number1 , &number2);

	result = operation(operationCharacter, number1, number2, &errorVariable);

	if(!errorVariable){
		printf("%.2f", result);
	}
	return 0;
}

float operation(char op, float number1, float number2,char * errorPtr){
	*errorPtr = 0;
	switch(op){
	case '+':
		return number1 + number2;
		break;
	case '-':
		return number1 - number2;
		break;
	case '*':
		return number1 * number2;
		break;
	case '/':
		return number1 / number2;
		break;
	default:
		printf("Wrong Opertaion!");
		*errorPtr = 1;
		return 0;
		break;
	}
}
