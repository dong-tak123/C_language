#include <stdio.h>
#define ROW 2
#define COL 3

int main(void)
{
	int i, j, cnt;
	int td[][COL] = { {8,5,4},{2,7,6} };

	**td = 10;	//td가 가리키는 것의 가리키는 것(열까지 확정된 상태)
	*td[1] = 20;	//*td[1]은 2번째 행을 가리키고 있고, 거기에 대입하는거니까
					//td[1][0] =20 과 같다..
	
	for (i = 0, cnt = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++, cnt++)
		{
			printf("%d %d %d, ", *(*td + cnt), *(td[i] + j), *(*(td + i) + j));
			//cnt는 그냥 무지성으로 0~갯수만큼 더하면 댄다..
		}
		printf("\n");
	}

	printf("%d, %d, %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));
	//sizeof와 함께 쓰이면 무적권 대표의 의미로 쓰인다 -> 24, 12, 12
	printf("%p, %p, %p\n", td, td[0], td[1]);
	//주소로 쓰였다.. -> 앞에 두개는 똑같고 뒤에 한개는 +12한 값이다..
	printf("%p, %p\n", &td[0][0], &td[1][0]);
	//얘는 위에 줄의 뒤에 두개랑 똑같다,,
}