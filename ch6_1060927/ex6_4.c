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
	printf("�A�n�h�֬P�P:");
	scanf("%d", &num);
	printstar(num);

}