#include <stdio.h>

int main(void)
{
	printf("%d\n", 3 > 4);			//���� -> 0
	printf("%d\n", 3 < 4.0);		//�� -> 1
	printf("%d\n", 'a' <= 'b');		//�ƽ�Ű �ڵ尪 ��.. �� -> 1
	printf("%d\n", 'Z' <= 'a');		//�ƽ�Ű �ڵ尪 ��.. �� -> 1
	printf("%d\n", 4.27 >= 4.35);	//���� -> 0
	printf("%d\n", 4 != 4.0);		//����(�ٸ����ʴ�..) -> 0
	printf("%d\n", 4.0F == 4.0);	//��(����..) -> 0

	return 0;
}