#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getsum(int a);

int main(void)
{
	int max, sum;

	printf("���� ���� �ϳ��� �Է��Ͻÿ� >> ");
	scanf("%d", &max);

	sum = getsum(max);//�̷��� �޴� ������ �������ִ°� �Ϲ����̴�..

	printf("1���� %d������ �� : %d", max, sum);
}

int getsum(int a)	//���� ����..
{
	int sum = 0, i;
	for (i = 1; i <= a; i++)
		sum += i;

	return sum;
}