#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	printf("정수 입력: ");
	scanf("%d", &input);

	printf("입력 값 : %d\n", input);
	printf("주소 값 : %u(10진수), %p(16진수)\n", (unsigned)&input, &input);
	//%u : 부호가 없는 십진수..
	printf("주소 값 : %d(10진수), %#X(16진수)\n", (int)&input, (unsigned)&input);
	printf("주소 값 크기 : %d\n", sizeof(&input));

	//test OK!
	//형변환 없이 주소 값을 받는다
	printf("주소 값 : %u(10진수), %p(16진수)\n", &input, &input);
	printf("주소 값 : %d(10진수), %#X(16진수)\n", &input, &input);
}