#include <stdio.h>

int main(void)
{
	int abc[4][3] = { 1,2,3,5,6,7,9,10,11,13,14,15 };

	int rowsize = sizeof abc / sizeof abc[0];
	int colsize = sizeof abc[0] / sizeof abc[0][0];

	int i;
	int(*p)[3] = abc;

	printf("각 행의 첫 주소 출력: \n");
	for (i = 0; i < rowsize; i++)
	{
		printf("%p  %d\n", p+i, abc + i);
		//p+i는 p+cnt랑 똑같이 생각해야함.. 이거는 그냥 포인터로 선언했을때니까
		//p+i하면 p가 인트형포인터이니까 한칸씩 움직이는게 맞고
		//배열포인터로 선언을 하면 int(*p)[3] = abc 이래 선언을 해야하고 그럼
		//한 행씩 움직인다..

	}
	printf("\n\n");

	printf("2행의 원소의 주소와 값 출력: \n");
	for (i = 0; i < colsize; i++)
	{
		printf("%p  %d\n", *(p+1) + i, *(*(p + 1) + i));
		//*(p+1) + i 자체가 주소다..
		printf("%p  %d\n", *(abc + 1) + i, *(*(abc + 1) + i));
		
	}
	printf("%p, %d\n", *(p+2) + 1, *(*(p + 2)+1));	//abc[2][1]이랑 같다..
}