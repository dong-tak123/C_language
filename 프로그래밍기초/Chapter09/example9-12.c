#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

int main(void)
{
	int* pary[SIZE] = { NULL };		//�� 0������ ����Ű���� �ʱ�ȭ..
	int a = 10, b = 20, c = 30;
	int i, j;

	pary[0] = &a;	//������ ���Ұ� ��� ������..
	pary[1] = &b;
	pary[2] = &c;

	for (i = 0; i < SIZE; i++)
	{
		printf("*pary[%d] = %d\n", i, *pary[i]);	//�迭�� ���Ҵ� ��� �������̹Ƿ� *�� �����־��
													//���� ���� ���´�..
	}

	for (i = 0; i < SIZE; i++) 
	{
		scanf("%d", pary[i]);			//� scanf("%d", &a,&b,&c)�ε�... ������ �ּڰ��̴ϱ� ����..
		printf("%d, %d, %d\n", a, b, c);
	}
}