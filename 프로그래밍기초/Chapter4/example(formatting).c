#include <stdio.h>

int main(void)
{
	int n = 16, ret_value = 0;

	ret_value = printf("��\n");
	printf("%d\n", ret_value);

	ret_value = printf("��� ��: %d %i %o %#o %#x %#X\n", n, n, n, n, n, n);
	printf("%d\n", ret_value);		//���Ϲ�� : �ѱ��� 2��, \n�� �ϳ��� �Ѵ�..(������ ������� Ȯ���ؾ���..)

	printf("%d %i\n", 16, 16);
	printf("%o %#o", 16, 16);
	printf("%x %#x %#X\n", 10, 10, 10);

	printf("%f %s\n", 123456.789, "\t%f");

	printf("%10.*s\n", 5, "Hello!");		//*�� �����Ǵ� 5�� �־����..
	printf("%10.5s\n", "Hello!");			//�����Ŷ� �Ȱ����� ������ ������ �پ��

	return 0;
}