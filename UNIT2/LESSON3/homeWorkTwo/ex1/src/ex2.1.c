/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf(" %d", &num);
	if(num%2 == 0){
		printf("%d is even.", num);
	}
	else if(num%2 != 2){
		printf("%d is odd.", num);
	}
	else{
		printf("Please enter a valid integer.");
	}
	return 0;
}
