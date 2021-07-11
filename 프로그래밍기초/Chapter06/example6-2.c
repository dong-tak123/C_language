#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("정수 입력: ");
	scanf("%d", &n);
	
	// n%2이면 조건이 거짓이 되어서 else문이 실행
	if (n % 2)	//if (n % 2 != 0)		
		printf("홀수");
	else
		printf("짝수");

	printf("입니다\n");

	//조건 연산자 사용
	(n % 2) ? printf("홀수") : printf("짝수");
	printf("입니다\n");

	return 0;
}