//2017117112 이동현
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a;
	printf("실수를 입력하시오 >> ");
	scanf("%lf", &a);

	printf("지수형식으로는 %.4e입니다.", a);	//+001? 기본값이 두자리..

	return 0;
}