#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	printf("���ڸ� ��� �Է��ϰ� Enter�� ������ >>\n");
	while ((ch = getchar()) != 'q')//���ۻ��, ��� �޾ƿ�
		putchar(ch);

	printf("\n���ڸ� ���� �� ���� �� �� ��� >>\n");//���� �̻��, �Է¹��������� ����
	while ((ch = _getche()) != 'q')
		putchar(ch);

	printf("\n���ڸ� ������ �� �� ��� >> \n");	//ǥ�þȵǴٰ� q�� ������ ��
	while ((ch = _getch()) != 'q')
		_putch(ch);
	printf("\n");

	return 0;
}