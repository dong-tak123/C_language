#include <stdio.h>

int main(void)
{
	double dint[2] = { 0.0 };	//더블형 배열 크기2 -> 16바이트
	int i;
	int* p = (int*)dint;	//형변환되어 이제 int형으로 네개가 들어갈수있다.
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;

	for (i = 0; i < 4; i++)
		printf("%p %d\n", p + i, *(p + i));
	//출력하면 주소 4씩 끊어서 나옴(int형 포인터니까)
	//*(p+i)에 대한거는 1 2 3 4
	printf("%d", sizeof(p));		//포인터는 크기가 무적권 4..

}