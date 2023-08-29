#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.1415
#define area(r)(PI*(r)*(r))

int main(){
	int r;
	float a;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf(" %d", &r);
	a = area(r);
	printf("Area = %0.2f", a);
	return 0;
}