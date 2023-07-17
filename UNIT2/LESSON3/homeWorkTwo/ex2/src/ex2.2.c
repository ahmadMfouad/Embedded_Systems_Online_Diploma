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

int main() {
	char letter;
	printf("Enter an alphapet: ");
	fflush(stdout);
	scanf(" %c", &letter);
	switch(letter){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	{
		printf("%c is vowel.", letter);
	}
	break;
	default:
	{
		printf("%c is a consonant.", letter);
	}
	}
	return 0;
}
