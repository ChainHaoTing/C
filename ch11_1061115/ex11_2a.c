#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isalnum 測試字元是否為數字或英文字母*/
void ex11_2a()
{
	char ch;
	printf("請輸入一個字元:");
	ch = getche();
	if (isalnum(ch)) {
		printf("\n%c是一英文字母或數字\n", ch);
	}
	else
		printf("\n%c不是一英文字母或數字\n", ch);
}