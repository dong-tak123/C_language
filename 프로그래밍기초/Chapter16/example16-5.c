#include <stdio.h>
#define DEBUG			
//여기 DEBUG가 없다면 가장 밑의 LIMIT까지 곱한 값만 출력된다
//여기에 주석을달아서 DEBUG를 없엤더라도 설정에서 전처리기에 마지막에 
//WIN32;_DEBUG;_CONSOLE;%(PreprocessorDefinitions);DEBUG 이렇게 DEBUG를 추가하면 실행된다..

#define LIMIT 20

int main(void)
{
	long prod = 1;
	for (int i = 1; i < LIMIT; i++)
	{
		prod *= i;

#ifdef DEBUG		//디버그가 정의되어있으면 여기를 하고
		if (i % 5 == 0)
			printf("DEBUG : 1 부터 %d까지의 곱은 %d입니다.\n", i, prod);

#endif		//안되어있었으면 밑에를 해라..
	}
	printf("1부터 %d까지의 곱은 %d입니다.\n", LIMIT, prod);
}