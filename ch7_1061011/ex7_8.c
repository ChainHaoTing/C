#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void swap7_8(int *x, int *y);

void ex7_8()
{
	int a = 5, b = 20;
	printf("Before swap...\n");
	printf("a=%d,b=%d\n", a, b);
	printf("&a=%p\n", &a);
	printf("&b=%p\n", &b);
	swap7_8(&a, &b);
	printf("----------------------------------\n");
	printf("After swap...\n");
	printf("a=%d,b=%d\n", a, b);
	printf("&a=%p\n", &a);
	printf("&b=%p\n", &b);
}

void swap7_8(int *x, int *y) /* ©w¸qswap()¨ç¼Æ */
{
	int temp = *x;
	*x = *y;
	*y = temp;
}