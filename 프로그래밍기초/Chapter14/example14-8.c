//void�� ������..

#include <stdio.h>
#define SIZE 10

void printArray(void* vPtr, int size, int type);	
//void�� �����ͷ� �����ϱ� �Լ������� ����� ����ȯ�� ���־���Ѵ�..
//void�� �����ʹ� ���� �ڷ������� �𸣴ϱ� �װŸ� type������ �������ش�,,

int main(void)
{
	int num[SIZE] = { 10,20,30,40,50,60,70,80,90,100 };
	float fractional[SIZE] = { 1.1f,1.2f,1.3f,1.4f,1.5f,1.6f,1.7f,1.8f,1.9f,2.0f };
	char characters[SIZE] = { 'C','o','d','e','f','o','r','w','i','n' };

	printf("\nElements of integer array: ");
	printArray(&num, SIZE, 1);		//�������ΰŸ� �˷��ٷ��� ���� 1�� ������..

	printf("\nElements of float array: ");
	printArray(&fractional, SIZE, 2);		

	printf("\nElements of character array: ");
	printArray(&characters, SIZE, 3);
}

void printArray(void* vPtr, int size, int type) {
	int i;

	for (i = 0; i < size; i++) {
		switch (type) {
		case 1:
			//�����϶�..
			printf("%d, ", ((int*)(vPtr))[i]);	//���� vPtr[i]�ε�, void�� �����ʹϱ� ���������ȯ �ʿ�..
			break;
		case 2:
			//float���϶�..
			printf("%.2f, ", ((float*)(vPtr))[i]);
			//printf("%.2f, ", *((float*)vPtr + i));
			break;
		case 3:
			//char���϶�..
			printf("%c, ", ((char*)(vPtr))[i]);
			break;
		}
	}
}