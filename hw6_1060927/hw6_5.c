#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int cout()
{
	static int num = 200;
	printf("目前呼叫第%d次\n", ++num);
}

void hw6_5()
{
	int i;
	printf("目前已被呼叫次數 200 \n\n");
	printf("需要呼叫幾次:");
	scanf("%d", &i);
	for (int j = 0; j < i; j++)
		cout();
}