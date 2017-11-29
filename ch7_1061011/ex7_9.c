#include"c.h"
#include"stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void rect(int, int, int *, int *);	//函數rect()的原型

void ex7_9(void)
{
	int a = 5, b = 8;
	int area, peri;
	rect(a, b, &area, &peri);		//呼叫rect(),計算面積及周長
	printf("面積=%d,周長=%d\n", area, peri);
}

void rect(int x, int y, int *p1, int *p2)
{
	*p1 = x*y;
	*p2 = 2 * (x + y);
}