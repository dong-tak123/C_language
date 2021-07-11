#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const int MAX = 15;

	printf("1에서 %d까지 정수 중에서 3으로 나누어 떨어지지 않는 수\n", MAX);
	
	for (int i = 1; i <= MAX; i++)
	{
		if (!(i % 3))
		//if(i % 5)		-> 5로 나누어 떨어지는 수만 출력..
		//5로 나누어떨어지지 않으면 if가 실행된..-> continue..
			continue;
		printf("%3d", i);
	}
	puts("");
}