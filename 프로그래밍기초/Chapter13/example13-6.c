#include <stdio.h>

typedef struct {
	char name[20];
	int type;
	int credit;		//type과 credit이 정수로 되어있고, 그게 인덱스로 작용한다..
	int hours;
}lecture;

char* lectype[] = { "교양", "일반선택","전공필수","전공선택" };//문자열 상수의 배열..
char* head[] = { "강좌명","강좌구분","학점","시수" };			//문자열 상수의 배열.. 어차피 둘다 바뀌지 않는다..

int main(void)
{
	lecture course[] = { {"인간과 사회",0,2,2},{"경제학개론",1,3,3},{"자료구조",2,3,3},{"모바일프로그래밍",2,3,4},{"고급 C프로그래밍",3,3,4} };
	int arysize = sizeof(course) / sizeof(course[0]);
	lecture *p = course;	//구조체 포인터..

	printf("배열크기: %d\n\n", arysize);
	printf("%12s   %12s %6s %6s\n", head[0], head[1], head[2], head[3]);
	printf("============================================\n");

	for (int i = 0; i < arysize; i++)
		//printf("%16s %10s %5d %5d\n", course[i].name, lectype[course[i].type], course[i].credit, course[i].hours);
		printf("%16s %10s %5d %5d\n", (p+i)->name, lectype[(p+i)->type], p[i].credit, (p+i)->hours);		//포인터로 해도 똑같다..
	return 0;
}