#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

double squAdd6_5practice(double a,double b,double c)
{
	//double ans;
	//ans = a*a*a + b*b*b + c*c*c;
	return (a*a*a + b*b*b + c*c*c);
}

void printstar6_5practice(int n)
{
	for (int i = 1; i <= n; i++)
		printf("*");
	printf("\n");
}

void ex6_5practice()
{
	int n;
	double num1, num2, num3,sum;
	printf("計算三浮點數的立方和\n\n");
	printf("請輸入三浮點數:");
	scanf("%lf %lf %lf", &num1, &num2,&num3);
	sum = squAdd6_5practice(num1, num2,num3);      //丟入n個值到函式

	printf("請問需要幾顆星星:");
	scanf("%d", &n);
	printstar6_5practice(n);
	printf("%lf的立方加 %lf 的立方加 %lf 的立方= %.3lf\n", num1, num2,num3, sum);
	printstar6_5practice(n);
}