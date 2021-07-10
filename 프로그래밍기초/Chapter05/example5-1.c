#include <stdio.h>

int main(void)
{
	printf("%d\n", 3 + 4);
	printf("%f\n", 3.4 - 4.3);
	printf("%f\n", 3.4 * 4.3);
	printf("%d\n", 10 / 3);
	printf("%f\n", 10.0 / 3.0);
	printf("%d\n", 10 % 3);
	printf("%f\n", 10.0 / 3.3);

	int a, b, c;
	a = b = c = 5;
	printf("%d\n", a = a + 2);
	printf("%d\n", a);
	printf("%d\n", a = b + c);
	printf("%d\n", a);

	return 0;
}