#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m = 100, n = 200, temp;
	int *pm = &m;
	int *pn = &n;

	printf("%d %d\n", m, n);

	//�����͸� ����� ���� m�� n�� �� ��ȯ
	temp = *pm;			//temp = m
	*pm = *pn;			//m = n
	*pn = temp;			//n = m

	printf("%d %d\n", m, n);

	//���� m�� n�� �� ��ȯ
	temp = m;
	m = n;
	n = temp;

	printf("%d %d\n", m, n);

}