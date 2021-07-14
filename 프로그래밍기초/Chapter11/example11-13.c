#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s[101];
	gets(s);

	char* p = s;
	while (*p)
	{
		printf("%c", *p);
		p++;
	}
	puts("");
	puts(s);
}