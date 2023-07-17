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
	int a, b;
	printf("#########Console_output######");
	printf("\nEnter value of a: ");
	fflush(stdout);
	scanf(" %d", &a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf(" %d", &b);
	a = a ^ b;
	b = a ^ b;
    a = a ^ b;
	printf("\nAfter swapping, value of a = %d", a);
	printf("\nAfter swapping, value of b = %d", b);
	printf("\n#############################");
	printf("\n########################################################################");
	return 0;
}
