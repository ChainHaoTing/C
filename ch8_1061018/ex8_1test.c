#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex8_1test()
{
	double d;
	double *p = &d;
	double **pp = &p;  // ��:double **pp = p;
	printf("�п�J�@double ��: ");
	scanf("%lf", &d);  // ��:scanf("%f", d);
	printf("a=%.2lf, *p=%.2lf, and **pp=%.2lf\n", d, *p, **pp); // ��:printf("a=%d, *p=%d, and **pp=%d\n", d, *p, **pp);
}