#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const int MAX = 15;

	printf("1���� %d���� ���� �߿��� 3���� ������ �������� �ʴ� ��\n", MAX);
	
	for (int i = 1; i <= MAX; i++)
	{
		if (!(i % 3))
		//if(i % 5)		-> 5�� ������ �������� ���� ���..
		//5�� ����������� ������ if�� �����..-> continue..
			continue;
		printf("%3d", i);
	}
	puts("");
}