#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int year;
	int month;
	int day;
}Date;

typedef struct {
	Date date;
	int account_num;
	char name[30];
	int balance;
}ACCOUNT;

//정보를 받아오는 함수
void get_info(ACCOUNT c[], int SIZE) {
	FILE* f;
	f = fopen("input.txt", "r");		//인풋을 읽기로 가져왓다..	얘도 매개변수로 넘기면 더 좋겟다..
	if (f == NULL) {
		printf("파일이 열리지 않습니다!\n");
		exit(1);
	}

	char line[80];
	for (int i = 0; i < SIZE; i++) {

		fscanf(f, "%d %d %d %d %s %d", &c[i].date.year, &c[i].date.month, &c[i].date.day, &c[i].account_num,
			c[i].name, &c[i].balance);
		//fgets(line, sizeof(line), f);		//한줄마다 fgets로 파일에서 가져왓다.. sizeof(line)은 최대 가져오는 길이..
		//sscanf(line, "%d %d %d %d %s %d", &c[i].date.year, &c[i].date.month, &c[i].date.day, &c[i].account_num,
			//c[i].name, &c[i].balance);		//공백을 기준으로 읽어서 각 변수에 저장했다.. 
	}
	fclose(f);
}

//구조체 배열전체를 출력하는 함수
void print_struct(ACCOUNT c[], int SIZE) {
	printf("--------------------------------------------------\n");
	printf("개설년  월  일  계좌번호      예금주     통장잔액\n");
	printf("--------------------------------------------------\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%6d %3d %3d %7d %15s %10d\n", c[i].date.year, c[i].date.month, c[i].date.day, c[i].account_num,
			c[i].name, c[i].balance);
	}
	printf("--------------------------------------------------\n");
}

//최대 통장 잔액 고객 정보를 얻고 출력하는 함수
void print_most_rich(ACCOUNT c[], int SIZE) {
	FILE* f;
	f = fopen("output.txt", "a");		//output.txt에 저장할거니까 파일을 얘로 둔다..
	if (f == NULL) {
		printf("파일이 열리지 않습니다!\n");
		exit(1);
	}

	int max, i;		//최대 잔고를 얻는 과정..
	for (i = 0; i < SIZE; i++) {
		if (i == 0)
			max = i;
		else {
			if (c[i].balance > c[max].balance)
				max = i;
		}
	}

	//화면 출력
	//이 부분을 앞의 print_struct함수를 재이용 할 수 있다.. 
	//print_struct(&account[max], 1)을 넘겨주면 된다..
	printf("[최대 통장 잔액 고객 정보]\n");
	printf("--------------------------------------------------\n");
	printf("개설년  월  일  계좌번호      예금주     통장잔액\n");
	printf("--------------------------------------------------\n");
	printf("%6d %3d %3d %7d %15s %10d\n", c[max].date.year, c[max].date.month, c[max].date.day, c[max].account_num,
		c[max].name, c[max].balance);
	printf("--------------------------------------------------\n");

	//파일에 출력
	fprintf(f, "%6d %3d %3d %7d %15s %10d", c[max].date.year, c[max].date.month, c[max].date.day, c[max].account_num,
		c[max].name, c[max].balance);

	fclose(f);
}

int main(void)
{
	ACCOUNT c[5];	//구조체 배열 선언

	get_info(c, 5);

	print_struct(c, 5);
	puts("");

	print_most_rich(c, 5);

	printf("output.txt is saved.\n");

	return 0;
}