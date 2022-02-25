// �迭�� �����Ϳ� ���� ������ �迭�� �Ѱ��ָ� call by reference�� ����ȴ�!

#include <stdio.h>

void transform(int data[], int arr[][3], int rowsize, int colsize);
void print1arr(int data[], int SIZE);
void print2arr(int array[4][3], int rowsize, int colsize);

int main(void)
{
	int data[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };	// 1���� �迭
	int array2[4][3] = { 0 };

	printf("1���� �迭\n");
	print1arr(data, 12);

	printf("1���� �迭�� 2���� �迭�� (4X3) ��ȯ\n");
	transform(data, array2, 4, 3);
	print2arr(array2, 4, 3);

	return 0;
}

// 1���� �迭�� ����ϴ� �Լ�
void print1arr(int data[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		printf("%4d", data[i]);
	printf("\n");
}

// 2���� �迭�� ����ϴ� �Լ�
void print2arr(int array[4][3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++)
			printf("%3d", array[i][j]);
		printf("\n");
	}
}

// 1���� �迭�� 2���� �迭�� ����
//void transform(int *data, int *(arr)[3], int rowsize, int colsize)
void transform(int data[], int arr[][3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++) {
			arr[i][j] = data[i * 3 + j];
		}
	}
}