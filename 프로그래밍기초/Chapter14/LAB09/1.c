#include <stdio.h>

void print_array(int* arr, int SIZE) {
	for (int i = 0; i < SIZE; i++)
		printf("%4d", arr[i]);
	printf("\n");
}

void arraymergy_2(int* a, int lena, int* b, int lenb, int* c) {

	int i = 0, j = 0, k = 0;
	while (i < lena && j < lenb) {		//���̰� ª���� ���� �� ����..
		if (a[i] <= b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
	}
	while (i < lena) {		//a�� ��������,,
		c[k++] = a[i++];
	}
	while (j < lenb) {		//b�� ��������,,
		c[k++] = b[j++];
	}
}

void arraymerge(int* a, int an, int* b, int bn, int* c) {
	
	int i = 0, j = 0, k = 0;
	while (1)
	{
		if (a[i] > b[j])
		{
			c[k] = b[j];
			j++;
		}
		else
		{
			c[k] = a[i];
			i++;
		}
		k++;
		if ((i >= an) || (j >= bn))
			break;
	}
	if (i >= an)
	{
		//�ʱ�ȭ ���� ��� �ǳ�..? -> �ȴ�!
		for (; j < bn; j++)
		{
			c[k] = b[j];
			k++;
		}
	}
	else if (j >= bn)
	{
		for (; i < an; i++)
		{
			c[k] = a[i];
			k++;
		}
	}	
}

int main(void)
{
	int c[20] = { 0 };
	int a[] = { 1,2,5,7,9,14,17 };
	int b[] = { 2,3,6,8,14,15 };

	int a_size = 7, b_size = 6;

	print_array(a, a_size);
	print_array(b, b_size);

	arraymerge(a, a_size, b, b_size, c);

	print_array(c, a_size + b_size);
}