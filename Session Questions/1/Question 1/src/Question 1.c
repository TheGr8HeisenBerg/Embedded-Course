/*
 ============================================================================
 Name        : Question16.c
 Author      : Youssef El-Nemaky
 Version     :
 Copyright   :
 Description : create an array with a size defined with #define and make the user enter the numbers and print
 	 	 	   the largest number in the array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define array_size 5

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int myNumbers[array_size];
	int maxNumber;

	printf("Enter your 5 numbers:\n");

	for(int i = 0;i<array_size;i++){
		scanf("%d", &myNumbers[i]);
		if(i == 0){
			maxNumber = myNumbers[i];
		} else {
			if(maxNumber < myNumbers[i]){
				maxNumber = myNumbers[i];
			}
		}
	}

	printf("The maximum number is %d", maxNumber);
	return 0;
}
