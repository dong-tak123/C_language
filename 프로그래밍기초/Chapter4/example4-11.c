#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float pi; char ch1, ch2;
	printf("원주율을 입력하세요.\n");
	scanf("%f", &pi);
	printf("%f\n", pi);

	printf("구분자를 공백으로 두 문자를 입력하세요.\n");
	//가장 앞에 공백을 두어 enter를 제거, 구분자로 공백(여러개도 가능)을 사용
	//getchar();   버퍼에서 하나를 받아와서 버린다..

	scanf(" %c %c", &ch1, &ch2);
	//숫자는 괜찮은데,, 문자하나를 여러개 입력받으려면 앞에 공백이 있어야 제대로 입력이 된다.

	printf("ch1=%c ch2=%c", ch1, ch2);		//%c는 문자하나, %s는 문자열.. char형은 문자하나!

	return 0;
}