/*
 ============================================================================
 Name        : ex1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	printf("##########Console-output###");
	printf("\nEnter a integer: ");
	fflush(stdout);
	scanf(" %d", &i);
	printf("You entered: %d", i);
	printf("\n###########################");
	printf("\n\n########################################################################");
	return 0;
}
