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
		printf("파일이 열리지 않습니다!");
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
	printf("순서  이름   중간   기말   총점   평균\n");
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
		printf("파일이 열리지 않습니다!");
		exit(1);
	}
	fprintf(fp1, "순서  이름   중간   기말   총점   평균\n");
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
		printf("파일이 열리지 않습니다!");
		exit(1);
	}

	fscanf(fp1, "%d", &size);		//파일에서 첫번째 정수를 size로 입력받음..

	p = (SCORE*)malloc(sizeof(SCORE) * size);		//구조체배열크기만큼을 한방에 할당받고,
	if (p == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}
	memset(p, 0, sizeof(SCORE) * size);
	//초기화 완료.. -> 이제 구조체 배열이 하나 생긴거..

	/*for (int i = 0; i < size; i++) {
		fscanf(fp1, "%d %s %f %f", &p[i].num, p[i].name, &p[i].mid, &p[i].final);
	}
	//구조체 배열에 입력은 완료..
	*/
	
	
	/*for (int i = 0; i < size; i++) {
		get_total(&p[i]);
	}
	//총점구하기 완료..
	for (int i = 0; i < size; i++) {
		get_average(&p[i]);
	}*/

	get_score_info(p, size, fp1);		//파일포인터도 넘겨서 그다음부터 받아오게한다..
	fclose(fp1);
	
	calculate_total(p, size);
	calculate_average(p, size);

	print_score(p, size);
	file_save_score(p, size);

	free(p);
	return 0;
}