#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void)
{
	int input;
	srand((long)time(NULL));
	int guess = rand() % 100 + 1;

	printf("1���� %d���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);

	do {
		printf("\n������ �����غ��ÿ� >> ");
		scanf("%d", &input);
		if (guess > input)
			printf("�� ū ���ڷ� �����غ�����~\n");
		else if (guess < input)
			printf("�� ���� ���ڷ� �����غ�����~\n");
		else
			printf("�����Դϴ�\n");
		
	} while (guess != input);

	//printf("%d", guess);
}