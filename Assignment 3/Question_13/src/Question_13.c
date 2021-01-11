/*
 ============================================================================
 Name        : Question_13.c
 Author      : Youssef El-Nemaky
 Description : Write a function to remove all characters in a string expect alphabet.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void removeAllExceptAlphas(char *);
unsigned char isAlpha(char);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char inputString[51];

	printf("Enter your string(MAX 50):\n");
	gets(inputString);

	removeAllExceptAlphas(inputString);
	printf("new string:\n%s", inputString);

	return 0;
}

unsigned char isAlpha(char x){
	if( (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') ){
		return 1;
	} else return 0;
}
void removeAllExceptAlphas(char * str){
	int i = 0 , j;
	while(str[i] != '\0'){
		if(!isAlpha(str[i])){
			j = i;
			while(str[j] != '\0'){
				str[j] = str[j+1];
				j++;
			}
		} else i++;
	}
}
