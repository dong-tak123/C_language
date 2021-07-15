#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	struct student
	{
		int snum;
		char* dept;		//메모리 공간이 없다..(단순히 포인터이므로 집어넣을 수가 없다..
		char name[12];	//메모리 공간이 있다..
	};
	struct student hong = { 2017117112, "컴퓨터공학과", "홍길동" };
	struct student na = { 2018000111 };
	struct student bae = { 2018000002 };

	scanf("%s", na.name);

	na.dept = "컴퓨터공학과";			//얘는 문자열 상수로 선언되어있으니까 이렇게 대입 가능..->수정은 불가..
	bae.dept = "기계공학과";
	memcpy(bae.name, "배상문", 7);	//얘는 문자열 변수로 선언되었으니까 strcpy, memcpy등등의 방법을 사용..
	strcpy(bae.name, "배상문");
	strcpy_s(bae.name, 7, "배상문");

	printf("[%d, %s, %s]\n", hong.snum, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
	printf("[%d, %s, %s]\n", bae.snum, bae.dept, bae.name);

	struct student one;
	one = bae;	//동일한 구조체 형은 가능..

	if (one.snum == bae.snum)
		printf("학번이 %d로 동일합니다\n", one.snum);

	//if (one.snum == bae.snum && !strcmp(one.name, bae.name) && !strcmp(one.dept, bae.dept))  두개 의미는 같다..
	if (one.snum == bae.snum && strcmp(one.name, bae.name) == 0 && strcmp(one.dept, bae.dept) == 0)
		printf("내용이 같은 구조체입니다.\n");

	return 0;
}