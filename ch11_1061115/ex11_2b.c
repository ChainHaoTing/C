#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isalpha isdigit ���զr���O�_���Ʀr�έ^��r��*/
void ex11_2b()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = getche();
	if (isalpha(ch)) {
		printf("\n%c���^��r��\n", ch);
	}
	else if (isdigit(ch))
		printf("\n%c ���Ʀr\n", ch);
	else
		printf("\n%c ���O�@�^��r���μƦr\n", ch);
}