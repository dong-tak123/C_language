#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* src_file, * dst_file;
	char srcname[100] = { 0 };
	char dstname[100] = { 0 };
	char buffer[1024];	//버퍼크기 1024
	int rd_count;
	int total_byte = 0;

	printf("이미지 파일 이름을 입력하세요: ");
	scanf("%s", srcname);

	printf("저장할 파일 이름을 입력하세요: ");
	scanf("%s", dstname);

	src_file = fopen(srcname, "rb");		//읽기전용으로 열고
	dst_file = fopen(dstname, "wb");		//쓰기전용으로 열었다
	
	if (src_file == NULL || dst_file == NULL) {		//둘중에 하나라도 파일이 안열리면 오류..
		fprintf(stderr, "File open error \n");
		exit(1);
	}

	while ((rd_count = fread(buffer, 1, sizeof(buffer), src_file)) > 0)	
		//src_file에서 1*sizeof(buffer)만큼의 바이트를 읽어와서 buffer에 저장하는데, 그 실제 읽어온 바이트수를 rd_count에 저장하겠다..
		//while문이 반복될 때마다 한 버퍼 만큼 읽어온다..
	{
		total_byte += rd_count;		//전체 바이트를 저장하기위해..
		int wr_count = fwrite(buffer, 1, rd_count, dst_file);	//wr_count는 실제 파일에 쓴 바이트수를 저장하는 변수..
		// 여기서는 1*rd_count만큼의 바이트를 buffer에서 dst_file 로 복사했다

		if (wr_count < 0)		//쓴 바이트가 음수라면 뭔가 쓰다가 잘못된거다..
		{
			fprintf(stderr, "File write error\n");
			exit(1);
		}

		//읽은거랑 쓴거랑 같아야 정상이다..
		printf("rd_cound = %d, wr_count = %d\n", rd_count, wr_count);

		//쓴게 읽어온거 보다 적다면, 이것도 뭔가 문제다..
		if (wr_count < rd_count)
		{
			fprintf(stderr, "미디어 쓰기 오류\n");
			exit(1);
		}
	}

	//이 반복문이 끝나면 다 복사된 것이고, 마지막 buffer의 값은 꼭 buffer(1024)를 다 채울 필요 없다..
	printf("파일 복사 완료 (%s to %s) File size = %d Bytes\n", srcname, dstname, total_byte);
	fclose(src_file);
	fclose(dst_file);
	return 0;
}