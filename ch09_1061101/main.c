#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void ex9_1a();
void ex9_1b();
void ex9_1b_practice();
void ex9_1c();
void ex9_1c_practice();
void ex9_2a();
void ex9_2b();
void ex9_3a();
void ex9_3b();
void ex9_3_1c_practice();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.結構變數的定義          ex9_1a\n");
		printf("2.結構變數的使用          ex9_1b\n");
		printf("3.結構變數的使用(練習)    ex9_1b_practice\n");
		printf("4.結構成員的初值設定      ex9_1c\n");
		printf("5.結構成員的初值設定(練習)ex9_1c_practice\n");
		printf("6.指向結構變數的指標      ex9_2a\n");
		printf("7.結構指標變數與函數      ex9_2b\n");
		printf("8.結構陣列                ex9_3a\n");
		printf("9.I/O結構陣列             ex9_3b\n");
		printf("10.ex9_1c 改結構陣列表示  ex9_3_1c_practice\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:ex9_1a(); break;
		case 2:ex9_1b(); break;
		case 3:ex9_1b_practice(); break;
		case 4:ex9_1c(); break;
		case 5:ex9_1c_practice(); break;
		case 6:ex9_2a(); break;
		case 7:ex9_2b(); break;
		case 8:ex9_3a(); break;
		case 9:ex9_3b(); break;
		case 10:ex9_3_1c_practice(); break;
		case 0:flag = 0; break;

		default:break;
		}
		system("pause");
		system("cls");
	}
}