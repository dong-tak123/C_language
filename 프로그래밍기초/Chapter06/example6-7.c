#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	enum color { RED, GREEN, BLUE };
	int input;

	printf("세 정수(R[0], G[1], B[2]) 중의 하나를 입력: ");
	scanf("%d", &input);

	switch (input) {
	case RED:
		printf("Red\n");
		break;
	case GREEN:
		printf("Green\n");
		break;
	case BLUE:
		printf("Blue\n");
		break;

	default:
		printf("잘못된 입력\n");
	}
	//어느 케이스 블럭과 일치가 되면, 그 이후로는 케이스 블럭과
	//상관없이 그냥 break;를 만날때까지 무지성으로 계속 간다.
	return 0;
}