#include <stdio.h>

int main(void)
{
	int m = 10;
	double x = 20.0;
	
	void* p = &m;		//void형 포인터가 정수형을 가리킨다..

	int m1;
	m1 = *((int*)p);	//m1 = m..

	p = &x;
	double x1;
	x1 = *((double*)p);	//x1 = x..

	printf("%d  %.1f", m1, x1);
}