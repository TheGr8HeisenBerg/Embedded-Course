/*
 ============================================================================
 Name        : Question_05.c
 Author      : Youssef El-Nemaky
 Description : Write a C function to return the index of LAST occurrence of a
 number in a given array. Array index start from 0. If the item is not
 in the list return -1. (Linear Search Algorithm)
 Example:
 Array = {1,2,3,4,4,4}
 The required number is 4 it should return 5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMBERS_SIZE 10

int findLastOccurrence(int , int *, int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int numbers[NUMBERS_SIZE];
	int numberToFind, findResult;

	printf("Enter your %d numbers: ", NUMBERS_SIZE);
	for(int i = 0; i < NUMBERS_SIZE; i++){
		scanf("%d" , &numbers[i]);
	}

	printf("Enter the number you would like to find: ");
	scanf("%d", &numberToFind);

	findResult = findLastOccurrence(numberToFind, numbers, NUMBERS_SIZE);

	if(findResult== -1){
		printf("%d was not found in the array", numberToFind);
	} else {
		printf("%d last occurrence was at index %d", numberToFind, findResult);
	}
	return 0;
}

int findLastOccurrence(int number,int * array, int arraySize){
	for(int i = arraySize - 1 ; i >= 0; i--){
		if(array[i] == number){
			return i;
		}
	}
	return -1;
}
