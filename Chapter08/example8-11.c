#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10, j = 20;

	const int *p = &i;		//*p�� ���..
	// ���� *p = 20;�� ������ ���.. �ٲ� �� ����!

	i = 30;
	printf("%d\n", i);		//�굵 ���������� �ȴ�..

	//p = &j;		// p�� �ٲܼ� �����Ƿ� p�� j�� ����Ű���� �Ͽ���.
	printf("%d\n", *p);		//20�� ��µ�..


	double d = 7.8, e = 2.7;
	double * const pd = &d;		// pd�� ���.. ��, pd�� ��(pd�� ����Ű�� ���)�� �ٲ� �� ����..
	//pd = &e;�� ���� ������ ���..

	*pd = 4.4;				//*pd�� �ٲܼ� �ִ�... d = 4.4�ΰŴ�..
	printf("%f\n", *pd);		//4.4 ���...
	
	printf("%d\n", pd);
	printf("%d\n", &d);
	//d = 10; �̷��� ���������� �ٲٴ� ���� �ٲ� �� �ִ�.
	printf("%f\n", d);

}