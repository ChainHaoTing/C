#include<stdio.h>
#include<stdlib.h>

int hw2_1(void)
{
	int i, j;

	printf("請輸入一個整數\n");
	scanf("%d", &i);

	j = i % 2;

	if (j == 1)
		printf("你輸入的是奇數\n");
	else if (j == 0)
		printf("你輸入的是偶數\n");
	else
		printf("input error\n");

}