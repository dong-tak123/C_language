#include <stdio.h>

int main(void)
{
	int a1[3] = { 8,2,8 };
	int *p1 = a1;
	int i, j, k;

	//1���� ���
	printf("(1) 1���� �迭�� �迭������\n");
	printf("ary�� �̿��� ���\n");
	for (i = 0; i < 3; i++)
		printf("%d ", a1[i]);
	printf("\n\n");

	printf("p�� �̿��� ���\n	");
	for (i = 0; i < 3; i++)
		printf("%d ", *(a1 + i));
	printf("\n");

	//2���� ���
	int a2[2][3] = { 4,2,3,5,2,3 };
	int (*p2)[3] = a2;		//2���� �迭������ ���� ����!

	printf("\n\n");
	printf("(2) 2���� �迭�� �迭������\n	");
	printf("ary�� �̿��� ���\n");
	for (i = 0; i < 2; i++) 
	{
		for (j = 0; j < 3; j++)
			printf("%d ", a2[i][j]);
		printf("\n");
	}

	printf("\n");
	printf("p�� �̿��� ���\n");
	for (i = 0; i < 2; i++) 
	{
		for (j = 0; j < 3; j++)
			printf("%d ", *(*(p2+i)+j));
		printf("\n");
	}
	
	//3���� ���
	int a3[2][2][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int(*p3)[2][3] = a3;
	
	printf("\n\n");
	printf("(3) 3���� �迭�� �迭������\n");
	printf("ary�� �̿��� ���\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
				printf("%4d", a3[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
	printf("\np�� �̿��� ���\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k=0;k<3;k++)
				printf("%4d", *(*(*(p3 + i) + j) + k));		//sheet ���� -> �� ���� -> �� ����
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}