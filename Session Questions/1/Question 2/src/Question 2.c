/*
 ============================================================================
 Name        : sandbox.c
 Author      : Youssef El-Nemaky
 Version     :
 Copyright   :
 Description :
 	 	 	 	 1) create an array with a size defined with #define
 	 	 		 2) create a function after main that takes an array, an element to find in that array and
 	 	 		 the size of that array and returns the index of where the element was found
 	 	 		 in case if the element was not found return -1
 	 	 		 3) create a function prototype before main
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define array_length 10
int linear_search(int arr[],int , int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int myArray[array_length];
	int elementToFind;
	int foundIndex;
	printf("Enter your 10 numbers:\n");

	for(int i = 0 ; i<array_length;i++){
		scanf("%d", &myArray[i]);
	}
	printf("Enter the element you want to search for: ");
	scanf("%d", &elementToFind);
	foundIndex = linear_search(myArray,elementToFind, array_length);
	if(foundIndex != -1){
		printf("ELement was found at index %d", foundIndex);
	} else printf("Element was not found!");


	return 0;
}


int linear_search(int arr[],int element, int n){
	for(int i = 0; i < n;i++){
		if(arr[i] == element){
			return i;
		}
	}
	return -1;
}
