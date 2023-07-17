/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char op;
	float num1, num2;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdout);
	scanf(" %c", &op);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf(" %f", &num1);
	scanf(" %f", &num2);
	if (op == '+'){
		printf("%0.2f + %0.2f = %0.2f", num1, num2, num1+num2);
	}
	else if (op == '-'){
		printf("%0.2f - %0.2f = %0.2f", num1, num2, num1-num2);
	}
	else if (op == '*'){
		printf("%0.2f * %0.2f = %0.2f", num1, num2, num1*num2);
	}
	else if (op == '/'){
		printf("%0.2f / %0.2f = %0.2f", num1, num2, num1/num2);
	}
	else{
		printf("Please enter a valid operation symbol");
	}
	return 0;
}
