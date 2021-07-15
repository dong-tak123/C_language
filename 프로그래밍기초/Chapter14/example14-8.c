//void형 포인터..

#include <stdio.h>
#define SIZE 10

void printArray(void* vPtr, int size, int type);	
//void형 포인터로 받으니까 함수내에서 명시적 형변환을 해주어야한다..
//void형 포인터는 무슨 자료형인지 모르니까 그거를 type변수로 전달해준다,,

int main(void)
{
	int num[SIZE] = { 10,20,30,40,50,60,70,80,90,100 };
	float fractional[SIZE] = { 1.1f,1.2f,1.3f,1.4f,1.5f,1.6f,1.7f,1.8f,1.9f,2.0f };
	char characters[SIZE] = { 'C','o','d','e','f','o','r','w','i','n' };

	printf("\nElements of integer array: ");
	printArray(&num, SIZE, 1);		//정수형인거를 알려줄려고 인자 1을 보낸다..

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
			//정수일때..
			printf("%d, ", ((int*)(vPtr))[i]);	//원래 vPtr[i]인데, void형 포인터니까 명시적형변환 필요..
			break;
		case 2:
			//float형일때..
			printf("%.2f, ", ((float*)(vPtr))[i]);
			//printf("%.2f, ", *((float*)vPtr + i));
			break;
		case 3:
			//char형일때..
			printf("%c, ", ((char*)(vPtr))[i]);
			break;
		}
	}
}