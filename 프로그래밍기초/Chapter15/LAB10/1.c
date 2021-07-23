#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define width 10
#define height 10

//���� �Լ����� ������ ��� ���Ͽ����� �߰����ִ°� �߿�!
void original_image(int arr[][10], int HEIGHT, int WIDTH) {
	FILE* fp;
	fp = fopen("image_out.txt", "a");
	if (fp == NULL) {
		printf("������ ������ �ʽ��ϴ�!\n");
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
		printf("������ ������ �ʽ��ϴ�!\n");
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
		printf("������ ������ �ʽ��ϴ�!\n");
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
		printf("������ ������ �ʽ��ϴ�!\n");
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

//������ �迭�� �ϳ� �� �����ؼ�.. �Ѵ� �Լ��� ������ �����ϴ� ���·�..

int main(void)
{
	int image[height][width];	//num4.txt�� ������ �迭
	char fname[] = "num4.txt";
	char line[30] = { 0 };
	FILE* fp;
	
	fp = fopen(fname, "r");
	if (fp == NULL) {
		printf("������ ������ �ʽ��ϴ�!\n");
		exit(1);
	}
	
	for (int y = 0; y < width; y++) {
		fscanf(fp, "%d %d %d %d %d %d %d %d %d %d", &image[y][0], &image[y][1], &image[y][2], &image[y][3], &image[y][4],
			&image[y][5], &image[y][6], &image[y][7], &image[y][8], &image[y][9]);
		/*
		fgets(line, sizeof(line), fp);		//line�� fp���� ���پ� �ִ� line�� ũ�⸸ŭ �޾ƿ���..
		sscanf(line, "%d %d %d %d %d %d %d %d %d %d", &image[y][0], &image[y][1], &image[y][2], &image[y][3], &image[y][4],
			&image[y][5], &image[y][6], &image[y][7], &image[y][8], &image[y][9]);
		*/
		//������ �������� ���� image�� ä����.. �̰� ������ ������ �� �޾ƿ��°Ŵ�..
		//num4.txt�� ������ �־��� ������ �̷��� �޾ƿ;��Ѵ�..
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
