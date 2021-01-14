/*
 ============================================================================
 Name        : Question_16.c
 Author      : Youssef El-Nemaky
 Description : Write a C function that takes an array as input and reverse it.
 Example:
 Input : 1,2,3,4,5
 Output: 5,4,3,2,1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

void swapArray(int *, int);
void printArray(int *, int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int numbers[ARRAY_SIZE];

	printf("Enter %d numbers: ", ARRAY_SIZE);

	for(int i = 0 ; i < ARRAY_SIZE; i++){
		scanf("%d", &numbers[i]);
	}

	printf("Before calling swapArray function:\n");
	printArray(numbers, ARRAY_SIZE);
	swapArray(numbers, ARRAY_SIZE);
	printf("After calling swapArray function:\n");
	printArray(numbers, ARRAY_SIZE);
	return 0;
}

void swapArray(int * arr, int arraySize){
	int i = 0, j = arraySize - 1;
	while(i < j){
		arr[i] = arr[i] ^ arr[j];
		arr[j] = arr[i] ^ arr[j];
		arr[i] = arr[i] ^ arr[j];
		i++;
		j--;
	}
}

void printArray(int * arr, int arraySize){
	int i;
	for(i = 0; i < arraySize; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
