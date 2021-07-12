#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 6;

	printf("변수명  저장값  주소값   \n");
	printf("-------------------------\n");
	printf("  c      %d      %p\n", c, &c);
	printf("  b      %d      %p\n", b, &b);
	printf("  a      %d      %p\n", a, &a);
	printf("\n");

	int *p = &c;
	printf("  c      %d      %p\n", *p, p);					//간접참조,, p가 가리키는 곳은 c,,
	printf("  b      %d      %p\n", *(p + 3), p + 3);		//주소 전체에 괄호를 해서 *를 씌운다.. 주소에 대한 역참조..
	printf("  a      %d      %p\n", *(p + 6), p + 6);

	//int형 변수 사이의 주솟값 차이는 12..(연속적으로 따로 선언되었을 때..)
}