#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "C";		//���⿡ ����� ������ �־���Ѵ�..

	printf("%s\n", strcat(dest, " is"));	//���� + is�� �ڿ� �̾����
	//printf("%d\n", strcat_s(dest, 80, " is"));// _s�� dest�� ũ�⸦ ����� �˷������
	//printf("%s\n", dest);

	printf("%s\n", strncat(dest, "a java", 2));//a+������ �ڿ� �̾����
	//printf("%s\n", strncat(dest, 80, "a proce", 2));

	printf("%s\n", strcat(dest, "procedural"));

	printf("%s\n", strcat(dest, "language"));

	return 0;
}