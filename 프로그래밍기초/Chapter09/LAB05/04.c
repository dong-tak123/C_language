#include <stdio.h>

int main(void)
{
	int a[4][2] = { 9,9,7,8,8,8,7,3 }, b[2][3] = { 9,9,8,7,2,8 };
	int c[4][3] = { 0 };
	int i, j, k;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 2; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}