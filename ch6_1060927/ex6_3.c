#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int square6_3(n)  //要求輸入一數，並將此數平方後傳回
{
	int total;
	total = n*n;
	return total;
}

void ex6_3()
{
	int num, ans;
	printf("計算某一整數的平方\n\n");
	printf("請輸入一整數:");
	scanf("%d", &num);
	ans = square6_3(num);      //num丟入副函式計算 square6_3(n)
	printf("%d 的平方是: %d\n", num, ans);

}