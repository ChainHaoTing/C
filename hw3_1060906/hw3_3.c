#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void hw3_3(void)
{
	int i, j;

	printf("請輸入1~4之間的數..");
	scanf("%d", &i);

	switch (i)
	{
	case 1: printf("1.春天\n"); break;
	case 2: printf("2.夏天\n"); break;
	case 3: printf("3.秋天\n"); break;
	case 4: printf("4.冬天\n"); break;
	default:printf("輸入錯誤!!\n"); break;
	}

}