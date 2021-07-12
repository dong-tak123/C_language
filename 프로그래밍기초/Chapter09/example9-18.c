#include <stdio.h>

int main(void)
{
	int ary[][4] = { 5,7,6,2,7,8,1,3 };
	int(*ptr)[4] = ary;

	printf("%2d, %2d\n", **ary, **ptr++);	//5, 5 �׸��� ptr�� �����ϹǷ�
											//ptr�� ary[0][1]�� ����Ű���ִ�
	printf("%2d, %2d\n", **(ary + 1), **(ptr++));
	// 7, 7 �׸��� ���� ���������� ptr�� ary[0][2]�� ����Ų��.

	ptr = ary;	//�ٽ� ary[0][0]���� ���ƿ´�..

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%2d, %2d   ", *(*(ary + i) + j), *(*(ptr + i) + j));
		}
		printf("\n");
	}
	printf("sizeof(ary) = %d, sizeof(ptr) = %d\n", sizeof ary, sizeof ptr);
}