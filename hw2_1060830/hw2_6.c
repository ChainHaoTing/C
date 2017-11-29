#include<stdio.h>
#include<stdlib.h>

int hw2_6(void)
{
	int i, j, k, s;  //i=行數 jk=* s空格
	printf("請輸入星星的行數?");
	scanf("%d", &i);

	printf("\n圖一\n");
	for (j = 1; j <= i; j++)
	{
		for (k = 1; k <= j; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n圖二\n");
	for (j = i; j >0; j--)
	{
		for (k = j; k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n圖三\n");
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

	printf("\n圖四\n");
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

	printf("\n圖五\n");
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