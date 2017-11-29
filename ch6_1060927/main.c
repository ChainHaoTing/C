#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

void ex6_1();
void ex6_1practice();
void ex6_1practice_2();
void ex6_2();
void ex6_2practice();
void ex6_2practice_2();
void ex6_3();
void ex6_4();
void ex6_5();
void ex6_5practice();
void ex6_6();
void ex6_7();
void ex6_8();
void ex6_8practice();
void ex6_8practice_2();
void ex6_9();
void ex6_10();

void main(void)
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.呼叫函數\n");
		printf("2.呼叫函數(練習)\n");
		printf("3.呼叫函數(練習_2)\n");
		printf("4.呼叫函數 使用return\n");
		printf("5.呼叫函數使用return (練習)\n");
		printf("6.呼叫函數使用return (練習_2 output絕對值)\n");
		printf("7.值丟入函數計算 return() \n");
		printf("8.值丟入呼叫函數 印星星\n");
		printf("9.n個值丟入函式計算\n");
		printf("10.n個值丟入函式 計算三浮點數立方和\n");
		printf("11.全域變數\n");
		printf("12.區域變數\n");
		printf("13.全域變數與區域變數 取捨\n");
		printf("14.全域變數與區域變數 (練習)\n");
		printf("15.全域變數與區域變數 (練習_2)\n");
		printf("16.遞迴函數\n");
		printf("17.同16 遞迴函數結果\n");

		printf("\n----------------------------------\n\n");
		printf("請輸入要執行的作業? 1~17 , 按'0' 則結束執行!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:ex6_1();break;
		case 2:ex6_1practice();break;
	    case 3:ex6_1practice_2();break;
		case 4:ex6_2();break;
		case 5:ex6_2practice();break;
		case 6:ex6_2practice_2();break;
		case 7:ex6_3();break;
		case 8:ex6_4();break;
		case 9:ex6_5();break;
		case 10:ex6_5practice();break;
		case 11:ex6_6();break;
		case 12:ex6_7();break;
		case 13:ex6_8();break;
		case 14:ex6_8practice();break;
		case 15:ex6_8practice_2();break;
		case 16:ex6_9();break;
		case 17:ex6_10();break;
		case 0:flag = 0;break;

		default:break;
		}
		system("pause");
		system("cls");
	}
}