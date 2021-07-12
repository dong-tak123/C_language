#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6

int main(void)
{
	double score[] = { 89.3, 79.2,84.83,76.8,92.52,97.4 };
	double sum = 0;
	int i;

	for (i = 0; i < SIZE; i++)
	{
		sum += score[i];
		printf("score[%d] = %.2f\n", i, score[i]);
	}
	printf("합은 %.2lf이고, 평균은 %.2lf이다.\n", sum, sum / SIZE);
}
