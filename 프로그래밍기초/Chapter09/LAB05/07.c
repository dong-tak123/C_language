#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE_7 3

int main(void)
{
	int a, b, c, i;
	int *p[SIZE_7] = { NULL };	//�����͹迭 �ʱ�ȭ

	p[0] = &a;
	p[1] = &b;
	p[2] = &c;

	printf("������ �迭�� �迭��Ҹ� �̿��� a, b, c �Է� >> ");
	for (i = 0; i < SIZE_7; i++)
		scanf("%d", p[i]);

	printf("������ �迭�� �迭��Ҹ� �̿��� a, b, c ��� => a : %d, b : %d, c : %d", *p[0], *p[1], *p[2]);

	return 0;
}