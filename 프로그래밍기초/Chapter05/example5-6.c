#include <stdio.h>

int main(void)
{
	int a = 10, b = 5, m = 1;
	int result;

	result = (a < b) && (m++ == 1);				//(a<b)가 이미 거짓이니까 뒤의 (m++ == 1)은 하지않는다..
	printf("m=%d result=%d\n", m, result);		//m=1 result=1

	result = (a > b) || (--m == 0);				//(a>b)가 이미 참이니까 뒤의 (--m == 0)은 하지않는다..
	printf("m=%d result=%d\n", m, result);		//m=1 result=1

	return 0;
}