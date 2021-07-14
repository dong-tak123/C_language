#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "C";		//여기에 충분한 공간이 있어야한다..

	printf("%s\n", strcat(dest, " is"));	//공백 + is를 뒤에 이어붙힘
	//printf("%d\n", strcat_s(dest, 80, " is"));// _s는 dest의 크기를 명백히 알려줘야함
	//printf("%s\n", dest);

	printf("%s\n", strncat(dest, "a java", 2));//a+공백을 뒤에 이어붙힘
	//printf("%s\n", strncat(dest, 80, "a proce", 2));

	printf("%s\n", strcat(dest, "procedural"));

	printf("%s\n", strcat(dest, "language"));

	return 0;
}