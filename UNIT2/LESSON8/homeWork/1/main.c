#include <stdio.h>

int main(){
	int m = 29;
	printf("Adress of m : 0x%x\n", &m);
	printf("Value of m : %d\n", m);
	int* ab = &m;
	printf("Now ab is assigned with the address of m. \n");
	printf("Adress of pointer ab : 0x%x\n", ab);
	printf("Content of pointer ab : %d\n", *ab);
	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%x\n", ab);
	printf("Content of pointer ab : %d\n", *ab);
	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Adress of m : 0x%x\n", &m);
	printf("Value of m : %d", m);
	return 0;
}