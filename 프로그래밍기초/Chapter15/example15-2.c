#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fname[] = "grade.txt";
	FILE* f;
	char name[30];
	int point1, point2, cnt = 0;

	f = fopen(fname, "w");
	if (f == NULL) {
		printf("파일이 열리지 않습니다\n");
		exit(1);
	}

	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	scanf("%s %d %d", name, &point1, &point2);
	fprintf(f, "%d %s %d %d\n", ++cnt, name, point1, point2);	//쓴다..
	fclose(f);

	f = fopen(fname, "r");
	if (f == NULL) {
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}
	
	fscanf(f, "%d %s %d %d\n", &cnt, name, &point1, &point2);
	fprintf(stdout, "\n%6s %16s %10s %8s\n", "번호", "이름", "중간", "기말");
	fprintf(stdout, "%5d %18s %8d %8d", cnt, name, point1, point2);//fprintf(stdout, ...)하면 그냥 printf()와 같다.
	fclose(f);

	return 0;
}