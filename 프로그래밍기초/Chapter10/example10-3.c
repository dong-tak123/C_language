#include <stdio.h>

int sumary(int* ary, int SIZE);

int main(void)
{
	int point[] = { 95,88,76,54,85,33,65,78,99,82 };
	int* address = point;
	int aryLength = sizeof(point) / sizeof(int);

	int sum = 0;
	for (int i = 0; i < aryLength; i++)
	{
		sum += *(point + i);
	}

	printf("메인에서 구한 합은 %d\n", sum);
	
	address = point;	//얘는 왜 또하노..
	printf("함수 sumary(_ 호출로 구한 합은 %d\n", sumary(point, aryLength));		//배열의 첫번째주소 전달
	printf("함수 sumary(_ 호출로 구한 합은 %d\n", sumary(&point[0], aryLength));	//주소를 구체화
	printf("함수 sumary(_ 호출로 구한 합은 %d\n", sumary(address, aryLength));	//이렇게는 잘 안씀 

	return 0;
}

int sumary(int* ary, int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += ary[i];

	return sum;
}