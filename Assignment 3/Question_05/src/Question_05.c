/*
 ============================================================================
 Name        : Question_05.c
 Author      : Youssef El-Nemaky
 Description : Write a C function to return the index of FIRST occurrence of a
 number in a given array. Array index start from 0. If the item is not
 in the list return -1. (Linear Search Algorithm)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMBERS_SIZE 10

int findNumberInArray(int , int *, int);

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

	findResult = findNumberInArray(numberToFind, numbers, NUMBERS_SIZE);

	if(findResult== -1){
		printf("%d was not found in the array", numberToFind);
	} else {
		printf("%d was found at index %d", numberToFind, findResult);
	}
	return 0;
}

int findNumberInArray(int number,int * array, int arraySize){
	for(int i = 0 ; i < arraySize; i++){
		if(array[i] == number){
			return i;
		}
	}
	return -1;
}
