#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, search_Element;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf(" %d", &n);
	int matrixx[n];
	for (int i = 0; i < n; i++){
		scanf(" %d", &matrixx[i]);
	}
	printf("Enter the elements to be searched: ");
	fflush(stdout);
	scanf(" %d", &search_Element);
	for (int i = 0; i < n; i++){
		if (matrixx[i] == search_Element){
			printf("Number found at location = %d", i+1);
			break;
		}
		else{
			continue;
		}
	}
}
