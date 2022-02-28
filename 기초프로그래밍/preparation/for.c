#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
#include <stdlib.h>

void insert_ary(int* ary, int size);
void print_ary(int* ary, int size);

// 정수를 반복적으로 입력
int main() {
	int arr[5] = { 0 };

	insert_ary(arr, SIZE);
	puts("");
	print_ary(arr, SIZE);

	return 0;
}

void insert_ary(int* ary, int size) {
	printf("배열에 입력하는 함수입니다.\n");
	printf("%d개의 정수를 입력하시오\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", (ary + i));
	}
}

void print_ary(int* ary, int size) {
	printf("배열을 출력하는 함수입니다.\n");
	for (int i = 0; i < size; i++) {
		printf("%3d", *(ary + i));
	}
}