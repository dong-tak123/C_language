#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define width 10
#define height 10

//각각 함수에서 파일을 열어서 파일에까지 추가해주는게 중요!
void original_image(int arr[][10], int HEIGHT, int WIDTH) {
	FILE* fp;
	fp = fopen("image_out.txt", "a");
	if (fp == NULL) {
		printf("파일이 열리지 않습니다!\n");
		exit(1);
	}

	printf("[Original image]\n");
	fprintf(fp, "[Original image]\n");

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++) {
			printf("%2d", arr[i][j]);
			fprintf(fp, "%2d", arr[i][j]);
		}
		printf("\n");
		fprintf(fp, "\n");
	}
	fclose(fp);
}
void Rotate_CCW90(int arr[][10], int HEIGHT, int WIDTH) {
	FILE* fp;
	fp = fopen("image_out.txt", "a");
	if (fp == NULL) {
		printf("파일이 열리지 않습니다!\n");
		exit(1);
	}

	printf("[Ratate CCW90]\n");
	fprintf(fp, "[Rotate CCW90]\n");

	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			printf("%2d", arr[j][HEIGHT - i - 1]);
			fprintf(fp, "%2d", arr[j][HEIGHT - i - 1]);
		}
		printf("\n");
		fprintf(fp,"\n");
	}
	fclose(fp);
}
void Mirror(int arr[][10], int HEIGHT, int WIDTH) {
	FILE* fp;
	fp = fopen("image_out.txt", "a");
	if (fp == NULL) {
		printf("파일이 열리지 않습니다!\n");
		exit(1);
	}

	printf("[Mirror image]\n");
	fprintf(fp, "[Mirror image]\n");

	for (int i = 0; i < HEIGHT; i++) {
		for (int j = WIDTH-1; j >= 0 ; j--) {
			printf("%2d", arr[j][i]);
			fprintf(fp, "%2d", arr[j][i]);
		}
		printf("\n");
		fprintf(fp,"\n");
	}
	fclose(fp);
}
void Reverse(int arr[][10], int HEIGHT, int WIDTH) {
	FILE* fp;
	fp = fopen("image_out.txt", "a");
	if (fp == NULL) {
		printf("파일이 열리지 않습니다!\n");
		exit(1);
	}

	printf("[Reverse image]\n");
	fprintf(fp, "[Reverse image]\n");

	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			printf("%2d", arr[i][j] ^ 1);
			fprintf(fp,"%2d", arr[i][j] ^ 1);
		}
		printf("\n");
		fprintf(fp, "\n");
	}
	fclose(fp);
}

//변형된 배열을 하나 더 선언해서.. 둘다 함수로 보내서 대입하는 형태로..

int main(void)
{
	int image[height][width];	//num4.txt를 저장할 배열
	char fname[] = "num4.txt";
	char line[30] = { 0 };
	FILE* fp;
	
	fp = fopen(fname, "r");
	if (fp == NULL) {
		printf("파일이 열리지 않습니다!\n");
		exit(1);
	}
	
	for (int y = 0; y < width; y++) {
		fscanf(fp, "%d %d %d %d %d %d %d %d %d %d", &image[y][0], &image[y][1], &image[y][2], &image[y][3], &image[y][4],
			&image[y][5], &image[y][6], &image[y][7], &image[y][8], &image[y][9]);
		/*
		fgets(line, sizeof(line), fp);		//line에 fp에서 한줄씩 최대 line의 크기만큼 받아오자..
		sscanf(line, "%d %d %d %d %d %d %d %d %d %d", &image[y][0], &image[y][1], &image[y][2], &image[y][3], &image[y][4],
			&image[y][5], &image[y][6], &image[y][7], &image[y][8], &image[y][9]);
		*/
		//공백을 기준으로 각각 image에 채워라.. 이걸 열번을 받으면 다 받아오는거다..
		//num4.txt에 공백을 주었기 때문에 이렇게 받아와야한다..
	}
	fclose(fp);
	
	original_image(image, 10, 10);
	puts("");

	Rotate_CCW90(image, 10, 10);
	puts("");

	Mirror(image, 10, 10);
	puts("");

	Reverse(image, 10, 10);
	puts("");

}
