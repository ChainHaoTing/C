#include"c.h"
#include<stdio.h>
#include<stdlib.h>

ex4_1(void)
{
	int n, j = 1, sum = 0;        /* 設定迴圈初值 */

	do
	{
		printf("請輸入一個n(>0):");
		scanf("%d", &n);
	} while (n<=0);        /* 當n<=0時重複輸入n的值 */

	do
	{
		sum += j;
		j++;
	} while (j<=n);        /* 當i<=n時執行累加的動作 */

	printf("1+2+...+%d=%d\n",n,sum);

}