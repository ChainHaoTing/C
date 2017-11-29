#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void hw1_1();
void hw1_2();
void hw1_3();
void hw1_4();

void main(void)
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.Hello C!!\n");
		printf("2.顯示 banana\n");
		printf("3.1+3+5+...+99=\n");
		printf("4.1^2+2^2+3^2+...+10^2=\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~6, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:hw1_1();break;
		case 2:hw1_2();break;
		case 3:hw1_3();break;
		case 4:hw1_4();break;
		case 0:flag = 0;break;

		default:break;
		}

		system("pause");
		system("cls");

	}
}