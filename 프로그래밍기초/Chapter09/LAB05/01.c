#include <stdio.h>
#define STD_NUM 5
#define TEST 4

int main(void)
{
	int score[][TEST] = { 97,90,88,95,76,89,75,83,60,70,88,82,83,89,92,85,75,73,72,78 };
	int sum;
	int i, j;

	for (i = 0; i < STD_NUM; i++)
	{
		sum = 0;
		for (j = 0; j < TEST; j++)
		{
			sum += score[i][j];
		}
		printf("%d번 째 학생의 점수 합 : %d, 평균 : %lf\n", i + 1, sum, (double)sum / TEST);
	}

	return 0;
}