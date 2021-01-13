/*
 ============================================================================
 Name        : Question_22.c
 Author      : Youssef El-Nemaky
 Description : Write a c function that removes the repeated number of an input sorted array and return a new array without the repeated
 numbers. The function shall return error if the size of the input array is ZERO. The function takes four inputs:
 a. Old array.
 b. Old array size.
 c. New array (empty array).
 d. The size of the new array after fill it in the function.
 int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
 Example:
 arr1 = {1,2,3,3,3,4,4,5,5,5} -> arr2 = {1,2,3,4,5}
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define oldArraySize 10

void printArray(int *, int);
int * removeDuplicates(int *, int , int * , int *);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int oldArray[oldArraySize] = {1,2,3,3,3,4,4,5,5,5};
	int newArraySize = 0;
	int newArray[oldArraySize];

	printf("Original Array:\n");
	printArray(oldArray, oldArraySize);

	removeDuplicates(oldArray, oldArraySize, newArray, &newArraySize);

	printf("New Array:\n");
	printArray(newArray, newArraySize);


	return 0;
}

void printArray(int * arr, int arrSize){
	for(int i = 0 ; i < arrSize; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int * removeDuplicates(int * oldArr, int oldArrSize, int * newArr, int * newArrSize){
	for(int i = 0; i < oldArrSize; i++){
		for(int j = i + 1; j < oldArrSize; j++){
			if(oldArr[i] == oldArr[j]){
				break;
			}
			if(j == oldArrSize - 1){
				newArr[(*newArrSize)++] = oldArr[i];
			}
		}
		if(i == oldArrSize - 1){
			newArr[(*newArrSize)++] = oldArr[i];
		}
	}
	return newArr;
}
