/*
 ============================================================================
 Name        : Question_10.c
 Author      : Youssef El-Nemaky
 Description : Write a function which, given a string, converts all uppercase letters to lowercase, leaving the others unchanged.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void stringToLower(char *);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char inputString[51];

	printf("Enter your string you want to convert all characters to lower case(MAX 50 chars):\n");
	gets(inputString);

	stringToLower(inputString);
	printf("string after calling the function:\n%s", inputString);

	return 0;
}

void stringToLower(char * str){
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
}
