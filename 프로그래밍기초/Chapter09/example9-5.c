#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWSIZE 2
#define COLSIZE 3

int main(void)
{
	int td[][3] = { {1,1},{2,3} };	//�ʱ갪�� ����ִ� ���� 0���� �ȴ�..
	int i, j;
	int *pi = &td;
	for (i = 0; i < ROWSIZE; i++)
	{
		for (j = 0; j < COLSIZE; j++)
		{
			printf("%d  ", td[i][j]);
		}
		printf("\n");
	}
	printf("%#x\n\n", td);
	printf("%d", *pi);
}