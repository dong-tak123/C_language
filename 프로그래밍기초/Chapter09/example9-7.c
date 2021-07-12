#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	//3차원 배열 초기화, 첫 번째 크기는 생략가능
	int score[][ROWSIZE][COLSIZE] = { 95,85,85,83,92,75,90,88,88,77,72,95,88,92,93,83 };
	int i, j, k;//i가 쪽수 j가 행수 k가 열수

	for (i = 0; i < 2; i++)
	{
		if (i == 0)
			printf("[강좌 1]");
		else
			printf("[강좌 2]");
		printf("\t중간\t기말\n");

		for (j = 0; j < ROWSIZE; j++)
		{
			printf("\t학생 %d", j + 1);
			for (k = 0; k < COLSIZE; k++)
				printf("%7d", score[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
}