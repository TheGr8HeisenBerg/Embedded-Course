/*
 ============================================================================
 Name        : Question_6.c
 Author      : Youssef El-Nemaky
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1 , num2;

	printf("Enter your first number: ");
	scanf("%d" , &num1);

	printf("Enter your second number: ");
	scanf("%d" , &num2);

	if(num1 == num2){
		printf("The two numbers are equal");
	} else {
		if(num1 > num2){
			printf("%d > %d", num1, num2);
		} else printf("%d < %d", num1, num2);
	}
	return 0;
}
