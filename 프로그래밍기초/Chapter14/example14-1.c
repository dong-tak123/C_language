#include <stdio.h>

void increase_callbyvalue(int origin, int increment) {
	origin += increment;
	//origin만 증가..
}

void increase_callbyref(int* origin, int increment) {
	//int *origin = &amount;
	*origin += increment;
}

int increase_by_return(int origin, int increment) {
	origin += increment;

	return origin;
}
int main(void)
{
	int result = 0;		//return 값을 이용해서 바꿀수는 있다..
	int amount = 10;
	//값이 안바뀐다..
	
	increase_callbyvalue(amount, 20);
	printf("amount : %d\n", amount);

	increase_callbyref(&amount, 20);
	printf("amount : %d\n", amount);

	//이미 위에서 amount는 30으로 증가된 상태.. 거기에 20을 올린다..
	result = increase_by_return(amount, 20);
	printf("result : %d\n", result);

	return 0;
}