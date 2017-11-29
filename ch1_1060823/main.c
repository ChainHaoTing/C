#include<stdio.h>
#include<stdlib.h>
#include"c.h"
#include"stdafx.h"

void ex1_1();
void ex1_2();
void ex1_3();


int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.溢位\n");
		printf("2.控制輸出欄位的寬度\n");
		printf("3.輸入函數scanf()\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~3, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:ex1_1();break;
		case 2:ex1_2();break;
		case 3:ex1_3();break;
		case 0:flag = 0;break;

		default:break;
		}

		system("pause");
		system("cls");

	}


}