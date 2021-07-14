#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getsum(int a);

int main(void)
{
	int max, sum;

	printf("양의 정수 하나를 입력하시오 >> ");
	scanf("%d", &max);

	sum = getsum(max);//이렇게 받는 변수를 지정해주는게 일반적이다..

	printf("1에서 %d까지의 합 : %d", max, sum);
}

int getsum(int a)	//값이 복사..
{
	int sum = 0, i;
	for (i = 1; i <= a; i++)
		sum += i;

	return sum;
}