/*
 ============================================================================
 Name        : Question_15.c
 Author      : Youssef El-Nemaky
 Description : Write a function to concatenate two strings without using strcat function.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void strConc(char *, char *);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char str1[52];
	char str2[25];

	printf("Enter your first string:\n");
	gets(str1);

	printf("Enter your second string:\n");
	gets(str2);


	strConc(str1, str2);
	printf("After concatenating\nstr1: %s\nstr2: %s", str1, str2);

	return 0;
}

void strConc(char * str1, char * str2){
	int i = 0, j = 0;
	while(str1[i] != '\0'){
		i++;
	}
	while(str2[j] != '\0'){
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
}
