#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void hw3_4(void)
{
	int i = 5, sum = 0;

	while (i <= 20)
	{
		printf("%d\n", i*i);
		sum += i*i;
		i++;
	}

	printf("\nÁ`©M=%d\n", sum);

}