/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define m 4
int main() {

	int arr[m][m];
	int i, j, min, minst, sum;
	srand(time(NULL));
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			arr[i][j] = rand() % 100;
			printf("[%d][%d]=%3d        ", i, j, arr[i][j]);
		}
		printf("\n");
	}
	min = arr[0][0];
	minst = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (min > arr[i][j]) {
				min = arr[i][j];
				minst = j;
			}

		}
	}
	sum = 0;
	for (i = 0; i < m; i++) {
		sum += arr[i][minst];

	}
	printf("\nSuma = %d", sum);
	return 0;
}
*/