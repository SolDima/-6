/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define m 3
int main() {

	int arr[m][m];
	int i, j, sum = 0;
	srand(time(NULL));
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			arr[i][j] = rand() % 100;
			printf("[%d][%d]=%3d        ", i, j, arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (i < j) {
				sum += arr[i][j];
			}
		}
	}
	printf("\nSuma elementiv nad golodnoy diagonaly: %d", sum);
		
	



	return 0;
}

*/