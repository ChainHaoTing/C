#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void ex3_1();
void ex3_2();

int main()
{
	int input;
	_Bool flag = 1;


	while (flag)
	{
		printf("1.巢狀迴圈印出幾何圖形\n");
		printf("2.巢狀迴圈反印數字\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~2, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:ex3_1();break;
		case 2:ex3_2();break;
		case 0:flag = 0;break;

		default:break;
		}

		system("pause");
		system("cls");
	}
}