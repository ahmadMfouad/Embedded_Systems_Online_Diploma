#include <stdio.h>

int main(){
	char arr[28];
	char *ptr;
	ptr = arr;
	for(int i = 0; i<26; i++){
		*ptr = i + 'A';
		ptr++;
	}
	printf("The Alphabets are : \n");
	ptr = arr;
	for(int j = 0; j < 26; j++){
		printf(" %c", *ptr);
		ptr++;
	}
	return 0;
}
