/*
 ============================================================================
 Name        : Question_7.c
 Author      : Youssef El-Nemaky
 Description : A program that takes three integers, and prints
			   out the smallest number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x, y,z, smallest;

	printf("Enter your three numbers: ");
	scanf("%d %d %d", &x , &y, &z);

	smallest = x;

	if(smallest > y){
		smallest = y;
	}

	if(smallest > z){
		smallest = z;
	}

	printf("The smallest number is %d", smallest);
	return 0;
}
