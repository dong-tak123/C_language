//1차원 배열의 원소를 입력받아서 출력하고, 모두 더하는 것까지.. 셋다 함수로 만들어라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insert_data(int* data, int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		printf("data[%d] = ", i);
		scanf("%d", &data[i]);	//*(data + i);도 가능
	}
}

void printarray(int* data, int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d", *(data + i));
	}
	printf("\n");
}

int sum(int* data, int SIZE) {
	int total = 0;
	for (int i = 0; i < SIZE; i++)
		total += data[i];
	return total;
}

int main(void)
{
	int data[5];

	printf("실수 다섯개의 값을 입력하세요 >>\n");
	insert_data(data, 5);

	printf("\n입력한 자료값은 다음과 같습니다.\n");
	printarray(data, 5);

	printf("\n모든 자료값의 합은 %d입니다.\n", sum(data, 5));
}
