#include <stdio.h>

void call_by_value(int x, int y);
void call_by_reference(int* x, int* y);

int main(void)
{
	int a = 6;
	int b = 7;
	call_by_value(a, b);
	printf("a : %d, b : %d\n", a, b);
	call_by_reference(&a, &b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void call_by_value(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void call_by_reference(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}