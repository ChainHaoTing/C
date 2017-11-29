#include"c.h"
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <ctype.h>

char Char_convert(char);

void ex11_2_homework()
{
	char ch;
	printf("請輸入一個字母 (如為英文字母將轉換大小寫):");
	ch = _getche();
	printf("\n你輸入為=%c\n", ch);
	printf("呼叫Char_convert結果 ch=%c\n", Char_convert(ch));
}

char Char_convert(char ch) 
{
	if (isalpha(ch))
		return ((ch > 96) ? ch - 32 : ch + 32);
	else
		return ch;
}