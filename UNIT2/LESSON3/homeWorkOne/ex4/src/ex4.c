/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1, num2;
	printf("##########Console-output###");
	printf("\n\n###########################");
	printf("\nEnter two numbers: ");
	fflush(stdout);
	scanf(" %f", &num1);
	scanf("\n %f", &num2);
	printf("Product: %f", num1*num2);
	printf("\n########################################################################");
	return 0;
}
