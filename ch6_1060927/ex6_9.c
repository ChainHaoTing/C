#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int factorial6_9(int n)
{
	if (n > 1)
		return(n*factorial6_9(n - 1));
	else
		return 1;
}

void ex6_9()
{
	int num;
	printf("�п�J�@�Ӽ�:");
	scanf("%d", &num);
	printf("Factorial(%d)=%d\n", num, factorial6_9(num));
}