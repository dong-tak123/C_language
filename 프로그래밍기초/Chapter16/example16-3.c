//������..
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

typedef struct {
	int number;
	char title[50];
}Book;

int main()
{
	Book* p = NULL;
	p = (Book*)malloc(sizeof(Book) * 2);
	if (p == NULL) {
		printf("�޸� �Ҵ� ����");
		exit(1);
	}
	memset(p, 0, sizeof(Book) * 2);	//�޸� �ʱ�ȭ..
	//�̰� �����ָ� �ڿ� ������ ���� �����ִ�!

	p[0].number = 1;
	strcpy(p[0].title, "C Programming");	//�̷��� �ϴ°� ��������..

	p[1].number = 2;
	strcpy(p[1].title, "Data Structure");

	for (int i = 0; i < 2; i++)
		printf("[%d] title : %s\n", p[i].number, (p + i)->title);	//����ü �������̹Ƿ� ->�� ����..

	free(p);
	return 0;
}