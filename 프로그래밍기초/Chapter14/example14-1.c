#include <stdio.h>

void increase_callbyvalue(int origin, int increment) {
	origin += increment;
	//origin�� ����..
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
	int result = 0;		//return ���� �̿��ؼ� �ٲܼ��� �ִ�..
	int amount = 10;
	//���� �ȹٲ��..
	
	increase_callbyvalue(amount, 20);
	printf("amount : %d\n", amount);

	increase_callbyref(&amount, 20);
	printf("amount : %d\n", amount);

	//�̹� ������ amount�� 30���� ������ ����.. �ű⿡ 20�� �ø���..
	result = increase_by_return(amount, 20);
	printf("result : %d\n", result);

	return 0;
}