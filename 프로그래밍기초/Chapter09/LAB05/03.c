#include <stdio.h>
#define ROW 4
#define COL 3

int main(void)
{
	int a[][COL] = { 97,90,88,76,89,75,83,89,92,75,73,72 };
	int b[][COL] = { 9,8,9,8,7,3,9,9,8,7,2,8 };
	int i, j;

	//합 출력
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%4d", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	//차 출력
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%4d", a[i][j] - b[i][j]);
		}
		printf("\n");
	}

	return 0;
}