//2017117112 �̵���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("10���� ���� �Է�>>");
	scanf("%d", &a);
	printf("10����: %d, 8����: %#o, 16����: %#x\n", a, a, a);

	printf("8���� ���� �Է�>>");
	scanf("%o", &b);
	printf("10����: %d, 8����: %#o, 16����: %#x\n", b, b, b);

	printf("16���� ���� �Է�>>");
	scanf("%x", &c);
	printf("10����: %d, 8����: %#o, 16����: %#x\n", c, c, c);

	return 0;
}