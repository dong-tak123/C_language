//2017117112 이동현
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 26

void check_alpha(char ch, int big[], int small[]) {
	if (isupper(ch)) {
		big[toascii(ch) - toascii('A')]++;
	}
	else if (islower(ch))
	{
		small[toascii(ch) - toascii('a')]++;
	}
}
void print_alpha(int big[], int small[], int size) {
	
	printf("---------------------------------------\n");
	for (int i = 0; i < size/2; i++) {
		printf("%4c", i + toascii('A'));
	}
	printf("\n");
	for (int i = 0; i < size / 2; i++) {
		printf("%4d", big[i]);
	}
	printf("\n");

	printf("---------------------------------------\n");
	for (int i = size/2; i < size; i++) {
		printf("%4c", i + toascii('A'));
	}
	printf("\n");
	for (int i = size/2; i < size ; i++) {
		printf("%4d", big[i]);
	}
	printf("\n");

	printf("---------------------------------------\n");
	for (int i = 0; i < size / 2; i++) {
		printf("%4c", i + toascii('a'));
	}
	printf("\n");
	for (int i = 0; i < size / 2; i++) {
		printf("%4d", small[i]);
	}
	printf("\n");

	printf("---------------------------------------\n");
	for (int i = size / 2; i < size; i++) {
		printf("%4c", i + toascii('a'));
	}
	printf("\n");
	
	for (int i = size / 2; i < size; i++) {
		printf("%4d", small[i]);
	}
	printf("\n");
	printf("---------------------------------------\n");	
}
int main(void) {
	FILE* f;
	f = fopen("origin_c.txt", "r");
	if (f == NULL)
	{
		printf("파일이 열리지 않습니다!\n");
		exit(1);
	}
	int space_num = 0;
	int special_num = 0;
	int big[SIZE] = { 0 };
	int small[SIZE] = { 0 };

	char ch;
	ch = fgetc(f);
	while (ch != EOF) {
		fputc(ch, stdout);
		if (isalpha(ch))
			check_alpha(ch, big, small);
		else if ((ch == '.') || (ch == ',') || (ch == '-')){
			special_num++;
		}
		else if (ch == ' ') {
			space_num++;
		}
		ch = fgetc(f);
	}

	printf("\n\n[문자 개수 출력]\n");

	print_alpha(big, small, SIZE);

	printf("스페이스 개수: %d\n", space_num);
	printf("특수문자 개수: %d\n", special_num);

	//for (int i = 0; i < SIZE; i++)
	//	printf("%5d", big[i]);
	
	fclose(f);
	return 0;
}