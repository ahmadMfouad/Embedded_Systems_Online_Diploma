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

int powerr(int base, int power);

int main(void) {
	int base, power;
	printf("Enter base number: ");
	fflush(stdout);
	scanf(" %d", &base);
	printf("Enter power number(positive integer): ");
	fflush(stdout);
	scanf(" %d", &power);
	printf("%d^%d = %d", base, power, powerr(base, power));
}

int powerr(int base, int power){
	if(power != 0){
		return base * pow(base, power - 1);
	}
}

