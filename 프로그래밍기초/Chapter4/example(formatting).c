#include <stdio.h>

int main(void)
{
	int n = 16, ret_value = 0;

	ret_value = printf("안\n");
	printf("%d\n", ret_value);

	ret_value = printf("출력 값: %d %i %o %#o %#x %#X\n", n, n, n, n, n, n);
	printf("%d\n", ret_value);		//리턴밸류 : 한글은 2개, \n은 하나로 한다..(실제로 결과값을 확인해야함..)

	printf("%d %i\n", 16, 16);
	printf("%o %#o", 16, 16);
	printf("%x %#x %#X\n", 10, 10, 10);

	printf("%f %s\n", 123456.789, "\t%f");

	printf("%10.*s\n", 5, "Hello!");		//*에 대응되는 5도 있어야함..
	printf("%10.5s\n", "Hello!");			//위에거랑 똑같은데 인자의 갯수만 줄어듦

	return 0;
}