#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	printf("1���� 9������ ���� 1���� �Է��ϼ���: \n");
	scanf("%d", &n);

	printf("���:\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		for (int k = 1; k <= (n - i); k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}