#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int num;

void output6_6()
{
	printf("數字:%d\n", num);
}

void ex6_6()
{
	printf("請輸入一數字:\n");
	scanf("%d", &num);
	output6_6();
}