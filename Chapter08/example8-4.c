#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data = 100;
	char ch = 'A';
	int *ptrint = &data;
	char *ptrchar = &ch;

	printf("간접참조 출력 : %d %c\n", *ptrint, *ptrchar);		//간접참조했고 모두 r-value로 사용되었다

	*ptrint = 200;				//간접연산자로 사용했고, l-value로 사용됨
								//data = 200;
	*ptrchar = 'B';				//간접연산자로 사용했고, l-value로 사용됨
								//ch = 'B';

	printf("직접참조 출력 : %d %c\n", data, ch);		//직접참조했고 r-value로 사용되었다.
}