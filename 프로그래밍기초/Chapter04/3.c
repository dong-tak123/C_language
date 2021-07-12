//2017117112 이동현
#include <stdio.h>

int main(void)
{
	printf("(1) 10의 크기 : ");
	printf("%d\n", sizeof(10));

	printf("(2) 0X18의 크기 : ");
	printf("%d\n", sizeof(0X18));
	
	printf("(3) 3.14의 크기 : ");
	printf("%d\n", sizeof(3.14));

	printf("(4) 17.1e-3의 크기 : ");
	printf("%d\n", sizeof(17.1e-3));

	printf("(5) 3.14F의 크기 : ");
	printf("%d\n", sizeof(3.14F));

	printf("(6) 'A'의 크기 : ");
	printf("%d\n", sizeof('A'));
	
	return 0;
}