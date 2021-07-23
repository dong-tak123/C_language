#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//프로젝트 속성에서 디버깅에 명령인수에 소스파일 이름을 넣음..
//이걸 안하면 그냥 오류가 떠버림.. if (argc != 2)에서 오류가 남.. 명령행 인자가 전달이 안됨..
//cmd에서 하려면 type 이라는 명령어를 가지고 한다..

int main(int argc, char* argv[])	//명령행 인자를 main함수에 전달해줌..
{
	FILE* f;
	if (argc != 2) {
		printf("Usage: list filename\n");
		exit(1);
	}

	f = fopen(argv[1], "r");		//argc는 인자의 갯수고 argv[1]부터 파일이름이다..
	if (!f)	//if (f == 0)
	{
		printf("File Open Error.\n");
		exit(1);
	}
	
	int ch, cnt = 0;
	printf("%4d: ", ++cnt);		//라인 번호 출력
	while ((ch = fgetc(f)) != EOF) {	//한 문자씩 입력받는데 EOF가 아닐때 까지 파일에서 입력받는다..
		putchar(ch);		//표준 출력..
		
		if (ch == '\r' || ch == 0x0D)
			printf("\\r");
		if (ch == '\n')
			printf("%4d: ", ++cnt);		//줄바꿈이 일어났을때..
	}
	printf("\n");
	fclose(f);

	return 0;
}