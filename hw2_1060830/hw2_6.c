#include<stdio.h>
#include<stdlib.h>

int hw2_6(void)
{
	int i, j, k, s;  //i=��� jk=* s�Ů�
	printf("�п�J�P�P�����?");
	scanf("%d", &i);

	printf("\n�Ϥ@\n");
	for (j = 1; j <= i; j++)
	{
		for (k = 1; k <= j; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n�ϤG\n");
	for (j = i; j >0; j--)
	{
		for (k = j; k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n�ϤT\n");
	for (j = i; j >0; j--)
	{
		for (s = i - j; s > 0; s--)
		{
			printf(" ");
		}
		for (k = j; k > 0; k--)
		{

			printf("*");
		}
		printf("\n");
	}

	printf("\n�ϥ|\n");
	for (j = 1; j <= i; j++)
	{
		for (s = i - j; s >0; s--)
		{
			printf(" ");
		}
		for (k = 1; k <= j; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n�Ϥ�\n");
	for (j = 1; j <= i; j++)
	{
		for (s = i - j; s>0; s--)
		{
			printf(" ");
		}
		for (k = 1; k <= j * 2 - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}


}