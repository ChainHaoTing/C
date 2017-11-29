#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

/*¿ù»~ª©*/

void ex7_7()
{
	int a = 5, b = 20;
	printf("Before swap...\n");
	printf("a=%d,b=%d\n", a, b);
	printf("------------------------\n");
	printf("%p\n", &a);
	printf("%p\n", &b);

	swap7_7(a, b);
	printf("------------------------\n");
	printf("After swap...\n");
	printf("a=%d,b=%d\n", a, b);
}

int swap7_7(int x, int y) /* ©w¸qswap()¨ç¼Æ */
{
	printf("%p\n", &x);
	printf("%p\n", &y);

	int temp = x;
	x = y;
	y = temp;
}