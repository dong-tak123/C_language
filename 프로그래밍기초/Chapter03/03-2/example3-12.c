#include <stdio.h>

int main(void)
{
	const double RATE = 0.03;			//�������� 3%
	int deposit = 800000;

	printf("������: %f\n", RATE);
	printf("�����ܰ� : %d\n", deposit);
	printf("���ھ�: %5.1f\n", deposit * RATE);

	return 0;
}