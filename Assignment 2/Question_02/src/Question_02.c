/*
 ============================================================================
 Name        : Question_02.c
 Author      : Youssef El-Nemaky
 Description : A C Function that takes one character and checks if it alphabet or not.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int isAlphabet(char);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char x;

	printf("Enter your character: ");
	scanf("%c", &x);

	if(isAlphabet(x)){
		printf("%c is an alphabet.", x);
	} else printf("%c is not an alphabet.", x);

	return 0;
}

int isAlphabet(char x){
	if((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')){
		return 1;
	} else return 0;
}
