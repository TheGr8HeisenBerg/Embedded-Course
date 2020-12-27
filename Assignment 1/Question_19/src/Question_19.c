/*
 ============================================================================
 Name        : Question_19.c
 Author      : Youssef El-Nemaky
 Description : A program to display inverted half pyramid using stars pattern.

* * * * *
* * * *
* * *
* *
*

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int pyramidBaseLength;

	printf("Enter your inverted pyramid's base length: ");
	scanf("%d", &pyramidBaseLength);

	for(int i = pyramidBaseLength - 1; i >= 0 ; i--){
		for( int j = 0; j <= i ; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
