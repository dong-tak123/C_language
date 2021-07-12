#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int *pi = &i;
	int **dpi = &pi;

	*pi = 5;			//i = *pi = 5
	*pi += 1;			//i = *pi = 6
	printf("%d\n", i);	//6

	printf("%d\n", (*pi)++);		//6을 출력하고, i = *pi = 7로 증가..
	printf("%d\n", *pi);			//7이 출력됨..

	*pi = 10;
	printf("%d\n", ++ * pi);	//++(*pi)	-> 먼저 증가시키고 출력.. 11이 출력됨
	printf("%d\n", ++ * *dpi);	//++(**dpi)  -> 먼저 증가시키고 출력.. 12가 출력됨
	printf("%d\n", i);			//12

}