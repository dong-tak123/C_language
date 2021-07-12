#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data = 100;
	int *ptrint;		//ptrint는 포인터형 변수이다.. %p..
	ptrint = &data;

	printf("  data변수의 주소값 : %p,   data변수의 실제값 : %8d\n", &data, data);
	printf("ptrint변수의 주소값 : %p, ptrint변수의 실제값(data의 주소값과 같음) : %p\n", &ptrint, ptrint);
	printf("%d", sizeof(ptrint));
}