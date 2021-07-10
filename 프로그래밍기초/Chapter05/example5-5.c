#include <stdio.h>

int main(void)
{
	char null = '\0', a = 'a';
	int zero = 0, n = 10;
	double dzero = 0.0, x = 3.56;

	printf("%d ", !zero);					//참 -> 1
	printf("%d ", zero && x);				//거짓 -> 0
	printf("%d\n", dzero || null);			//거짓 -> 0
	printf("%d ", n && x);					//참 -> 1
	printf("%d ", a || null);				//참 -> 1
	printf("%d\n", "java" && "C Lang");		//참 -> 1
	// 문자열 상수는 본인이 메인 메모리에 저장된 주솟값을 의미한다..
	// 메인 메모리의 0번지는 운영체제만이 관여하는 자리다..


	return 0;
}