#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int array[5]; /* 定義全域變數array陣列*/

/* 定義input( ) */
void input6_7()
{
	int index;/*定義input( )的區域變數*/
	for (index = 0; index < 5; index++)
	{
		printf("請輸入 #%d 整數: ",index + 1);
		scanf("%d", &array[index]);
		/* 使用全域變數做輸入 */
	}
}


/* 定義output( )*/
void output6_7()
{
	int index;/*定義output( )的區域變數*/
	printf("\n");
	for (index = 0; index < 5; index++)
		/* 使用全域變數做輸出 */
		printf("array[%d] is %d\n", index,array[index]);
}

void ex6_7()
{
	printf("此程式在測試全域變數\n");
	input6_7();
	output6_7();
}

