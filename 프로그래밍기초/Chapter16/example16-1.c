#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi = NULL;

	//malloc()로 동적 메모리 할당 : void*를 반환하기 때문에 변환이 필요함
	pi = (int*)malloc(sizeof(int));
	//printf("주소값 : pi = 0x%x\n", pi);

	//잘 할당받았는지 검사하는거
	if (pi == NULL)
	{
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	}

	//할당받은 메모리에 값 저장
	*pi = 3;
	printf("주소값 : pi = 0x%x, 저장값 *pi = %d\n", pi, *pi);

	free(pi);
	return 0;
}