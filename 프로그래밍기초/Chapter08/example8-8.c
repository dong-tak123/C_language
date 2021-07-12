#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int value = 0x61626364;
	int *pi = &value;
	char *pc = (char *)&value; //char *pc = &value  문자형 주소값으로 바꿧따.. 그럼 이제 연산하면 1바이트씩 옮김
							   //자동 형변환이 되긴 함..
	// *pi를 하면 int형 포인터 변수이기 때문에 64636261이 다 나오고,
	// *pc를 하면 char형 포인터 변수이기 때문에 64만 나온다..

	printf("변수명  저장값     주소값\n");
	printf("-------------------------\n");
	printf("value   %0#x   %p\n", value, pi);		//정수출력

	
	//문자 포인터로 문자 출력 모듈  ->  리틀엔디안 방식.. 우측비트부터 낮은 주솟값에 저장..
	printf("\n");
	for (int i = 0; i <= 3; i++)
	{
		char ch = *(pc + i);
		printf("*(pc+%d)  %0#6x   %2c  %p\n", i, ch, ch, pc + i);
	}

}