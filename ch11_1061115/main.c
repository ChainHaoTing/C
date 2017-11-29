#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void ex11_1a();
void ex11_1b();
void ex11_1c();
void ex11_1d();
void ex11_1d_practice();
void ex11_2a();
void ex11_2b();
void ex11_2c();
void ex11_2d();
void ex11_2_practice1();
void ex11_2_practice2();
void ex11_2_homework();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.字元輸出入 printf及scanf Buffer 問題    ex11_1a\n");
		printf("2.方法1 用getchar 處理                    ex11_1b\n");
		printf("3.getch(), getche(), getchar(), putchar() ex11_1c\n");
		printf("4.getche() 應用                           ex11_1d\n");
		printf("5.ex11_1d getche() 改 getchar()           ex11_1d_practice\n");
		printf("6.isalnum()測試                           ex11_2a\n");
		printf("7.isalpha() isdigit()測試                 ex11_2b\n");
		printf("8.isupper() islower()測試                 ex11_2c\n");
		printf("9.toupper() tolower()測試                 ex11_2d\n");
		printf("10.模擬toupper()功能                      ex11_2_practice1()\n");
		printf("11.模擬tolower()功能                      ex11_2_practice2()\n");
		printf("12.ex11_2_homework()\n");


		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		rewind(stdin); //清空暫存
		//while (getchar() != '\n');
		switch (input)
		{
		case 1:ex11_1a(); break;
		case 2:ex11_1b(); break;
		case 3:ex11_1c(); break;
		case 4:ex11_1d(); break;
		case 5:ex11_1d_practice(); break;
		case 6:ex11_2a(); break;
		case 7:ex11_2b(); break;
		case 8:ex11_2c(); break;
		case 9:ex11_2d(); break;
		case 10:ex11_2_practice1(); break;
		case 11:ex11_2_practice2(); break;
		case 12:ex11_2_homework(); break;
		case 0:flag = 0; break;

		default:break;
		}
		system("pause");
		system("cls");
	}
}