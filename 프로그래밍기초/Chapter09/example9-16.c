#include <stdio.h>

int main(void)
{
	int abc[4][3] = { 1,2,3,5,6,7,9,10,11,13,14,15 };

	int rowsize = sizeof abc / sizeof abc[0];
	int colsize = sizeof abc[0] / sizeof abc[0][0];

	int i;
	int(*p)[3] = abc;

	printf("�� ���� ù �ּ� ���: \n");
	for (i = 0; i < rowsize; i++)
	{
		printf("%p  %d\n", p+i, abc + i);
		//p+i�� p+cnt�� �Ȱ��� �����ؾ���.. �̰Ŵ� �׳� �����ͷ� �����������ϱ�
		//p+i�ϸ� p�� ��Ʈ���������̴ϱ� ��ĭ�� �����̴°� �°�
		//�迭�����ͷ� ������ �ϸ� int(*p)[3] = abc �̷� ������ �ؾ��ϰ� �׷�
		//�� �྿ �����δ�..

	}
	printf("\n\n");

	printf("2���� ������ �ּҿ� �� ���: \n");
	for (i = 0; i < colsize; i++)
	{
		printf("%p  %d\n", *(p+1) + i, *(*(p + 1) + i));
		//*(p+1) + i ��ü�� �ּҴ�..
		printf("%p  %d\n", *(abc + 1) + i, *(*(abc + 1) + i));
		
	}
	printf("%p, %d\n", *(p+2) + 1, *(*(p + 2)+1));	//abc[2][1]�̶� ����..
}