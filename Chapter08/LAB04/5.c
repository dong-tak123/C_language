#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, j, k;

	printf("���� ���� �����ϼ���: ");
	scanf("%d", &n);

	printf("\n\n");
	for (int i = 0; i < n; i++)
	{
		//���� ���� ���
		for (j = 1; j < n - i; j++)
			printf(" ");

		//0�������� �ﰢ�� ���� ���
		for (j = i; j > 0; j--)
			printf("%d", j);

		//���� ���� ���
		for (j = 0; j <= i; j++)		//for���� pretest�̱� ������ �̷��� �ϸ� ù��°�� ����� ���Ѵ�..
			printf("%d", j);

		printf("\n");
	}
}