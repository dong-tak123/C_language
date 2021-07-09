#include <stdio.h>

int main(void)
{
	printf("%casic", 'B');
	printf("%c", '\n');		// \n은 하나의 문자이다..

	char sq = '\'';		//작은 따옴표

	printf("BCPL\tB\tC\tJava\n");	//문자열 내부에서 \t(탭) 문자 사용
	printf("%C\7\n", '\a');			//알람 문자를 2번 출력,, %C에 \a가 대응이 되어서 한번, \7로 바로 한번..
	printf("%c자바언어'\n", sq);		//문자열 내부에서는 '(작은따옴표) 그대로 사용

	//문자열 내부에서는 "(큰따옴표) 반드시 /"로 사용
	printf("\"C언어\" 정말 재미있다!\n");

	return 0;
}