#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int value = 0x61626364;
	int *pi = &value;
	char *pc = (char *)&value; //char *pc = &value  ������ �ּҰ����� �مf��.. �׷� ���� �����ϸ� 1����Ʈ�� �ű�
							   //�ڵ� ����ȯ�� �Ǳ� ��..
	// *pi�� �ϸ� int�� ������ �����̱� ������ 64636261�� �� ������,
	// *pc�� �ϸ� char�� ������ �����̱� ������ 64�� ���´�..

	printf("������  ���尪     �ּҰ�\n");
	printf("-------------------------\n");
	printf("value   %0#x   %p\n", value, pi);		//�������

	
	//���� �����ͷ� ���� ��� ���  ->  ��Ʋ����� ���.. ������Ʈ���� ���� �ּڰ��� ����..
	printf("\n");
	for (int i = 0; i <= 3; i++)
	{
		char ch = *(pc + i);
		printf("*(pc+%d)  %0#6x   %2c  %p\n", i, ch, ch, pc + i);
	}

}