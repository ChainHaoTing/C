#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

void max6_3(int n1,int n2, int n3)
{
	if (n3 > n2) n2 = n3;
	if (n2 > n1) n1 = n2;
	printf("程:%d\n", n1);
}

void min6_3(int n1, int n2, int n3)
{
	if (n3 < n2) n2 = n3;
	if (n2 < n1) n1 = n2;
	printf("程:%d\n", n1);
}

void hw6_3()
{
	int num1, num2, num3;
	printf("\n计い程籔程\n");
	printf("叫块计:");
	scanf("%d %d %d", &num1, &num2, &num3);
	max6_3(num1, num2, num3);
	min6_3(num1, num2, num3);
}
