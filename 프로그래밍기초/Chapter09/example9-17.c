#include <stdio.h>

int main(void)
{
	int a[] = { 8,2,8,1,3 };
	int* p = a; //포인터 p는 이제 a의 첫 원소를 가리키고 a전체를 대표한다

	printf("%2d, %2d\n", *(p + 1), *(p + 4));//p[1], p[4] -> 2, 3
	printf("%2d, %2d\n", p[1], p[4]);//2, 3
	printf("sizeof(a) = %d, sizeof(p) = %d\n", sizeof a, sizeof p);//20, 4

	printf("%2d\n", *++p);
	//우선순위 똑같고 우에서 좌로.. -> p가 가리키는거에서 +1하면 이제 p[1]을
	//가리키고 있는거고 출력은 먼저 올리고 출력하니까 2가 된다..
	
	printf("%p ", --p);
	printf(" %#X", &(a[1]));
	printf("\n%p", *(a + 1));
}