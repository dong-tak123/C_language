#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char *pc = (char *)100;		//
	int *pi = (int *)150;
	double *pd = (double *)200;
	pd = 300;		//200.0번지는 없다.. 정수여야한다..

	printf("%u  %u  %u\n", (int)pc - 1, (int)pi - 1, (int)pd - 1);		//실제 -1..
	printf("%u  %u  %u\n", (int)(pc - 1), (int)pc, (int)(pc + 1));			//주소를 출력하는거니까 주소를 형변환 해주었다..
	printf("%u  %u  %u\n", (int)(pi - 1), (int)pi, (int)(pi + 1));
	printf("%u  %u  %u\n", (int)(pd - 1), (int)pd, (int)(pd + 1));
	//pointer변수가 가리키는 자료형의 바이트수만큼 +,- 연산을 해줌..

	printf("%d  %d  %d\n", sizeof(pc), sizeof(pi), sizeof(pd));
}