#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void original(void);
void array_alloc(void);

int main()
{
	original();
	puts("");
	array_alloc();
	
	return 0;
}

void original(void) {
	int* pi = NULL;

	// malloc()�� ���� �޸� �Ҵ� : void*�� ��ȯ�ϱ� ������ ��ȯ�� �ʿ���
	// �ּҸ� �Ҵ���
	pi = (int*)malloc(sizeof(int));
	printf("�ּҰ� : pi = 0x%x\n", pi);

	// �� �Ҵ�޾Ҵ��� �˻��ϴ°�
	if (pi == NULL) {
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
		exit(1);
	}

	// �Ҵ���� �޸𸮿� �� ����
	*pi = 3;
	printf("�ּҰ� : pi = 0x%x, ���尪 *pi = %d\n", pi, *pi);

	free(pi);	// �޸� ��ȯ
}

// ���ϴ� ������ŭ�� ������ �Է¹޾Ƽ� �հ� ����� ���
void array_alloc(void) {
	int n = 0;
	printf("�Է��� ������ ������ �Է� >> ");
	scanf("%d", &n);

	int* ary = NULL;		//ary�� ����Ű�� ���� �������̴�..
	ary = (int*)malloc(sizeof(int) * n);		//n��ŭ�� �������� �޸𸮸� �Ҵ�޴´�..

	if (ary == NULL)
	{
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
		exit(1);
	}

	printf("%d���� ���� �Է� >> ", n);
	int sum = 0;
	for (int i = 0; i < n; i++)//�Է¹����鼭 ���ع�����..
	{
		scanf("%d", (ary + i));	//������� �Է�.. &sum[i]�� ���� ����..
		sum += *(ary + i);		//sum += ary[i]�� ���� ����..
	}
	printf("�Է� ���� : ");
	for (int i = 0; i < n; i++)
		printf("%d ", *(ary + i));

	printf("\n");
	printf("�� : %d ��� : %.1f\n", sum, (double)sum / n);

	free(ary);
}