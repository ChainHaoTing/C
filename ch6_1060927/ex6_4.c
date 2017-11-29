#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void printstar(int n)
{
	for (int i = 0; i < n; i++)
		printf("*");
	printf("\n");
}

void ex6_4()
{
	int num;
	printf("你要多少星星:");
	scanf("%d", &num);
	printstar(num);

}