#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int math_1()
{
	int i;
	scanf("%d",&i);
	//if (i < 0)i = ~(i-1);
	//return i;
	return (i > 0) ? i : -i;
}

void ex6_2practice_2()
{
	int ans;
	printf("�H����ȿ�X\n");
	printf("�п�J�ƭ�");
	//ans = math_1();
	printf("����Ȭ�:%d\n", math_1());
}
