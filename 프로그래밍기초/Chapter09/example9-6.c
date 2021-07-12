#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	int sum = 0, midsum = 0, finalsum = 0;
	int score[][COLSIZE] = { 95,85,90,88,86,90,88,78 };		//COLSIZE만 명확히하면 초기화가능
	int i, j;

	printf("\t중간\t기말\n");
	printf("---------------------------\n");
	for (i = 0; i < ROWSIZE; i++) {
		for (j = 0; j < COLSIZE; j++) {
			sum += score[i][j];		//항상 총합계는 더해주고
			if (j == 0)
				midsum += score[i][j];		//j가 0이면 중간합
			else
				finalsum += score[i][j];	//그 외에는 기말합

			printf("\t%d", score[i][j]);
		}
		printf("\n");
	}
	printf("평균: %7.2lf%7.2lf\n\n", midsum / (double)ROWSIZE, finalsum / (double)ROWSIZE);
	printf("합계: %d 평균 = %.2lf", sum, (double)sum / (ROWSIZE * COLSIZE));

}
