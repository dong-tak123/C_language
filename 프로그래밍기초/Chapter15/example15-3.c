#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//�׳� �ܼ� ���� ����
	char fname[] = "grade1.txt";
	FILE* f;
	char names[80];
	int cnt = 0;

	f = fopen(fname, "w");
	if (f == NULL) {
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
	fgets(names, 80, stdin);		//ǥ���Է�..	(������ ������ ����..)

	while (!feof(stdin))		//ǥ�� �Է��� CTRL + Z�� �ƴѵ��ȿ�..
		//ȭ�鿡�� �Է¹޾Ƽ� ��� ���Ͽ� ���..
	{
		fprintf(f, "%d ", ++cnt);		//���� ���
		fputs(names, f);		//���� ���
		fgets(names, 80, stdin);	//ǥ�� �Է�
	}
	fclose(f);

	return 0;
}