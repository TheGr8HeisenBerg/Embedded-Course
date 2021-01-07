/*
 ============================================================================
 Name        : Question_10.c
 Author      : Youssef El-Nemaky
 Description : You are designing a poster which prints out numbers with a unique
style applied to each of them. The styling is based on the number of
closed paths or holes present in a given number. The number of holes
that each of the digits from 0 to 9 have are equal to the number of closed
paths in the digit. Their values are:
- 1, 2, 3, 5 and 7 = 0 holes.
- 0, 4, 6, and 9 = 1 hole.
- 8 = 2 holes.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numberOfHoles(int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int number;

	printf("Enter your number: ");
	scanf("%d", &number);

	printf("total holes in %d is %d", number, numberOfHoles(number));
	return 0;
}


int numberOfHoles(int number){
	int sum = 0;
	if(number == 0){
		return 1;
	}
	while(number != 0){
		switch(number % 10){
		case 1:
		case 2:
		case 3:
		case 5:
		case 7:
			sum += 0;
			break;
		case 0:
		case 4:
		case 6:
		case 9:
			sum += 1;
			break;
		case 8:
			sum += 2;
			break;
		}
		number /= 10;
	}
	return sum;
}
