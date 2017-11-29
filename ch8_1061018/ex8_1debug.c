#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex8_1debug()
{
	int a = 100;
	int *p = &a;   // 原:int  *p = a;  必須為位址
	int **pp = &p; // 原:int **p = p;  必須為位址
	printf("a=%d, *p=%d, and **pp=%d\n", a, *p, **pp);
}