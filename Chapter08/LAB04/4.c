#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("���� 1���� �Է��Ͻÿ�:\n");
	scanf("%d", &n);
	

	switch (n) {
	case 1:
		printf("\n\n%d�� �θ����ڴ� I�Դϴ�.", n);		break;
	case 2:
		printf("\n\n%d�� �θ����ڴ� II�Դϴ�.", n);		break;
	case 3:
		printf("\n\n%d�� �θ����ڴ� III�Դϴ�.", n);		break;
	case 4:
		printf("\n\n%d�� �θ����ڴ� IV�Դϴ�.", n);		break;
	case 5:
		printf("\n\n%d�� �θ����ڴ� V�Դϴ�.", n);		break;
	case 6:
		printf("\n\n%d�� �θ����ڴ� VI�Դϴ�.", n);		break;
	case 7:
		printf("\n\n%d�� �θ����ڴ� VII�Դϴ�.", n);		break;
	case 8:
		printf("\n\n%d�� �θ����ڴ� VIII�Դϴ�.", n);		break;
	case 9:
		printf("\n\n%d�� �θ����ڴ� IX�Դϴ�.", n);		break;
	case 10:
		printf("\n\n%d�� �θ����ڴ� X�Դϴ�.", n);		break;
	}
	return 0;
}