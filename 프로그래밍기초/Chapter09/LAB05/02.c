#include <stdio.h>
#define SIZE 4

int main(void)
{
	int arr[][SIZE] = { 97,90,88,95,76,89,75,83,83,89,92,85,75,73,72,78 };
	int i, j;
	int down_sum=0, right_sum=0, sum=0;

	for (i = 0; i < SIZE; i++)//������, ��ü�� ���ϱ�
	{
		right_sum = 0;
		for (j = 0; j < SIZE; j++)
		{
			sum += arr[i][j];
			right_sum += arr[i][j];
		}
		printf("%d�� ° ���� ������ : %d\n", i + 1, right_sum);
	}
	printf("\n");

	for (j = 0; j < SIZE; j++)	//������ ���ϱ�
	{
		down_sum = 0;
		for (i = 0; i < SIZE; i++)
		{
			down_sum += arr[i][j];
		}
		printf("%d�� ° ���� ������ : %d\n", j + 1, down_sum);
	}
	printf("\n");
	printf("��� ���� �� : %d", sum);

	return 0;
}