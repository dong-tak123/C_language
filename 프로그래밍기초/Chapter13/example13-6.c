#include <stdio.h>

typedef struct {
	char name[20];
	int type;
	int credit;		//type�� credit�� ������ �Ǿ��ְ�, �װ� �ε����� �ۿ��Ѵ�..
	int hours;
}lecture;

char* lectype[] = { "����", "�Ϲݼ���","�����ʼ�","��������" };//���ڿ� ����� �迭..
char* head[] = { "���¸�","���±���","����","�ü�" };			//���ڿ� ����� �迭.. ������ �Ѵ� �ٲ��� �ʴ´�..

int main(void)
{
	lecture course[] = { {"�ΰ��� ��ȸ",0,2,2},{"�����а���",1,3,3},{"�ڷᱸ��",2,3,3},{"��������α׷���",2,3,4},{"��� C���α׷���",3,3,4} };
	int arysize = sizeof(course) / sizeof(course[0]);
	lecture *p = course;	//����ü ������..

	printf("�迭ũ��: %d\n\n", arysize);
	printf("%12s   %12s %6s %6s\n", head[0], head[1], head[2], head[3]);
	printf("============================================\n");

	for (int i = 0; i < arysize; i++)
		//printf("%16s %10s %5d %5d\n", course[i].name, lectype[course[i].type], course[i].credit, course[i].hours);
		printf("%16s %10s %5d %5d\n", (p+i)->name, lectype[(p+i)->type], p[i].credit, (p+i)->hours);		//�����ͷ� �ص� �Ȱ���..
	return 0;
}