#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isalnum ���զr���O�_���Ʀr�έ^��r��*/
void ex11_2d()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = getche();
	printf("\n���j�g�r����:%c\n", toupper(ch));
	printf("\n���p�g�r����:%c\n", tolower(ch));
}