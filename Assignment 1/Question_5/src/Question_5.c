/*
 ============================================================================
 Name        : Question_5.c
 Author      : Youssef El-Nemaky
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char inputCharacter;

	printf("Enter your character: ");
	scanf("%c", &inputCharacter);

	printf("The ASCII of %c is %d", inputCharacter, inputCharacter);
	return 0;
}
