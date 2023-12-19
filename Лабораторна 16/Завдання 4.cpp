#include <stdio.h>
#include <stdlib.h>
#define m 7
#define n 7
int main() {

	int arr[m][m];
	int i, j, k = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			k++;
			arr[i][j] = k;

		}

	}

	for (i = 0; i < m; i++) {

		if (i % 2 == 0) {
			for (j = 0; j < m ; j++) {
				printf("[%d][%d]=%3d        ", i + 1, j + 1, arr[i][j]);
			}
		}
		else {
			for (j = m - 1; j >= 0; j--) {
				
				printf("[%d][%d]=%3d        ", i + 1, j + 1, arr[i][j]);
			}
		}
		printf("\n");
		}		
	return 0;
}