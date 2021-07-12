#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, cnt;
	for (i = 1; i <= 9; i++)
	{
		for (cnt = 1; cnt <=3 ; cnt++)
		{
			printf("%2d * %2d = %3d\t", cnt, i, cnt * i);
		}
		printf("\n");
	}
	printf("\n\n");

	for (i = 1; i <= 9; i++)
	{
		for (cnt = 4; cnt <= 6; cnt++)
		{
			printf("%2d * %2d = %3d\t", cnt, i, cnt * i);
		}
		printf("\n");
	}
	printf("\n\n");

	for (i = 1; i <= 9; i++)
	{
		for (cnt = 7; cnt <= 9; cnt++)
		{
			printf("%2d * %2d = %3d\t", cnt, i, cnt * i);
		}
		printf("\n");
	}

	return 0;
}