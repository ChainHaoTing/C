#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>

void ex11_2_practice2()
{
	char ch;
	printf("請輸入一個大寫字母:");
	ch = getche();
	if ((ch >= 'A') && (ch <= 'Z')) {    //if (isupper(ch))
		printf("\n你輸入的是 %c為英文大寫字母\n", ch);
		ch += 32;
		printf("轉小寫為:%c\n", ch);
	}
	else if (islower(ch)) {
		printf("\n%c已經為小寫字母\n", ch);
	}
	else
		printf("\n輸入的不是英文字母!!!\n");
}