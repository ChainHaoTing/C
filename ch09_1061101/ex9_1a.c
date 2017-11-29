#include"c.h"
#include<stdio.h>
#include<stdlib.h>


void ex9_1a(void)
{
	/* 宣告學生成績的結構型態 */
	struct student
	{
		char name[20];			/* 學生姓名 */
		int score;				/* 學生成績*/
	} rec1;	//,rec2				/* 定義結構變數rec1 */
	struct student rec2;		/* 定義結構變數rec2 */
	//struct student rec1,rec2;

	printf("rec1 結構佔 %d bytes\n", sizeof(rec1));		/* 以sizeof( )計算結構變數rec1與rec2所佔記憶體空間 */
	printf("rec2 結構佔 %d bytes\n", sizeof(rec2));
}