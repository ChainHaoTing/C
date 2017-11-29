#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int n, n_2, sum = 0, sum_2 = 0;

int factorial6_4(int F0,int F1)
{
	n--;
	if (n > 1) {
		sum = F0 + F1;
		printf(" %d,", sum);          //印出費氏數列

		return (factorial6_4(F1, sum));
	}
	else {
		return sum;    //回傳最後的值
	}
}


int NOfactorial6_4(int F0, int F1)
{
	for (int i = 0; i < n_2-2; i++)
	{
		sum_2 = F0 + F1;
		F0 = F1;
		F1 = sum_2;
		printf(" %d,", sum_2);
	}
	return sum_2;
}


void hw6_4()
{
	int F0, F1;
	printf("\n請輸入起始的兩位數 F0: F1:\n");
	scanf("%d %d", &F0, &F1);
	printf("請輸入求到第幾位:\n");
	scanf("%d", &n);

	if (n == 1) printf("%d\n", F0);
	else if (n == 2) printf("%d\n", F1);

	else {
		n_2 = n;
		printf("遞迴:");
		printf("\n    費氏數列為: %d, %d,",F0,F1);
		printf("\n    遞迴運算的值為:%d\n\n", factorial6_4(F0, F1));

		printf("非遞迴:");
		printf("\n    費氏數列為: %d, %d,", F0, F1);
		printf("\n    非遞迴運算的值為:%d\n", NOfactorial6_4(F0, F1));
	}
}
