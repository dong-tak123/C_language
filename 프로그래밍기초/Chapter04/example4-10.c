#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int snum, credit;

	printf("����� �й��� ��û������? ");
	scanf("%d %d", &snum, &credit);		//"%d%d" or "%d %d" �Ѵ� �׳� ���鸸 ������ �ص� �ǳ�!
	printf("�й�: %d ��û����: %d \n", snum, credit);

	return 0;
}