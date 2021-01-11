/*
 ============================================================================
 Name        : Question_12.c
 Author      : Youssef El-Nemaky
 Description : Write a function to find the length of a string.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int lengthOfString(char *);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char inputString[51];

	printf("Enter your string(MAX 50 characters):\n");
	gets(inputString);

	printf("string length: %d", lengthOfString(inputString));

	return 0;
}

int lengthOfString(char * str){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}
