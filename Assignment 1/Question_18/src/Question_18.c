/*
 ============================================================================
 Name        : Question_18.c
 Author      : Youssef El-Nemaky
 Description : A program to display half pyramid using stars pattern.

*
* *
* * *
* * * *
* * * * *

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int pyramidBaseLength;

	printf("Enter the length of your pyramid's base: ");
	scanf("%d", &pyramidBaseLength);

	for(int i = 0; i < pyramidBaseLength ; i++){
		for(int j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
