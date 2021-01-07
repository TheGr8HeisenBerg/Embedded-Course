/*
 ============================================================================
 Name        : SandBox.c
 Author      : Youssef El-Nemaky
 Description : a C function that prints binary of an input number in decimal/hexa/octal
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printBinary(int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	unsigned int number;

	printf("Enter your number in decimal/hexa/octal: ");
	scanf("%i", &number);

	printBinary(number);

	return 0;
}


void printBinary(int number){
	unsigned int maskedNumber = (1 << 31);
	printf("%u = " , number);
	for(int i  = 0;i < 32; i++){
		if( (maskedNumber >> i) & number){
			printf("1");
		} else printf("0");
	}
}
