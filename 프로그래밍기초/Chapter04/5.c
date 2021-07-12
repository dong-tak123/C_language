//2017117112 이동현
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("10진수 정수 입력>>");
	scanf("%d", &a);
	printf("10진수: %d, 8진수: %#o, 16진수: %#x\n", a, a, a);

	printf("8진수 정수 입력>>");
	scanf("%o", &b);
	printf("10진수: %d, 8진수: %#o, 16진수: %#x\n", b, b, b);

	printf("16진수 정수 입력>>");
	scanf("%x", &c);
	printf("10진수: %d, 8진수: %#o, 16진수: %#x\n", c, c, c);

	return 0;
}