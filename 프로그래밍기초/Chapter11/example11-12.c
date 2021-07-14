#include <stdio.h>

void return_num(int* n1, int* n2, int* n3)
{
	*n1 += 1;
	*n2 += 10;
	*n3 += 100;
}

int main(int argc, char* agrv[])
{
	int a = 0;
	int b = 10;
	int c = 100;

	return_num(&a, &b, &c);

	printf("%4d %4d %4d", a, b, c);
}