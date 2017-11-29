#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void ex2_1();
void ex2_2();
void ex2_3();
void ex2_4();
void ex2_5();
void ex2_6();
void ex2_7();
void ex2_8();
void ex2_9();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.跳脫序列與格式碼的應用\n");
		printf("2.餘數運算子\n");
		printf("3.遞增與遞減運算子\n");
		printf("4.邏輯運算子\n");
		printf("5.巢狀 if 敘述的練習\n");
		printf("6.if-else-if 敘述的應用\n");
		printf("7.條件運算子的範例\n");
		printf("8.switch 敘述的範例\n");
		printf("9.while迴圈的範例\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~9, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:ex2_1();break;
		case 2:ex2_2();break;
		case 3:ex2_3();break;
		case 4:ex2_4();break;
		case 5:ex2_5();break;
		case 6:ex2_6();break;
		case 7:ex2_7();break;
		case 8:ex2_8();break;
		case 9:ex2_9();break;
		case 0:flag = 0;break;

		default:break;
		}

		system("pause");
		system("cls");

	}


}