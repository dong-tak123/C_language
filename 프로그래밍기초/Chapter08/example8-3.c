#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//�����ͻ�� NULL(0����)�� <stido.h>���� ���Ǹ� �س��´�..
	//#define NULL ((void *)0)���� ���ǵǾ�����..

	int *ptr1, *ptr2, data = 10;
	ptr1 = NULL;

	printf("%p\n", ptr1);		//NULL�� ���������ϱ� 0�� ���´�..
	//printf("%p\n", ptr2);   //�ּ� �����ϸ� �������� ���� ����Ű�°� �����ϱ�..
	printf("%d\n", data);
	
}