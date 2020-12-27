/*
 ============================================================================
 Name        : Question_20.c
 Author      : Youssef El-Nemaky
 Description : A program to display a full pyramid using stars pattern.
    *
   ***
  *****
 *******
*********

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int pyramidBaseLength;

	printf("Enter your pyraimd's base length: ");
	scanf("%d", &pyramidBaseLength);

	for(int i = pyramidBaseLength - 1; i >= 0; i--){
		//to print spaces
		for(int j = 0 ; j < i; j++){
			printf(" ");
		}
		//to print *s
		for(int k = 0;k < 2 * ( pyramidBaseLength - i ) - 1;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
