#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char stri[100];
	int counter = 0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(stri);
	for (int i = 0; stri[i] != '\0'; ++i){
			counter++;
		}
	printf("Length of string: %d", counter);
}
