#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	printf("���� �Է�: ");
	scanf("%d", &input);

	printf("�Է� �� : %d\n", input);
	printf("�ּ� �� : %u(10����), %p(16����)\n", (unsigned)&input, &input);
	//%u : ��ȣ�� ���� ������..
	printf("�ּ� �� : %d(10����), %#X(16����)\n", (int)&input, (unsigned)&input);
	printf("�ּ� �� ũ�� : %d\n", sizeof(&input));

	//test OK!
	//����ȯ ���� �ּ� ���� �޴´�
	printf("�ּ� �� : %u(10����), %p(16����)\n", &input, &input);
	printf("�ּ� �� : %d(10����), %#X(16����)\n", &input, &input);
}