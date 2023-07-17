/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1, num2, num3, max;
	printf("Enter three number: ");
	fflush(stdout);
	scanf(" %f", &num1);
	scanf(" %f", &num2);
	scanf(" %f", &num3);
	max = num1;
	if (num1 < num2){
		if(num2 < num3){
			max = num3;
		}
		else{
			max = num2;
		}
	}
	else if (num1 < num3){
		max = num3;
	}
	printf("Largest Number: %.2f", max);
	return 0;
}
