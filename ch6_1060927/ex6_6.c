#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int num;

void output6_6()
{
	printf("�Ʀr:%d\n", num);
}

void ex6_6()
{
	printf("�п�J�@�Ʀr:\n");
	scanf("%d", &num);
	output6_6();
}