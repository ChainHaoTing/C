#include "c.h"
#include <stdio.h>
#include <stdlib.h>

void output(char); /* ���output( )���쫬�ŧi */
void ex11_1c()
{
	/* ���զr������X�J��� */
	char ch;
	printf("\n\n�K�ϥ� getch()...\n");
	printf("�п�J�@�r��: ");
	ch = getch();		/* �ϥ�getch( )��J, ��J�r������ܩ�ù�*/
	output(ch);

	printf("\n\n�K�ϥ� getche()...\n");
	printf("�п�J�@�r��: ");
	ch = getche();		/*�ϥ�getche( )��J, ��J�r���|��ܩ�ù��W*/
	output(ch);

	printf("\n\n�K�ϥ� getchar()...\n");
	printf("�п�J�@�r��: ");
	ch = getchar();		/*�ϥ�getchar( )��J, ����J�uEnter�v��ܿ�J����*/
	output(ch);
	printf("\n");
}
void output(char c) {	/* �w�qoutput( )��ơA�ǻ��ѼƥHc���� */
	printf("\n�ϥ� putchar()��X�r��: ");
	putchar(c);		/* �ϥ�putchar( )��X�r�� */
}