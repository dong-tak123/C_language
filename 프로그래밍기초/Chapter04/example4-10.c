#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int snum, credit;

	printf("당신의 학번과 신청학점은? ");
	scanf("%d %d", &snum, &credit);		//"%d%d" or "%d %d" 둘다 그냥 공백만 있으면 해도 되네!
	printf("학번: %d 신청학점: %d \n", snum, credit);

	return 0;
}