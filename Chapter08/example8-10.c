#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int *pi = &i;
	int **dpi = &pi;

	*pi = 5;			//i = *pi = 5
	*pi += 1;			//i = *pi = 6
	printf("%d\n", i);	//6

	printf("%d\n", (*pi)++);		//6�� ����ϰ�, i = *pi = 7�� ����..
	printf("%d\n", *pi);			//7�� ��µ�..

	*pi = 10;
	printf("%d\n", ++ * pi);	//++(*pi)	-> ���� ������Ű�� ���.. 11�� ��µ�
	printf("%d\n", ++ * *dpi);	//++(**dpi)  -> ���� ������Ű�� ���.. 12�� ��µ�
	printf("%d\n", i);			//12

}