/*
 ============================================================================
 Name        : Question_2.c
 Author      : Youssef El-Nemaky
 Description : solution for question 2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float grade;
	char name[50];

	printf("Enter your name: ");
	scanf("%s", name);

	printf("Enter your grade: ");
	scanf("%f", &grade);

	printf("Your name is: %s and your grade is %.2f", name , grade);
	return 0;
}
