/*
 ============================================================================
 Name        : Question_11.c
 Author      : Youssef El-Nemaky
 Description : A program that prints the sum of first 100 integers. (With data validation)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int sum = 0;

	for(int i = 0; i < 100 ; i++){
		sum += i;
	}

	if(sum == 100 * 99 / 2){
		printf("sum = %d", sum);
	} else printf("the sum is wrong");
	return 0;
}
