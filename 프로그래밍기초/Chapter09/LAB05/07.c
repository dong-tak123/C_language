#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE_7 3

int main(void)
{
	int a, b, c, i;
	int *p[SIZE_7] = { NULL };	//포인터배열 초기화

	p[0] = &a;
	p[1] = &b;
	p[2] = &c;

	printf("포인터 배열의 배열요소를 이용한 a, b, c 입력 >> ");
	for (i = 0; i < SIZE_7; i++)
		scanf("%d", p[i]);

	printf("포인터 배열의 배열요소를 이용한 a, b, c 출력 => a : %d, b : %d, c : %d", *p[0], *p[1], *p[2]);

	return 0;
}