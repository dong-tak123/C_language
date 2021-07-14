#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define MAX 110

//void reverse_print(char *str) 과 똑같음.. 이차원이면 void reverse_print(char (*str)[4]) 요론식..
void reverse_print(char str[])	//역순으로 출력하는 함수 구현
{
	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		char c = str[i];		//c가 temp비슷한 역할을 해서 자리바꿔줌..
		str[i] = str[j];
		str[j] = c;
	}
	printf("%s ", str);		//공백이 없어진다 strtok쓰면 없어짐..
}
int main(void)
{
	char string[MAX] = { 0 };
	char *ptoken = NULL;		//토큰을 가리키도록 해줌..

	printf("한줄의 문장을 입력하세요. ->\n");
	gets(string);		//입력받고

	printf("\n");
	ptoken = strtok(string, " ");	//토큰을 하나하나 받아내겟다 이제..
	while (ptoken != NULL)			//토큰을 반환하면서 구분자가 \0으로 바뀜..
	{
		reverse_print(ptoken);
		ptoken = strtok(NULL, " ");		//그래서 여기서 NULL이 들어감..
	}
}