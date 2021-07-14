//2017117112 이동현
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45

void print_numbers();
int check_num(int num[], int n);


int main(void)
{
	srand((long)time(NULL));

	int input, num[6] = { 0 };

	while (1) {
		printf("Lotto 실행 회수 입력 (1~5)회: ");
		scanf("%d", &input);
		if ((input >= 1) && (input <= 5))
			break;
	}
	
	for (int i = 0; i < input; i++)
		print_numbers();
}

void print_numbers()
{
	//같은게 없을때 받는다.. 혹은 같으면 i를 줄인다..
	int num[6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		num[i] = rand() % MAX + 1;

		if (check_num(num, i))		//앞에거랑 같은게 있으면..
			i--;	//하나를 줄여서 다시 받는다..

	}
	for (int j = 0; j < 6; j++)
		printf("%4d", num[j]);
	printf("\n");
}

int check_num(int num[], int n)		//얘가 앞의 모든것을 다 확인해줌.. (앞의 인덱스 모두..)
{
	for (int i = 0; i < n; i++)
	{
		if (num[i] == num[n])
			return 1;		//같은게 있으면 1반환
	}
	return 0;	//없으면 0반환
}
