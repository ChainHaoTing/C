#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void hw2_1();
void hw2_2();
void hw2_3();
void hw2_4();
void hw2_5();
void hw2_6();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.奇偶判別\n");
		printf("2.攝氏換算華氏\n");
		printf("3.鍵盤輸入氣溫\n");
		printf("4.珍珠奶茶與烏龍拿鐵購買總數超過15瓶, 並且總額達(含) 800元, 售價享有9折優惠：\n");
		printf("5.珍珠奶茶與烏龍拿鐵購買總數超過12瓶, 或是總額達(含) 700元, 或是珍珠奶茶購買達(含)10瓶, 售價享有95折優惠：\n");
		printf("6.For 迴圈印出星號\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~6, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:hw2_1();break;
		case 2:hw2_2();break;
		case 3:hw2_3();break;
		case 4:hw2_4();break;
		case 5:hw2_5();break;
		case 6:hw2_6();break;
		case 0:flag = 0;break;

		default:break;
		}

		system("pause");
		system("cls");

	}

}