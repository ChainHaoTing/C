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
	printf("�p��T�B�I�ƪ��ߤ�M\n\n");
	printf("�п�J�T�B�I��:");
	scanf("%lf %lf %lf", &num1, &num2,&num3);
	sum = squAdd6_5practice(num1, num2,num3);      //��Jn�ӭȨ�禡

	printf("�аݻݭn�X���P�P:");
	scanf("%d", &n);
	printstar6_5practice(n);
	printf("%lf���ߤ�[ %lf ���ߤ�[ %lf ���ߤ�= %.3lf\n", num1, num2,num3, sum);
	printstar6_5practice(n);
}