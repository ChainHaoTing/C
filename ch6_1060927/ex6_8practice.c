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
	printf("�п�Jnum����:");
	scanf("%d", &num);
	cube();
	printf("num���ߤ�=%d\n\n", num);
}
