#include <stdio.h>

int main(void)
{
	int a = 10, b = 5, m = 1;
	int result;

	result = (a < b) && (m++ == 1);				//(a<b)�� �̹� �����̴ϱ� ���� (m++ == 1)�� �����ʴ´�..
	printf("m=%d result=%d\n", m, result);		//m=1 result=1

	result = (a > b) || (--m == 0);				//(a>b)�� �̹� ���̴ϱ� ���� (--m == 0)�� �����ʴ´�..
	printf("m=%d result=%d\n", m, result);		//m=1 result=1

	return 0;
}