#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input[20] = { 0 };
	int i = 0;

	printf("배열에 저장할 정수를 입력하시오(종료 0): ");
	
	do {
		scanf("%d", &input[i]);
	} while (input[i++] != 0);		//이줄에서는 i는 증가하기 전이다..
	//input이 0보다 큰지확인하고 인덱스도 올린다..

	i = 0;
	while (input[i] != 0) {
		printf("%d ", input[i++]);	//출력하는 동시에 인덱스도 올린다..
	}
	puts("");

}