/*
 ============================================================================
 Name        : Question_21.c
 Author      : Youssef El-Nemaky
 Description : Write a C function to return an array containing the values between two 8-bits unsigned integers IN DESCENDING ORDER
 INCLUSIVE. The function takes 2 values (LowerValue and UpperValue), it shall determine the values in between, and then
 arrange the sequence in descending order excluding the upper and lower values.
 If the LowerValue is greater than or equal the UpperValue, return an array of 2 elements, both containing value = 0xFF
 Example:
 Input: LowerValue=2 and UpperValue=5
 Output:
 Output Array=5,4,3,2
 Output Array Size=4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned char * arrayInBetweenUpperAndLower(int, int, unsigned int *);
void printArray(unsigned char *, unsigned int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int  lowerValue, upperValue;
	unsigned int numbersSize;

	printf("Enter your lower value: ");
	scanf("%d", &lowerValue);

	printf("Enter your upper value: ");
	scanf("%d", &upperValue);

	unsigned char * numbers = arrayInBetweenUpperAndLower(lowerValue, upperValue, &numbersSize);
	printf("Size of Array: %d\nArray: ", numbersSize);
	printArray(numbers, numbersSize);

	free(numbers);
	return 0;
}

unsigned char * arrayInBetweenUpperAndLower(int lowerValue,int upperValue, unsigned int * sizeOfArray){
	unsigned int i;
	unsigned char j;
	unsigned char * numbers;
	if(lowerValue >= upperValue){
		*sizeOfArray  = 2;
		numbers = (unsigned char *)malloc(2 * sizeof(unsigned char));
		numbers[0] = 0xff;
		numbers[1] = 0xff;
		return numbers;
	}

	*sizeOfArray = upperValue - lowerValue + 1;
	numbers = (unsigned char *)malloc(*sizeOfArray * sizeof(unsigned char));

	for(i = 0, j = upperValue; i < *sizeOfArray; i++, j--){
		numbers[i] = j;
	}

	return numbers;
}

void printArray(unsigned char * numbers , unsigned int arraySize){
	unsigned int i;
	for(i = 0;i < arraySize; i++){
		printf("%d ", numbers[i]);
	}
	printf("\n");
}
