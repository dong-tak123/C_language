#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 10, j = 20;

	const int *p = &i;		//*p가 상수..
	// 이제 *p = 20;은 오류가 뜬다.. 바꿀 수 없다!

	i = 30;
	printf("%d\n", i);		//얘도 직접참조는 된다..

	//p = &j;		// p는 바꿀수 있으므로 p가 j를 가리키도록 하였다.
	printf("%d\n", *p);		//20이 출력됨..


	double d = 7.8, e = 2.7;
	double * const pd = &d;		// pd가 상수.. 즉, pd의 값(pd가 가리키는 장소)은 바뀔 수 없다..
	//pd = &e;은 이제 오류가 뜬다..

	*pd = 4.4;				//*pd는 바꿀수 있다... d = 4.4인거다..
	printf("%f\n", *pd);		//4.4 출력...
	
	printf("%d\n", pd);
	printf("%d\n", &d);
	//d = 10; 이렇게 직접적으로 바꾸는 것은 바꿀 수 있다.
	printf("%f\n", d);

}