#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fname[] = "grade.txt";
	FILE* f;
	char name[30];
	int point1, point2, cnt = 0;

	f = fopen(fname, "w");
	if (f == NULL) {
		printf("������ ������ �ʽ��ϴ�\n");
		exit(1);
	}

	printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
	scanf("%s %d %d", name, &point1, &point2);
	fprintf(f, "%d %s %d %d\n", ++cnt, name, point1, point2);	//����..
	fclose(f);

	f = fopen(fname, "r");
	if (f == NULL) {
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	
	fscanf(f, "%d %s %d %d\n", &cnt, name, &point1, &point2);
	fprintf(stdout, "\n%6s %16s %10s %8s\n", "��ȣ", "�̸�", "�߰�", "�⸻");
	fprintf(stdout, "%5d %18s %8d %8d", cnt, name, point1, point2);//fprintf(stdout, ...)�ϸ� �׳� printf()�� ����.
	fclose(f);

	return 0;
}