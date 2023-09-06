#include <stdio.h>
#include <string.h>

int main(){
	char arr[100];
	char* ptr;
	ptr = arr;
	printf("Input a string : ");
	gets(arr);
	int i = -1;
	while(*ptr){
		i++;
		ptr++;
	}
	ptr = &arr[i];
	printf("Reverse of the string is : ");
	while(i>=0){
		printf("%c", *ptr);
		i--;
		ptr--;
	}
	return 0;
}