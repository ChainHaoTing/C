#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

void ex5_1();
void ex5_2();
void ex5_3();
void ex5_4();
void ex_debug();
void ex_practice();
void ex_practice_1();
void ex_practice_2();

void ex5_5();
void ex5_6();
void ex5_7();
void ex5_7practice();

void main(void)
{
	int input;
	_Bool flag=1;

	while (flag)
	{
		printf("1.二維陣列元素的存取\n");
		printf("2.二維陣列應用(考試成績)\n");
		printf("3.二維陣列的預設值_1\n");
		printf("4.二維陣列的預設值_2\n");
		printf("5.二維 debug 練習 \n");
		printf("6.二維 課中練習(身高紀錄)\n");
		printf("7.二維 課中練習_1(身高紀錄)\n");
		printf("8.二維 課中練習_2(身高體重紀錄)\n");

		printf("9.三維陣列 尋找最大與最小值\n");
		printf("10.氣泡排序 陣列 數值大小排序\n");
		printf("11.二分收尋法\n");
		printf("12.二分收尋法(練習)\n");

		printf("\n----------------------------------\n\n");
		printf("請輸入要執行的作業? 1~9 , 按'0' 則結束執行!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:ex5_1();break;
		case 2:ex5_2();break;
		case 3:ex5_3();break;
		case 4:ex5_4();break;
		case 5:ex_debug();break;
		case 6:ex_practice();break;
		case 7:ex_practice_1();break;
		case 8:ex_practice_2();break;
		case 9:ex5_5();break;
		case 10:ex5_6();break;
		case 11:ex5_7();break;
		case 12:ex5_7practice();break;
		case 0:flag = 0;break;

		default:break;
		}
		system("pause");
		system("cls");
	}	
}