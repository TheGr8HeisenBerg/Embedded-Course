/*
 ============================================================================
 Name        : SandBox.c
 Author      : Youssef El-Nemaky
 Description : just a sandbox for testing
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printBinary(int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	unsigned int number;

	printf("Enter your number: ");
	scanf("%d", &number);

	printBinary(number);

	return 0;
}


void printBinary(int number){
	unsigned int maskedNumber = (1 << 31);
	for(int i  = 0;i < 32; i++){
		if( (maskedNumber >> i) & number){
			printf("1");
		} else printf("0");
	}
}
