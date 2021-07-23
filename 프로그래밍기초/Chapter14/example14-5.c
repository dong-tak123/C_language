#include <stdio.h>

void printarray(double(*arr)[3], int ROWSIZE, int COLSIZE) {
	printf("배열 출력\n");
	for (int i = 0; i < ROWSIZE; i++) {
		for (int j = 0; j < COLSIZE; j++) {
			printf("%5.1f ", arr[i][j]);
		}
		puts("");
	}
}
//doubld sum(double arr[][3], int ROWSIZE, int COLSIZE)
double sum(double (*arr)[3], int ROWSIZE, int COLSIZE) {
	double total = 0;

	for (int i = 0; i < ROWSIZE; i++) {
		for (int j = 0; j < COLSIZE; j++) {
			//total += arr[i][j];
			total += *(*(arr+i)+j);
		}
	}
	return total;
}

int main(void)
{
	double arr[4][3] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0 };
	double total;

	printarray(arr, 4, 3);

	total = sum(arr, 4, 3);

	printf("%.1lf",total);
}