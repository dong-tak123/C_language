#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	//3���� �迭 �ʱ�ȭ, ù ��° ũ��� ��������
	int score[][ROWSIZE][COLSIZE] = { 95,85,85,83,92,75,90,88,88,77,72,95,88,92,93,83 };
	int i, j, k;//i�� �ʼ� j�� ��� k�� ����

	for (i = 0; i < 2; i++)
	{
		if (i == 0)
			printf("[���� 1]");
		else
			printf("[���� 2]");
		printf("\t�߰�\t�⸻\n");

		for (j = 0; j < ROWSIZE; j++)
		{
			printf("\t�л� %d", j + 1);
			for (k = 0; k < COLSIZE; k++)
				printf("%7d", score[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
}