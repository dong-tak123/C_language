//2017117112 �̵���
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45

void print_numbers();
int check_num(int num[], int n);


int main(void)
{
	srand((long)time(NULL));

	int input, num[6] = { 0 };

	while (1) {
		printf("Lotto ���� ȸ�� �Է� (1~5)ȸ: ");
		scanf("%d", &input);
		if ((input >= 1) && (input <= 5))
			break;
	}
	
	for (int i = 0; i < input; i++)
		print_numbers();
}

void print_numbers()
{
	//������ ������ �޴´�.. Ȥ�� ������ i�� ���δ�..
	int num[6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		num[i] = rand() % MAX + 1;

		if (check_num(num, i))		//�տ��Ŷ� ������ ������..
			i--;	//�ϳ��� �ٿ��� �ٽ� �޴´�..

	}
	for (int j = 0; j < 6; j++)
		printf("%4d", num[j]);
	printf("\n");
}

int check_num(int num[], int n)		//�갡 ���� ������ �� Ȯ������.. (���� �ε��� ���..)
{
	for (int i = 0; i < n; i++)
	{
		if (num[i] == num[n])
			return 1;		//������ ������ 1��ȯ
	}
	return 0;	//������ 0��ȯ
}
