/*
 ============================================================================
 Name        : Question_14.c
 Author      : Youssef El-Nemaky
 Description : a program to display English alphabets from A
			   to Z.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	for(char i = 'A'; i <= 'Z'; i++){
		printf("%c ", i);
	}
	return 0;
}
