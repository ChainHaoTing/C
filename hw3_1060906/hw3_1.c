#include<stdio.h>
#include<stdlib.h>
#include"c.h"


void hw3_1(void)
{
	int i, j, k;
	printf("�п�J�@����");
	scanf("%d", &i);
	for (j = 1; j <= i; j++)
	{
		for (k = 1; k <= j; k++)
		{
			printf("%d", k);
		}
		printf("\n");
	}


	//system("pause");
	//return 0;
}