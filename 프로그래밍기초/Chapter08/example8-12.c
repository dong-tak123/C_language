#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, y;
	double *px = &x;
	double *py = &y;

	printf("두 실수 입력 : ");
	scanf("%lf %lf", px, py);		//원래는 &x, &y로 입력받아야했다..

	printf("%.2f + %.2f = %.2f\n", *px, *py, *px + *py);
	printf("%.2f + %.2f = %.2f\n", x, y, x + y);
}