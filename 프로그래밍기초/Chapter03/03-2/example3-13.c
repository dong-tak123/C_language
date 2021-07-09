#include <stdio.h>

int main(void)
{
	enum DAY {SUN, TUE, WED, THU, FRI, SAT};
	printf("일요일 상수 : %d\n", SUN);	//0
	printf("수요일 상수 : %d\n", WED);	//3

	//상수 목록에서 특정한 정수 지정 가능
	enum SHAPE {POINT, LINE, TRI = 3, RECT, OCTA = 8, CIRCLE};
	printf("LINE: %d, RECT: %d, CIRCLE: %d\n", LINE, RECT, CIRCLE);

	enum bool {FALSE, TRUE};
	enum pl {c = 1972, cpp = 1983, java = 1995, csharp = 2000};
	printf("false: %d, cpp: %d, csharp: %d\n", FALSE, cpp, csharp);

	return 0;
}