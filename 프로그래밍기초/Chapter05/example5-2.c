#include <stdio.h>

int main(void)
{
	int x = 5, y = 10;

	printf("%d\n", x += y);		// x = 15, y = 10
	printf("%d\n", x -= y);		// x = 5, y = 10
	printf("%d\n", x *= y);		// x = 50, y = 10
	printf("%d\n", x /= y);		// x = 5, y = 10
	printf("%d\n", x %= y);		// x = 5, y = 10
	
	printf("%d\n", x *= x + y);		// x = 75, y = 10

	return 0;
}