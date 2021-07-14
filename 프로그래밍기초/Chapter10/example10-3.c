#include <stdio.h>

int sumary(int* ary, int SIZE);

int main(void)
{
	int point[] = { 95,88,76,54,85,33,65,78,99,82 };
	int* address = point;
	int aryLength = sizeof(point) / sizeof(int);

	int sum = 0;
	for (int i = 0; i < aryLength; i++)
	{
		sum += *(point + i);
	}

	printf("���ο��� ���� ���� %d\n", sum);
	
	address = point;	//��� �� ���ϳ�..
	printf("�Լ� sumary(_ ȣ��� ���� ���� %d\n", sumary(point, aryLength));		//�迭�� ù��°�ּ� ����
	printf("�Լ� sumary(_ ȣ��� ���� ���� %d\n", sumary(&point[0], aryLength));	//�ּҸ� ��üȭ
	printf("�Լ� sumary(_ ȣ��� ���� ���� %d\n", sumary(address, aryLength));	//�̷��Դ� �� �Ⱦ� 

	return 0;
}

int sumary(int* ary, int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += ary[i];

	return sum;
}