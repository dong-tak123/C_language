#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, b = 0;
	//printf("�� ������ �Է� >> ");
	//scanf("%d%d", &a, &b);

	//printf("%�ִ밪: %d ", (a > b) ? a : b);
	//printf("%�ּҰ�: %d\n", (a > b) ? b : a);
	//printf("a�� ���밪: %d ", (a > 0) ? a : -a);
	//printf("b�� ���밪: %d\n", (b < 0) ? -b : b);

	printf("%d", ((a % 2) == 0) ? printf("a�� ¦��\n") : printf("a�� Ȧ��\n"));
	//printf�� �������� �̿���..-> ����� ���ڼ�..
	//printf("%s\n", ((b % 2) != 0) ? "b�� Ȧ��" : "b�� ¦��");//,�ں��ʹ� %s�� ���� ���� �������ش�..

	return 0;
}