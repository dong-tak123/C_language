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
			//cnt�� ��� ����.. �׳� *(*td +cnt) �ϸ� *td�� 0��0�� ����Ű�� �ְ� ��ĭ��
			//�ڷ� �и��°Ŵϱ� �� ����ϴ°���..
		}
		printf("\n");
	}
	printf("%d, %d, %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));	//��ǥ�� �ǹ̷� ���δ�-> 24,12,12
	printf("%p, %p, %p\n", td, td[0], td[1]);		//&td[0][0], td[0][0], td[1][0]
	printf("%p, %p\n", &td[0][0], &td[1][0]);		//���� �ڿ� �ΰ��� �Ȱ���
}