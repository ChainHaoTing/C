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
	printf("�p����ƪ�����M\n\n");
	printf("�п�J����:");
	scanf("%d %d", &num1, &num2);
	sum = squAdd(num1, num2);      //��Jn�ӭȨ�禡
	printstar6_5();
	printf("%d ������[ %d ������= %d\n",num1, num2, sum);
	printstar6_5();
}