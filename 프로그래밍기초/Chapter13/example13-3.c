#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	struct student
	{
		int snum;
		char* dept;		//�޸� ������ ����..(�ܼ��� �������̹Ƿ� ������� ���� ����..
		char name[12];	//�޸� ������ �ִ�..
	};
	struct student hong = { 2017117112, "��ǻ�Ͱ��а�", "ȫ�浿" };
	struct student na = { 2018000111 };
	struct student bae = { 2018000002 };

	scanf("%s", na.name);

	na.dept = "��ǻ�Ͱ��а�";			//��� ���ڿ� ����� ����Ǿ������ϱ� �̷��� ���� ����..->������ �Ұ�..
	bae.dept = "�����а�";
	memcpy(bae.name, "���", 7);	//��� ���ڿ� ������ ����Ǿ����ϱ� strcpy, memcpy����� ����� ���..
	strcpy(bae.name, "���");
	strcpy_s(bae.name, 7, "���");

	printf("[%d, %s, %s]\n", hong.snum, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
	printf("[%d, %s, %s]\n", bae.snum, bae.dept, bae.name);

	struct student one;
	one = bae;	//������ ����ü ���� ����..

	if (one.snum == bae.snum)
		printf("�й��� %d�� �����մϴ�\n", one.snum);

	//if (one.snum == bae.snum && !strcmp(one.name, bae.name) && !strcmp(one.dept, bae.dept))  �ΰ� �ǹ̴� ����..
	if (one.snum == bae.snum && strcmp(one.name, bae.name) == 0 && strcmp(one.dept, bae.dept) == 0)
		printf("������ ���� ����ü�Դϴ�.\n");

	return 0;
}