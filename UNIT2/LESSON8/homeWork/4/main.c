#include <stdio.h>

int main(){
	int arr[100];
	int* ptr;
	int n;
	printf("Input the number of elements to store in the array (Max 15) : ");
	fflush(stdout);
	scanf(" %d", &n);
	printf("Input %d number of elements in the array : \n", n);
	for(int i = 0; i < n; i++){
		printf("\nelement - %d: ", i + 1);
		fflush(stdout);
		scanf(" %d", &arr[i]);
	}
	ptr = &arr[n - 1];
	printf("\nThe elements of array in reverse order are : ");
	while(n > 0){
		printf("\nelement - %d : %d\n", n, *ptr);
		n--;
		ptr--;
	}
	return 0;
}