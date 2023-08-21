/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	float sum = 0;
	printf("Enter the numbers of the data: ");
	fflush(stdout);
	scanf(" %d", &n);
	float matrixx[n];
	for (int i = 0; i < n; i++){
		printf("%d: Enter number: ", i+1);
		fflush(stdout);
		scanf(" %f", &matrixx[i]);
		sum += matrixx[i];
	}
	printf("Average = %0.2f", sum/n);
}
