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
#include <string.h>

int main(void) {
	int i;
	char stri[100];
	printf("Enter the string: ");
	fflush(stdout);
	gets(stri);
	printf("Reverse String is: ");
	for (i = strlen(stri) - 1; i >= 0; --i){
		printf("%c", stri[i]);
	}
}
