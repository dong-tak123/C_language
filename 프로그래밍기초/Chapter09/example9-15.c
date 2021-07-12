#include <stdio.h>

int main(void)
{
	int data[] = { 3,4,5,7,9 };
	int rowsize, colsize;

	double x[][3] = { 1,2,3,7,8,9,4,5,6,10,11,12 };

	printf("%d %d\n", sizeof data, sizeof data[0]);	//20, 4
	printf("일차원 배열: 배열 크기 == %d\n", sizeof data / sizeof data[0]);	//5

	printf("%d %d %d %d\n", sizeof x, sizeof x[0], sizeof x[1], sizeof(x[0][0]));
	// 96, 24, 24, 8

	rowsize = sizeof(x) / sizeof(x[0]); // 96나누기 24.. -> 4
	colsize = sizeof x[0] / sizeof x[0][0];	// 24 나누기 8.. -> 3!!

	printf("이차원 배열 : 행수 == %d , 열수 == %d\n", rowsize, colsize);
	printf("이차원 배열 : 전체 원소 수 == %d\n", sizeof(x) / sizeof x[0][0]);


}