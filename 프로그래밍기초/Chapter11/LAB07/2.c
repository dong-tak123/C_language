#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define MAX 110

//void reverse_print(char *str) �� �Ȱ���.. �������̸� void reverse_print(char (*str)[4]) ��н�..
void reverse_print(char str[])	//�������� ����ϴ� �Լ� ����
{
	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		char c = str[i];		//c�� temp����� ������ �ؼ� �ڸ��ٲ���..
		str[i] = str[j];
		str[j] = c;
	}
	printf("%s ", str);		//������ �������� strtok���� ������..
}
int main(void)
{
	char string[MAX] = { 0 };
	char *ptoken = NULL;		//��ū�� ����Ű���� ����..

	printf("������ ������ �Է��ϼ���. ->\n");
	gets(string);		//�Է¹ް�

	printf("\n");
	ptoken = strtok(string, " ");	//��ū�� �ϳ��ϳ� �޾Ƴ��ٴ� ����..
	while (ptoken != NULL)			//��ū�� ��ȯ�ϸ鼭 �����ڰ� \0���� �ٲ�..
	{
		reverse_print(ptoken);
		ptoken = strtok(NULL, " ");		//�׷��� ���⼭ NULL�� ��..
	}
}