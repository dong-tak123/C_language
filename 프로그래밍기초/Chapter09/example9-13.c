#include <stdio.h>
#define ROW 2
#define COL 3

int main(void)
{
	int i, j, cnt;
	int td[][COL] = { {8,5,4},{2,7,6} };

	**td = 10;	//td�� ����Ű�� ���� ����Ű�� ��(������ Ȯ���� ����)
	*td[1] = 20;	//*td[1]�� 2��° ���� ����Ű�� �ְ�, �ű⿡ �����ϴ°Ŵϱ�
					//td[1][0] =20 �� ����..
	
	for (i = 0, cnt = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++, cnt++)
		{
			printf("%d %d %d, ", *(*td + cnt), *(td[i] + j), *(*(td + i) + j));
			//cnt�� �׳� ���������� 0~������ŭ ���ϸ� ���..
		}
		printf("\n");
	}

	printf("%d, %d, %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));
	//sizeof�� �Բ� ���̸� ������ ��ǥ�� �ǹ̷� ���δ� -> 24, 12, 12
	printf("%p, %p, %p\n", td, td[0], td[1]);
	//�ּҷ� ������.. -> �տ� �ΰ��� �Ȱ��� �ڿ� �Ѱ��� +12�� ���̴�..
	printf("%p, %p\n", &td[0][0], &td[1][0]);
	//��� ���� ���� �ڿ� �ΰ��� �Ȱ���,,
}