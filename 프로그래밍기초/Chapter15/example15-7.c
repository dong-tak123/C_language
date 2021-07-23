#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int number;
	char name[40];
	int mid;
	int final;
	int quiz;
}pscore;

int main()
{
	char fname[] = "score.bin";
	FILE* fp;

	fp = fopen(fname, "wb");
	if (fp == NULL)
	{
		printf("파일이 안열림\n");
		exit(1);
	}

	char line[80];		//한줄씩 받아오기위한 문자열변수
	int cnt = 0;		//번호 세는거..
	pscore score;		//구조체변수 선언

	printf("이름과 성적(중간, 기말, 퀴즈)을 입력하세요.\n");

	fgets(line, 80, stdin);		//표준입력으로 line에 입력을 받고,,
	while (!feof(stdin)) {		//표준입력이 CTRL + Z가 아니라면..
		sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
		//line 문자열에서 공백을 기준으로 구조체의 멤버에 하나씩 넣는데, 주솟값을 전달해줘야함.. name멤버는 배열이므로 주소 그자체임..

		score.number = ++cnt;		//번호 올리고
		fwrite(&score, sizeof(pscore), 1, fp);		//파일에 구조체 하나씩 쓴다..
		//구조체 score의 위치를 알려줘야하는데, 현재 그냥 변수로 선언되어 있으니까 &붙혀줘야한다..

		fgets(line, 80, stdin);
		//다시 받는다..
	}
	printf("%s 파일 저장 완료\n", fname);
	fclose(fp);

	return 0;
}