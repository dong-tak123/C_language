#include <stdio.h>

int main(void)
{
	printf("%d\n", 3 > 4);			//거짓 -> 0
	printf("%d\n", 3 < 4.0);		//참 -> 1
	printf("%d\n", 'a' <= 'b');		//아스키 코드값 비교.. 참 -> 1
	printf("%d\n", 'Z' <= 'a');		//아스키 코드값 비교.. 참 -> 1
	printf("%d\n", 4.27 >= 4.35);	//거짓 -> 0
	printf("%d\n", 4 != 4.0);		//거짓(다르지않다..) -> 0
	printf("%d\n", 4.0F == 4.0);	//참(같다..) -> 0

	return 0;
}