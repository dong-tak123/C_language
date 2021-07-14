#include <stdio.h>

double sum(double data[][3], int rowsize, int colsize);
void printarray(double data[][3], int rowsize, int colsize);

int main(void)
{
	double x[4][3] = { 1,2,3,7,8,9,4,5,6,10,11,12 };
	
	double result;	//자료형을 맞춰주자..
	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);

	printf("2차원 배열의 자료값은 다음과 같습니다.\n");
	
	printarray(x, rowsize, colsize);

	result = sum(x, rowsize, colsize);
	printf("2차원 배열의 원소합은 %.3lf 입니다.\n", result);
}

void printarray(double data[][3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++)
	{
		for (int j = 0; j < colsize; j++)
			printf("%.3lf ", data[i][j]);
		printf("\n");
	}
}

//포인터로 전달을 받으면,.
//double sum(double (*data)[3], int rowsize, int colsize)로 함..
double sum(double data[][3], int rowsize, int colsize)
{
	double sum = 0;	//자료형을 맞추자..

	for (int i = 0; i < rowsize; i++)
	{
		for (int j = 0; j < colsize; j++)
			sum += data[i][j];
	}
	return sum;
}