#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* fname = "basic.txt";
	FILE* f;

	char name[30] = "������";
	int point = 99;

	f = fopen(fname, "w");
	if (f == NULL)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	// ���� "vasic.txt"�� ����
	fprintf(f, "�̸��� %s�� �л��� ������ %d�Դϴ�.\n", name, point);
	fclose(f);

	//ǥ����� �ֿܼ� ����
	printf("�̸��� %s�� �л��� ������ %d�Դϴ�.\n", name, point);
	puts("������Ʈ �������� ���� basic.txt�� �޸������� ���� ������.");

	return 0;
}