#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>

void main()
{
	char input_string[22] = { 0 };
	char display_string[22] = { 0 };
	int len;

	printf("�������� �Է��Ͻÿ�: ");
	gets(input_string);
	len = strlen(input_string);		//���� ���̷� ����Ǿ��ִ�

	puts(input_string);

	for (int i = 0; i < 50; i++)
	{
		Sleep(500);		//ms����..
		system("cls");	//ȭ���� �� �����..
		
		strncpy(display_string, input_string+1, len);	//�����ϴ� ���� ���������� ������ �ȴ�..
						//�ּ� len������ �������־�� NULL���ڱ��� �Ҽ� �ִ�.
		strncat(display_string, input_string, 1);		//�տ� �ϳ��� �̾���̸� �ȴ�..
		printf("%s", display_string);

		strcpy(input_string, display_string);		//���� �ݺ��� ���ؼ� �ٽ� input_string�� �ٲ۴�..
	}

}
