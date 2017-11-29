#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

float math()
{
	float length, width;
	scanf("%f %f", &length, &width);
	return (length*width);
}

void ex6_2practice()
{

	printf("面積計算器\n");
	printf("請輸入長寬");
	printf("面積為:%.2f\n", math());
}
