#include <stdio.h>

int main(void)
{
	printf("%d ", 30);		printf("%d ", 10);		//10진수
	printf("%d ", 030);		printf("%d ", 010);		//8진수를 십진수로 표현한다
	printf("%d ", 0X2f);	printf("%d \n", 0x1b);	//16진수를 십진수로 표현한다..

	printf("%f ", 3.14);	printf("%f ", 2.0);
	printf("%f ", 3.14E+2);	printf("%f ", 21.8e2);		//3.14*10의 2승..
	printf("%f ", 3.14E-2);	printf("%f \n", 218e-3);

	return 0;
}