#include <stdio.h>

double sum(double data[][3], int rowsize, int colsize);
void printarray(double data[][3], int rowsize, int colsize);

int main(void)
{
	double x[4][3] = { 1,2,3,7,8,9,4,5,6,10,11,12 };
	
	double result;	//�ڷ����� ��������..
	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);

	printf("2���� �迭�� �ڷᰪ�� ������ �����ϴ�.\n");
	
	printarray(x, rowsize, colsize);

	result = sum(x, rowsize, colsize);
	printf("2���� �迭�� �������� %.3lf �Դϴ�.\n", result);
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

//�����ͷ� ������ ������,.
//double sum(double (*data)[3], int rowsize, int colsize)�� ��..
double sum(double data[][3], int rowsize, int colsize)
{
	double sum = 0;	//�ڷ����� ������..

	for (int i = 0; i < rowsize; i++)
	{
		for (int j = 0; j < colsize; j++)
			sum += data[i][j];
	}
	return sum;
}