#include <stdio.h>

int main(void)
{
	char null = '\0', a = 'a';
	int zero = 0, n = 10;
	double dzero = 0.0, x = 3.56;

	printf("%d ", !zero);					//�� -> 1
	printf("%d ", zero && x);				//���� -> 0
	printf("%d\n", dzero || null);			//���� -> 0
	printf("%d ", n && x);					//�� -> 1
	printf("%d ", a || null);				//�� -> 1
	printf("%d\n", "java" && "C Lang");		//�� -> 1
	// ���ڿ� ����� ������ ���� �޸𸮿� ����� �ּڰ��� �ǹ��Ѵ�..
	// ���� �޸��� 0������ �ü������ �����ϴ� �ڸ���..


	return 0;
}