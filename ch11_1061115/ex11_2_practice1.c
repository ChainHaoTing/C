#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>

void ex11_2_practice1()
{
	char ch;
	printf("請輸入一個小寫字母:");
	ch = getche();
	if(islower(ch)) {    // if ((ch >= 'a') && (ch <= 'z'))
		printf("\n你輸入的是 %c為英文小寫字母\n", ch);
		ch -= 32;
		printf("轉大寫為:%c\n", ch);
	}
	else if (isupper(ch)) {
		printf("\n%c已經為大寫字母\n", ch);
	}
	else
		printf("\n輸入的不是英文字母!!!\n");
}