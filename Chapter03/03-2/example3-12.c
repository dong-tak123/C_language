#include <stdio.h>

int main(void)
{
	const double RATE = 0.03;			//연이자율 3%
	int deposit = 800000;

	printf("이자율: %f\n", RATE);
	printf("계좌잔고 : %d\n", deposit);
	printf("이자액: %5.1f\n", deposit * RATE);

	return 0;
}