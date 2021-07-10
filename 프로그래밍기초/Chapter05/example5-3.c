#include <stdio.h>

int main(void)
{
	int m = 10, n = 5;
	int result;
	
	result = m++ + --n;			//result = (10) + (4) = 14
	printf("m=%d n=%d result=%d\n", m, n, result);		//m=11, n=4, result=14

	result = ++m - n--;			//result = (12) - (4) = 8
	printf("m=%d n=%d result=%d\n", m, n, result);		//m=12, n=3, result=8

	return 0;
}