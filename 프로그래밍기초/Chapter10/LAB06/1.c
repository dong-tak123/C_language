//2017117112 이동현
#include <stdio.h>

void transform(int data[], int arr[][3]);
void print1arr(int data[], int SIZE);
void print2arr(int array[4][3], int rowsize, int colsize);

int main(void)
{
	int data[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int array2[4][3] = { 0 };

	printf("1차원 배열\n");
	print1arr(data, 12);

	printf("1차원 배열을 2차원 배열로 (4X3) 변환\n");
	transform(data, array2);
	print2arr(array2, 4, 3);
	
	return 0;
}

void print1arr(int data[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		printf("%4d", data[i]);
	printf("\n");
}

/*void transform(int data[], int SIZE)
{
	int data_transformed[4][3] = { 0 };

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++)
			data_transformed[i][j] = data[i*3+j];
	}
	return data_transformed;
}*/

void print2arr(int array[4][3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++) 
	{
		for (int j = 0; j < colsize; j++)
			printf("%3d", array[i][j]);
		printf("\n");
	}
}

//void transform(int *data, int *(arr)[3])
void transform(int data[], int arr[][3])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = data[i * 3 + j];
		}
	}
}