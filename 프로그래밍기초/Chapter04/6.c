//2017117112 �̵���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQ2(x) ((x)*(x))
#define SQ4(x) ((SQ2(x))*(SQ2(x)))

int main(void)
{
	double x;
	printf("x�� ���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &x);
	printf("x�� ������ %.1lf�Դϴ�.\n", SQ2(x));
	printf("x�� �������� %.1lf�Դϴ�.\n", SQ4(x));

	return 0;
}