#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//포인터상수 NULL(0번지)를 <stido.h>에서 정의를 해놓는다..
	//#define NULL ((void *)0)으로 정의되어있음..

	int *ptr1, *ptr2, data = 10;
	ptr1 = NULL;

	printf("%p\n", ptr1);		//NULL을 지정했으니까 0이 나온다..
	//printf("%p\n", ptr2);   //주석 해제하면 오류난다 아직 가리키는게 없으니까..
	printf("%d\n", data);
	
}