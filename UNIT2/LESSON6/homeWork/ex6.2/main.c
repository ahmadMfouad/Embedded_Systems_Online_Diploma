#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sdistance{
	int feet;
	float inch;
};

int main(){
	struct Sdistance distance1, distance2, sum;
	printf("Enter information for 1st distance: \n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf(" %d", &distance1.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf(" %f", &distance1.inch);
	printf("\n\nEnter information for 2nd distance: \n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf(" %d", &distance2.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf(" %f", &distance2.inch);
	sum.feet = distance1.feet + distance2.feet;
	sum.inch = distance1.inch + distance2.inch;
	if(sum.inch > 12.0){
		sum.inch = sum.inch - 12.0;
		sum.feet += 1;
	}
	printf("\nSum of distances = %d\'-%0.1f\'", sum.feet, sum.inch);
	return 0;
}