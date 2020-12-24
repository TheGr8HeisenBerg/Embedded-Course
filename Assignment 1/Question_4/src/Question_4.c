/*
 ============================================================================
 Name        : Question_4.c
 Author      : Youssef El-Nemaky
 Description : solution for quesiton 4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float radius;

	printf("Enter the radius of your circle: ");
	scanf("%f", &radius);

	printf("circumference = %.2f\narea = %.2f", 2 * 22.0f/7.0f * radius , 22.0f/7.0f * radius * radius);

	return 0;
}
