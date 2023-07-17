/*
 ============================================================================
 Name        : 7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 1, num, factorial = 1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf(" %d", &num);
	switch(num){
	case 0:
	{
		printf("Factorial = 1");
	}
	break;
	default:
	{
		if (num > 0){
			while(i <= num){
				factorial = i * factorial;
				i++;
			}
			printf("Factorial = %d", factorial);
		}
		else if (num < 0){
			printf("ERROR!!! Factorial of negative number does not exist");
		}
	}
	}
	return 0;
}
