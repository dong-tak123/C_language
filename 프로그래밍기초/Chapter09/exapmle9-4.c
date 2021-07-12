#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWSIZE 2
#define COLSIZE 3

int main(void)
{
	int td[ROWSIZE][COLSIZE];
	int i, j;

	td[0][0] = 1;
	td[0][1] = 2;
	td[0][2] = 3;
	td[1][0] = 4;
	td[1][1] = 5;
	td[1][2] = 6;

	for (i = 0; i < ROWSIZE; i++) {
		for (j = 0; j < COLSIZE; j++) {
			printf("td[%d][%d] == %d ", i, j, td[i][j]);
		}
		printf("\n");
	}
}