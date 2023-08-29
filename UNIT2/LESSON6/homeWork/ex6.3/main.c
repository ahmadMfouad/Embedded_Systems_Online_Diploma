#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ScomplexNumber{
	float rNo;
	float iNo;
};

struct ScomplexNumber add(struct ScomplexNumber cN1, struct ScomplexNumber cN2);

int main(){
	struct ScomplexNumber cNumber1, cNumber2, sum;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf(" %f", &cNumber1.rNo);
	scanf(" %f", &cNumber1.iNo);
	printf("For 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf(" %f", &cNumber2.rNo);
	scanf(" %f", &cNumber2.iNo);
	sum = add(cNumber1, cNumber2);
	printf("Sum = %0.1f + %0.1fi", sum.rNo, sum.iNo);
	return 0;
}

struct ScomplexNumber add(struct ScomplexNumber cN1, struct ScomplexNumber cN2){
	struct ScomplexNumber sum;
	sum.rNo = cN1.rNo + cN2.rNo;
	sum.iNo = cN1.iNo + cN2.iNo;
	return sum;
}