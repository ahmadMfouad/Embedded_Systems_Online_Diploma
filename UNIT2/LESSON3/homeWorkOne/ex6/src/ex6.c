/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b, storage;
	printf("#########Console_output######");
	printf("\nEnter value of a: ");
	fflush(stdout);
	scanf(" %f", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf(" %f", &b);
	storage = a;
	a = b;
	b = storage;
	printf("\nAfter swapping, value of a = %f", a);
	printf("\nAfter swapping, value of b = %f", b);
	printf("\n#############################");
	printf("\n########################################################################");
	return 0;
}
