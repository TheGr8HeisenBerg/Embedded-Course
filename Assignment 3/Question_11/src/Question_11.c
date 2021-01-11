/*
 ============================================================================
 Name        : Question_11.c
 Author      : Youssef El-Nemaky
 Description :Write a function that prints the frequency of a certain character in a string.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int printFrequency(char *, char);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char inputString[51], characterToFindItsFrequency;

	printf("Enter your string(MAX 50 characters):\n");
	gets(inputString);

	printf("Enter the character you want to find its frequency in the input string: ");
	scanf("%c", &characterToFindItsFrequency);

	printf("%d", printFrequency(inputString, characterToFindItsFrequency));
	return 0;
}

int printFrequency(char * string, char character){
	int i = 0 , frequency = 0;
	while(string[i] != '\0'){
		if(string[i] == character){
			frequency++;
		}
		i++;
	}
	return frequency;
}
