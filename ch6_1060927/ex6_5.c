#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int squAdd( a, b)
{
	int ans;
	ans = a*a + b*b;
	return ans;
}

void printstar6_5()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}

void ex6_5()
{
	int num1, num2, sum;
	printf("計算兩整數的平方和\n\n");
	printf("請輸入兩整數:");
	scanf("%d %d", &num1, &num2);
	sum = squAdd(num1, num2);      //丟入n個值到函式
	printstar6_5();
	printf("%d 的平方加 %d 的平方= %d\n",num1, num2, sum);
	printstar6_5();
}