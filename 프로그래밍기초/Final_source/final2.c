//2017117112 �̵���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

typedef struct {
	char name[SIZE];
	char number[SIZE];
}PHONE_BOOK;

void insert_tel(PHONE_BOOK p[], int cnt) {
	printf("�̸� : ");
	getchar();
	gets(p[cnt].name);
	printf("��ȭ��ȣ : ");
	gets(p[cnt].number);
}
void search_tel(PHONE_BOOK p[], int cnt) {
	char wanted[SIZE];
	int found=0;
	printf("�˻��� �̸��� �Է��ϼ���: ");
	getchar();
	gets(wanted);
	for (int i = 0; i < cnt; i++) {
		if (strcmp(wanted, p[i].name)==0) {
			puts("");
			printf("------------------------------------\n");
			printf("[%2d] %10s%30s\n", i, p[i].name, p[i].number);
			printf("------------------------------------\n");
			found++;
		}
	}
	if (found == 0)
		printf("��ġ�ϴ� �̸��� �����ϴ�.\n");
}
void change_tel(PHONE_BOOK p[], int cnt)
{
	char wanted[SIZE];
	char change[SIZE];
	int found = 0;
	int i;
	printf("�˻��� �̸��� �Է��ϼ���: ");
	getchar();
	gets(wanted);
	for (i = 0; i < cnt; i++) {
		if (strcmp(wanted, p[i].name) == 0) {
			printf("���� ��ȭ��ȣ�� %s �Դϴ�.\n", p[i].number);
			printf("������ ��ȭ��ȣ�� �Է��ϼ���: ");
			gets(change);
			strcpy(p[i].number, change);
			printf("����� ��ȭ��ȣ�Դϴ�.\n\n");
			printf("------------------------------------\n");
			printf("[%2d] %10s%30s\n", i, p[i].name, p[i].number);
			printf("------------------------------------\n");
			found++;
			break;
		}
	}
	if (found == 0)
		printf("��ġ�ϴ� �̸��� �����ϴ�.\n");
	
}
void print_tel(PHONE_BOOK p[], int cnt) {
	if (cnt == 0)
		printf("����� �ڷᰡ �����ϴ�.\n");
	else {
		printf("-------------------------------------------\n");
		printf("%4s %11s %30s\n","����","�̸�","��ȭ��ȣ");
		printf("-------------------------------------------\n");
		for (int i = 0; i < cnt; i++) {
			printf("[%2d] %10s%30s\n", i, p[i].name, p[i].number);
		}
		printf("-------------------------------------------\n");
	}
	
}
int main(void) 
{
	int input;
	int num;
	int cnt=0;
	
	while (1)
	{
		printf("������ ��ȭ��ȣ�� ���� �Է��ϼ���(1~5): ");
		scanf(" %d", &input);
		if (input > 0 && input <= 5)
			break;
		else
			printf("1~5�� ���� �Է��ϼ���.\n");
	}
	
	//�޸� ���� �Ҵ�
	PHONE_BOOK* p = NULL;
	p = (PHONE_BOOK*)malloc(sizeof(PHONE_BOOK) * input);
	if (p == NULL) {
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�!\n");
		exit(1);
	}
	memset(p, 0, sizeof(PHONE_BOOK) * input);

	while (1)
	{
		printf("==========================\n");
		printf("1. ��ȭ��ȣ �߰�\n");
		printf("2. �̸� �˻�\n");
		printf("3. ��ȭ��ȣ ����\n");
		printf("4. ��ȭ��ȣ ��� ����\n");
		printf("5. ���α׷� ����\n");
		printf("==========================\n");
		printf("��ȣ�� �����ϼ��� : ");
		scanf("%d", &num);
		if (num == 1)
		{
			insert_tel(p, cnt);	//c[cnt]�� �߰��ϴ� �Լ�
			cnt++;					//�׸��� cnt�� �ø���
		}
		else if (num == 2)
		{
			search_tel(p, cnt);
		}
		else if (num == 3)
		{
			change_tel(p, cnt);
		}
		else if (num == 4)
		{
			print_tel(p, cnt);	//cnt���� ����ϴ� �Լ�
		}
		else if (num == 5)
		{
			printf("���α׷� ����.\n");
			break;
		}
		else
			printf("�߸��� �޴� �����Դϴ�. �޴� 1~5�� �����ϼ���.\n");
	}

	free(p);
	return 0;
}