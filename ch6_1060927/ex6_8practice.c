#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int num;

void cube()
{
	num = num*num*num*num;
}

void ex6_8practice()
{
	printf("請輸入num的值:");
	scanf("%d", &num);
	cube();
	printf("num的立方=%d\n\n", num);
}
