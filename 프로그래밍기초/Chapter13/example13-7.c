#include <stdio.h>
//#pragma pack(1)		//�̰� 1����Ʈ ����..
//#pragma pack(2)		//�̰� 2����Ʈ ����.. -> �� ���̷� �� ����Ʈ ������ �����Ǵ����� �޶�����..

typedef struct {
	char aa;		//1����Ʈ
	int bb;			//4����Ʈ
	char cc;		//1����Ʈ
}PACKET1;

typedef struct {
	char aa;		//1����Ʈ
	char cc;		//1����Ʈ
	int bb;			//4����Ʈ
}PACKET2;

typedef struct {
	char id;		//1����Ʈ
	double cnt;		//8����Ʈ
}PACKET3;

int main()
{
	PACKET1 packet1;
	PACKET2 packet2;
	PACKET3 packet3;

	printf("packet1 size = %d\n", sizeof(packet1));
	printf("packet2 size = %d\n", sizeof(packet2));
	printf("packet3 size = %d\n", sizeof(packet3));
}