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

	printf("광고문구를 입력하시오: ");
	gets(input_string);
	len = strlen(input_string);		//실제 길이로 저장되어있다

	puts(input_string);

	for (int i = 0; i < 50; i++)
	{
		Sleep(500);		//ms단위..
		system("cls");	//화면을 다 지운다..
		
		strncpy(display_string, input_string+1, len);	//복사하는 값이 부족하지만 않으면 된다..
						//최소 len까지는 복사해주어야 NULL문자까지 할수 있다.
		strncat(display_string, input_string, 1);		//앞에 하나만 이어붙이면 된다..
		printf("%s", display_string);

		strcpy(input_string, display_string);		//다음 반복을 위해서 다시 input_string을 바꾼다..
	}

}
