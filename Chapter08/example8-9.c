#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 20;
	int *pi = &i;
	int **dpi = &pi;
	printf("%p  %p  %p\n", &i, pi, *dpi);		//i의 주소를 출력하는 3가지 방법..
	//pi도 변수라서 어떤 값을 가지는데, 그게 마침 주소값인 것이다.. 왜? pi = &i로 지정했으니까..
	

	//*pi += 2;
	*pi = i + 2;		//i = i+2
	printf("%d  %d  %d\n", i, *pi, **dpi);

	**dpi = *pi + 2;	//i = i+2
	printf("%d  %d  %d\n", i, *pi, **dpi);

	double n = 1.6666;
	printf("%.2lf", n);
}