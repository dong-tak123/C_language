#include <stdio.h>
#define SIZE 3

int main(void)
{
	int score[] = { 89,98,76 }, i;

	printf("%p, %p\n", score, &score[0]);		//score의 주소 다른방식으로 두번 출력
												//그냥 바로 score를 %p로 출력하면 주소가 나옴..
	printf("%d, %d\n\n", *score, score[0]);		//실제 배열의 원소 89 두번 출력

	for (i = 0; i < SIZE; i++)
		printf("%2d %10d %6d\n", i, (score + i), *(score + i));
	//반복문으로 각 원소의 인덱스, 주소, 실제값을 알려준다.

}