/*

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define m 4
int main() {

	int arr[m][m];
	int i, j;
	srand(time(NULL));
	for (i = 0; i < m; i ++) {
		for (j = 0; j < m; j++) {
			arr[i][j] = rand() % 100;
			printf("[%d][%d]=%3d        ", i, j, arr[i][j]);			
		}
		printf("\n");
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (i > j) {
				arr[i][j] = 0;
			}
		}
	}
	printf("\n\nMasiv z 0: \n\n");
;	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("[%d][%d]=%3d        ", i, j, arr[i][j]);
		}
		printf("\n");
	}



	return 0;
}

*/