#include <stdio.h>

typedef struct {
	double real;	//실수부
	double img;		//허수부
}complex;

void printcomplex(complex com);
complex paircomplex1(complex com);
void paircomplex2(complex *com);

int main(void)
{
	complex comp = { 3.4,4.8 };
	complex pcomp;

	printcomplex(comp);

	pcomp = paircomplex1(comp);
	printcomplex(pcomp);

	paircomplex2(&pcomp);
	printcomplex(pcomp);

	return 0;
}

//구조체 자체를 인자로 사용
void printcomplex(complex com) {
	printf("복소수(a + bi) = %5.1f + %5.1fi \n", com.real, com.img);
}

//구조체 자체를 인사로 사용하여 처리된 구조체를 다시 반환
complex paircomplex1(complex com) {
	com.img = -com.img;
	return com;
}

//구조체포인터를 인자로 사용
void paircomplex2(complex *com) {
	com->img = -com->img;		//포인터니까 화살표..
}