#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int square6_2();          /* square( )���쫬�ŧi */

int ex6_2()
{
	int ans;
	printf("�p��Y�@��ƪ�����\n\n");
	ans = square6_2();    /* ��ans����square()���Ǧ^�� */
	printf("��������O %d\n", ans);
	//system("PAUSE");
	//return 0;
}
/* �w�qsquare()�A��ƫ��A��int */
/* �n�D��J�@�ơA�ñN���ƥ����Ǧ^ */
int square6_2()
{
	int num, total;
	printf("�п�J�@���: ");
	scanf("%d", &num);
	total = num*num;
	return total;       /* �Ntotal�Ǧ^�I�s��� */
}