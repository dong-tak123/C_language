#include <stdio.h>

#define ARYSIZE 5
double sum(double ary[], int n) {
	double total = 0.0;
	for (int i = 0; i < n; i++)
	{
		//total += ary[i];
		//total += *(ary + i);
		total += *(ary++);
	}
	return total;
}

int main(void)
{
	double data[] = { 2.3,3.4,4.5,6.7,9.2 };

	for (int i = 0; i < ARYSIZE; i++)
		printf("%5.1f", data[i]);
	puts("");

	printf("гу : %5.1f\n", sum(data, ARYSIZE));

	return 0;

}