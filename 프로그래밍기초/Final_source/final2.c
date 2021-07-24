//2017117112 이동현
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
	printf("이름 : ");
	getchar();
	gets(p[cnt].name);
	printf("전화번호 : ");
	gets(p[cnt].number);
}
void search_tel(PHONE_BOOK p[], int cnt) {
	char wanted[SIZE];
	int found=0;
	printf("검색할 이름을 입력하세요: ");
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
		printf("일치하는 이름이 없습니다.\n");
}
void change_tel(PHONE_BOOK p[], int cnt)
{
	char wanted[SIZE];
	char change[SIZE];
	int found = 0;
	int i;
	printf("검색할 이름을 입력하세요: ");
	getchar();
	gets(wanted);
	for (i = 0; i < cnt; i++) {
		if (strcmp(wanted, p[i].name) == 0) {
			printf("현재 전화번호는 %s 입니다.\n", p[i].number);
			printf("변경할 전화번호를 입력하세요: ");
			gets(change);
			strcpy(p[i].number, change);
			printf("변경된 전화번호입니다.\n\n");
			printf("------------------------------------\n");
			printf("[%2d] %10s%30s\n", i, p[i].name, p[i].number);
			printf("------------------------------------\n");
			found++;
			break;
		}
	}
	if (found == 0)
		printf("일치하는 이름이 없습니다.\n");
	
}
void print_tel(PHONE_BOOK p[], int cnt) {
	if (cnt == 0)
		printf("저장된 자료가 없습니다.\n");
	else {
		printf("-------------------------------------------\n");
		printf("%4s %11s %30s\n","순번","이름","전화번호");
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
		printf("저장할 전화번호의 수를 입력하세요(1~5): ");
		scanf(" %d", &input);
		if (input > 0 && input <= 5)
			break;
		else
			printf("1~5의 값을 입력하세요.\n");
	}
	
	//메모리 동적 할당
	PHONE_BOOK* p = NULL;
	p = (PHONE_BOOK*)malloc(sizeof(PHONE_BOOK) * input);
	if (p == NULL) {
		printf("메모리 할당에 문제가 있습니다!\n");
		exit(1);
	}
	memset(p, 0, sizeof(PHONE_BOOK) * input);

	while (1)
	{
		printf("==========================\n");
		printf("1. 전화번호 추가\n");
		printf("2. 이름 검색\n");
		printf("3. 전화번호 변경\n");
		printf("4. 전화번호 목록 보기\n");
		printf("5. 프로그램 종료\n");
		printf("==========================\n");
		printf("번호를 선택하세요 : ");
		scanf("%d", &num);
		if (num == 1)
		{
			insert_tel(p, cnt);	//c[cnt]에 추가하는 함수
			cnt++;					//그리고 cnt를 올린다
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
			print_tel(p, cnt);	//cnt까지 출력하는 함수
		}
		else if (num == 5)
		{
			printf("프로그램 종료.\n");
			break;
		}
		else
			printf("잘못된 메뉴 선택입니다. 메뉴 1~5를 선택하세요.\n");
	}

	free(p);
	return 0;
}