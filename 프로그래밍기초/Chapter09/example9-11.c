#include <stdio.h>
#define ROW 2
#define COL 3

int main(void)
{
	int i, j, cnt;
	int td[][COL] = { {8,5,4},{2,7,6} };

	**td = 10;	//td[0][0] = 10;
	*td[1] = 20;	//td[1][0] = 20;

	for (i = 0, cnt = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++, cnt++)
		{
			printf("%d %d %d, ", *(*td + cnt), *(td[i] + j), *(*(td + i) + j));
			//cnt는 계속 증가.. 그냥 *(*td +cnt) 하면 *td가 0행0열 가리키고 있고 한칸씩
			//뒤로 밀리는거니까 다 출력하는거임..
		}
		printf("\n");
	}
	printf("%d, %d, %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));	//대표의 의미로 쓰인다-> 24,12,12
	printf("%p, %p, %p\n", td, td[0], td[1]);		//&td[0][0], td[0][0], td[1][0]
	printf("%p, %p\n", &td[0][0], &td[1][0]);		//위의 뒤에 두개랑 똑같다
}