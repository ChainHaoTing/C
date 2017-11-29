#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void output_1()
{
	printf("我喜歡iphone 6s\n");
	printf("也喜歡Apple watch\n");
}

void dash()
{
	for (int i = 0; i < 50; i++)
		printf("-");
	printf("\n");
}

void ex6_1practice()
{
	printf("呼叫output函數!!\n");
	dash();
	output_1();
	dash();
	printf("\n呼叫結束,over!!\n");

	//system("pause");
	//return 0;
}
