#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void)
{
	int input;
	srand((long)time(NULL));
	int guess = rand() % 100 + 1;

	printf("1에서 %d사이에서 한 정수가 결정되었습니다.\n", MAX);

	do {
		printf("\n정수를 예측해보시오 >> ");
		scanf("%d", &input);
		if (guess > input)
			printf("더 큰 숫자로 예측해보세요~\n");
		else if (guess < input)
			printf("더 작은 숫자로 예측해보세요~\n");
		else
			printf("정답입니다\n");
		
	} while (guess != input);

	//printf("%d", guess);
}