#include <stdio.h>

typedef struct {
	double real;	//�Ǽ���
	double img;		//�����
}complex;

void printcomplex(complex com);
complex paircomplex1(complex com);
void paircomplex2(complex *com);

int main(void)
{
	complex comp = { 3.4,4.8 };
	complex pcomp;

	printcomplex(comp);

	pcomp = paircomplex1(comp);
	printcomplex(pcomp);

	paircomplex2(&pcomp);
	printcomplex(pcomp);

	return 0;
}

//����ü ��ü�� ���ڷ� ���
void printcomplex(complex com) {
	printf("���Ҽ�(a + bi) = %5.1f + %5.1fi \n", com.real, com.img);
}

//����ü ��ü�� �λ�� ����Ͽ� ó���� ����ü�� �ٽ� ��ȯ
complex paircomplex1(complex com) {
	com.img = -com.img;
	return com;
}

//����ü�����͸� ���ڷ� ���
void paircomplex2(complex *com) {
	com->img = -com->img;		//�����ʹϱ� ȭ��ǥ..
}