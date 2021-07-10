#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a = '\0';		//\0 : 아스키코드 0

	puts("문자 하나 입력:");
	a = getchar();			//a 에다가 문자하나를 getchar()로 입력함..
	putchar(a); putchar('\n');		//putchar()로 출력함..

	return 0;
}