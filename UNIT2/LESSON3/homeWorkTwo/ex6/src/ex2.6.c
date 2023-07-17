/*
 ============================================================================
 Name        : 6.
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = 0;
	int intega, i;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf(" %d", &intega);
	for (i = 0; i <= intega; i++){
		sum = sum + i;
	}
	printf("Sum = %d", sum);
	return 0;
}
