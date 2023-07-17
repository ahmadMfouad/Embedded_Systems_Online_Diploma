/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float num;
	printf("Enter a number: ");
	fflush(stdout);
	scanf(" %f", &num);
	if (num > 0) {
		printf("%0.2f is a positive", num);
	} else if (num < 0) {
		printf("%0.2f is a negative", num);
	} else {
		printf("You entered zero");
	}
	return 0;
}
