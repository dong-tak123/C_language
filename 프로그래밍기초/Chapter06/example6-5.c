#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;
	
	printf("세 정수를 입력: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
			printf("%d", x);
		else
			printf("%d", z);
	}
	else
	{
		if (y > z)
			printf("%d", y);
		else
			printf("%d", z);
	}
	return 0;
}