#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("정수 1개를 입력하시오:\n");
	scanf("%d", &n);
	

	switch (n) {
	case 1:
		printf("\n\n%d의 로마숫자는 I입니다.", n);		break;
	case 2:
		printf("\n\n%d의 로마숫자는 II입니다.", n);		break;
	case 3:
		printf("\n\n%d의 로마숫자는 III입니다.", n);		break;
	case 4:
		printf("\n\n%d의 로마숫자는 IV입니다.", n);		break;
	case 5:
		printf("\n\n%d의 로마숫자는 V입니다.", n);		break;
	case 6:
		printf("\n\n%d의 로마숫자는 VI입니다.", n);		break;
	case 7:
		printf("\n\n%d의 로마숫자는 VII입니다.", n);		break;
	case 8:
		printf("\n\n%d의 로마숫자는 VIII입니다.", n);		break;
	case 9:
		printf("\n\n%d의 로마숫자는 IX입니다.", n);		break;
	case 10:
		printf("\n\n%d의 로마숫자는 X입니다.", n);		break;
	}
	return 0;
}