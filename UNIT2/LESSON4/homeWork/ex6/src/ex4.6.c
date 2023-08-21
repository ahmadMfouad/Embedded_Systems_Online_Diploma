#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char stri [1000], character;
	int counter = 0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(stri);
	printf("Enter character to find frequency of: ");
	fflush(stdout);
	scanf(" %c", &character);
	for (int i = 0; stri[i] != '\0'; ++i){
		if (character == stri[i]){
			counter++;
		}
		else{
			continue;
		}
	}
	printf("Frequency of %c = %d", character, counter);
}
