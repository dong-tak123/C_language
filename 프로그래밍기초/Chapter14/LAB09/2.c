#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	int id;		//�й�
	char name[20];		//�̸�
	int mid;			//�߰����� (100�������� 30%)
	int final;			//�⸻���� (100�������� 40%)
	int hw1;			//����1���� (30�� ������ 1,2 ���)
	int hw2;
	int attendance;		//�⼮���� (10�� ������ 100%)
}STUDENT;

typedef struct {
	STUDENT student;
	double mid_converted;
	double final_converted;
	double hw_converted;
	int attendance_converted;
	double total_score;
	char grade[4];
}STUDENT_SCORE;

//�л����� ��� �Լ�
void print_student(STUDENT c[], int SIZE) {
	printf("�л� ����\n");
	printf("  �й�  �̸�   �߰�  �⸻  ����1  ����2  �⼮\n");
	printf("-------------------------------------------------\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d %s %5d %5d %5d %5d %5d\n", c[i].id, c[i].name, c[i].mid, c[i].final, c[i].hw1, c[i].hw2, c[i].attendance);
	}
	printf("-------------------------------------------------\n");
}

//�������� ��� �Լ�
//void print_score(STUDENT_SCORE *c, int SIZE)
void print_score(STUDENT_SCORE c[], int SIZE) {
	printf("���� ����\n");
	printf("  �й�  �̸�   �߰�  �⸻  ����  �⼮  ����  ����\n");
	printf("-------------------------------------------------\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d %s %5.1f %5.1f %5.1f %5d %5.1f %s\n", c[i].student.id, c[i].student.name, c[i].mid_converted, c[i].final_converted, 
			c[i].hw_converted, c[i].attendance_converted, c[i].total_score, c[i].grade);
	}
	printf("-------------------------------------------------\n");
}

//�߰���� �ݿ����� ��� �Լ�
double mid_convert(int a) {
	return a * 0.3;
}
//�⸻��� �ݿ����� ��� �Լ�
double final_convert(int a) {
	return a * 0.4;
}
//���� �ݿ����� ��� �Լ�
double hw_convert(int a, int b) {
	return (a + b) / 2.0;
}
//�⼮ �ݿ����� ��� �Լ�
int attendance_convert(int a) {
	return a * 1;
}
//���� ��� �Լ�
double sum_score(double a, double b, double c, int d) {
	return a + b + c + d;
}
//���� ��� �Լ�
void get_grade(double a, char* b) {		//call by reference�� �ѱ��..
	if ((a <= 100) && (a >= 95))
		strcpy(b, "A+");
	else if (a >= 90)
		strcpy(b, "A0");
	else if (a >= 85)
		strcpy(b, "B+");
	else if (a >= 80)
		strcpy(b, "B0");
	else if (a >= 75)
		strcpy(b, "C+");
	else if (a >= 70)
		strcpy(b, "C0");
	else if (a >= 65)
		strcpy(b, "D+");
	else if (a >= 60)
		strcpy(b, "D0");
	else
		strcpy(b, "F");
}

//���ʿ� ����ü�� �ѱ��� ��...

int main(void)
{
	STUDENT student[5] = { {2020019, "ȫ�浿", 10,20,0,5,10},
		{2021012,"������",35,55,27,15,7},
		{2019001, "������",70,80,29,22,8},
		{2018015,"�ƹ���",100,90,28,29,5},
		{2017075,"ȫ���",56,90,15,30,10} };

	print_student(student, 5);
	puts("");

	STUDENT_SCORE score[5];
	for (int i = 0; i < 5; i++) {
		score[i].student = student[i];			//������ ����ü���� ��� ����� ������ �� �ִ�..

		score[i].mid_converted = mid_convert(student[i].mid);
		score[i].final_converted = final_convert(student[i].final);
		score[i].hw_converted = hw_convert(student[i].hw1, student[i].hw2);
		score[i].attendance_converted = attendance_convert(student[i].attendance);
		score[i].total_score = sum_score(score[i].mid_converted, score[i].final_converted, score[i].hw_converted, score[i].attendance_converted);
		get_grade(score[i].total_score, score[i].grade);
	}

	print_score(score, 5);
}

