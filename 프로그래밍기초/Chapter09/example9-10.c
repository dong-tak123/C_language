#include <stdio.h>

int main(void)
{
	char c[4] = { 'A','B','\0', '\0' };	//문자'A' 코드값: 65
	//int *pi = &c[0];	//경고 발생..
	int* pi = (int*)&c[0];

	printf("%d %c\n", (int)c[0], c[0]);		//정수 출력 -> 65, 그냥 문자출력 -> 'A'
	printf("%d %d\n", *pi, (char)*pi);		//*pi = c[4]배열 전체..
	//-> 명세에 맞게 출력해준다.. int명세이면 4바이트를 모두읽고, char명세이면 한바이트만 읽는다

	// *pi가 인트형으로 선언되면 c[4]의 모든 바이트를 다 읽고,(int형은 4바이트..)
	// (char)*pi로 하면 c[0]의 바이트만 읽는다..

}