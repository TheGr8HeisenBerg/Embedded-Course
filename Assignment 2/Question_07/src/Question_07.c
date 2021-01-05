/*
 ============================================================================
 Name        : Question_05.c
 Author      : Youssef El-Nemaky
 Description :  Write a C Function that reads two integers and checks if the first is
multiple of the second.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int isMultiple(int, int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number1 , number2;

	printf("Enter the two numbers: ");
	scanf("%d %d", &number1, &number2);

	if(isMultiple(number1, number2)){
		printf("%d is a multiple of %d", number1 , number2);
	} else printf("%d is not a multiple of %d", number1, number2);

	return 0;
}


int isMultiple(int x, int y){
	if(x % y == 0) {
		return 1;
	} else return 0;
}

