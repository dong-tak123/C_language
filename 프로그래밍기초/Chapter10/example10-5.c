#include <stdio.h>

void counter(int count)
{
	if (count == 0) {
		printf("Count Á¾·á\n");
		return;
	}

	counter(count - 1);
	printf("Count: %d\n", count);
}

int main() {
	counter(10);
	return 0;
}