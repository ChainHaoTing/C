#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isupper() islower() ���զr���O�_���Ʀr�έ^��r��*/
void ex11_2c()
{
	char ch;
	printf("�п�J�@�Ӧr��:");
	ch = getche();
	if (isupper(ch)) {
		printf("\n%c���j�g�r��\n", ch);
	}
	else if (islower(ch))
		printf("\n%c ���p�g�r��\n", ch);
	else
		printf("\n%c ���O�@�^��r��\n", ch);
}