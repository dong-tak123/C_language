#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	printf("1에서 9사이의 정수 1개를 입력하세요: \n");
	scanf("%d", &n);

	printf("출력:\n");
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