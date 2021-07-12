#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, j, k;

	printf("행의 수를 선택하세요: ");
	scanf("%d", &n);

	printf("\n\n");
	for (int i = 0; i < n; i++)
	{
		//앞의 공백 출력
		for (j = 1; j < n - i; j++)
			printf(" ");

		//0을포함한 삼각형 숫자 출력
		for (j = i; j > 0; j--)
			printf("%d", j);

		//뒤의 숫자 출력
		for (j = 0; j <= i; j++)		//for문은 pretest이기 때문에 이렇게 하면 첫번째는 출력을 안한다..
			printf("%d", j);

		printf("\n");
	}
}