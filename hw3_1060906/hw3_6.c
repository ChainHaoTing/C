#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void hw3_6(void)
{
	int i, j, k;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
}