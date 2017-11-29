#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int square6_2();          /* square( )的原型宣告 */

int ex6_2()
{
	int ans;
	printf("計算某一整數的平方\n\n");
	ans = square6_2();    /* 用ans接收square()的傳回值 */
	printf("它的平方是 %d\n", ans);
	//system("PAUSE");
	//return 0;
}
/* 定義square()，函數型態為int */
/* 要求輸入一數，並將此數平方後傳回 */
int square6_2()
{
	int num, total;
	printf("請輸入一整數: ");
	scanf("%d", &num);
	total = num*num;
	return total;       /* 將total傳回呼叫函數 */
}