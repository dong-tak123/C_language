#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	int sum = 0, midsum = 0, finalsum = 0;
	int score[][COLSIZE] = { 95,85,90,88,86,90,88,78 };		//COLSIZE�� ��Ȯ���ϸ� �ʱ�ȭ����
	int i, j;

	printf("\t�߰�\t�⸻\n");
	printf("---------------------------\n");
	for (i = 0; i < ROWSIZE; i++) {
		for (j = 0; j < COLSIZE; j++) {
			sum += score[i][j];		//�׻� ���հ�� �����ְ�
			if (j == 0)
				midsum += score[i][j];		//j�� 0�̸� �߰���
			else
				finalsum += score[i][j];	//�� �ܿ��� �⸻��

			printf("\t%d", score[i][j]);
		}
		printf("\n");
	}
	printf("���: %7.2lf%7.2lf\n\n", midsum / (double)ROWSIZE, finalsum / (double)ROWSIZE);
	printf("�հ�: %d ��� = %.2lf", sum, (double)sum / (ROWSIZE * COLSIZE));

}
