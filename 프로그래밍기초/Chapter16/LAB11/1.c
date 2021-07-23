#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num;
	char name[10];
	float mid;
	float final;
	float total;
	double average;
}SCORE;

void get_score_info(SCORE p[], int SIZE, FILE *fp1) {
	/*FILE* fp1;
	fp1 = fopen("input.txt", "r");
	if (fp1 == NULL) {
		printf("������ ������ �ʽ��ϴ�!");
		exit(1);
	}*/
	for (int i = 0; i < SIZE; i++) {
		fscanf(fp1, "%d %s %f %f", &p[i].num, p[i].name, &p[i].mid, &p[i].final);
	}
}

void calculate_total(SCORE p[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		p[i].total = p[i].mid + p[i].final;
	}
}

void calculate_average(SCORE p[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		p[i].average = p[i].total / 2.0;
	}
}

/*void get_total(SCORE *p) {
	p->total = p->mid + p->final;
}

void get_average(SCORE *p) {
	p->average = p->total / 2.0;
}*/

void print_score(SCORE p[], int SIZE) {
	printf("����  �̸�   �߰�   �⸻   ����   ���\n");
	printf("---------------------------------------\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d  %7s %5.1f %5.1f %7.1f %5.1f\n", p[i].num, p[i].name, p[i].mid, p[i].final, p[i].total, p[i].average);
	}
}

void file_save_score(SCORE p[], int SIZE) {
	FILE* fp1;
	fp1 = fopen("output.txt", "w");
	if (fp1 == NULL) {
		printf("������ ������ �ʽ��ϴ�!");
		exit(1);
	}
	fprintf(fp1, "����  �̸�   �߰�   �⸻   ����   ���\n");
	fprintf(fp1, "---------------------------------------\n");
	for (int i = 0; i < SIZE; i++)
	{
		fprintf(fp1, "%2d  %7s %5.1f %5.1f %7.1f %5.1f\n", p[i].num, p[i].name, p[i].mid, p[i].final, p[i].total, p[i].average);
	}

	fclose(fp1);
}

int main(void)
{
	int size;
	SCORE* p = NULL;
	
	FILE* fp1;
	fp1 = fopen("input.txt", "r");
	if (fp1 == NULL) {
		printf("������ ������ �ʽ��ϴ�!");
		exit(1);
	}

	fscanf(fp1, "%d", &size);		//���Ͽ��� ù��° ������ size�� �Է¹���..

	p = (SCORE*)malloc(sizeof(SCORE) * size);		//����ü�迭ũ�⸸ŭ�� �ѹ濡 �Ҵ�ް�,
	if (p == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	memset(p, 0, sizeof(SCORE) * size);
	//�ʱ�ȭ �Ϸ�.. -> ���� ����ü �迭�� �ϳ� �����..

	/*for (int i = 0; i < size; i++) {
		fscanf(fp1, "%d %s %f %f", &p[i].num, p[i].name, &p[i].mid, &p[i].final);
	}
	//����ü �迭�� �Է��� �Ϸ�..
	*/
	
	
	/*for (int i = 0; i < size; i++) {
		get_total(&p[i]);
	}
	//�������ϱ� �Ϸ�..
	for (int i = 0; i < size; i++) {
		get_average(&p[i]);
	}*/

	get_score_info(p, size, fp1);		//���������͵� �Ѱܼ� �״������� �޾ƿ����Ѵ�..
	fclose(fp1);
	
	calculate_total(p, size);
	calculate_average(p, size);

	print_score(p, size);
	file_save_score(p, size);

	free(p);
	return 0;
}