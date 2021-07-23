#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int number;
	char name[40];
	int mid;
	int final;
	int quiz;
}pscore;

int main()
{
	char fname[] = "score.bin";
	FILE* fp;

	fp = fopen(fname, "wb");
	if (fp == NULL)
	{
		printf("������ �ȿ���\n");
		exit(1);
	}

	char line[80];		//���پ� �޾ƿ������� ���ڿ�����
	int cnt = 0;		//��ȣ ���°�..
	pscore score;		//����ü���� ����

	printf("�̸��� ����(�߰�, �⸻, ����)�� �Է��ϼ���.\n");

	fgets(line, 80, stdin);		//ǥ���Է����� line�� �Է��� �ް�,,
	while (!feof(stdin)) {		//ǥ���Է��� CTRL + Z�� �ƴ϶��..
		sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
		//line ���ڿ����� ������ �������� ����ü�� ����� �ϳ��� �ִµ�, �ּڰ��� �����������.. name����� �迭�̹Ƿ� �ּ� ����ü��..

		score.number = ++cnt;		//��ȣ �ø���
		fwrite(&score, sizeof(pscore), 1, fp);		//���Ͽ� ����ü �ϳ��� ����..
		//����ü score�� ��ġ�� �˷�����ϴµ�, ���� �׳� ������ ����Ǿ� �����ϱ� &��������Ѵ�..

		fgets(line, 80, stdin);
		//�ٽ� �޴´�..
	}
	printf("%s ���� ���� �Ϸ�\n", fname);
	fclose(fp);

	return 0;
}