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
	while ((a = getc(f1)) != EOF)		//a�� �ϳ��� f1�� ���ڸ� �޾ƿ��µ� �װ� EOF�� �ƴϸ�..
	{
		if (isalpha(a))
		{
			if (isupper(a))
				a = tolower(a);
			else if (islower(a))
				a = toupper(a);
		}
		putc(a, f2);	//ǥ�� ����̸� putchar.. ���� ����̹Ƿ� putc
		//a = getc(f1) �������� �ٽ� �Է¹޾ƾ���,,
	}

	fclose(f1);
	fclose(f2);

	f2 = fopen("converted_char.txt", "r");		//Ȯ���ڱ��� �� �޾ƾ��Ѵ�..
	char b;

	b = getc(f2);		//���Ͽ��� ���� �ϳ��� �Է¹޾Ƽ�
	while (b != EOF)	//���� �ƴϸ�
	{
		putc(b, stdout);	//ǥ������Ѵ�..
		b = getc(f2);		//�׸��� �ϳ��� ��� ����..
	}

	fclose(f2);

	return 0;
}