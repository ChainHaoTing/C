#include"c.h"
#include"stdafx.h"
#include<stdio.h>
#include<stdlib.h>

void ex8_1();		//排序key_1
void ex8_1debug();	//排序key_2
void ex8_1test();	//排序key_3
void ex8_1practice();//排序key_4
void ex8_2();		//排序key_5
void ex8_3();		//排序key_6
void ex8_4();
void ex8_5();
void ex8_6();
void ex8_7();
void ex8_8();
void ex8_9();
void ex8_10();
void ex8_11();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.雙重指標\n");
		printf("2.雙重指標debug\n");
		printf("3.雙重指標test\n");
		printf("4.雙重指標practice(型態改char)\n");
		printf("5.三重指標\n");
		printf("6.指標陣列與二維陣列\n");
		printf("7.\n");
		printf("8.\n");
		printf("9.\n");
		printf("10.\n");
		printf("11.\n");
		
		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:ex8_1();break;
		case 2:ex8_1debug();break;
		case 3:ex8_1test();break;
		case 4:ex8_1practice();break;
		case 5:ex8_2();break;
		case 6:ex8_3();break;
		case 7:ex8_4();break;
		//case 8:ex8_7();break;
		//case 9:ex8_8();break;
		//case 10:ex8_9();break;
		//case 11:ex8_10(); break;
		//case 12:ex8_11();break;
		case 0:flag = 0;break;
			
		default:break;
		}
		system("pause");
		system("cls");
	}
}