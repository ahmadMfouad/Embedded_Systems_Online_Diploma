#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	float matrix1 [2][2];
	float matrix2 [2][2];
	float matrix_sum [2][2];
	printf("Enter the elements of the 1st Matrix: \n");
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			printf("enter a%d%d:", i+1, j+1);
			fflush(stdout);
			scanf(" %f", &matrix1[i][j]);
		}
	}
	printf("Enter the elements of the 2nd Matrix: \n");
	for (int i = 0; i < 2; i++){
			for (int j = 0; j < 2; j++){
				printf("enter b%d%d:", i+1, j+1);
				fflush(stdout);
				scanf(" %f", &matrix2[i][j]);
			}
		}
	for (int k = 0; k < 2; k++){
		for (int m = 0; m < 2; m++){
			matrix_sum[k][m] = matrix1[k][m] + matrix2[k][m];
		}
	}
	printf("sum of matrices: \n");
	for (int i = 0; i < 2; i++){
				for (int j = 0; j < 2; j++){
					printf("%0.2f \t\t ",matrix_sum[i][j]);
				}
				printf("\n");
			}
}
