#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 6;

	printf("������  ���尪  �ּҰ�   \n");
	printf("-------------------------\n");
	printf("  c      %d      %p\n", c, &c);
	printf("  b      %d      %p\n", b, &b);
	printf("  a      %d      %p\n", a, &a);
	printf("\n");

	int *p = &c;
	printf("  c      %d      %p\n", *p, p);					//��������,, p�� ����Ű�� ���� c,,
	printf("  b      %d      %p\n", *(p + 3), p + 3);		//�ּ� ��ü�� ��ȣ�� �ؼ� *�� �����.. �ּҿ� ���� ������..
	printf("  a      %d      %p\n", *(p + 6), p + 6);

	//int�� ���� ������ �ּڰ� ���̴� 12..(���������� ���� ����Ǿ��� ��..)
}