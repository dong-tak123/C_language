#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data = 100;
	char ch = 'A';
	int *ptrint = &data;
	char *ptrchar = &ch;

	printf("�������� ��� : %d %c\n", *ptrint, *ptrchar);		//���������߰� ��� r-value�� ���Ǿ���

	*ptrint = 200;				//���������ڷ� ����߰�, l-value�� ����
								//data = 200;
	*ptrchar = 'B';				//���������ڷ� ����߰�, l-value�� ����
								//ch = 'B';

	printf("�������� ��� : %d %c\n", data, ch);		//���������߰� r-value�� ���Ǿ���.
}