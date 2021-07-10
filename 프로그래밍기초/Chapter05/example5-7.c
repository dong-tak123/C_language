#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, b = 0;
	//printf("두 정수를 입력 >> ");
	//scanf("%d%d", &a, &b);

	//printf("%최대값: %d ", (a > b) ? a : b);
	//printf("%최소값: %d\n", (a > b) ? b : a);
	//printf("a의 절대값: %d ", (a > 0) ? a : -a);
	//printf("b의 절대값: %d\n", (b < 0) ? -b : b);

	printf("%d", ((a % 2) == 0) ? printf("a는 짝수\n") : printf("a는 홀수\n"));
	//printf도 수식으로 이용함..-> 출력한 문자수..
	//printf("%s\n", ((b % 2) != 0) ? "b는 홀수" : "b는 짝수");//,뒤부터는 %s에 뭐가 들어갈지 결정해준다..

	return 0;
}