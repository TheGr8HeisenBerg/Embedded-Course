/*
 ============================================================================
 Name        : Question_05.c
 Author      : Youssef El-Nemaky
 Description : Write C Function that converts the any letter from lowercase to
uppercase.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char toUpperCase(char);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char x;


	printf("Enter your letter: ");
	scanf("%c", &x);

	printf("%c", toUpperCase(x));
	return 0;
}

char toUpperCase(char x){
	return x - ('a' - 'A');
}
