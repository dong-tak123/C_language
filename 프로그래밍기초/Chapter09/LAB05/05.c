#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE_5 10

int main(void)
{
	int num[SIZE_5] = { 0 };
	int i, input, freq;

	printf("0에서 9까지의 정수 중 20개를 입력하시오 >>\n");
	for (i = 0; i < 20; i++)
	{
		scanf("%d", &input);
		num[input]++;
	}

	for (i = 0; i < SIZE_5; i++)
	{
		if (i == 0)
			freq = 0;
		else
			freq = ((num[freq] > num[i]) ? freq : i);
	}
	printf("입력한 정수 중 가장 많이 입력한 수는 %d\n", freq);
	printf("그 빈도수는 %d", num[freq]);

	return 0;
}