#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data = 100;
	int *ptrint;		//ptrint�� �������� �����̴�.. %p..
	ptrint = &data;

	printf("  data������ �ּҰ� : %p,   data������ ������ : %8d\n", &data, data);
	printf("ptrint������ �ּҰ� : %p, ptrint������ ������(data�� �ּҰ��� ����) : %p\n", &ptrint, ptrint);
	printf("%d", sizeof(ptrint));
}