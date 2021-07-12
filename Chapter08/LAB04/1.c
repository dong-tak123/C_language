#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	
	printf("정수 1개를 입력하세요:\n");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if ((i % 5 != 0) && (i % 2 != 0))
			printf("%3d", i);
	}
	
	return 0;
}