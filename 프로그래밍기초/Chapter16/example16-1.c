#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi = NULL;

	//malloc()�� ���� �޸� �Ҵ� : void*�� ��ȯ�ϱ� ������ ��ȯ�� �ʿ���
	pi = (int*)malloc(sizeof(int));
	//printf("�ּҰ� : pi = 0x%x\n", pi);

	//�� �Ҵ�޾Ҵ��� �˻��ϴ°�
	if (pi == NULL)
	{
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
		exit(1);
	}

	//�Ҵ���� �޸𸮿� �� ����
	*pi = 3;
	printf("�ּҰ� : pi = 0x%x, ���尪 *pi = %d\n", pi, *pi);

	free(pi);
	return 0;
}