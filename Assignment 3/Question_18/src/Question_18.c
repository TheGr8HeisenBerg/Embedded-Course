/*
 ============================================================================
 Name        : Question_18.c
 Author      : Youssef El-Nemaky
 Description : Write a C function that return the count of the longest
 consecutive occurrence of a given number in an array.
 Example:
 Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 -> result = 4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int longestConOcc(int * , int , int );

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int numbers[] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3};
	int numbersSize = sizeof(numbers) / sizeof(*numbers);
	printf("the longest consecutive occurrence of %d in the array is %d",3 , longestConOcc(numbers, numbersSize, 3));

	return 0;
}

int longestConOcc(int * arr, int arraySize, int number){
	int longest = 0, j = 0;
	for(int i = 0;i < arraySize; i++){
		if(arr[i] == number){
			j++;
			if(longest < j){
				longest = j;
			}
		} else {
			j = 0;
		}
	}
	return longest;
}
