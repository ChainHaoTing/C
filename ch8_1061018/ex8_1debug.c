#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex8_1debug()
{
	int a = 100;
	int *p = &a;   // ��:int  *p = a;  ��������}
	int **pp = &p; // ��:int **p = p;  ��������}
	printf("a=%d, *p=%d, and **pp=%d\n", a, *p, **pp);
}