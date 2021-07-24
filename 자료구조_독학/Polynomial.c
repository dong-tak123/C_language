//다항식 구조체를 만들어서 덧셈과 뺄셈, 곱셈함수 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int degree;
	int* terms;
}polynomial;

//생성함수
//상수항까지 저장해야하므로 동적할당시 한칸 더 받아야함에 주의
void poly_create(polynomial* a) {
	int input;
	printf("Input the degree of items of Poly(x) : ");
	scanf("%d", &input);
	a->degree = input;
	a->terms = (int*)malloc(sizeof(int) * (a->degree + 1));//항들을 담을 배열 동적할당

	//다항식 계수들 입력 받음
	printf("\nInput the coefficient of items of Poly(x) : ");
	for (int i = 0; i < a->degree + 1; i++)
		scanf("%d", a->terms + i);
}

//출력함수
void poly_print(polynomial a) {
	int i;
	for (i = 0; i < a.degree; i++) {
		printf("%2dx^%d +", a.terms[i], a.degree - i);
	}
	printf("%2d", a.terms[i]);
}

//덧셈함수
polynomial poly_add(polynomial a, polynomial b) {
	polynomial high, low, c;
	int diff;
	//차수높은게 high, 차수의 차이는 diff에..
	if (a.degree > b.degree) {
		high = a;	low = b;
		diff = a.degree - b.degree;
	}
	else {
		high = b;	low = a;
		diff = b.degree - a.degree;
	}
	//high에서 계산해서 high를 반환하자..
	//각각의 term배열에서 index가 diff만큼 차이남..
	for (int i = diff; i < high.degree + 1; i++) {
		high.terms[i] += low.terms[i - diff];
	}
	return high;
}

//뺄셈함수
polynomial poly_sub(polynomial a, polynomial b) {
	polynomial high, low, c;
	int diff;
	
	//차수높은게 high, 차수의 차이는 diff에..
	if (a.degree > b.degree) {
		high = a;	low = b;
		diff = a.degree - b.degree;
	}
	else {
		high = b;	low = a;
		diff = b.degree - a.degree;
	}
	//high에서 계산해서 high를 반환하자..
	//각각의 term배열에서 index가 diff만큼 차이남..
	for (int i = diff; i < high.degree + 1; i++) {
		high.terms[i] -= low.terms[i - diff];
	}
	return high;
}

//곱셈함수
//여기서도 메모리 할당에 주의(상수항까지 할당받아야함)
polynomial poly_multi(polynomial a, polynomial b) {
	polynomial c;
	c.degree = a.degree + b.degree;
	
	//일단 동적할당을 받아놓는다.. 0으로 초기화까지..
	c.terms = (int*)malloc(sizeof(int) * (c.degree + 1));
	memset(c.terms, 0, sizeof(int) * (c.degree + 1));
	
	//이제 곱해서 계수를 더한다.. 인덱스는 차수를 나타내므로 더해야한다(지수법칙)
	for (int i = 0; i < a.degree + 1; i++) {
		for (int j = 0; j < b.degree + 1; j++) {
			c.terms[c.degree - (i + j)] += a.terms[i] * b.terms[j];
		}
	}
	return c;
}

//메인함수
void main(void) {
	//int i;  얘는 왜 주어져 있었을까??
	polynomial a;
	polynomial b;
	polynomial c;

	printf("Polynomial 값 설정\n");
	poly_create(&a);

	printf("\nPolynomial 값 설정\n");
	poly_create(&b);
	//둘다 설정 완료	
	
	printf("\nA(x) = ");
	poly_print(a);

	printf("\nB(x) = ");
	poly_print(b);

	printf("\n덧셈함수 확인");
	c = poly_add(a, b);
	printf("\nC(x) = ");
	poly_print(c);	

	printf("\n뺄셈함수 확인");
	c = poly_sub(a, b);
	printf("\nC(x) = ");
	poly_print(c);

	printf("\n곱셈함수 확인");
	c = poly_multi(a, b);
	printf("\nC(x) = ");
	poly_print(c);
}
