#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex7_10()
{
	int  a[] = { 32,16,35,65,52 };
	printf("a=%p\n", a);
	printf("&a=%p\n", &a);

	/*for (int i = 0; i < 5; i++)
		printf("&a[%d]=%p\n", i, &a[i]);
		*/

	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		printf("&a[%d]=%p\n", i, &a[i]);

	printf("sizeof=%d\n", sizeof(a)/sizeof(int));
}