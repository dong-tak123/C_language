#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define TITLE_SIZE 50
#define NAME_SIZE 50
#define ALBUM_SIZE 50

enum music_type { KPOP, POP, CLASSIC, OST };

typedef struct {
	char title[TITLE_SIZE];	//����
	char singer[NAME_SIZE];	//����
	char album[ALBUM_SIZE];	//�ٹ� �̸�
	enum music_type genre;	//�帣
}MUSIC;

void insert_music(MUSIC c[], int cnt);	//�� �Լ� ��� �迭�� ù �ּҸ� ���ڷ� �����ش�
void print_music(MUSIC c[], int cnt);
void search_music(MUSIC c[], int cnt);

int main(void)
{
	int input;
	int cnt = 0;	//�� ���� �߰��Ǿ����� �˷��ִ� ����
	MUSIC c[10];	//����ü �迭 ����

	while (1)
	{
		printf("==========================\n");
		printf("1. �߰�\n");
		printf("2. ���\n");
		printf("3. �˻�\n");
		printf("4. ����\n");
		printf("==========================\n");
		printf("�޴��� �����Ͻÿ� : ");
		scanf("%d", &input);

		if (input == 1)
		{
			insert_music(c, cnt);	//c[cnt]�� �߰��ϴ� �Լ�
			cnt++;					//�׸��� cnt�� �ø���
		}
		else if (input == 2)
		{
			print_music(c, cnt);	//cnt���� ����ϴ� �Լ�
		}
		else if (input == 3)
		{
			search_music(c, cnt);
		}
		else if (input == 4)
		{
			printf("���α׷� ����.\n");
			break;
		}
		else
			printf("�ٽ� �Է��ϼ���. (�޴� : 0~4������ ����) >>\n");
	}
}

void insert_music(MUSIC c[], int cnt)
{
	printf("����: ");
	getchar();		//���� Enter������ ���� ���� ����..
	gets(c[cnt].title);

	printf("����: ");
	gets(c[cnt].singer);

	printf("�ٹ�: ");
	gets(c[cnt].album);

	printf("�帣(0: KPOP, 1: POP, 2: Classic, 3: OST): ");
	int num;
	while (1)
	{
		scanf(" %d", &num);		//�굵 �տ� Enter������ ���� ���� ����
		if ((num >= 0) && (num <= 3))
			break;
		else
			printf("�ٽ� �Է��Ͻÿ�.(0~3 ������ ����) :");
	}
	c[cnt].genre = num;
}

void print_music(MUSIC c[], int cnt)
{
	for (int j = 0; j < cnt; j++)
	{
		printf("------------------------\n");
		printf("����: %s\n", c[j].title);
		printf("����: %s\n", c[j].singer);
		printf("�ٹ�: %s\n", c[j].album);
		printf("�帣: ");
		switch (c[j].genre) {
		case(0):
			printf("KPOP\n");	break;
		case(1):
			printf("POP\n");	break;
		case(2):
			printf("Classic\n");	break;
		case(3):
			printf("OST\n");	break;
		}
	}
}

void search_music(MUSIC c[], int cnt)
{
	char wanted[TITLE_SIZE];
	printf("����: ");
	getchar();		//���ۺ���..
	gets(wanted);
	
	int yes = 0;	//������ �ֳ����� Ȯ���ϴ� ����
	for (int i = 0; i < cnt; i++)
	{
		if (strcmp(c[i].title, wanted) == 0)
		{
			yes++;
			printf("-------------------\n");
			printf("����: %s\n", c[i].title);
			printf("����: %s\n", c[i].singer);
			printf("�ٹ�: %s\n", c[i].album);
			printf("�帣: ");
			switch (c[i].genre) {
			case(0):
				printf("KPOP\n");	break;
			case(1):
				printf("POP\n");	break;
			case(2):
				printf("Classic\n");	break;
			case(3):
				printf("OST\n");	break;
			}
		}
	}
	if (!yes)
		printf("ã�� ������ ���̺� �����ϴ�.\n");
}