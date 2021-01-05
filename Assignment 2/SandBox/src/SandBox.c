/*
 ============================================================================
 Name        : SandBox.c
 Author      : Youssef El-Nemaky
 Description : just a sandbox for testing
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	short x = -32768;
	short y = -x;
	printf("%d", y);

	return 0;
}
