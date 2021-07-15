#include <stdio.h>
#include <string.h>

struct date {
	int year;
	int month;
	int day;
};

struct account {
	struct date open;		//12
	char name[12];			//12
	int actnum;				//4
	double balance;			//8
};		//구조체의 멤버로 구조체가 있다..

int main(void)
{
	struct account me = { {2018,3,9}, "홍길동", 1001,300000 };
	me.open.year = 2021;
	me.open.month = 6;
	me.open.day = 10;

	printf("%d\n", sizeof(me.open));
	printf("%d\n", sizeof(me.name));
	printf("%d\n", sizeof(me.actnum));
	printf("%d\n", sizeof(me.balance));
	printf("구조체크기: %d\n", sizeof(me));		//얘는 왜 40일까..??
	printf("[%d, %d, %d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);
}