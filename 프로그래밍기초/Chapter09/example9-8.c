#include <stdio.h>
#define SIZE 3

int main(void)
{
	int score[] = { 89,98,76 }, i;

	printf("%p, %p\n", score, &score[0]);		//score�� �ּ� �ٸ�������� �ι� ���
												//�׳� �ٷ� score�� %p�� ����ϸ� �ּҰ� ����..
	printf("%d, %d\n\n", *score, score[0]);		//���� �迭�� ���� 89 �ι� ���

	for (i = 0; i < SIZE; i++)
		printf("%2d %10d %6d\n", i, (score + i), *(score + i));
	//�ݺ������� �� ������ �ε���, �ּ�, �������� �˷��ش�.

}