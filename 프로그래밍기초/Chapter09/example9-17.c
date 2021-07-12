#include <stdio.h>

int main(void)
{
	int a[] = { 8,2,8,1,3 };
	int* p = a; //������ p�� ���� a�� ù ���Ҹ� ����Ű�� a��ü�� ��ǥ�Ѵ�

	printf("%2d, %2d\n", *(p + 1), *(p + 4));//p[1], p[4] -> 2, 3
	printf("%2d, %2d\n", p[1], p[4]);//2, 3
	printf("sizeof(a) = %d, sizeof(p) = %d\n", sizeof a, sizeof p);//20, 4

	printf("%2d\n", *++p);
	//�켱���� �Ȱ��� �쿡�� �·�.. -> p�� ����Ű�°ſ��� +1�ϸ� ���� p[1]��
	//����Ű�� �ִ°Ű� ����� ���� �ø��� ����ϴϱ� 2�� �ȴ�..
	
	printf("%p ", --p);
	printf(" %#X", &(a[1]));
	printf("\n%p", *(a + 1));
}