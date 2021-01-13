/*
 ============================================================================
 Name        : Question_19.c
 Author      : Youssef El-Nemaky
 Description : Write a C function that compare between 2 arrays with the same length.
 It shall return 0 if the two arrays are identical and 1 if not.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int identicalArrays(int *  , int , int * , int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int numbers1[] = {1,2,3,4,5};
	int numbers2[] = {1,2,3,4,5};
	int numbers3[] = {0,1,2,3,4};

	int commonSize = sizeof(numbers1) / sizeof(numbers2);

	if(identicalArrays(numbers1, commonSize, numbers2, commonSize)){
		printf("numbers1 array and numbers2 array are non - identical!\n");
	} else printf("numbers1 array and numbers2 array are identical!\n");

	if(identicalArrays(numbers1, commonSize, numbers3, commonSize)){
		printf("numbers1 array and numbers3 array are non - identical!\n");
	} else printf("numbers1 array and numbers2 array are identical!\n");

	return 0;
}


int identicalArrays(int * arr1 , int arr1Size, int * arr2, int arr2Size){
	for(int i = 0; i < arr1Size; i++){
		if(arr1[i] != arr2[i]){
			return 1;
		}
	}
	return 0;
}
