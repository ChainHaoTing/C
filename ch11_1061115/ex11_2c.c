#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isupper() islower() 測試字元是否為數字或英文字母*/
void ex11_2c()
{
	char ch;
	printf("請輸入一個字元:");
	ch = getche();
	if (isupper(ch)) {
		printf("\n%c為大寫字母\n", ch);
	}
	else if (islower(ch))
		printf("\n%c 為小寫字母\n", ch);
	else
		printf("\n%c 不是一英文字母\n", ch);
}