#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex8_3()
{
	int i;
	char str[4][20] = { "Department","of","Information","Management" };
	for (i = 0; i < 4; i++)
	{
		printf("  str+%d  = %p\n", i, str+i);
		printf("*(str+%d) = %p\n", i, *(str+i));
		printf("  str[%d] = %p\n\n", i, str[i]);
	}
}
/*
 *指標與[]陣列的關係
 *
 *由一維陣列得: * == []
 *由二微陣列得: str+1 = str[1] = *(str+1)
*/