#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void hw1_3(void)
{
	int i, sum = 0;

	for (i = 1; i<100; i = i + 2)
	{
		sum = sum + i;
	}
	printf("1+3+5+...+99=%d\n", sum);

	//system("pause");
	//return 0;
}

