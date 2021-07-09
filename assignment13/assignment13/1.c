#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define TITLE_SIZE 50
#define NAME_SIZE 50
#define ALBUM_SIZE 50

enum music_type { KPOP, POP, CLASSIC, OST };

typedef struct {
	char title[TITLE_SIZE];	//제목
	char singer[NAME_SIZE];	//가수
	char album[ALBUM_SIZE];	//앨범 이름
	enum music_type genre;	//장르
}MUSIC;

void insert_music(MUSIC c[], int cnt);	//세 함수 모두 배열의 첫 주소를 인자로 보내준다
void print_music(MUSIC c[], int cnt);
void search_music(MUSIC c[], int cnt);

int main(void)
{
	int input;
	int cnt = 0;	//몇 개가 추가되었는지 알려주는 변수
	MUSIC c[10];	//구조체 배열 선언

	while (1)
	{
		printf("==========================\n");
		printf("1. 추가\n");
		printf("2. 출력\n");
		printf("3. 검색\n");
		printf("4. 종료\n");
		printf("==========================\n");
		printf("메뉴를 선택하시오 : ");
		scanf("%d", &input);

		if (input == 1)
		{
			insert_music(c, cnt);	//c[cnt]에 추가하는 함수
			cnt++;					//그리고 cnt를 올린다
		}
		else if (input == 2)
		{
			print_music(c, cnt);	//cnt까지 출력하는 함수
		}
		else if (input == 3)
		{
			search_music(c, cnt);
		}
		else if (input == 4)
		{
			printf("프로그램 종료.\n");
			break;
		}
		else
			printf("다시 입력하세요. (메뉴 : 0~4까지의 정수) >>\n");
	}
}

void insert_music(MUSIC c[], int cnt)
{
	printf("제목: ");
	getchar();		//앞의 Enter때문에 버퍼 비우기 해줌..
	gets(c[cnt].title);

	printf("가수: ");
	gets(c[cnt].singer);

	printf("앨범: ");
	gets(c[cnt].album);

	printf("장르(0: KPOP, 1: POP, 2: Classic, 3: OST): ");
	int num;
	while (1)
	{
		scanf(" %d", &num);		//얘도 앞에 Enter때문에 버퍼 비우기 해줌
		if ((num >= 0) && (num <= 3))
			break;
		else
			printf("다시 입력하시오.(0~3 사이의 정수) :");
	}
	c[cnt].genre = num;
}

void print_music(MUSIC c[], int cnt)
{
	for (int j = 0; j < cnt; j++)
	{
		printf("------------------------\n");
		printf("제목: %s\n", c[j].title);
		printf("가수: %s\n", c[j].singer);
		printf("앨범: %s\n", c[j].album);
		printf("장르: ");
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
	printf("제목: ");
	getchar();		//버퍼비우기..
	gets(wanted);
	
	int yes = 0;	//제목이 있나없나 확인하는 변수
	for (int i = 0; i < cnt; i++)
	{
		if (strcmp(c[i].title, wanted) == 0)
		{
			yes++;
			printf("-------------------\n");
			printf("제목: %s\n", c[i].title);
			printf("가수: %s\n", c[i].singer);
			printf("앨범: %s\n", c[i].album);
			printf("장르: ");
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
		printf("찾는 음악이 테이블에 없습니다.\n");
}