#include"c.h"
#include<stdio.h>
#include<stdlib.h>

/* 選擇輸出使用getche( ) */
void ex11_1d()
{
	char option;
	do
	{
		printf("\n");
		printf("1) iPod nano\n");
		printf("2) iPhone\n");
		printf("3) iMac\n");
		printf("請選擇你要的商品(1~3)或 q結束:");
		option = getche();/* 使用getche( )來接收選項 */

		switch (option)
		{
		case '1':printf("\n<<<您選擇的商品是 iPodnano>>>\n");break;
		case '2':printf("\n<<<您選擇的商品是 iPhone>>>\n"); break;
		case '3':printf("\n<<<您選擇的商品是 iMac>>>\n"); break;
		case 'q':printf("\n"); break;
		default:printf("\n沒有這樣商品,請重新輸入!!\n"); break;
		}
	} while (option != 'q');
}