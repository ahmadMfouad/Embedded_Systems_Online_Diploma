/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char character;
	printf("Enter a character: ");
	fflush(stdout);
	scanf(" %c", &character);
	if (isalpha(character)){
		printf("%c is an alphabet", character);
	}
	else{
		printf("%c is not an alphabet", character);
	}
	return 0;
}
