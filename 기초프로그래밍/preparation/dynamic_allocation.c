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

	// malloc()로 동적 메모리 할당 : void*를 반환하기 때문에 변환이 필요함
	// 주소를 할당함
	pi = (int*)malloc(sizeof(int));
	printf("주소값 : pi = 0x%x\n", pi);

	// 잘 할당받았는지 검사하는거
	if (pi == NULL) {
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	}

	// 할당받은 메모리에 값 저장
	*pi = 3;
	printf("주소값 : pi = 0x%x, 저장값 *pi = %d\n", pi, *pi);

	free(pi);	// 메모리 반환
}

// 원하는 갯수만큼의 정수를 입력받아서 합과 평균을 계산
void array_alloc(void) {
	int n = 0;
	printf("입력할 정수의 개수를 입력 >> ");
	scanf("%d", &n);

	int* ary = NULL;		//ary가 가리키는 것은 정수형이다..
	ary = (int*)malloc(sizeof(int) * n);		//n만큼의 정수형의 메모리를 할당받는다..

	if (ary == NULL)
	{
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	}

	printf("%d개의 점수 입력 >> ", n);
	int sum = 0;
	for (int i = 0; i < n; i++)//입력받으면서 더해버린다..
	{
		scanf("%d", (ary + i));	//공백기준 입력.. &sum[i]도 같은 말임..
		sum += *(ary + i);		//sum += ary[i]도 같은 말임..
	}
	printf("입력 정수 : ");
	for (int i = 0; i < n; i++)
		printf("%d ", *(ary + i));

	printf("\n");
	printf("합 : %d 평균 : %.1f\n", sum, (double)sum / n);

	free(ary);
}