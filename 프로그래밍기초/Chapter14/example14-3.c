#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void multiply(double* result, const double* a, const double* b) {
	*result = *a * *b;
	//오류발생 -> const형이라 수정 불가..
	//*a = *a + 1;
	//*b = *b + 1;
}

void devideandincrement(double* result, double* a, double* b) {
	*result = *a / *b;
	++* a;
	(*b)++;// 우선순위 : 후위증감이 우선이고, 전위증감과 *,&는 우->좌로 결합
	//const형 아니라서 수정 가능
}

int main(void)
{
	double m = 0, n = 0, mult = 0, dev = 0;

	printf("두 실수 입력 : ");
	scanf("%lf %lf", &m, &n);

	multiply(&mult, &m, &n);
	devideandincrement(&dev, &m, &n);
	printf("두 실수 곱 : %.2f, 나눔 : %.2f\n", mult, dev);
	printf("연산 후 두 실수 : %.2f, %.2f\n", m, n);

	return 0;
}