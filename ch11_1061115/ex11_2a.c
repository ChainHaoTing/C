#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isalnum ���զr���O�_���Ʀr�έ^��r��*/
void ex11_2a()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = getche();
	if (isalnum(ch)) {
		printf("\n%c�O�@�^��r���μƦr\n", ch);
	}
	else
		printf("\n%c���O�@�^��r���μƦr\n", ch);
}