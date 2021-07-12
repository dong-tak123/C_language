#include <stdio.h>

int main(void)
{
	int data[] = { 3,4,5,7,9 };
	int rowsize, colsize;

	double x[][3] = { 1,2,3,7,8,9,4,5,6,10,11,12 };

	printf("%d %d\n", sizeof data, sizeof data[0]);	//20, 4
	printf("������ �迭: �迭 ũ�� == %d\n", sizeof data / sizeof data[0]);	//5

	printf("%d %d %d %d\n", sizeof x, sizeof x[0], sizeof x[1], sizeof(x[0][0]));
	// 96, 24, 24, 8

	rowsize = sizeof(x) / sizeof(x[0]); // 96������ 24.. -> 4
	colsize = sizeof x[0] / sizeof x[0][0];	// 24 ������ 8.. -> 3!!

	printf("������ �迭 : ��� == %d , ���� == %d\n", rowsize, colsize);
	printf("������ �迭 : ��ü ���� �� == %d\n", sizeof(x) / sizeof x[0][0]);


}