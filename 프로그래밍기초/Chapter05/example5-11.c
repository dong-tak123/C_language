#include <stdio.h>

int main(void)
{
	int x = -3;
	printf("%10d, %10x\n", x, x);
	printf("%10d, %10x", x >> 1, x >> 1);

	return 0;
}
