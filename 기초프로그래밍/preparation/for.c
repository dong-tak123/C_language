#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
#include <stdlib.h>

void insert_ary(int* ary, int size);
void print_ary(int* ary, int size);

// ������ �ݺ������� �Է�
int main() {
	int arr[5] = { 0 };

	insert_ary(arr, SIZE);
	puts("");
	print_ary(arr, SIZE);

	return 0;
}

void insert_ary(int* ary, int size) {
	printf("�迭�� �Է��ϴ� �Լ��Դϴ�.\n");
	printf("%d���� ������ �Է��Ͻÿ�\n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", (ary + i));
	}
}

void print_ary(int* ary, int size) {
	printf("�迭�� ����ϴ� �Լ��Դϴ�.\n");
	for (int i = 0; i < size; i++) {
		printf("%3d", *(ary + i));
	}
}