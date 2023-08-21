#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l, w;
	printf("Enter rows and columns of matrix: ");
	fflush(stdout);
	scanf(" %d", &l);
	scanf(" %d", &w);
	int matrixx[l][w];
	int transpose_matrixx[w][l];
	for (int i = 0; i < l; i++){
		for (int j = 0; j < w; j++){
			printf("Enter element a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf(" %d", &matrixx[i][j]);
			transpose_matrixx[j][i] = matrixx[i][j];
		}
	}
	printf("The entered matrix: \n");
	for (int i = 0; i < l; i++){
			for (int j = 0; j < w; j++){
				printf("%d \t", matrixx[i][j]);
			}
			printf("\n");
		}
	printf("Transpose of matrix: \n");
		for (int i = 0; i < w; i++){
				for (int j = 0; j < l; j++){
					printf("%d \t", transpose_matrixx[i][j]);
				}
				printf("\n");
			}
}
