/*
 ============================================================================
 Name        : Question_03.c
 Author      : Youssef El-Nemaky
 Description : Write a C function that use the selection sort algorithm to sort
 an integer array in ascending order (search for the selection sorting algorithm).
  ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

void sort_array_SS(int *, int);
void print_array(int *, int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int numbers[ARRAY_SIZE];

	printf("Enter your %d numbers: ", ARRAY_SIZE);

	for(int i = 0 ;i < ARRAY_SIZE; i++){
		scanf("%d", &numbers[i]);
	}

	sort_array_SS(numbers, ARRAY_SIZE);

	print_array(numbers, ARRAY_SIZE);

	return 0;
}

void sort_array_SS(int * array, int arraySize){
	//a function that sorts an input array using selection sorting.
	int  minimum = 0;
	for(int i = 0; i < arraySize - 1; i++){
		minimum = i;
		for(int  j = i + 1 ;j < arraySize; j++){
				if(array[minimum] > array[j]){
					minimum = j;
				}
		}
		if(minimum != i){
			array[i] = array[i] ^ array[minimum];
			array[minimum] = array[i] ^ array[minimum];
			array[i] = array[i] ^ array[minimum];
		}
	}
}


void print_array(int * array, int arraySize){
	for(int i = 0; i < arraySize; i++){
		printf("Array[%d] = %d \n", i, array[i]);
	}
}
