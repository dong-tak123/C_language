// 구조체 배열 선언 및 출력하기
// 함수로 만들어 봐야함

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct{
	char* name;		//상수로 지정
	int goals;
	int assist;
	int appearance;
} stats;

// stats 선언 전에 함수에서 사용해서 오류가 있었음
void printstats(stats arr[], int SIZE);

char* head[] = { "Name", "Goals", "Assist", "Apps" };

int main(void) {
	stats liverpool[4] = { { "salah", 19, 10, 24},
							{ "jota", 12, 1, 23},
							{ "TAA", 2, 10, 23},
							{ "hendo", 2, 5, 23} };

	int arysize = sizeof(liverpool) / sizeof(liverpool[0]);

	//print with function
	printstats(liverpool, arysize);
	puts("");

	//just print
	printf("%10s  %10s  %10s  %10s\n", head[0], head[1], head[2], head[3]);
	for (int i = 0; i < arysize; i++) {
		printf("%10s  %10d  %10d  %10d\n", liverpool[i].name, liverpool[i].goals, liverpool[i].assist, liverpool[i].appearance);
	}
	
	return 0;
}

void printstats(stats arr[], int SIZE)
{
	printf("%10s  %10s  %10s  %10s\n", head[0], head[1], head[2], head[3]);
	for (int i = 0; i < SIZE; i++) {
		printf("%10s  %10d  %10d  %10d\n", arr[i].name, arr[i].goals, arr[i].assist, arr[i].appearance);
	}
}