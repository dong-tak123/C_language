#include <stdio.h>
#define DEBUG			
//���� DEBUG�� ���ٸ� ���� ���� LIMIT���� ���� ���� ��µȴ�
//���⿡ �ּ����޾Ƽ� DEBUG�� ���x���� �������� ��ó���⿡ �������� 
//WIN32;_DEBUG;_CONSOLE;%(PreprocessorDefinitions);DEBUG �̷��� DEBUG�� �߰��ϸ� ����ȴ�..

#define LIMIT 20

int main(void)
{
	long prod = 1;
	for (int i = 1; i < LIMIT; i++)
	{
		prod *= i;

#ifdef DEBUG		//����װ� ���ǵǾ������� ���⸦ �ϰ�
		if (i % 5 == 0)
			printf("DEBUG : 1 ���� %d������ ���� %d�Դϴ�.\n", i, prod);

#endif		//�ȵǾ��־����� �ؿ��� �ض�..
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", LIMIT, prod);
}