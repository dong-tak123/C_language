#include <stdio.h>
#define MESSAGE "프로그램언어의 학습은 일반언어의 학습과\
				같이 반복학습이 중요하다"			//치환문자열이 문자열인 경우이다.

#define PI 3.141592				//PI를 3.14로 대치하는 지시자
#define VOLUME(r) (4* PI* CUBE(r) / 3)			//구의 체적을 구하는 매크로
#define SQUARE(x) ((x)*(x))						//인자 x의 세제곱을 구하는 매크로
#define CUBE(x) (SQUARE(x) * (x))				//인자 x의 제곱을 구하는 매크로
#define MULT(x,y) ((x)*(y))						//인자 x, y의 곱을 구하는 매크로..
//CUBE를 정의하기전에 VOLUME에서 CUBE를 사용해도 문제없다..

int main(void)
{
	double radius = 2.32;
	printf("반지름이 %.2lf인 구의 부피는 %.2lf입니다.\n", radius, VOLUME(radius));
	printf("실수 %.2lf의 제곱은 %.2lf입니다.\n", 4.29, SQUARE(4.29));
	printf("실수 %.2lf의 세제곱은 %.2lf입니다.\n", 3.0, CUBE(3.0));
	printf("실수 %.2lf와 실수 %.2lf의 곱은 %.2lf입니다.\n", 2.78, 3.62, MULT(2.78, 3.62));
	puts(MESSAGE);
	
	return 0;
}