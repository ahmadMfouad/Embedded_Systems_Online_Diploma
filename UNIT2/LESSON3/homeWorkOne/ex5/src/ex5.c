/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letter;
	printf("#########Console_output######");
	printf("\nEnter a character: ");
	fflush(stdout);
	scanf(" %c", &letter);
	printf("ASCII value of %c = %d", letter, letter);
	printf("\n#############################");
	printf("\n\n\n########################################################################");
	return 0;
}
