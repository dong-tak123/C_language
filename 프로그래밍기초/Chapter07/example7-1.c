#include <stdio.h>

int main(void)
{
	int cnt;

	cnt = 1;
	while (cnt <= 3)
	{
		printf("C 언어 재미있네요! by while\n");
		cnt++;
	}

	printf("\n");
	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("C 언어 재미있네요! by for\n");
	}

	printf("%d", cnt);
	return 0;
}