#include<stdio.h>
#include<stdlib.h>

int hw2_1(void)
{
	int i, j;

	printf("�п�J�@�Ӿ��\n");
	scanf("%d", &i);

	j = i % 2;

	if (j == 1)
		printf("�A��J���O�_��\n");
	else if (j == 0)
		printf("�A��J���O����\n");
	else
		printf("input error\n");

}