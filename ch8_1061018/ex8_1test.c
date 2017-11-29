#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex8_1test()
{
	double d;
	double *p = &d;
	double **pp = &p;  // 原:double **pp = p;
	printf("請輸入一double 數: ");
	scanf("%lf", &d);  // 原:scanf("%f", d);
	printf("a=%.2lf, *p=%.2lf, and **pp=%.2lf\n", d, *p, **pp); // 原:printf("a=%d, *p=%d, and **pp=%d\n", d, *p, **pp);
}