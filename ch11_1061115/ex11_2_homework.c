#include"c.h"
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <ctype.h>

char Char_convert(char);

void ex11_2_homework()
{
	char ch;
	printf("�п�J�@�Ӧr�� (�p���^��r���N�ഫ�j�p�g):");
	ch = _getche();
	printf("\n�A��J��=%c\n", ch);
	printf("�I�sChar_convert���G ch=%c\n", Char_convert(ch));
}

char Char_convert(char ch) 
{
	if (isalpha(ch))
		return ((ch > 96) ? ch - 32 : ch + 32);
	else
		return ch;
}