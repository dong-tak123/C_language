//1���� �迭�� ���Ҹ� �Է¹޾Ƽ� ����ϰ�, ��� ���ϴ� �ͱ���.. �´� �Լ��� ������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insert_data(int* data, int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		printf("data[%d] = ", i);
		scanf("%d", &data[i]);	//*(data + i);�� ����
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

	printf("�Ǽ� �ټ����� ���� �Է��ϼ��� >>\n");
	insert_data(data, 5);

	printf("\n�Է��� �ڷᰪ�� ������ �����ϴ�.\n");
	printarray(data, 5);

	printf("\n��� �ڷᰪ�� ���� %d�Դϴ�.\n", sum(data, 5));
}