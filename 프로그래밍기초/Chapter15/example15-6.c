#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
	int buffer[SIZE] = { 10,20,30,40,50 };
	FILE* fp = NULL;

	fp = fopen("binary.bin", "wb");		//���������� �ҷ��´�
	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin ������ �� �� �����ϴ�.\n");
		exit(1);
	}

	fwrite(buffer, sizeof(int), SIZE, fp);		//����, �ڷ���ũ��, ���� ũ��, ���������͸� �Ѱ���..
	fclose(fp);

	return 0;
}