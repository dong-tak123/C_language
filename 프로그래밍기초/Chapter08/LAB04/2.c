#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cnt = 1, x1, sum = 0;
	int min, max;

	printf("정수 10개를 입력하세요 : \n");
	while (cnt < 11)
	{
		scanf("%d", &x1);		//이렇게해도 그냥 되네.. ㄷㄷ
		
		sum += x1;
		if (cnt == 1)
			min = x1;
		else
			min = ((min > x1) ? x1 : min);

		if (cnt == 1)
			max = x1;
		else
			max = ((max > x1) ? max : x1);

		cnt++;
	}
	
	printf("\n");
	printf("누적합: %d\n", sum);
	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);

}