#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input[20] = { 0 };
	int i = 0;

	printf("�迭�� ������ ������ �Է��Ͻÿ�(���� 0): ");
	
	do {
		scanf("%d", &input[i]);
	} while (input[i++] != 0);		//���ٿ����� i�� �����ϱ� ���̴�..
	//input�� 0���� ū��Ȯ���ϰ� �ε����� �ø���..

	i = 0;
	while (input[i] != 0) {
		printf("%d ", input[i++]);	//����ϴ� ���ÿ� �ε����� �ø���..
	}
	puts("");

}