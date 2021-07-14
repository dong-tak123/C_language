#include <stdio.h>
void myprintA(int a, int b);
void myprintB();
void myprintC();

int main(void)
{

	myprintA(3, 4);
	myprintC();

	return 0;
}

void myprintA(int a, int b)
{
	printf("a: %d, b: %d\n", a, b);
}
void myprintB()
{
	printf("C Language!");
}
void myprintC()
{
	printf("Bye! \n");
}