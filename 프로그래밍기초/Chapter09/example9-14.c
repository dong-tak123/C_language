#include <stdio.h>

int main(void)
{
	double dint[2] = { 0.0 };	//������ �迭 ũ��2 -> 16����Ʈ
	int i;
	int* p = (int*)dint;	//����ȯ�Ǿ� ���� int������ �װ��� �����ִ�.
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;

	for (i = 0; i < 4; i++)
		printf("%p %d\n", p + i, *(p + i));
	//����ϸ� �ּ� 4�� ��� ����(int�� �����ʹϱ�)
	//*(p+i)�� ���ѰŴ� 1 2 3 4
	printf("%d", sizeof(p));		//�����ʹ� ũ�Ⱑ ������ 4..

}