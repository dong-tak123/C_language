#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h>

void printarr(int arr[][3], int rowsize, int colsize);
void printarr_by_pointer(int(*arr)[3], int rowsize, int colsize);

int main()
{
	int my_arr[][4] = { {1,2,3,4},
				{5,6,7,8},
				{9,10,11,12} };

	printarr(my_arr, 3, 4);
	puts("");
	printarr_by_pointer(my_arr, 3, 4);

	return 0;
}

void printarr(int arr[][3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++) {
			printf("%5d", arr[i][j]);
		}
		puts("");
	}
}

void printarr_by_pointer(int(*arr)[3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++) {
			printf("%5d", *((*arr + i) + j));
		}
		puts("");
	}
}