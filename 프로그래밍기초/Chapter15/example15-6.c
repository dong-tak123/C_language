#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
	int buffer[SIZE] = { 10,20,30,40,50 };
	FILE* fp = NULL;

	fp = fopen("binary.bin", "wb");		//이진파일을 불러온다
	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.\n");
		exit(1);
	}

	fwrite(buffer, sizeof(int), SIZE, fp);		//버퍼, 자료형크기, 실제 크기, 파일포인터를 넘겨줌..
	fclose(fp);

	return 0;
}