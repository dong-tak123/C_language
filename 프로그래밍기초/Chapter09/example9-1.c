#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int score[SIZE], i;

	score[0] = 78;
	score[1] = 83;
	score[2] = 90;
	score[4] = 75;
	//score[5] = 50;

	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("%d  ", score[i]);
	}
}