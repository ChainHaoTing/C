#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void ex10_4a();
void ex10_4b();
void ex10_4c();
void ex10_4d();


int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.鏈結串列 malloc()      ex10_4a\n");
		printf("2.鏈結串列_自我參考結構指標      ex10_4b\n");
		printf("3.ex9_3b 修改成以鏈結串列的方式存放資料   ex10_4c\n");
		printf("4.ex10_4c 增加 del() 功能  ex10_4d\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:ex10_4a(); break;
		case 2:ex10_4b(); break;
		case 3:ex10_4c(); break;
		case 4:ex10_4d(); break;
		case 0:flag = 0; break;

		default:break;
		}
		system("pause");
		system("cls");
	}
}