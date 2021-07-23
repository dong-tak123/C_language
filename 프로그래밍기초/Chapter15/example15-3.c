#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//그냥 단순 변수 선언
	char fname[] = "grade1.txt";
	FILE* f;
	char names[80];
	int cnt = 0;

	f = fopen(fname, "w");
	if (f == NULL) {
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}
	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	fgets(names, 80, stdin);		//표준입력..	(정해진 형식이 없음..)

	while (!feof(stdin))		//표준 입력이 CTRL + Z가 아닌동안에..
		//화면에서 입력받아서 계속 파일에 출력..
	{
		fprintf(f, "%d ", ++cnt);		//파일 출력
		fputs(names, f);		//파일 출력
		fgets(names, 80, stdin);	//표준 입력
	}
	fclose(f);

	return 0;
}