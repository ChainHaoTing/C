#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex7_11()
{
	int a[3] = { 5,7,9 };
	printf("a[0]=%d, *(a+0)=%d\n", a[0], *(a + 0));
	printf("a[1]=%d, *(a+1)=%d\n", a[1], *(a + 1));
	printf("a[2]=%d, *(a+2)=%d\n", a[2], *(a + 2));
}