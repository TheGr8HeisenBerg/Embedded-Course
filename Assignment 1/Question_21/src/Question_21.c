/*
 ============================================================================
 Name        : Question_21.c
 Author      : Youssef El-Nemaky
 Description : A program to display cross or X-shape using stars pattern.
*    *
 *  *
  **
  **
 *  *
*    *

or

*   *
 * *
  *
 * *
*   *

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int baseLength;

	printf("Enter your base length: ");
	scanf("%d", &baseLength);

	for(int i = 0; i < baseLength; i++){
		for(int  j = 0; j< baseLength; j++){
			if(i == j || j == baseLength - 1 - i){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
