#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a = '\0';		//\0 : �ƽ�Ű�ڵ� 0

	puts("���� �ϳ� �Է�:");
	a = getchar();			//a ���ٰ� �����ϳ��� getchar()�� �Է���..
	putchar(a); putchar('\n');		//putchar()�� �����..

	return 0;
}