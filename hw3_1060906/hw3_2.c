#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void hw3_2(void)
{
	int i, j, sum = 0;

	do
	{
		printf("請輸入一正偶數");
		scanf("%d", &i);
		if (i % 2 == 1)printf("輸入錯誤!!\n");
	} while (i % 2 == 1);

	for (j = 2; j <= i; j += 2)
	{
		sum += j;
	}
	printf("2+4+6+...+n=%d\n", sum);


	//system("plause");
	//system("cls");
}