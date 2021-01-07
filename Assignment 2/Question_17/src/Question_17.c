/*
 ============================================================================
 Name        : Question_17.c
 Author      : Youssef El-Nemaky
 Description : Given two integers: L and R, Find the maximal value of A xor B where
 A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 1000
 Input format: the input contains two lines first line contains L and next line contains R.
 Output format: The maximum value of A xor B
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int maximumXor(unsigned int, unsigned int);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	unsigned int l, r;

	printf("Enter l and r: ");
	scanf("%u %u", &l , &r);

	printf("The maximum XOR value is: %u", maximumXor(l,r));
	return 0;
}

unsigned int maximumXor(unsigned int l, unsigned int r){
	unsigned int maximum = 0;

	for(unsigned int i = l; i <= r; i++){
		for(unsigned int j = i; j <= r; j++){
			if(maximum < (i ^ j)){
				maximum = i ^ j;
			}
		}
	}

	return maximum;
}
