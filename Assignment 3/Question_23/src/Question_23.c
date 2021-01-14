/*
 ============================================================================
 Name        : Question_23.c
 Author      : Youssef El-Nemaky
 Description : Write a C function to find the frequency of characters in a string.
 -Input the string from the user.
 -Traverse the string, character by character and store the count of each of the characters in an array.
 -Print the array that contains the frequency of all the characters.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define stringLength 51

void printStringAndCountArray(char *,unsigned int *,int arrLength);
void countCharacters(char *,unsigned int *, unsigned int *);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[stringLength];
	unsigned int strUsedSpace = 0;
	printf("Enter your string(MAX %d characters):\n", stringLength - 1);
	gets(str);

	unsigned int countOfCharacters[stringLength - 1] = {0};

	countCharacters(str, countOfCharacters, &strUsedSpace);
	printStringAndCountArray(str,countOfCharacters, strUsedSpace);

	return 0;
}

void printStringAndCountArray(char * string,unsigned int * arr, int arrLength){
	for(int i = 0; i < arrLength; i++){
		printf("%c %u\n", string[i], arr[i]);
	}
}

void countCharacters(char * string,unsigned int * countOfCharacters, unsigned int * usedSpace){
	unsigned char i = 0, j = 0;
	for(i = 0; string[i] != '\0';i++,(*usedSpace)++){
		for(j = 0; string[j] != '\0'; j++){
			if(string[i] == string[j]){
				countOfCharacters[i]++;
			}
		}
	}
}
