#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>

void ex11_2_practice1()
{
	char ch;
	printf("�п�J�@�Ӥp�g�r��:");
	ch = getche();
	if(islower(ch)) {    // if ((ch >= 'a') && (ch <= 'z'))
		printf("\n�A��J���O %c���^��p�g�r��\n", ch);
		ch -= 32;
		printf("��j�g��:%c\n", ch);
	}
	else if (isupper(ch)) {
		printf("\n%c�w�g���j�g�r��\n", ch);
	}
	else
		printf("\n��J�����O�^��r��!!!\n");
}