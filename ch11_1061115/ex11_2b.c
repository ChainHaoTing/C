#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isalpha isdigit 測試字元是否為數字或英文字母*/
void ex11_2b()
{
	char ch;
	printf("請輸入一個字元:");
	ch = getche();
	if (isalpha(ch)) {
		printf("\n%c為英文字母\n", ch);
	}
	else if (isdigit(ch))
		printf("\n%c 為數字\n", ch);
	else
		printf("\n%c 不是一英文字母或數字\n", ch);
}