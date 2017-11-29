#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void hw3_5(void)
{
	int  n = 0, sum = 0;

	while (sum<1000)
	{
		n++;
		sum += n;
		printf("%2d. %d\n", n, sum);
	}
	printf("\nn=%d\n", n);

}