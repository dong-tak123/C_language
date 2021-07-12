#include <stdio.h>

int main(void)
{
	int ary[][4] = { 5,7,6,2,7,8,1,3 };
	int(*ptr)[4] = ary;

	printf("%2d, %2d\n", **ary, **ptr++);	//5, 5 그리고 ptr은 증가하므로
											//ptr이 ary[0][1]을 가리키고있다
	printf("%2d, %2d\n", **(ary + 1), **(ptr++));
	// 7, 7 그리고 위와 마찬가지로 ptr은 ary[0][2]를 가리킨다.

	ptr = ary;	//다시 ary[0][0]으로 돌아온다..

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%2d, %2d   ", *(*(ary + i) + j), *(*(ptr + i) + j));
		}
		printf("\n");
	}
	printf("sizeof(ary) = %d, sizeof(ptr) = %d\n", sizeof ary, sizeof ptr);
}