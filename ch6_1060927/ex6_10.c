#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int factorial6_10(int n)
{
	int k, total = 1;
	for (k = 1; k <= n; k++)
		total *= k;
	return total;
}

void ex6_10()
{
	int num;
	printf("請輸入一個數:");
	scanf("%d", &num);
	printf("Factorial(%d)=%d\n", num, factorial6_10(num));
}