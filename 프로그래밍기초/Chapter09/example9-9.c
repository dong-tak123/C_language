#include <stdio.h>

int main(void)
{
	int a[4] = { 1,3,6,8 };
	int *pa = a;		//a == &a[0]

	printf("%d %d %d %d\n", *(pa), *(pa + 1), *(pa + 2), *(pa + 3));	//1  3  6  8
	printf("%d %d %d %d\n", pa[0], pa[1], pa[2], pa[3]);		//1  3  6  8
	
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);		//1  3  6  8
	printf("%d %d %d %d\n", *a, *(a + 1), *(a + 2), *(a + 3));		//1  3  6  8 -> a를 바로 주소로 생각가능

	pa = &a[1];		//&a[1] == a+1

	printf("%d  ", ++ * pa);	
	//++(*pa)이므로 pa가 가리키는 a[1]을 하나 증가시킨걸 출력.. pa의 값은 그대로..
	
	printf("%d  ", *pa++);		
	//4 출력 후 ( *(pa++) ) pa는 하나 증가해서 이제 a[2]를 가리킴..
	
	printf("%d  ", -- * pa);
	//(--(*pa)) 이므로 a[2]에서 값을 줄이고 출력.. pa는 그대로 (a[2] = 5)
	
	printf("%d\n\n", (*pa)--);	
	//5출력	pa는 그대로.. -> 결국 마지막에 *pa == a[2]이다.. (a[2] = 4)
	
	printf("%d  %d  %d  %d\n", *(pa - 2), *(pa - 1), *pa, *(pa + 1));
	// 1 4 4 8

}