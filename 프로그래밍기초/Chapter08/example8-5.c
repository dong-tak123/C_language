#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char *pc = (char *)100;		//
	int *pi = (int *)150;
	double *pd = (double *)200;
	pd = 300;		//200.0������ ����.. ���������Ѵ�..

	printf("%u  %u  %u\n", (int)pc - 1, (int)pi - 1, (int)pd - 1);		//���� -1..
	printf("%u  %u  %u\n", (int)(pc - 1), (int)pc, (int)(pc + 1));			//�ּҸ� ����ϴ°Ŵϱ� �ּҸ� ����ȯ ���־���..
	printf("%u  %u  %u\n", (int)(pi - 1), (int)pi, (int)(pi + 1));
	printf("%u  %u  %u\n", (int)(pd - 1), (int)pd, (int)(pd + 1));
	//pointer������ ����Ű�� �ڷ����� ����Ʈ����ŭ +,- ������ ����..

	printf("%d  %d  %d\n", sizeof(pc), sizeof(pi), sizeof(pd));
}