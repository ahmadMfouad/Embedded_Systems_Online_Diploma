#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int element, pos;
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf(" %d", &n);
	int matrixx[n];
	for (int i = 0; i < n; i++){
		scanf(" %d", &matrixx[i]);
	}
	printf("Enter element to be inserted: ");
	fflush(stdout);
	scanf(" %d", &element);
	printf("Enter location: ");
	fflush(stdout);
	scanf(" %d", &pos);
	for (int i = n - 1; i >= pos - 1; i--) {
	        matrixx[i+1] = matrixx[i];
	    }
	matrixx[pos - 1] = element;
	for (int i = 0; i <= n; i++) {
	        printf("%d ", matrixx[i]);
	    }
}
