#include <stdio.h>
//#pragma pack(1)		//이건 1바이트 단위..
//#pragma pack(2)		//이건 2바이트 단위.. -> 요 차이로 몇 바이트 단위로 지정되는지가 달라진다..

typedef struct {
	char aa;		//1바이트
	int bb;			//4바이트
	char cc;		//1바이트
}PACKET1;

typedef struct {
	char aa;		//1바이트
	char cc;		//1바이트
	int bb;			//4바이트
}PACKET2;

typedef struct {
	char id;		//1바이트
	double cnt;		//8바이트
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