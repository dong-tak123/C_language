#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float pi; char ch1, ch2;
	printf("�������� �Է��ϼ���.\n");
	scanf("%f", &pi);
	printf("%f\n", pi);

	printf("�����ڸ� �������� �� ���ڸ� �Է��ϼ���.\n");
	//���� �տ� ������ �ξ� enter�� ����, �����ڷ� ����(�������� ����)�� ���
	//getchar();   ���ۿ��� �ϳ��� �޾ƿͼ� ������..

	scanf(" %c %c", &ch1, &ch2);
	//���ڴ� ��������,, �����ϳ��� ������ �Է¹������� �տ� ������ �־�� ����� �Է��� �ȴ�.

	printf("ch1=%c ch2=%c", ch1, ch2);		//%c�� �����ϳ�, %s�� ���ڿ�.. char���� �����ϳ�!

	return 0;
}