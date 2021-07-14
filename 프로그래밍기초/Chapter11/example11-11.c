#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pointer_test()
{
	int x = 1, y = 2;
	int* ip;

	ip = &x;		//이제 x와 *ip는 같은 값이다..
	printf("1. *ip = %d, x = %d, y = %d\n", *ip, x, y);	// 1 1 2

	y = *ip;		//y = 1
	*ip = *ip + 10;		
	printf("2. *ip= %d, x = %d, y= %d\n", *ip, x, y); // 11 11 1

	x = x + 20;
	printf("3. *ip= %d, x = %d, y = %d\n", *ip, x, y);	// 31 31 1

	printf("\n\n");
}
int main()
{
	pointer_test();
	return 0;
}

