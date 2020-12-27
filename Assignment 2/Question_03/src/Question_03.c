/*
 ============================================================================
 Name        : Question_03.c
 Author      : Youssef El-Nemaky
 Description : A program that checks weather an entered number is positive or negative.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int positive_negative_zero(int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x = 0;
	int numberStatus;
	printf("Enter your number: ");
	scanf("%d", &x);

	numberStatus = positive_negative_zero(x);
	if(numberStatus == 1){
		printf("%d is positive.", x);
	} else if (numberStatus == -1){
		printf("%d is negative.", x);
	} else printf("%d is neither positive nor negative.", x);

	return 0;
}

int positive_negative_zero(int x){
	if(x > 0){
		return 1;
	} else if(x < 0){
		return -1;
	} else return 0;
}
