#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isalnum 測試字元是否為數字或英文字母*/
void ex11_2d()
{
	char ch;
	printf("請輸入一個字元:");
	ch = getche();
	printf("\n此大寫字母為:%c\n", toupper(ch));
	printf("\n此小寫字母為:%c\n", tolower(ch));
}