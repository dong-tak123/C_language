#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 20;
	int *pi = &i;
	int **dpi = &pi;
	printf("%p  %p  %p\n", &i, pi, *dpi);		//i�� �ּҸ� ����ϴ� 3���� ���..
	//pi�� ������ � ���� �����µ�, �װ� ��ħ �ּҰ��� ���̴�.. ��? pi = &i�� ���������ϱ�..
	

	//*pi += 2;
	*pi = i + 2;		//i = i+2
	printf("%d  %d  %d\n", i, *pi, **dpi);

	**dpi = *pi + 2;	//i = i+2
	printf("%d  %d  %d\n", i, *pi, **dpi);

	double n = 1.6666;
	printf("%.2lf", n);
}