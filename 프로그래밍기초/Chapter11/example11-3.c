#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	printf("문자를 계속 입력하고 Enter를 누르면 >>\n");
	while ((ch = getchar()) != 'q')//버퍼사용, 계속 받아옴
		putchar(ch);

	printf("\n문자를 누를 때 마다 두 번 출력 >>\n");//버퍼 미사용, 입력받을때마다 수행
	while ((ch = _getche()) != 'q')
		putchar(ch);

	printf("\n문자를 누르면 한 번 출력 >> \n");	//표시안되다가 q가 나오면 끝
	while ((ch = _getch()) != 'q')
		_putch(ch);
	printf("\n");

	return 0;
}