#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>

void ex11_2_practice2()
{
	char ch;
	printf("�п�J�@�Ӥj�g�r��:");
	ch = getche();
	if ((ch >= 'A') && (ch <= 'Z')) {    //if (isupper(ch))
		printf("\n�A��J���O %c���^��j�g�r��\n", ch);
		ch += 32;
		printf("��p�g��:%c\n", ch);
	}
	else if (islower(ch)) {
		printf("\n%c�w�g���p�g�r��\n", ch);
	}
	else
		printf("\n��J�����O�^��r��!!!\n");
}