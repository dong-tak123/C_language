#include <stdio.h>

int main(void)
{
	char* java = "java";
	printf("%s ", java);

	//문자포인터가 가리키는 문자 이후를 하나 하나 출력
	int i = 0;
	while (java[i])	//while (java[i] != '\0')
		printf("%c", java[i++]);
	printf(" ");

	i = 0;
	while (*(java + i) != '\0')	//java[i]는 *(java+i)와 같다..
		printf("%c", *(java + i++));
	printf("\n");

	//수정이 불가능..
	//java[0] = 'J';	오류가 안나는디...

	return 0;
}