#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

int main(void)
{
	int* pary[SIZE] = { NULL };		//다 0번지를 가리키도록 초기화..
	int a = 10, b = 20, c = 30;
	int i, j;

	pary[0] = &a;	//각각의 원소가 모두 포인터..
	pary[1] = &b;
	pary[2] = &c;

	for (i = 0; i < SIZE; i++)
	{
		printf("*pary[%d] = %d\n", i, *pary[i]);	//배열의 원소는 모두 포인터이므로 *를 붙혀주어야
													//실제 값이 나온다..
	}

	for (i = 0; i < SIZE; i++) 
	{
		scanf("%d", pary[i]);			//운래 scanf("%d", &a,&b,&c)인데... 어차피 주솟값이니까 가능..
		printf("%d, %d, %d\n", a, b, c);
	}
}