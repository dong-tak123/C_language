#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cnt = 1, x1, sum = 0;
	int min, max;

	printf("���� 10���� �Է��ϼ��� : \n");
	while (cnt < 11)
	{
		scanf("%d", &x1);		//�̷����ص� �׳� �ǳ�.. ����
		
		sum += x1;
		if (cnt == 1)
			min = x1;
		else
			min = ((min > x1) ? x1 : min);

		if (cnt == 1)
			max = x1;
		else
			max = ((max > x1) ? max : x1);

		cnt++;
	}
	
	printf("\n");
	printf("������: %d\n", sum);
	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);

}