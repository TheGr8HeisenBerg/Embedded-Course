/*
 ============================================================================
 Name        : Question_14.c
 Author      : Youssef El-Nemaky
 Description : Write a function to reverse a string by passing it to a function.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverseString(char *);
int stringLength(char *);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char inputString[51];

	printf("Enter your string(MAX 50 characters):\n");
	gets(inputString);

	reverseString(inputString);

	printf("After reversing:\n%s", inputString);

	return 0;
}

void reverseString(char * str){
	int strLength = stringLength(str);
	int i  = 0, j = strLength - 1;
	for(i = 0; i < strLength / 2; i++, j--){
		str[i] = str[i] ^ str[j];
		str[j] = str[i] ^ str[j];
		str[i] = str[i] ^ str[j];
	}
}

int stringLength(char * str){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}
