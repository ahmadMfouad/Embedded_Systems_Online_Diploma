/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i1, i2;
	printf("##########Console-output###");
	printf("\nEnter two integers: ");
	fflush(stdout);
	scanf(" %d", &i1);
	scanf("\n %d", &i2);
	printf("Sum: %d", i1+i2);
	printf("\n###########################");
	printf("\n\n########################################################################");
	return 0;
}
