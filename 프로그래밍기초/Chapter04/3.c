//2017117112 �̵���
#include <stdio.h>

int main(void)
{
	printf("(1) 10�� ũ�� : ");
	printf("%d\n", sizeof(10));

	printf("(2) 0X18�� ũ�� : ");
	printf("%d\n", sizeof(0X18));
	
	printf("(3) 3.14�� ũ�� : ");
	printf("%d\n", sizeof(3.14));

	printf("(4) 17.1e-3�� ũ�� : ");
	printf("%d\n", sizeof(17.1e-3));

	printf("(5) 3.14F�� ũ�� : ");
	printf("%d\n", sizeof(3.14F));

	printf("(6) 'A'�� ũ�� : ");
	printf("%d\n", sizeof('A'));
	
	return 0;
}