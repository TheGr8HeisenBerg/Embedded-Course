/*
 ============================================================================
 Name        : Question_17.c
 Author      : Youssef El-Nemaky
 Description : Write a C Program for swapping two arrays “A & B” with
 different lengths. B will be always the smallest array.
 int * Swap (int a_size,int *a,int b_size,int *b)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int * swap (int, int *, int, int *);
void printArray(int *, int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int numbers1[] = {1,2,3,4,5};
	int numbers2[] = {6,7,8,9,10,11,12,13};

	int numbers1Size = sizeof(numbers1) / sizeof(*numbers1);
	int numbers2Size = sizeof(numbers2) / sizeof(*numbers2);

	printf("Before Swapping:\nNumbers1: ");
	printArray(numbers1, numbers1Size);
	printf("Numbers2: ");
	printArray(numbers2, numbers2Size);

	swap(numbers1Size, numbers1, numbers2Size, numbers2);

	printf("After Swapping:\nNumbers1: ");
	printArray(numbers1, numbers1Size);
	printf("Numbers2: ");
	printArray(numbers2, numbers2Size);

	return 0;
}

int * swap (int a_size,int *a,int b_size,int *b){
	if(a_size > b_size){
		//making sure that a is always the smallest array
		int * temp = a;
		a = b;
		b = temp;
		a_size = a_size ^ b_size;
		b_size = a_size ^ b_size;
		a_size = a_size ^ b_size;
	}

	for(int i = 0 ; i < a_size; i++){
		a[i] = a[i] ^ b[i];
		b[i] = a[i] ^ b[i];
		a[i] = a[i] ^ b[i];
	}
	return a;
}

void printArray(int * arr, int arrSize){
	for(int i = 0; i < arrSize; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
