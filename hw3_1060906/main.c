#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void hw3_1();
void hw3_2();
void hw3_3();
void hw3_4();
void hw3_5();
void hw3_6();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.利用巢狀迴圈撰數字幾何圖形\n");
		printf("2.利用do while 迴圈，計算 2+4+6+...+n 的總和\n");
		printf("3.由鍵盤輸入數值1~4，並判斷是否在1~4 之間\n");
		printf("4.利用while 迴圈印出5~20 之間所有整數的平方值，再印出這些平方值的總和\n");
		printf("5.利用while 迴圈找出最小的 n值，使得1+2+3+...+n的總和大於等於 1000\n");
		printf("6.利用巢狀for 迴圈印出九九乘法表\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~6, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:hw3_1();break;
		case 2:hw3_2();break;
		case 3:hw3_3();break;
		case 4:hw3_4();break;
		case 5:hw3_5();break;
		case 6:hw3_6();break;
		case 0:flag = 0;break;

		default:break;
		}

		system("pause");
		system("cls");

	}

}

