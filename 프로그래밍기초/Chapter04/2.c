//2017117112 이동현
#include <stdio.h>

void calander(void)
{
	printf("\t\t  2021년 06월  \t\t\n");
	printf("일\t월\t화\t수\t목\t금\t토\n");
	printf("  \t  \t 1\t 2\t 3\t 4\t 5\n");
	printf(" 6\t 7\t 8\t 9\t10\t11\t12\n");
	printf("13\t14\t15\t16\t17\t18\t19\n");
	printf("20\t21\t22\t23\t24\t25\t26\n");
	printf("27\t28\t29\t30\t  \t  \t  \n");
}

void human(void)
{
	printf("\t  O  \t\n");
	printf("\t--|--\t\n");
	printf("\t  |  \t\n");
	printf("\t | | \t\n");
	printf("\t _ _ \t\n");
}

void main(void)
{
	calander();
	human();
}