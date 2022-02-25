// 배열은 포인터와 같기 때문에 배열을 넘겨주면 call by reference가 수행된다!

#include <stdio.h>

void transform(int data[], int arr[][3], int rowsize, int colsize);
void print1arr(int data[], int SIZE);
void print2arr(int array[4][3], int rowsize, int colsize);

int main(void)
{
	int data[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };	// 1차원 배열
	int array2[4][3] = { 0 };

	printf("1차원 배열\n");
	print1arr(data, 12);

	printf("1차원 배열을 2차원 배열로 (4X3) 변환\n");
	transform(data, array2, 4, 3);
	print2arr(array2, 4, 3);

	return 0;
}

// 1차원 배열을 출력하는 함수
void print1arr(int data[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		printf("%4d", data[i]);
	printf("\n");
}

// 2차원 배열을 출력하는 함수
void print2arr(int array[4][3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++)
			printf("%3d", array[i][j]);
		printf("\n");
	}
}

// 1차원 배열을 2차원 배열로 변형
//void transform(int *data, int *(arr)[3], int rowsize, int colsize)
void transform(int data[], int arr[][3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++) {
			arr[i][j] = data[i * 3 + j];
		}
	}
}