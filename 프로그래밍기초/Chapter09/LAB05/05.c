#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE_5 10

int main(void)
{
	int num[SIZE_5] = { 0 };
	int i, input, freq;

	printf("0���� 9������ ���� �� 20���� �Է��Ͻÿ� >>\n");
	for (i = 0; i < 20; i++)
	{
		scanf("%d", &input);
		num[input]++;
	}

	for (i = 0; i < SIZE_5; i++)
	{
		if (i == 0)
			freq = 0;
		else
			freq = ((num[freq] > num[i]) ? freq : i);
	}
	printf("�Է��� ���� �� ���� ���� �Է��� ���� %d\n", freq);
	printf("�� �󵵼��� %d", num[freq]);

	return 0;
}