#include <stdio.h>
#include <stdlib.h>

int checkPrime(int num);

int main(void) {
	int n1, n2;
	printf("Enter two numbers (intervals): ");
	fflush(stdout);
	scanf(" %d", &n1);
	scanf(" %d", &n2);
	printf("Prime numbers in between %d and %d are: ", n1, n2);
	for(int i = n1; i < n2; i++){
		if (checkPrime(i)){
			printf(" %d ", i);
		}
		else{
			continue;
		}
	}
}
int checkPrime(int num) {
	if (num <= 1) {
		return 0;
	}

	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}
