#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int year;
	int month;
	int day;
}Date;

typedef struct {
	Date date;
	int account_num;
	char name[30];
	int balance;
}ACCOUNT;

//������ �޾ƿ��� �Լ�
void get_info(ACCOUNT c[], int SIZE) {
	FILE* f;
	f = fopen("input.txt", "r");		//��ǲ�� �б�� �����Ӵ�..	�굵 �Ű������� �ѱ�� �� ���ٴ�..
	if (f == NULL) {
		printf("������ ������ �ʽ��ϴ�!\n");
		exit(1);
	}

	char line[80];
	for (int i = 0; i < SIZE; i++) {

		fscanf(f, "%d %d %d %d %s %d", &c[i].date.year, &c[i].date.month, &c[i].date.day, &c[i].account_num,
			c[i].name, &c[i].balance);
		//fgets(line, sizeof(line), f);		//���ٸ��� fgets�� ���Ͽ��� �����Ӵ�.. sizeof(line)�� �ִ� �������� ����..
		//sscanf(line, "%d %d %d %d %s %d", &c[i].date.year, &c[i].date.month, &c[i].date.day, &c[i].account_num,
			//c[i].name, &c[i].balance);		//������ �������� �о �� ������ �����ߴ�.. 
	}
	fclose(f);
}

//����ü �迭��ü�� ����ϴ� �Լ�
void print_struct(ACCOUNT c[], int SIZE) {
	printf("--------------------------------------------------\n");
	printf("������  ��  ��  ���¹�ȣ      ������     �����ܾ�\n");
	printf("--------------------------------------------------\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%6d %3d %3d %7d %15s %10d\n", c[i].date.year, c[i].date.month, c[i].date.day, c[i].account_num,
			c[i].name, c[i].balance);
	}
	printf("--------------------------------------------------\n");
}

//�ִ� ���� �ܾ� �� ������ ��� ����ϴ� �Լ�
void print_most_rich(ACCOUNT c[], int SIZE) {
	FILE* f;
	f = fopen("output.txt", "a");		//output.txt�� �����ҰŴϱ� ������ ��� �д�..
	if (f == NULL) {
		printf("������ ������ �ʽ��ϴ�!\n");
		exit(1);
	}

	int max, i;		//�ִ� �ܰ� ��� ����..
	for (i = 0; i < SIZE; i++) {
		if (i == 0)
			max = i;
		else {
			if (c[i].balance > c[max].balance)
				max = i;
		}
	}

	//ȭ�� ���
	//�� �κ��� ���� print_struct�Լ��� ���̿� �� �� �ִ�.. 
	//print_struct(&account[max], 1)�� �Ѱ��ָ� �ȴ�..
	printf("[�ִ� ���� �ܾ� �� ����]\n");
	printf("--------------------------------------------------\n");
	printf("������  ��  ��  ���¹�ȣ      ������     �����ܾ�\n");
	printf("--------------------------------------------------\n");
	printf("%6d %3d %3d %7d %15s %10d\n", c[max].date.year, c[max].date.month, c[max].date.day, c[max].account_num,
		c[max].name, c[max].balance);
	printf("--------------------------------------------------\n");

	//���Ͽ� ���
	fprintf(f, "%6d %3d %3d %7d %15s %10d", c[max].date.year, c[max].date.month, c[max].date.day, c[max].account_num,
		c[max].name, c[max].balance);

	fclose(f);
}

int main(void)
{
	ACCOUNT c[5];	//����ü �迭 ����

	get_info(c, 5);

	print_struct(c, 5);
	puts("");

	print_most_rich(c, 5);

	printf("output.txt is saved.\n");

	return 0;
}