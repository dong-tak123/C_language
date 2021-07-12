//2017117112 이동현
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQ2(x) ((x)*(x))
#define SQ4(x) ((SQ2(x))*(SQ2(x)))

int main(void)
{
	double x;
	printf("x의 값을 실수로 입력하시오 : ");
	scanf("%lf", &x);
	printf("x의 제곱은 %.1lf입니다.\n", SQ2(x));
	printf("x의 네제곱은 %.1lf입니다.\n", SQ4(x));

	return 0;
}