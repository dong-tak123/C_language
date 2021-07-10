#include <stdio.h>	

int main(void)
{

	printf("%d", 15 << 1);
	printf("\n");

	printf("%d", 0x30000000 << 2);	//MSB가 0에서 1로 바뀌어서 원래 4배하면
	//존나 큰수가 되어야하는데 오히려 음수가 되어버린다,,
	printf("\n");
	printf("%#X\n", 0x30000000 << 2);

	printf("%d", -30 >> 1);		//음수로도 그냥 짝수이면 나누기 2
	printf("\n");

	printf("%d", 15 << 2);		//4배 (2^2배)
	printf("\n");

	printf("%d", -30 << 2);		//4배,.
	printf("\n");

	printf("%d", 30 >> 2);		//30을 한비트 오른쪽이동하면 -15.. 
				//-15를 한비트 오른쪽이동하면 -15-1해서 나누기 2.. -> -8
	printf("\n");
}