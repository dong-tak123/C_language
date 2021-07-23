#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	FILE* f1, * f2;
	f1 = fopen("convertchar.txt", "r");
	f2 = fopen("converted_char.txt", "w");

	if (!f1) {
		printf("cannot open this file\n");
		exit(1);
	}
	if (!f2) {
		printf("cannot open this file\n");
		exit(1);
	}

	char a;
	//a = getc(f1);
	//while (a != EOF)
	while ((a = getc(f1)) != EOF)		//a에 하나씩 f1의 문자를 받아오는데 그게 EOF가 아니면..
	{
		if (isalpha(a))
		{
			if (isupper(a))
				a = tolower(a);
			else if (islower(a))
				a = toupper(a);
		}
		putc(a, f2);	//표준 출력이면 putchar.. 파일 출력이므로 putc
		//a = getc(f1) 마지막에 다시 입력받아야함,,
	}

	fclose(f1);
	fclose(f2);

	f2 = fopen("converted_char.txt", "r");		//확장자까지 다 받아야한다..
	char b;

	b = getc(f2);		//파일에서 문자 하나씩 입력받아서
	while (b != EOF)	//끝이 아니면
	{
		putc(b, stdout);	//표준출력한다..
		b = getc(f2);		//그리고 하나씩 계속 받음..
	}

	fclose(f2);

	return 0;
}