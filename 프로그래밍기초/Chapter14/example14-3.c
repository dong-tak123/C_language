#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void multiply(double* result, const double* a, const double* b) {
	*result = *a * *b;
	//�����߻� -> const���̶� ���� �Ұ�..
	//*a = *a + 1;
	//*b = *b + 1;
}

void devideandincrement(double* result, double* a, double* b) {
	*result = *a / *b;
	++* a;
	(*b)++;// �켱���� : ���������� �켱�̰�, ���������� *,&�� ��->�·� ����
	//const�� �ƴ϶� ���� ����
}

int main(void)
{
	double m = 0, n = 0, mult = 0, dev = 0;

	printf("�� �Ǽ� �Է� : ");
	scanf("%lf %lf", &m, &n);

	multiply(&mult, &m, &n);
	devideandincrement(&dev, &m, &n);
	printf("�� �Ǽ� �� : %.2f, ���� : %.2f\n", mult, dev);
	printf("���� �� �� �Ǽ� : %.2f, %.2f\n", m, n);

	return 0;
}