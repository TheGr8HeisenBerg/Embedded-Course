/*
 ============================================================================
 Name        : Question_01.c
 Author      : Youssef El-Nemaky
 Description : The sum of an array is the sum of its individual elements. For
example, if an array is numbers = {1, 2, 3, 4}, the sum of the array
is 1+2+3+4 = 10.
Function Description: Complete the function summation. The
function must return the integer sum of the numbers array.
 int summation(int numbers_size, int* numbers)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int sumOfArray(int, int *);

int main(void) {
	int myArray[ARRAY_SIZE] = {1, 2, 3, 4, 5};
	printf("The sum of the array is %d", sumOfArray(ARRAY_SIZE, myArray));

	return 0;
}


int sumOfArray(int arrayLength, int * passedArray){
	int sum = 0;
	for(int i  = 0; i < arrayLength; i++){
		sum += passedArray[i];
	}
	return sum;
}
