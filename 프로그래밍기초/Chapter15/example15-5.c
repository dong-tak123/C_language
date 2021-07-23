#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//������Ʈ �Ӽ����� ����뿡 ����μ��� �ҽ����� �̸��� ����..
//�̰� ���ϸ� �׳� ������ ������.. if (argc != 2)���� ������ ��.. ����� ���ڰ� ������ �ȵ�..
//cmd���� �Ϸ��� type �̶�� ��ɾ ������ �Ѵ�..

int main(int argc, char* argv[])	//����� ���ڸ� main�Լ��� ��������..
{
	FILE* f;
	if (argc != 2) {
		printf("Usage: list filename\n");
		exit(1);
	}

	f = fopen(argv[1], "r");		//argc�� ������ ������ argv[1]���� �����̸��̴�..
	if (!f)	//if (f == 0)
	{
		printf("File Open Error.\n");
		exit(1);
	}
	
	int ch, cnt = 0;
	printf("%4d: ", ++cnt);		//���� ��ȣ ���
	while ((ch = fgetc(f)) != EOF) {	//�� ���ھ� �Է¹޴µ� EOF�� �ƴҶ� ���� ���Ͽ��� �Է¹޴´�..
		putchar(ch);		//ǥ�� ���..
		
		if (ch == '\r' || ch == 0x0D)
			printf("\\r");
		if (ch == '\n')
			printf("%4d: ", ++cnt);		//�ٹٲ��� �Ͼ����..
	}
	printf("\n");
	fclose(f);

	return 0;
}