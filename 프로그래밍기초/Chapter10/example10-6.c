#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main()
{
	//long seconds = (long)time(NULL);
	//srand(seconds);
	srand(time(NULL));

	printf("1~%3d 사이의 난수 5개:\n", MAX);

	for (int i = 0; i < 5; i++)
		printf("%5d", rand() % MAX + 1);
	puts("");

	return 0;
}